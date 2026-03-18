/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1408C0050
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C182C (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408D8510 (CmpConstructNameFromKeyNodes.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // r11
  __int16 v9; // bx
  __int64 v10; // rdi
  __int64 v11; // rcx
  struct _PRIVILEGE_SET *v12; // rdx
  __int64 Pool; // rcx
  __int64 v14; // rsi
  __int16 v15; // r14
  signed __int64 v16; // r12
  char *v17; // r15
  char *v18; // rcx
  char v19; // al
  int v20; // r15d
  char v21; // r13
  struct _PRIVILEGE_SET *v22; // r14
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int16 j; // cx
  PPRIVILEGE_SET v26; // rax
  int v27; // eax
  int v28; // edi
  __int64 v29; // r15
  signed __int64 v30; // r14
  ULONG_PTR *v31; // rdi
  ULONG_PTR *v32; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v35; // rdx
  __int128 v36; // [rsp+28h] [rbp-81h] BYREF
  PPRIVILEGE_SET v37[2]; // [rsp+38h] [rbp-71h]
  __int64 v38; // [rsp+48h] [rbp-61h] BYREF
  __int128 v39; // [rsp+50h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-49h]
  _QWORD *v41; // [rsp+70h] [rbp-39h]
  __int128 v42; // [rsp+78h] [rbp-31h] BYREF
  __int64 v43; // [rsp+88h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  v41 = a4;
  v43 = 0LL;
  v42 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v42);
  v9 = 0;
  v36 = 0LL;
  *(_OWORD *)v37 = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
  {
LABEL_57:
    v23 = -1073741811;
    goto LABEL_47;
  }
  v10 = *(_QWORD *)(a2 + 8);
  if ( v7 )
    *v7 = v10;
  if ( v6 )
  {
    if ( (v10 & 1) == 0 )
    {
      CmpAttachToRegistryProcess(&ApcState);
      CmpLockRegistry(v11);
      Pool = 0LL;
      if ( *(__int16 *)(v10 + 66) >= 2 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( !Pool )
        {
          v23 = -1073741670;
LABEL_46:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_47;
        }
      }
      v37[1] = (PPRIVILEGE_SET)Pool;
      v14 = *(__int16 *)(v10 + 66);
      WORD1(v36) = v14;
      if ( (_WORD)v14 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
LABEL_13:
          v15 = 0;
          if ( (v14 & 0x8000u) == 0LL )
          {
            v16 = (char *)v37[1] - ((char *)&v36 + 8);
            v17 = (char *)&v36 + 8;
            do
            {
              if ( v15 >= 2 )
                v18 = &v17[v16 - 16];
              else
                v18 = v17;
              CmpLockKcbShared(*(_QWORD *)v18);
              ++v15;
              v17 += 8;
            }
            while ( v15 <= (__int16)v14 );
          }
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v23 = -1073741670;
LABEL_41:
            if ( (v14 & 0x8000u) == 0LL )
            {
              v30 = (char *)v37[1] - ((char *)&v36 + 8);
              v31 = (ULONG_PTR *)&v36 + 1;
              do
              {
                if ( v9 >= 2 )
                  v32 = (ULONG_PTR *)((char *)v31 + v30 - 16);
                else
                  v32 = v31;
                CmpUnlockKcb(*v32);
                ++v9;
                ++v31;
              }
              while ( v9 <= (__int16)v14 );
            }
            goto LABEL_46;
          }
          v38 = 0LL;
          v39 = 0LL;
          WORD1(v39) = -1;
          *(_OWORD *)Privileges = 0LL;
          v19 = CmpAcquireShutdownRundown(Pool, v12);
          v20 = *(__int16 *)(v10 + 66);
          v21 = v19;
          v22 = 0LL;
          v23 = -1073741670;
          if ( v20 < 2 || (v22 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
          {
            LOWORD(v39) = v20;
            Privileges[1] = v22;
            v24 = *(__int16 *)(v10 + 66);
            WORD1(v39) = v24;
            if ( (_WORD)v24 )
            {
              for ( i = *(_QWORD *)(v10 + 192); i; LOWORD(v24) = v24 - 1 )
              {
                v35 = *(struct _PRIVILEGE_SET **)(i + 16);
                if ( (__int16)v24 >= 2 )
                {
                  *((_QWORD *)v22 + (__int16)v24 - 2) = v35;
                }
                else
                {
                  Privileges[(__int16)v24 - 1] = v35;
                  v22 = Privileges[1];
                }
                i = *(_QWORD *)(i + 24);
              }
            }
            else
            {
              Privileges[v24 - 1] = (PPRIVILEGE_SET)v10;
              v22 = Privileges[1];
            }
            if ( v21 && (*(_DWORD *)(v10 + 8) & 0x20000) == 0 )
            {
              for ( j = WORD1(v39); j >= 0; --j )
              {
                v26 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v22 + j - 2) : Privileges[j - 1];
                if ( HIWORD(v26[3].Control) && BYTE1(v26[3].Control) == 1 )
                  break;
                if ( v26[2].PrivilegeCount != -1 )
                {
                  if ( *(_DWORD *)(v10 + 40) != -1 || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
                  {
                    v27 = CmpConstructNameFromKeyNodes(&v39, &v38);
                    v22 = Privileges[1];
                    goto LABEL_33;
                  }
                  break;
                }
              }
            }
            v27 = CmpConstructNameFromKcbNameBlocks(v10, &v38);
LABEL_33:
            v28 = v27;
            if ( v27 >= 0 )
            {
              v29 = v38;
              v28 = 0;
LABEL_35:
              if ( v22 )
                CmSiFreeMemory(v22);
              if ( v21 )
                CmpReleaseShutdownRundown(Pool);
              if ( v28 >= 0 )
              {
                v23 = 0;
                *v41 = v29;
              }
              goto LABEL_41;
            }
          }
          else
          {
            v22 = Privileges[1];
            v28 = -1073741670;
          }
          v29 = 0LL;
          goto LABEL_35;
        }
        do
        {
          v12 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          if ( (__int16)v14 >= 2 )
            *((_QWORD *)v37[1] + (__int16)v14 - 2) = v12;
          else
            v37[(__int16)v14 - 1] = v12;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v14) = v14 - 1;
        }
        while ( Pool );
      }
      else
      {
        v37[v14 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v14) = WORD1(v36);
      goto LABEL_13;
    }
    goto LABEL_57;
  }
  v23 = 0;
LABEL_47:
  if ( v37[1] )
    CmSiFreeMemory(v37[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v42);
  return v23;
}
