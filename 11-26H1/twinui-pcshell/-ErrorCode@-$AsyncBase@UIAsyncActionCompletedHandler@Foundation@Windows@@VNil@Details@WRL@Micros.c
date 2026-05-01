/*
 * XREFs of ?ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x180346674
 * Callers:
 *     ?GetResults@GammaFlashAsyncOperation@@UEAAJXZ @ 0x18034A330 (-GetResults@GammaFlashAsyncOperation@@UEAAJXZ.c)
 *     ?get_ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@UEAAJPEAJ@Z @ 0x1803597B0 (-get_ErrorCode@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Mi.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
        __int64 a1,
        volatile signed __int32 *a2)
{
  signed __int32 v2; // r8d
  __int64 result; // rax
  __int64 v4; // rcx
  signed __int32 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_DWORD *)(a1 + 56);
  v5 = -2;
  result = (unsigned int)_InterlockedCompareExchange(&v5, v2, -2);
  if ( v5 == 3 )
  {
    result = (unsigned int)_InterlockedCompareExchange(a2, *(_DWORD *)(a1 + 60), *a2);
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
      return SetRestrictedErrorInfo(v4);
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
