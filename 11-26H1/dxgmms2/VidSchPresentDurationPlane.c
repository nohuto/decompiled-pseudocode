/*
 * XREFs of VidSchPresentDurationPlane @ 0x140056A10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x140007FB0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x14002BF80 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x14004BA9C (McTemplateK0qqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchPresentDurationPlane(__int64 a1, unsigned int a2, char a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // r8
  _BYTE v16[48]; // [rsp+50h] [rbp-38h] BYREF

  v4 = a2;
  if ( !a4 || !a1 )
  {
    WdLogSingleEntry2(1LL, a4, a1);
    WdLogGlobalForLineNumber = 14954;
    goto LABEL_15;
  }
  v8 = *(_DWORD *)(a1 + 48);
  if ( a2 >= v8 )
  {
    WdLogSingleEntry2(1LL, a2, v8);
    WdLogGlobalForLineNumber = 14960;
LABEL_15:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    v10 = *(_DWORD *)(a1 + 160);
    if ( *a4 >= v10 )
    {
      WdLogSingleEntry2(1LL, *a4, v10);
      v9 = *a4;
      WdLogGlobalForLineNumber = 14966;
      goto LABEL_15;
    }
  }
  _mm_lfence();
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v16, (unsigned __int64 *)(a1 + 2016), 1, 0);
  v11 = *(_QWORD *)(a1 + 8 * v4 + 3448);
  v12 = *(_DWORD *)(v11 + 3196);
  if ( a3 )
  {
    WdLogSingleEntry4(4LL, *a4, v4, v12, *(unsigned int *)(v11 + 3192));
    WdLogGlobalForLineNumber = 14979;
    if ( (byte_14008A204 & 0x20) != 0 )
      McTemplateK0qqqq_EtwWriteTransfer(
        v13,
        &EventSetPresentDurationPlane,
        v14,
        v4,
        *(_DWORD *)(v11 + 3196),
        *(_DWORD *)(v11 + 3192),
        *a4);
    *(_DWORD *)(v11 + 3196) = *a4;
  }
  else
  {
    *a4 = v12;
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v16);
  return 0LL;
}
