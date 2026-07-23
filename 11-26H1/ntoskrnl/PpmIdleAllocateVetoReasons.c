/*
 * XREFs of PpmIdleAllocateVetoReasons @ 0x1407CC754
 * Callers:
 *     PopFxRequestCommon @ 0x1406084C0 (PopFxRequestCommon.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PpmIdleInstallNewVetoList @ 0x140604C30 (PpmIdleInstallNewVetoList.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmIdleAllocateVetoReasons(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  void *v7; // r13
  unsigned int v8; // r14d
  _DWORD *v9; // rax
  _DWORD *v10; // r15
  unsigned int v11; // r12d
  WCHAR *v12; // rax
  __int64 v13; // rbx
  _DWORD *v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // ebx
  const WCHAR *SourceString; // [rsp+68h] [rbp+10h]
  __int64 v21; // [rsp+70h] [rbp+18h]
  __int64 Pool2; // [rsp+78h] [rbp+20h]

  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock, a2, a3, a4);
  v5 = 0;
  if ( stru_140E67200.Padding[4]
    && (v6 = *(unsigned int *)(stru_140E67200.Padding[4] + 4), (_DWORD)v6)
    && PpmPlatformStates
    && (v7 = *(void **)(PpmPlatformStates + 112)) != 0LL )
  {
    v8 = v6 + a1[1];
    if ( v8 >= (unsigned int)v6 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 && (v9 = (_DWORD *)ExAllocatePool2(0x40uLL), (v10 = v9) != 0LL) )
      {
        v9[1] = v8;
        v11 = v6;
        *v9 = *(_DWORD *)stru_140E67200.Padding[4];
        while ( v11 < v8 )
        {
          v21 = 4LL * (v11 - (unsigned int)v6);
          v12 = (WCHAR *)ExAllocatePool2(0x40uLL);
          SourceString = v12;
          if ( !v12 )
            goto LABEL_8;
          memmove(
            v12,
            *(const void **)&a1[4 * (v11 - (unsigned int)v6) + 4],
            2LL * LOWORD(a1[4 * (v11 - (unsigned int)v6) + 3]));
          v13 = 3LL * v11;
          RtlInitUnicodeString((PUNICODE_STRING)&v10[6 * v11++ + 4], SourceString);
          v10[2 * v13 + 2] = a1[v21 + 2];
        }
        v14 = v10 + 2;
        v15 = stru_140E67200.Padding[4] - (_QWORD)v10;
        v16 = v6;
        do
        {
          *(_OWORD *)v14 = *(_OWORD *)((char *)v14 + v15);
          *((_QWORD *)v14 + 2) = *(_QWORD *)((char *)v14 + v15 + 16);
          v14 += 6;
          --v16;
        }
        while ( v16 );
        ExFreePoolWithTag((PVOID)stru_140E67200.Padding[4], 0x694D5050u);
        v17 = PpmPlatformStates;
        v18 = 0;
        for ( stru_140E67200.Padding[4] = (unsigned __int64)v10; v18 < *(_DWORD *)PpmPlatformStates; ++v18 )
        {
          PpmIdleInstallNewVetoList(448LL * v18 + v17 + 64, v8, (char *)(Pool2 + ((unsigned __int64)(v18 * v8) << 6)));
          v17 = PpmPlatformStates;
        }
        ExFreePoolWithTag(v7, 0x694D5050u);
        *a1 = v6 + 1;
      }
      else
      {
LABEL_8:
        v5 = -1073741670;
      }
    }
    else
    {
      v5 = -1073741675;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return v5;
}
