/*
 * XREFs of ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x140097B00
 * Callers:
 *     ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x140267964 (-SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize(
        _QWORD *a1,
        unsigned __int64 a2,
        const void *a3)
{
  void *v6; // rax
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
    v6 = (void *)operator new[](a2, 0x4E506456u, 256LL);
    a1[4] = v6;
    if ( v6 )
    {
      a1[5] = a2;
      a1[6] = 256LL;
      if ( a3 )
        memmove(v6, a3, a2);
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
