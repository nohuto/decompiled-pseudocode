/*
 * XREFs of ?GetResults@GammaFlashAsyncOperation@@UEAAJXZ @ 0x18034A330
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x180346674 (-ErrorCode@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Micros.c)
 */

__int64 __fastcall GammaFlashAsyncOperation::GetResults(GammaFlashAsyncOperation *this)
{
  signed __int32 v1; // edx
  char *v2; // rcx
  int v3; // ebx
  int v5; // [rsp+20h] [rbp-18h] BYREF
  char *v6; // [rsp+24h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 18);
  v2 = (char *)this + 16;
  LODWORD(v6) = 0;
  v5 = 0;
  _InterlockedCompareExchange(&v5, v1, 0);
  if ( v5 == 1 )
    goto LABEL_4;
  if ( v5 == 3 )
  {
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
      (__int64)v2,
      (volatile signed __int32 *)&v6);
LABEL_4:
    v3 = (int)v6;
    goto LABEL_5;
  }
  v3 = -2147418113;
LABEL_5:
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10A9,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
