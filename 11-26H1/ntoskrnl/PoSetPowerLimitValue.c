/*
 * XREFs of PoSetPowerLimitValue @ 0x1407CA570
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PoCaptureReasonContext @ 0x140436EC8 (PoCaptureReasonContext.c)
 *     PoDestroyReasonContext @ 0x14050A3C0 (PoDestroyReasonContext.c)
 *     PopUpdatePowerLimitTimeTracking @ 0x140603A78 (PopUpdatePowerLimitTimeTracking.c)
 *     PopEvaluatePowerLimitChange @ 0x1407CAB64 (PopEvaluatePowerLimitChange.c)
 *     PopDiagTracePowerLimitRequestValueUpdate @ 0x1407D4648 (PopDiagTracePowerLimitRequestValueUpdate.c)
 */

__int64 __fastcall PoSetPowerLimitValue(__int64 a1, _OWORD *a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  struct _KLOCK_ENTRIES *v4; // r15
  unsigned int v5; // r13d
  _QWORD *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rbp
  char v11; // r11
  unsigned int i; // r14d
  _DWORD *v13; // rsi
  unsigned int j; // r15d
  __int64 v15; // r10
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v20; // [rsp+70h] [rbp+8h] BYREF
  struct _KLOCK_ENTRIES *v21; // [rsp+88h] [rbp+20h]

  v21 = a4;
  v4 = a4;
  v20 = 0LL;
  v5 = a3;
  v7 = 0LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v9 = PoCaptureReasonContext(a2, 0LL, 0LL, 1, 0LL, (PVOID *)&v20);
      v7 = (_QWORD *)v20;
      if ( v9 < 0 )
        v7 = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 64);
    PopAcquireRwLockExclusive((unsigned __int64 *)(v10 + 32), (__int64)a2, a3, a4);
    if ( *(_BYTE *)(a1 + 16) && *(_BYTE *)(v10 + 48) )
    {
      v11 = 0;
      for ( i = 0; i < v5; ++i )
      {
        v13 = (_DWORD *)((char *)v4 + 16 * i);
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(a1 + 32) )
          {
            v8 = -1073741637;
            goto LABEL_33;
          }
          v15 = *(_QWORD *)(a1 + 40);
          if ( *v13 == *(_DWORD *)(v15 + 16LL * j) && v13[1] == *(_DWORD *)(v15 + 16LL * j + 4) )
            break;
        }
        v16 = v13[2];
        v17 = *(_QWORD *)(v10 + 80);
        if ( v16 != -1 && (v16 < *(_DWORD *)(v17 + 36LL * j + 12) || v16 > *(_DWORD *)(v17 + 36LL * j + 8))
          || (*(_DWORD *)(v17 + 36LL * j + 32) & 1) != 0
          && (v18 = v13[3], v18 != -1)
          && (v18 < *(_DWORD *)(v17 + 36LL * j + 16) || v18 > *(_DWORD *)(v17 + 36LL * j + 20)) )
        {
          v8 = -1073741811;
          goto LABEL_33;
        }
        if ( v16 != *(_DWORD *)(v15 + 16LL * j + 8)
          || (*(_DWORD *)(v17 + 36LL * j + 32) & 1) != 0 && v13[3] != *(_DWORD *)(v15 + 16LL * j + 12) )
        {
          PopUpdatePowerLimitTimeTracking(a1, j);
          v11 = 1;
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * j + 8) = v13[2];
          *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * j + 12) = v13[3];
        }
        v4 = v21;
      }
      if ( v11 )
      {
        PopDiagTracePowerLimitRequestValueUpdate(a1, v7);
        PopEvaluatePowerLimitChange(v10);
      }
      v8 = 0;
    }
    else
    {
      v8 = -1073741431;
    }
LABEL_33:
    if ( v7 )
      PoDestroyReasonContext(v7);
    PopReleaseRwLock((struct _KTHREAD *)(v10 + 32));
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
