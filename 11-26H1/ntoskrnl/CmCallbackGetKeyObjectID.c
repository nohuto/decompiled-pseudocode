/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1408C0E90
 * Callers:
 *     EtwpRegTraceCallback @ 0x140A24380 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x140474870 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140477290 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1408C1660 (CmpConstructNameWithStatus.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __stdcall CmCallbackGetKeyObjectID(
        PLARGE_INTEGER Cookie,
        PVOID Object,
        PULONG_PTR ObjectID,
        PCUNICODE_STRING *ObjectName)
{
  __int16 v4; // bx
  const UNICODE_STRING *v7; // r15
  _QWORD *v8; // r10
  __int64 v9; // r11
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 Pool; // rcx
  __int64 v13; // rsi
  __int16 v14; // r14
  signed __int64 v15; // r12
  char *v16; // r15
  char *v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // r14d
  NTSTATUS v20; // r14d
  signed __int64 v21; // r15
  ULONG_PTR *v22; // rdi
  ULONG_PTR *v23; // rcx
  int v25; // eax
  bool v26; // zf
  struct _PRIVILEGE_SET *v27; // rdx
  __int128 v28; // [rsp+28h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-49h]
  signed __int64 v30; // [rsp+48h] [rbp-39h] BYREF
  __int128 v31; // [rsp+50h] [rbp-31h] BYREF
  __int64 v32; // [rsp+60h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  v32 = 0LL;
  v7 = 0LL;
  v31 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v31);
  v28 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v9 )
  {
LABEL_37:
    v20 = -1073741811;
    goto LABEL_33;
  }
  v10 = *((_QWORD *)Object + 1);
  if ( v8 )
    *v8 = v10;
  if ( ObjectName )
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
          v20 = -1073741670;
LABEL_32:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_33;
        }
      }
      Privileges[1] = (PPRIVILEGE_SET)Pool;
      v13 = *(__int16 *)(v10 + 66);
      WORD1(v28) = v13;
      if ( (_WORD)v13 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
LABEL_12:
          v14 = 0;
          if ( (v13 & 0x8000u) == 0LL )
          {
            v15 = (char *)Privileges[1] - ((char *)&v28 + 8);
            v16 = (char *)&v28 + 8;
            do
            {
              if ( v14 >= 2 )
                v17 = &v16[v15 - 16];
              else
                v17 = v16;
              CmpLockKcbShared(*(_QWORD *)v17);
              ++v14;
              v16 += 8;
            }
            while ( v14 <= (__int16)v13 );
            v7 = 0LL;
          }
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v20 = -1073741670;
LABEL_27:
            if ( (v13 & 0x8000u) == 0LL )
            {
              v21 = (char *)Privileges[1] - ((char *)&v28 + 8);
              v22 = (ULONG_PTR *)&v28 + 1;
              do
              {
                if ( v4 >= 2 )
                  v23 = (ULONG_PTR *)((char *)v22 + v21 - 16);
                else
                  v23 = v22;
                CmpUnlockKcb(*v23);
                ++v4;
                ++v22;
              }
              while ( v4 <= (__int16)v13 );
            }
            goto LABEL_32;
          }
          v18 = *(_QWORD *)(v10 + 296);
          Pool = 0LL;
          v30 = 0LL;
          if ( (v18 & 1) != 0 )
            v18 &= ~1uLL;
          if ( !v18 )
          {
            v25 = CmpConstructNameWithStatus(v10, &v30);
            Pool = v30;
            v19 = v25;
            if ( v25 < 0 )
              goto LABEL_23;
            v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 296), v30, 0LL) == 0;
            v18 = *(_QWORD *)(v10 + 296);
            if ( v26 )
              Pool = 0LL;
            if ( (v18 & 1) != 0 )
              v18 &= ~1uLL;
          }
          v7 = (const UNICODE_STRING *)v18;
          v19 = 0;
LABEL_23:
          if ( Pool )
            CmpFreeTransientPoolWithTag((void *)Pool, 0x624E4D43u);
          if ( v19 < 0 )
          {
            v20 = -1073741670;
          }
          else
          {
            *ObjectName = v7;
            v20 = 0;
          }
          goto LABEL_27;
        }
        do
        {
          v27 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          if ( (__int16)v13 >= 2 )
            *((_QWORD *)Privileges[1] + (__int16)v13 - 2) = v27;
          else
            Privileges[(__int16)v13 - 1] = v27;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v13) = v13 - 1;
        }
        while ( Pool );
      }
      else
      {
        Privileges[v13 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v13) = WORD1(v28);
      goto LABEL_12;
    }
    goto LABEL_37;
  }
  v20 = 0;
LABEL_33:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v31);
  return v20;
}
