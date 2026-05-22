/*
 * XREFs of ?PushStateToPrincipalOnPropertiesRefresh@BamoActivationControllerProxyImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBaseBamoPeerImpl@2Microsoft@@@Z @ 0x1800B0210
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoActivationControllerProxyImpl::PushStateToPrincipalOnPropertiesRefresh(
        BamoImpl::BamoActivationControllerProxyImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BaseBamoPeerImpl *a3)
{
  int v6; // eax
  int v7; // eax
  int v8; // [rsp+20h] [rbp-38h]
  __m128i v9; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  LOWORD(v8) = 91;
  v9 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)a3 + 36)), (__m128i)0LL);
  v6 = CoreUICallSend(a2, &v9, 2LL);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71A3,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v6,
      v8);
  (*(void (__fastcall **)(BamoImpl::BamoActivationControllerProxyImpl *))(*(_QWORD *)this + 80LL))(this);
  v9 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)((char *)a3 + 36)), (__m128i)0LL);
  LOWORD(v8) = 90;
  v7 = CoreUICallSend(a2, &v9, 2LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x71AB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v8);
}
