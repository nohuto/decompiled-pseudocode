/*
 * XREFs of ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x14000720C
 * Callers:
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140345F38 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DMM::AutoBuffer<unsigned short>::Initialize(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0xFFFFF )
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
    v4 = operator new[](a2, 1313891414LL, 256LL);
    a1[4] = v4;
    if ( v4 )
    {
      a1[5] = a2;
      result = 0LL;
      a1[6] = 256LL;
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
