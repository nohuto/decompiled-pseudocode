/*
 * XREFs of CmCallbackGetKeyObjectID @ 0x1408C7460
 * Callers:
 *     EtwpRegTraceCallback @ 0x140A36E90 (EtwpRegTraceCallback.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmpFreeTransientPoolWithTag @ 0x140470A10 (CmpFreeTransientPoolWithTag.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     CmpConstructNameWithStatus @ 0x1408C7C30 (CmpConstructNameWithStatus.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Pool; // rcx
  __int64 v16; // rsi
  __int16 v17; // r14
  signed __int64 v18; // r12
  char *v19; // r15
  char *v20; // rcx
  unsigned __int64 v21; // rax
  int v22; // r14d
  NTSTATUS v23; // r14d
  signed __int64 v24; // r15
  ULONG_PTR *v25; // rdi
  ULONG_PTR *v26; // rcx
  int v28; // eax
  bool v29; // zf
  struct _PRIVILEGE_SET *v30; // rdx
  __int128 v31; // [rsp+28h] [rbp-59h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+38h] [rbp-49h]
  signed __int64 v33; // [rsp+48h] [rbp-39h] BYREF
  __int128 v34; // [rsp+50h] [rbp-31h] BYREF
  __int64 v35; // [rsp+60h] [rbp-21h]
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-19h] BYREF

  v4 = 0;
  v35 = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v34);
  v31 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !Object || *(_DWORD *)Object != 1803104306 || !v9 )
  {
LABEL_37:
    v23 = -1073741811;
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
      CmpLockRegistry(v12, v11, v13, v14);
      Pool = 0LL;
      if ( *(__int16 *)(v10 + 66) >= 2 )
      {
        Pool = CmpAllocatePool(0x100uLL);
        if ( !Pool )
        {
          v23 = -1073741670;
LABEL_32:
          CmpUnlockRegistry(Pool);
          CmpDetachFromRegistryProcess(&ApcState);
          goto LABEL_33;
        }
      }
      Privileges[1] = (PPRIVILEGE_SET)Pool;
      v16 = *(__int16 *)(v10 + 66);
      WORD1(v31) = v16;
      if ( (_WORD)v16 )
      {
        Pool = *(_QWORD *)(v10 + 192);
        if ( !Pool )
        {
LABEL_12:
          v17 = 0;
          if ( (v16 & 0x8000u) == 0LL )
          {
            v18 = (char *)Privileges[1] - ((char *)&v31 + 8);
            v19 = (char *)&v31 + 8;
            do
            {
              if ( v17 >= 2 )
                v20 = &v19[v18 - 16];
              else
                v20 = v19;
              CmpLockKcbShared(*(_QWORD *)v20);
              ++v17;
              v19 += 8;
            }
            while ( v17 <= (__int16)v16 );
            v7 = 0LL;
          }
          if ( !*(_QWORD *)(v10 + 80) )
          {
            v23 = -1073741670;
LABEL_27:
            if ( (v16 & 0x8000u) == 0LL )
            {
              v24 = (char *)Privileges[1] - ((char *)&v31 + 8);
              v25 = (ULONG_PTR *)&v31 + 1;
              do
              {
                if ( v4 >= 2 )
                  v26 = (ULONG_PTR *)((char *)v25 + v24 - 16);
                else
                  v26 = v25;
                CmpUnlockKcb(*v26);
                ++v4;
                ++v25;
              }
              while ( v4 <= (__int16)v16 );
            }
            goto LABEL_32;
          }
          v21 = *(_QWORD *)(v10 + 296);
          Pool = 0LL;
          v33 = 0LL;
          if ( (v21 & 1) != 0 )
            v21 &= ~1uLL;
          if ( !v21 )
          {
            v28 = CmpConstructNameWithStatus(v10, &v33);
            Pool = v33;
            v22 = v28;
            if ( v28 < 0 )
              goto LABEL_23;
            v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 296), v33, 0LL) == 0;
            v21 = *(_QWORD *)(v10 + 296);
            if ( v29 )
              Pool = 0LL;
            if ( (v21 & 1) != 0 )
              v21 &= ~1uLL;
          }
          v7 = (const UNICODE_STRING *)v21;
          v22 = 0;
LABEL_23:
          if ( Pool )
            CmpFreeTransientPoolWithTag((void *)Pool, 0x624E4D43u);
          if ( v22 < 0 )
          {
            v23 = -1073741670;
          }
          else
          {
            *ObjectName = v7;
            v23 = 0;
          }
          goto LABEL_27;
        }
        do
        {
          v30 = *(struct _PRIVILEGE_SET **)(Pool + 16);
          if ( (__int16)v16 >= 2 )
            *((_QWORD *)Privileges[1] + (__int16)v16 - 2) = v30;
          else
            Privileges[(__int16)v16 - 1] = v30;
          Pool = *(_QWORD *)(Pool + 24);
          LOWORD(v16) = v16 - 1;
        }
        while ( Pool );
      }
      else
      {
        Privileges[v16 - 1] = (PPRIVILEGE_SET)v10;
      }
      LOWORD(v16) = WORD1(v31);
      goto LABEL_12;
    }
    goto LABEL_37;
  }
  v23 = 0;
LABEL_33:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v34);
  return v23;
}
