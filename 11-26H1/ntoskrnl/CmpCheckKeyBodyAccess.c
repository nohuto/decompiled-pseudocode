/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x140930990
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x1408597A8 (CmpDoAccessCheckOnKCB.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140930F10 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402B3C80 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402B4CF0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x1402B6340 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     CmpTransUowIsEqual @ 0x140776F48 (CmpTransUowIsEqual.c)
 *     SepConcatenatePrivileges @ 0x140904FC0 (SepConcatenatePrivileges.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14092F570 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C58750 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmpCheckKeyBodyAccess(
        _QWORD *Object,
        __int64 a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        NTSTATUS *a5)
{
  KPROCESSOR_MODE AccessMode; // r12
  PPRIVILEGE_SET v7; // r13
  _QWORD *v8; // r14
  __int64 v9; // rsi
  struct _PRIVILEGE_SET *Pool; // r15
  int v11; // edi
  __int64 v12; // rax
  unsigned __int16 v13; // di
  PPRIVILEGE_SET v14; // rsi
  __int64 v15; // rdx
  LUID Luid; // rdi
  PVOID *Privilege; // rdx
  PVOID *v18; // r13
  __int64 v19; // rcx
  bool IsEqual; // al
  BOOLEAN v21; // si
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v23; // rdx
  struct _KTHREAD *CurrentThread; // rax
  void *v25; // r13
  struct _KTHREAD *v26; // rax
  BOOLEAN v27; // al
  PPRIVILEGE_SET v28; // r12
  ULONG PrivilegeCount; // ecx
  _DWORD *v30; // rdi
  int v31; // edx
  ACCESS_MASK v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  PERESOURCE *ClientToken; // rcx
  __int64 v36; // rdx
  __int64 v37; // r8
  PVOID *v39; // rdi
  _DWORD *v40; // rdx
  unsigned int v41; // eax
  unsigned int *p_PrivilegeCount; // r8
  PVOID *v43; // r12
  __int64 v44; // rdx
  __int64 v45; // rax
  PVOID *v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  bool v50; // cl
  bool v51; // al
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-31h] BYREF
  PVOID *Pool2; // [rsp+60h] [rbp-29h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-19h] BYREF
  PVOID *AuxData; // [rsp+78h] [rbp-11h]
  __int128 v57; // [rsp+80h] [rbp-9h]
  PPRIVILEGE_SET v58[2]; // [rsp+90h] [rbp+7h]

  AccessMode = a4;
  v7 = 0LL;
  v8 = Object;
  GrantedAccess = 0;
  Privileges = 0LL;
  v57 = 0LL;
  WORD1(v57) = -1;
  *(_OWORD *)v58 = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, a2) )
  {
    Pool = v58[1];
    v21 = 0;
    AccessStatus = -1073741444;
  }
  else
  {
    v9 = v8[1];
    Pool = 0LL;
    v11 = *(__int16 *)(v9 + 66);
    if ( v11 < 2 || (Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
    {
      LOWORD(v57) = v11;
      v58[1] = Pool;
      v12 = *(__int16 *)(v9 + 66);
      WORD1(v57) = v12;
      if ( (_WORD)v12 )
      {
        for ( i = *(_QWORD *)(v9 + 192); i; LOWORD(v12) = v12 - 1 )
        {
          v23 = *(struct _PRIVILEGE_SET **)(i + 16);
          if ( (__int16)v12 >= 2 )
          {
            *((_QWORD *)Pool + (__int16)v12 - 2) = v23;
          }
          else
          {
            v58[(__int16)v12 - 1] = v23;
            Pool = v58[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        v58[v12 - 1] = (PPRIVILEGE_SET)v9;
        Pool = v58[1];
      }
      v13 = WORD1(v57);
      AccessStatus = 0;
      if ( (SWORD1(v57) & 0x8000u) == 0 )
      {
        do
        {
          if ( v13 >= 2u )
            v14 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v13 - 2);
          else
            v14 = v58[v13 - 1];
          if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
            break;
          if ( v14[2].PrivilegeCount != -1 )
          {
            v15 = *(_QWORD *)&v14[12].PrivilegeCount;
            if ( !v15
              || a2
              && (a2 == v15
               || ((v19 = *(_QWORD *)(a2 + 56)) == 0 || (v45 = *(_QWORD *)(v15 + 56)) == 0
                 ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v15 + 88)))
                 : (IsEqual = v19 == v45),
                   IsEqual)) )
            {
              v7 = v14;
              if ( HIWORD(v14[3].Control) )
              {
                if ( BYTE1(v14[3].Control) )
                  break;
              }
            }
          }
          --v13;
        }
        while ( (v13 & 0x8000u) == 0 );
        v8 = Object;
        AccessMode = a4;
      }
      Luid = v7[4].Privilege[0].Luid;
      if ( a2 )
      {
        Privilege = (PVOID *)v7[10].Privilege;
        v18 = *(PVOID **)&v7[10].Privilege[0].Attributes;
        AuxData = Privilege;
        if ( Privilege == v18 )
          goto LABEL_82;
LABEL_68:
        v46 = v18 - 4;
        v18 = (PVOID *)v18[1];
        while ( 1 )
        {
          Pool2 = v46;
          if ( !v46 )
            break;
          v47 = v46[7];
          if ( v47 )
          {
            if ( v47 == (_QWORD *)a2
              || ((v48 = v47[7]) == 0 || (v49 = *(_QWORD *)(a2 + 56)) == 0
                ? (v51 = CmpTransUowIsEqual(v47 + 11, (const void *)(a2 + 88)),
                   Privilege = AuxData,
                   v50 = v51,
                   v46 = Pool2)
                : (PVOID *)(v50 = v48 == v49),
                  v50) )
            {
              if ( *((_DWORD *)v46 + 17) == 9 )
              {
                Luid = (LUID)v46[11];
                break;
              }
            }
          }
          if ( !v18 )
            v18 = (PVOID *)Privilege[1];
          if ( Privilege != v18 )
            goto LABEL_68;
LABEL_82:
          v46 = 0LL;
        }
      }
      CurrentThread = KeGetCurrentThread();
      v25 = (void *)(*(_QWORD *)&Luid + 32LL);
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6), 1u);
      if ( a3->SubjectSecurityContext.ClientToken )
      {
        v26 = KeGetCurrentThread();
        --v26->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a3->SubjectSecurityContext.ClientToken + 6), 1u);
      }
      v27 = SeAccessCheck(
              (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL),
              &a3->SubjectSecurityContext,
              1u,
              a3->RemainingDesiredAccess,
              a3->PreviouslyGrantedAccess,
              &Privileges,
              (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
              AccessMode,
              &GrantedAccess,
              &AccessStatus);
      v28 = Privileges;
      v21 = v27;
      if ( Privileges )
      {
        PrivilegeCount = Privileges->PrivilegeCount;
        AuxData = (PVOID *)a3->AuxData;
        v30 = *AuxData;
        v31 = *(_DWORD *)*AuxData;
        if ( v31 + PrivilegeCount > 3 )
        {
          Pool2 = (PVOID *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v39 = AuxData;
            v40 = *AuxData;
            if ( *AuxData )
            {
              if ( *v40 )
                v41 = 12 * *v40 + 8;
              else
                v41 = 8;
            }
            else
            {
              v41 = 0;
            }
            memmove(Pool2, v40, v41);
            p_PrivilegeCount = &v28->PrivilegeCount;
            v43 = Pool2;
            SepConcatenatePrivileges(Pool2, v44, p_PrivilegeCount);
            if ( a3->PrivilegesAllocated )
              ExFreePoolWithTag(*v39, 0);
            *v39 = v43;
            a3->PrivilegesAllocated = 1;
          }
        }
        else
        {
          if ( v30 )
          {
            if ( v31 )
              LODWORD(Pool2) = 12 * v31 + 8;
            else
              LODWORD(Pool2) = 8;
          }
          else
          {
            LODWORD(Pool2) = 0;
          }
          memmove((char *)v30 + (unsigned int)Pool2, Privileges->Privilege, 12 * PrivilegeCount);
          *v30 += v28->PrivilegeCount;
        }
        CmSiFreeMemory(Privileges);
      }
      if ( v21 )
      {
        v32 = GrantedAccess;
        a3->PreviouslyGrantedAccess |= GrantedAccess;
        a3->RemainingDesiredAccess &= ~(v32 | 0x2000000);
      }
      *((_WORD *)v8 + 24) |= 2u;
      if ( a2 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v8,
          0LL,
          v25,
          a3,
          0,
          v21,
          a4,
          (GUID *)(a2 + 88),
          &a3->GenerateOnClose);
      }
      else if ( a4 )
      {
        SeOpenObjectAuditAlarmWithTransaction(
          (PUNICODE_STRING)CmKeyObjectType + 1,
          v8,
          0LL,
          v25,
          a3,
          0,
          v21,
          a4,
          0LL,
          &a3->GenerateOnClose);
      }
      *((_WORD *)v8 + 24) &= ~2u;
      ExReleaseResourceLite(*((PERESOURCE *)a3->SubjectSecurityContext.PrimaryToken + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34);
      ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v36, v37);
      }
    }
    else
    {
      Pool = v58[1];
      v21 = 0;
      AccessStatus = -1073741670;
    }
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  *a5 = AccessStatus;
  return v21;
}
