/*
 * XREFs of ?Initialize@?$AutoBuffer@E@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14006DB08
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x140257CC8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x140258880 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned char>::Initialize(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3,
        __int64 a4)
{
  void *v8; // rax
  __int64 result; // rax

  if ( a2 - 1 > 0xFFFFF )
  {
    WdLogSingleEntry1(2LL);
    result = 3221225990LL;
    WdLogGlobalForLineNumber = 69;
  }
  else
  {
    if ( a1[4] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 77;
    }
    v8 = (void *)operator new[](a2, 0x4E506456u, a4);
    a1[4] = v8;
    if ( v8 )
    {
      a1[5] = a2;
      a1[6] = a4;
      if ( a3 )
        memmove(v8, a3, a2);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(6LL);
      result = 3221225495LL;
      WdLogGlobalForLineNumber = 86;
    }
  }
  return result;
}
