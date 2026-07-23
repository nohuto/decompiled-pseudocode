/*
 * XREFs of CmCallbackGetKeyObjectIDEx @ 0x1408C6620
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1408C7DFC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpConstructNameFromKeyNodes @ 0x1408DEAD0 (CmpConstructNameFromKeyNodes.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmCallbackGetKeyObjectIDEx(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5)
{
  __int64 v6; // r9
  _QWORD *v7; // r10
  __int64 v8; // r11
  __int16 v9; // bx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _PRIVILEGE_SET *v15; // rdx
  __int64 Pool; // rcx
  __int64 v17; // rsi
  __int16 v18; // r14
  signed __int64 v19; // r12
  char *v20; // r15
  char *v21; // rcx
  char v22; // al
  int v23; // r15d
  char v24; // r13
  struct _PRIVILEGE_SET *v25; // r14
  unsigned int v26; // r12d
  __int64 v27; // rax
  __int16 j; // cx
  PPRIVILEGE_SET v29; // rax
  int v30; // eax
  int v31; // edi
  __int64 v32; // r15
  signed __int64 v33; // r14
  ULONG_PTR *v34; // rdi
  ULONG_PTR *v35; // rcx
  __int64 i; // rcx
  struct _PRIVILEGE_SET *v38; // rdx
  __int128 v39; // [rsp+28h] [rbp-81h] BYREF
  PPRIVILEGE_SET v40[2]; // [rsp+38h] [rbp-71h]
  __int64 v41; // [rsp+48h] [rbp-61h] BYREF
  __int128 v42; // [rsp+50h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+60h] [rbp-49h]
  _QWORD *v44; // [rsp+70h] [rbp-39h]
  __int128 v45; // [rsp+78h] [rbp-31h] BYREF
  __int64 v46; // [rsp+88h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-19h] BYREF

  v44 = a4;
  v46 = 0LL;
  v45 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v45);
  v9 = 0;
  v39 = 0LL;
  *(_OWORD *)v40 = 0LL;
  if ( !a2 || *(_DWORD *)a2 != 1803104306 || !v8 || a5 )
  {
LABEL_57:
    v26 = -1073741811;
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
      CmpLockRegistry(v12, v11, v13, v14);
      Pool = 0LL;
      if ( *(__int16 *)(v10 + 66) >= 2 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( !Pool )
        {
          v26 = -1073741670;
LABEL_46:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_47;
        }
      }
      v40[1] = (PPRIVILEGE_SET)Pool;
      v17 = *(__int16 *)(v10 + 66);
      WORD1(v39) = v17;
      if ( (_WORD)v17 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
LABEL_13:
          v18 = 0;
          if ( (v17 & 0x8000u) == 0LL )
          {
            v19 = (char *)v40[1] - ((char *)&v39 + 8);
            v20 = (char *)&v39 + 8;
            do
            {
              if ( v18 >= 2 )
                v21 = &v20[v19 - 16];
              else
                v21 = v20;
              CmpLockKcbShared(*(_QWORD *)v21);
              ++v18;
              v20 += 8;
            }
            while ( v18 <= (__int16)v17 );
          }
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v26 = -1073741670;
LABEL_41:
            if ( (v17 & 0x8000u) == 0LL )
            {
              v33 = (char *)v40[1] - ((char *)&v39 + 8);
              v34 = (ULONG_PTR *)&v39 + 1;
              do
              {
                if ( v9 >= 2 )
                  v35 = (ULONG_PTR *)((char *)v34 + v33 - 16);
                else
                  v35 = v34;
                CmpUnlockKcb(*v35);
                ++v9;
                ++v34;
              }
              while ( v9 <= (__int16)v17 );
            }
            goto LABEL_46;
          }
          v41 = 0LL;
          v42 = 0LL;
          WORD1(v42) = -1;
          *(_OWORD *)Privileges = 0LL;
          v22 = CmpAcquireShutdownRundown(Pool, v15);
          v23 = *(__int16 *)(v10 + 66);
          v24 = v22;
          v25 = 0LL;
          v26 = -1073741670;
          if ( v23 < 2 || (v25 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
          {
            LOWORD(v42) = v23;
            Privileges[1] = v25;
            v27 = *(__int16 *)(v10 + 66);
            WORD1(v42) = v27;
            if ( (_WORD)v27 )
            {
              for ( i = *(_QWORD *)(v10 + 192); i; LOWORD(v27) = v27 - 1 )
              {
                v38 = *(struct _PRIVILEGE_SET **)(i + 16);
                if ( (__int16)v27 >= 2 )
                {
                  *((_QWORD *)v25 + (__int16)v27 - 2) = v38;
                }
                else
                {
                  Privileges[(__int16)v27 - 1] = v38;
                  v25 = Privileges[1];
                }
                i = *(_QWORD *)(i + 24);
              }
            }
            else
            {
              Privileges[v27 - 1] = (PPRIVILEGE_SET)v10;
              v25 = Privileges[1];
            }
            if ( v24 && (*(_DWORD *)(v10 + 8) & 0x20000) == 0 )
            {
              for ( j = WORD1(v42); j >= 0; --j )
              {
                v29 = j >= 2 ? (PPRIVILEGE_SET)*((_QWORD *)v25 + j - 2) : Privileges[j - 1];
                if ( HIWORD(v29[3].Control) && BYTE1(v29[3].Control) == 1 )
                  break;
                if ( v29[2].PrivilegeCount != -1 )
                {
                  if ( *(_DWORD *)(v10 + 40) != -1 || (*(_DWORD *)(v10 + 184) & 0x40000) == 0 )
                  {
                    v30 = CmpConstructNameFromKeyNodes(&v42, &v41);
                    v25 = Privileges[1];
                    goto LABEL_33;
                  }
                  break;
                }
              }
            }
            v30 = CmpConstructNameFromKcbNameBlocks(v10, &v41);
LABEL_33:
            v31 = v30;
            if ( v30 >= 0 )
            {
              v32 = v41;
              v31 = 0;
LABEL_35:
              if ( v25 )
                CmSiFreeMemory(v25);
              if ( v24 )
                CmpReleaseShutdownRundown(Pool);
              if ( v31 >= 0 )
              {
                v26 = 0;
                *v44 = v32;
              }
              goto LABEL_41;
            }
          }
          else
          {
            v25 = Privileges[1];
            v31 = -1073741670;
          }
          v32 = 0LL;
          goto LABEL_35;
        }
        do
        {
          v15 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          if ( (__int16)v17 >= 2 )
            *((_QWORD *)v40[1] + (__int16)v17 - 2) = v15;
          else
            v40[(__int16)v17 - 1] = v15;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v17) = v17 - 1;
        }
        while ( Pool );
      }
      else
      {
        v40[v17 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v17) = WORD1(v39);
      goto LABEL_13;
    }
    goto LABEL_57;
  }
  v26 = 0;
LABEL_47:
  if ( v40[1] )
    CmSiFreeMemory(v40[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v45);
  return v26;
}
