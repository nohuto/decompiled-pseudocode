/*
 * XREFs of CmpQueryKeySecurity @ 0x1408F3D50
 * Callers:
 *     CmpSecurityMethod @ 0x1408F39C0 (CmpSecurityMethod.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpTransUowIsEqual @ 0x140779DF0 (CmpTransUowIsEqual.c)
 *     CmpTransSearchAddTrans @ 0x1408F2710 (CmpTransSearchAddTrans.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408F4190 (SeQuerySecurityDescriptorInfo.c)
 *     CmpTransReferenceTransaction @ 0x1408F48C4 (CmpTransReferenceTransaction.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, DWORD *a2, void *a3, ULONG *a4)
{
  __int16 v4; // di
  char v5; // r12
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // bl
  __int64 v12; // rbx
  struct _PRIVILEGE_SET *Pool; // r15
  int v14; // esi
  __int64 v15; // rsi
  __int16 v16; // bx
  char *v17; // r14
  char *v18; // rcx
  int v19; // r14d
  __int64 v20; // rbx
  PPRIVILEGE_SET v21; // r13
  unsigned __int16 v22; // bx
  PPRIVILEGE_SET v23; // r14
  char *v24; // rdx
  unsigned __int16 v25; // ax
  char *v26; // r8
  LUID Luid; // rbx
  LUID_AND_ATTRIBUTES *Privilege; // r12
  __int64 v29; // r14
  __int64 v30; // rax
  bool IsEqual; // al
  unsigned __int64 v32; // rdx
  struct _EX_RUNDOWN_REF *v33; // r9
  PSECURITY_DESCRIPTOR v34; // rax
  __int64 Count; // r8
  ULONG_PTR *v36; // rbx
  ULONG_PTR *v37; // rcx
  __int64 v39; // rax
  struct _PRIVILEGE_SET *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r13
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rax
  bool v46; // al
  char v47; // [rsp+38h] [rbp-21h]
  char *v48; // [rsp+40h] [rbp-19h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  __int128 v50; // [rsp+50h] [rbp-9h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v50 = 0LL;
  WORD1(v50) = -1;
  v48 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v47 = CmpAcquireShutdownRundown(a1, a2);
  v11 = v47;
  if ( v47 )
  {
    CmpLockRegistry(v8, v7, v9, v10);
    v12 = a1[1];
    v5 = 1;
    Pool = 0LL;
    v14 = *(__int16 *)(v12 + 66);
    if ( v14 >= 2 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
      if ( !Pool )
      {
        Pool = Privileges[1];
        v19 = -1073741670;
LABEL_59:
        v11 = v47;
        goto LABEL_60;
      }
    }
    LOWORD(v50) = v14;
    Privileges[1] = Pool;
    v15 = *(__int16 *)(v12 + 66);
    WORD1(v50) = v15;
    if ( (_WORD)v15 )
    {
      v39 = *(_QWORD *)(v12 + 192);
      if ( !v39 )
      {
LABEL_6:
        v16 = 0;
        if ( (v15 & 0x8000u) == 0LL )
        {
          v17 = (char *)&v50 + 8;
          do
          {
            if ( v16 >= 2 )
              v18 = &v17[(char *)Pool - ((char *)&v50 + 8) - 16];
            else
              v18 = v17;
            CmpLockKcbShared(*(_QWORD *)v18);
            ++v16;
            v17 += 8;
          }
          while ( v16 <= (__int16)v15 );
          v5 = 1;
        }
        v19 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
        if ( v19 < 0 )
          goto LABEL_53;
        v20 = a1[7];
        if ( !v20 && !a1[8] )
          goto LABEL_15;
        v32 = a1[1];
        ObjectsSecurityDescriptor = 0LL;
        v8 = (_QWORD *)(v32 ^ 1);
        v48 = 0LL;
        if ( (v32 & 1) == 0 )
          v8 = (_QWORD *)v32;
        v33 = (struct _EX_RUNDOWN_REF *)v8[4];
        if ( (v20 & 1) != 0 )
        {
          v19 = CmpTransReferenceTransaction(v20);
          if ( v19 >= 0 )
          {
            v8 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFFEuLL) + 16) )
            {
              v48 = *(char **)((v20 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
              v19 = 0;
            }
            else
            {
              v19 = -1072103422;
            }
            if ( v20 )
              ObfDereferenceObject(v8);
          }
          v34 = v48;
        }
        else
        {
          Count = v33[520].Count;
          if ( !Count )
          {
            v19 = -1072103419;
            goto LABEL_53;
          }
          v19 = CmpTransSearchAddTrans(v20, a1[8], Count, v33, 0, &ObjectsSecurityDescriptor);
          v34 = ObjectsSecurityDescriptor;
          v48 = (char *)ObjectsSecurityDescriptor;
        }
        if ( v19 >= 0 )
        {
          v19 = CmpPerformKeyBodyDeletionCheck(a1, v34);
          if ( v19 >= 0 )
          {
LABEL_15:
            v21 = 0LL;
            v22 = v15;
            if ( (v15 & 0x8000u) == 0LL )
            {
              do
              {
                v23 = v22 >= 2u ? (PPRIVILEGE_SET)*((_QWORD *)Pool + v22 - 2) : Privileges[v22 - 1];
                if ( HIWORD(v23[3].Control) && BYTE1(v23[3].Control) == 1 )
                  break;
                if ( v23[2].PrivilegeCount != -1
                  && ((v24 = *(char **)&v23[12].PrivilegeCount) == 0LL
                   || v48
                   && (v48 == v24
                    || ((v30 = *((_QWORD *)v48 + 7)) == 0 || (v41 = *((_QWORD *)v24 + 7)) == 0
                      ? (IsEqual = CmpTransUowIsEqual(v48 + 88, v24 + 88))
                      : (IsEqual = v30 == v41),
                        IsEqual))) )
                {
                  v21 = v23;
                  if ( HIWORD(v23[3].Control) && BYTE1(v23[3].Control) )
                    break;
                  v25 = v22;
                }
                else
                {
                  v25 = v22;
                }
                v22 = v25 - 1;
              }
              while ( (__int16)(v25 - 1) >= 0 );
              v5 = 1;
              v4 = 0;
            }
            v26 = v48;
            Luid = v21[4].Privilege[0].Luid;
            if ( v48 )
            {
              Privilege = v21[10].Privilege;
              v29 = *(_QWORD *)&v21[10].Privilege[0].Attributes;
              if ( v21[10].Privilege == (LUID_AND_ATTRIBUTES *)v29 )
                goto LABEL_97;
LABEL_82:
              v42 = v29 - 32;
              v29 = *(_QWORD *)(v29 + 8);
              while ( v42 )
              {
                v43 = *(_QWORD *)(v42 + 56);
                if ( v43 )
                {
                  if ( (char *)v43 == v26
                    || ((v44 = *(_QWORD *)(v43 + 56)) == 0 || (v45 = *((_QWORD *)v26 + 7)) == 0
                      ? (v46 = CmpTransUowIsEqual((const void *)(v43 + 88), v26 + 88), v26 = v48)
                      : (char *)(v46 = v44 == v45),
                        v46) )
                  {
                    if ( *(_DWORD *)(v42 + 68) == 9 )
                    {
                      Luid = *(LUID *)(v42 + 88);
                      break;
                    }
                  }
                }
                if ( !v29 )
                  v29 = *(_QWORD *)&Privilege->Attributes;
                if ( Privilege != (LUID_AND_ATTRIBUTES *)v29 )
                  goto LABEL_82;
LABEL_97:
                v42 = 0LL;
              }
              v5 = 1;
            }
            ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL);
            v19 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
            if ( v19 >= 0 )
              v19 = 0;
          }
        }
LABEL_53:
        if ( (v15 & 0x8000u) == 0LL )
        {
          v36 = (ULONG_PTR *)&v50 + 1;
          do
          {
            if ( v4 >= 2 )
              v37 = (ULONG_PTR *)((char *)v36 + (char *)Pool - ((char *)&v50 + 8) - 16);
            else
              v37 = v36;
            CmpUnlockKcb(*v37);
            ++v4;
            ++v36;
          }
          while ( v4 <= (__int16)v15 );
          v5 = 1;
        }
        goto LABEL_59;
      }
      do
      {
        v40 = *(struct _PRIVILEGE_SET **)(v39 + 16);
        if ( (__int16)v15 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v15 - 2) = v40;
        }
        else
        {
          Privileges[(__int16)v15 - 1] = v40;
          Pool = Privileges[1];
        }
        v39 = *(_QWORD *)(v39 + 24);
        LOWORD(v15) = v15 - 1;
      }
      while ( v39 );
    }
    else
    {
      Privileges[v15 - 1] = (PPRIVILEGE_SET)v12;
      Pool = Privileges[1];
    }
    LOWORD(v15) = WORD1(v50);
    goto LABEL_6;
  }
  Pool = Privileges[1];
  v19 = -1073741431;
LABEL_60:
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v5 )
    CmpUnlockRegistry(v8);
  if ( v11 )
    CmpReleaseShutdownRundown(v8);
  return (unsigned int)v19;
}
