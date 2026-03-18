/*
 * XREFs of SmmAllocateAdl @ 0x140041028
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140040E10 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

_QWORD *__fastcall SmmAllocateAdl(unsigned int a1, int a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  _QWORD *Pool2; // rbx
  int v8; // edx
  int v9; // r8d
  _QWORD *v10; // rax

  v4 = 0LL;
  v5 = 24LL;
  if ( !a2 )
    v5 = 8LL * a1 + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v5, 846428228LL);
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_14016972C);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 112;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        112,
        v8,
        v9,
        0LL,
        1,
        -1,
        (__int64)L"Failed to allocate SYSMM_ADL",
        112LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 0LL;
  }
  if ( (dword_1401696C0 & 0x20) != 0 )
  {
    v10 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 846428228LL);
    v4 = v10;
    if ( v10 )
    {
      *v10 = 0LL;
      v10[2] = 0LL;
      v10[3] = Pool2;
      goto LABEL_5;
    }
    _InterlockedIncrement(&dword_140169730);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 121;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate SYSMM_ADL_DEBUG",
      121LL,
      0LL,
      0LL,
      0LL,
      0LL);
    ExFreePoolWithTag(Pool2, 0);
    return 0LL;
  }
LABEL_5:
  *Pool2 = v4;
  *((_DWORD *)Pool2 + 2) = a1;
  *((_DWORD *)Pool2 + 3) = a2 == 1;
  if ( (unsigned int)(a2 - 1) > 1 )
    Pool2[2] = Pool2 + 3;
  else
    Pool2[2] = 0LL;
  return Pool2;
}
