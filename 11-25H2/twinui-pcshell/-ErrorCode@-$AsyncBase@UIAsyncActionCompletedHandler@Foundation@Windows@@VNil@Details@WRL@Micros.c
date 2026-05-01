/*
 * XREFs of ?ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x180343A90
 * Callers:
 *     ?GetResults@GammaFlashAsyncOperation@@UEAAJXZ @ 0x1803470E0 (-GetResults@GammaFlashAsyncOperation@@UEAAJXZ.c)
 *     ?get_ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAJ@Z @ 0x180353450 (-get_ErrorCode@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
        __int64 a1,
        volatile signed __int32 *a2)
{
  signed __int32 v3; // edx
  __int64 result; // rax
  __int64 v5; // rcx
  signed __int32 v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 48);
  v6 = -2;
  result = (unsigned int)_InterlockedCompareExchange(&v6, v3, -2);
  if ( v6 == 3 )
  {
    result = (unsigned int)_InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 52), *a2);
    v5 = *(_QWORD *)(a1 + 40);
    if ( v5 )
      return SetRestrictedErrorInfo(v5);
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
