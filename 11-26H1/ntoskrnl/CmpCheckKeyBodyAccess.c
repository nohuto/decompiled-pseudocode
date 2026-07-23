/*
 * XREFs of CmpCheckKeyBodyAccess @ 0x14090C4C0
 * Callers:
 *     CmpDoAccessCheckOnKCB @ 0x14085FB38 (CmpDoAccessCheckOnKCB.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14090CA40 (CmpCheckOpenAccessOnKeyBody.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1402FE950 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     SeAccessCheck @ 0x140301000 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14090B0A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepConcatenatePrivileges @ 0x140934F50 (SepConcatenatePrivileges.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140C5E750 (CmpIsKeyDeletedForKeyBody.c)
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
  PERESOURCE *ClientToken; // rcx
  PVOID *v35; // rdi
  _DWORD *v36; // rdx
  unsigned int v37; // eax
  PPRIVILEGE_SET v38; // r8
  LUID *v39; // r12
  __int64 v40; // rdx
  __int64 v41; // rax
  LUID *v42; // rax
  LUID v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  bool v46; // cl
  bool v47; // al
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-31h] BYREF
  LUID *Pool2; // [rsp+60h] [rbp-29h]
  ACCESS_MASK GrantedAccess; // [rsp+68h] [rbp-21h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-19h] BYREF
  PVOID *AuxData; // [rsp+78h] [rbp-11h]
  __int128 v53; // [rsp+80h] [rbp-9h]
  PPRIVILEGE_SET v54[2]; // [rsp+90h] [rbp+7h]

  AccessMode = a4;
  v7 = 0LL;
  v8 = Object;
  GrantedAccess = 0;
  Privileges = 0LL;
  v53 = 0LL;
  WORD1(v53) = -1;
  *(_OWORD *)v54 = 0LL;
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(Object, a2) )
  {
    Pool = v54[1];
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
      LOWORD(v53) = v11;
      v54[1] = Pool;
      v12 = *(__int16 *)(v9 + 66);
      WORD1(v53) = v12;
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
            v54[(__int16)v12 - 1] = v23;
            Pool = v54[1];
          }
          i = *(_QWORD *)(i + 24);
        }
      }
      else
      {
        v54[v12 - 1] = (PPRIVILEGE_SET)v9;
        Pool = v54[1];
      }
      v13 = WORD1(v53);
      AccessStatus = 0;
      if ( (SWORD1(v53) & 0x8000u) == 0 )
      {
        do
        {
          if ( v13 >= 2u )
            v14 = (PPRIVILEGE_SET)*((_QWORD *)Pool + v13 - 2);
          else
            v14 = v54[v13 - 1];
          if ( HIWORD(v14[3].Control) && BYTE1(v14[3].Control) == 1 )
            break;
          if ( v14[2].PrivilegeCount != -1 )
          {
            v15 = *(_QWORD *)&v14[12].PrivilegeCount;
            if ( !v15
              || a2
              && (a2 == v15
               || ((v19 = *(_QWORD *)(a2 + 56)) == 0 || (v41 = *(_QWORD *)(v15 + 56)) == 0
                 ? (IsEqual = CmpTransUowIsEqual((const void *)(a2 + 88), (const void *)(v15 + 88)))
                 : (IsEqual = v19 == v41),
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
        v42 = (LUID *)(v18 - 4);
        v18 = (PVOID *)v18[1];
        while ( 1 )
        {
          Pool2 = v42;
          if ( !v42 )
            break;
          v43 = v42[7];
          if ( v43 )
          {
            if ( v43 == a2
              || ((v44 = *(_QWORD *)(*(_QWORD *)&v43 + 56LL)) == 0 || (v45 = *(_QWORD *)(a2 + 56)) == 0
                ? (v47 = CmpTransUowIsEqual((const void *)(*(_QWORD *)&v43 + 88LL), (const void *)(a2 + 88)),
                   Privilege = AuxData,
                   v46 = v47,
                   v42 = Pool2)
                : (LUID *)(v46 = v44 == v45),
                  v46) )
            {
              if ( v42[8].HighPart == 9 )
              {
                Luid = v42[11];
                break;
              }
            }
          }
          if ( !v18 )
            v18 = (PVOID *)Privilege[1];
          if ( Privilege != v18 )
            goto LABEL_68;
LABEL_82:
          v42 = 0LL;
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
          Pool2 = (LUID *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            v35 = AuxData;
            v36 = *AuxData;
            if ( *AuxData )
            {
              if ( *v36 )
                v37 = 12 * *v36 + 8;
              else
                v37 = 8;
            }
            else
            {
              v37 = 0;
            }
            memmove(Pool2, v36, v37);
            v38 = v28;
            v39 = Pool2;
            SepConcatenatePrivileges(Pool2, v40, v38);
            if ( a3->PrivilegesAllocated )
              ExFreePoolWithTag(*v35, 0);
            *v35 = v39;
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
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ClientToken = (PERESOURCE *)a3->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        ExReleaseResourceLite(ClientToken[6]);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
    }
    else
    {
      Pool = v54[1];
      v21 = 0;
      AccessStatus = -1073741670;
    }
  }
  if ( Pool )
    CmSiFreeMemory(Pool);
  *a5 = AccessStatus;
  return v21;
}
