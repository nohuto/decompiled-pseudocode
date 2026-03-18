/*
 * XREFs of _DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator() @ 0x1401F4764
 * Callers:
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x140140030 (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     GreUpdateSharedDevCaps @ 0x1401C06BC (GreUpdateSharedDevCaps.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1401F55B0 (-DrvUpdateDisplayModeInPdev@@YAHAEAVPDEVOBJ@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall DrvUpdateDisplayModeInMdev_::_2_::_lambda_1_::operator()(
        __int64 a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY *a3)
{
  __int64 result; // rax
  unsigned int updated; // edi
  _DWORD *v6; // rdx
  ULONG_PTR v7; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    updated = DrvUpdateDisplayModeInPdev((struct PDEVOBJ *)&v8, a3);
    if ( updated )
    {
      v6 = *(_DWORD **)(v8 + 2584);
      *(_DWORD *)(a2 + 56) = v6[19];
      *(_DWORD *)(a2 + 60) = v6[20];
      *(_DWORD *)(a2 + 64) = v6[19] + v6[43];
      v7 = *(_QWORD *)a2;
      *(_DWORD *)(a2 + 68) = v6[20] + v6[44];
      GreUpdateSharedDevCaps(v7);
    }
    else
    {
      WdLogSingleEntry1(4LL, 6LL);
      WdLogGlobalForLineNumber = 27748;
    }
    return updated;
  }
  else
  {
    WdLogSingleEntry1(4LL, 1LL);
    result = 0LL;
    WdLogGlobalForLineNumber = 27729;
  }
  return result;
}
