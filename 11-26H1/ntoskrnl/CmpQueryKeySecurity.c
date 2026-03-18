/*
 * XREFs of CmpQueryKeySecurity @ 0x1408ED790
 * Callers:
 *     CmpSecurityMethod @ 0x1408ED400 (CmpSecurityMethod.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     CmpTransUowIsEqual @ 0x140776F48 (CmpTransUowIsEqual.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1408EDBD0 (SeQuerySecurityDescriptorInfo.c)
 *     CmpTransReferenceTransaction @ 0x1408EE304 (CmpTransReferenceTransaction.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmpQueryKeySecurity(_QWORD *a1, ULONG *a2, void *a3, ULONG *a4)
{
  __int16 v4; // di
  char v5; // r12
  _QWORD *v7; // rcx
  char v8; // bl
  __int64 v9; // rbx
  struct _PRIVILEGE_SET *Pool; // r15
  int v11; // esi
  __int64 v12; // rsi
  __int16 v13; // bx
  char *v14; // r14
  char *v15; // rcx
  int v16; // r14d
  __int64 v17; // rbx
  PPRIVILEGE_SET v18; // r13
  unsigned __int16 v19; // bx
  PPRIVILEGE_SET v20; // r14
  char *v21; // rdx
  unsigned __int16 v22; // ax
  char *v23; // r8
  LUID Luid; // rbx
  LUID_AND_ATTRIBUTES *Privilege; // r12
  __int64 v26; // r14
  __int64 v27; // rax
  bool IsEqual; // al
  unsigned __int64 v29; // rdx
  struct _EX_RUNDOWN_REF *v30; // r9
  PSECURITY_DESCRIPTOR v31; // rax
  __int64 Count; // r8
  ULONG_PTR *v33; // rbx
  ULONG_PTR *v34; // rcx
  __int64 v36; // rax
  struct _PRIVILEGE_SET *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r13
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  bool v43; // al
  char v44; // [rsp+38h] [rbp-21h]
  char *v45; // [rsp+40h] [rbp-19h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+48h] [rbp-11h] BYREF
  __int128 v47; // [rsp+50h] [rbp-9h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp+7h]

  v4 = 0;
  v5 = 0;
  v47 = 0LL;
  WORD1(v47) = -1;
  v45 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v44 = CmpAcquireShutdownRundown(a1, a2);
  v8 = v44;
  if ( v44 )
  {
    CmpLockRegistry(v7);
    v9 = a1[1];
    v5 = 1;
    Pool = 0LL;
    v11 = *(__int16 *)(v9 + 66);
    if ( v11 >= 2 )
    {
      Pool = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL);
      if ( !Pool )
      {
        Pool = Privileges[1];
        v16 = -1073741670;
LABEL_59:
        v8 = v44;
        goto LABEL_60;
      }
    }
    LOWORD(v47) = v11;
    Privileges[1] = Pool;
    v12 = *(__int16 *)(v9 + 66);
    WORD1(v47) = v12;
    if ( (_WORD)v12 )
    {
      v36 = *(_QWORD *)(v9 + 192);
      if ( !v36 )
      {
LABEL_6:
        v13 = 0;
        if ( (v12 & 0x8000u) == 0LL )
        {
          v14 = (char *)&v47 + 8;
          do
          {
            if ( v13 >= 2 )
              v15 = &v14[(char *)Pool - ((char *)&v47 + 8) - 16];
            else
              v15 = v14;
            CmpLockKcbShared(*(_QWORD *)v15);
            ++v13;
            v14 += 8;
          }
          while ( v13 <= (__int16)v12 );
          v5 = 1;
        }
        v16 = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
        if ( v16 < 0 )
          goto LABEL_53;
        v17 = a1[7];
        if ( !v17 && !a1[8] )
          goto LABEL_15;
        v29 = a1[1];
        ObjectsSecurityDescriptor = 0LL;
        v7 = (_QWORD *)(v29 ^ 1);
        v45 = 0LL;
        if ( (v29 & 1) == 0 )
          v7 = (_QWORD *)v29;
        v30 = (struct _EX_RUNDOWN_REF *)v7[4];
        if ( (v17 & 1) != 0 )
        {
          v16 = CmpTransReferenceTransaction(v17);
          if ( v16 >= 0 )
          {
            v7 = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFEuLL);
            if ( *(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFEuLL) + 16) )
            {
              v45 = *(char **)((v17 & 0xFFFFFFFFFFFFFFFEuLL) + 16);
              v16 = 0;
            }
            else
            {
              v16 = -1072103422;
            }
            if ( v17 )
              ObfDereferenceObject(v7);
          }
          v31 = v45;
        }
        else
        {
          Count = v30[520].Count;
          if ( !Count )
          {
            v16 = -1072103419;
            goto LABEL_53;
          }
          v16 = CmpTransSearchAddTrans(v17, a1[8], Count, v30, 0, &ObjectsSecurityDescriptor);
          v31 = ObjectsSecurityDescriptor;
          v45 = (char *)ObjectsSecurityDescriptor;
        }
        if ( v16 >= 0 )
        {
          v16 = CmpPerformKeyBodyDeletionCheck(a1, v31);
          if ( v16 >= 0 )
          {
LABEL_15:
            v18 = 0LL;
            v19 = v12;
            if ( (v12 & 0x8000u) == 0LL )
            {
              do
              {
                v20 = v19 >= 2u ? (PPRIVILEGE_SET)*((_QWORD *)Pool + v19 - 2) : Privileges[v19 - 1];
                if ( HIWORD(v20[3].Control) && BYTE1(v20[3].Control) == 1 )
                  break;
                if ( v20[2].PrivilegeCount != -1
                  && ((v21 = *(char **)&v20[12].PrivilegeCount) == 0LL
                   || v45
                   && (v45 == v21
                    || ((v27 = *((_QWORD *)v45 + 7)) == 0 || (v38 = *((_QWORD *)v21 + 7)) == 0
                      ? (IsEqual = CmpTransUowIsEqual(v45 + 88, v21 + 88))
                      : (IsEqual = v27 == v38),
                        IsEqual))) )
                {
                  v18 = v20;
                  if ( HIWORD(v20[3].Control) && BYTE1(v20[3].Control) )
                    break;
                  v22 = v19;
                }
                else
                {
                  v22 = v19;
                }
                v19 = v22 - 1;
              }
              while ( (__int16)(v22 - 1) >= 0 );
              v5 = 1;
              v4 = 0;
            }
            v23 = v45;
            Luid = v18[4].Privilege[0].Luid;
            if ( v45 )
            {
              Privilege = v18[10].Privilege;
              v26 = *(_QWORD *)&v18[10].Privilege[0].Attributes;
              if ( v18[10].Privilege == (LUID_AND_ATTRIBUTES *)v26 )
                goto LABEL_97;
LABEL_82:
              v39 = v26 - 32;
              v26 = *(_QWORD *)(v26 + 8);
              while ( v39 )
              {
                v40 = *(_QWORD *)(v39 + 56);
                if ( v40 )
                {
                  if ( (char *)v40 == v23
                    || ((v41 = *(_QWORD *)(v40 + 56)) == 0 || (v42 = *((_QWORD *)v23 + 7)) == 0
                      ? (v43 = CmpTransUowIsEqual((const void *)(v40 + 88), v23 + 88), v23 = v45)
                      : (char *)(v43 = v41 == v42),
                        v43) )
                  {
                    if ( *(_DWORD *)(v39 + 68) == 9 )
                    {
                      Luid = *(LUID *)(v39 + 88);
                      break;
                    }
                  }
                }
                if ( !v26 )
                  v26 = *(_QWORD *)&Privilege->Attributes;
                if ( Privilege != (LUID_AND_ATTRIBUTES *)v26 )
                  goto LABEL_82;
LABEL_97:
                v39 = 0LL;
              }
              v5 = 1;
            }
            ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)(*(_QWORD *)&Luid + 32LL);
            v16 = SeQuerySecurityDescriptorInfo(a2, a3, a4, &ObjectsSecurityDescriptor);
            if ( v16 >= 0 )
              v16 = 0;
          }
        }
LABEL_53:
        if ( (v12 & 0x8000u) == 0LL )
        {
          v33 = (ULONG_PTR *)&v47 + 1;
          do
          {
            if ( v4 >= 2 )
              v34 = (ULONG_PTR *)((char *)v33 + (char *)Pool - ((char *)&v47 + 8) - 16);
            else
              v34 = v33;
            CmpUnlockKcb(*v34);
            ++v4;
            ++v33;
          }
          while ( v4 <= (__int16)v12 );
          v5 = 1;
        }
        goto LABEL_59;
      }
      do
      {
        v37 = *(struct _PRIVILEGE_SET **)(v36 + 16);
        if ( (__int16)v12 >= 2 )
        {
          *((_QWORD *)Pool + (__int16)v12 - 2) = v37;
        }
        else
        {
          Privileges[(__int16)v12 - 1] = v37;
          Pool = Privileges[1];
        }
        v36 = *(_QWORD *)(v36 + 24);
        LOWORD(v12) = v12 - 1;
      }
      while ( v36 );
    }
    else
    {
      Privileges[v12 - 1] = (PPRIVILEGE_SET)v9;
      Pool = Privileges[1];
    }
    LOWORD(v12) = WORD1(v47);
    goto LABEL_6;
  }
  Pool = Privileges[1];
  v16 = -1073741431;
LABEL_60:
  if ( Pool )
    CmSiFreeMemory(Pool);
  if ( v5 )
    CmpUnlockRegistry(v7);
  if ( v8 )
    CmpReleaseShutdownRundown(v7);
  return (unsigned int)v16;
}
