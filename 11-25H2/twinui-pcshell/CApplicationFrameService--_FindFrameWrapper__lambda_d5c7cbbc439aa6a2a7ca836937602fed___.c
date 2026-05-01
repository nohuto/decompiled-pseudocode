/*
 * XREFs of CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___ @ 0x1800697D0
 * Callers:
 *     ?SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z @ 0x1800696F0 (-SynchronizeFrameInformation@CApplicationFrameService@@UEAAJPEAUIApplicationFrameProxy@@@Z.c)
 * Callees:
 *     ?IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z @ 0x180068DF0 (-IsEqualByProxy@CApplicationFrameWrapper@@UEAA_NPEAUIApplicationFrameProxy@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1801831E0 (-InternalAddRef@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CApplicationFrameService::_FindFrameWrapper__lambda_d5c7cbbc439aa6a2a7ca836937602fed___(
        _QWORD *a1,
        struct IApplicationFrameProxy *a2,
        _QWORD *a3)
{
  unsigned __int64 i; // rdi
  unsigned int v7; // r9d
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 j; // rdi
  _QWORD *v11; // r8

  *a3 = 0LL;
  for ( i = 0LL; ; ++i )
  {
    v7 = -2147023728;
    if ( i >= a1[18] )
      break;
    if ( CApplicationFrameWrapper::IsEqualByProxy((CApplicationFrameWrapper *)(*(_QWORD *)(a1[17] + 8 * i) + 8LL), a2) )
    {
      v9 = a1[17] + 8 * i;
LABEL_11:
      Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalAddRef(v9, v8, v9, 0LL);
      *a3 = *v11;
      return v7;
    }
  }
  for ( j = 0LL; j < a1[14]; ++j )
  {
    if ( CApplicationFrameWrapper::IsEqualByProxy((CApplicationFrameWrapper *)(*(_QWORD *)(a1[13] + 8 * j) + 8LL), a2) )
    {
      v9 = a1[13] + 8 * j;
      goto LABEL_11;
    }
    v7 = -2147023728;
  }
  return v7;
}
