/*
 * XREFs of ?PerformDelayedInitialization@FullScreenPositioner@@UEAAJXZ @ 0x180231370
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z @ 0x180322818 (--$wnf_query_nothrow@H@wil@@YAJAEBU_WNF_STATE_NAME@@PEA_NPEAHPEAUWNF_CHANGE_STAMP_STRUCT@0@@Z.c)
 */

__int64 __fastcall FullScreenPositioner::PerformDelayedInitialization(FullScreenPositioner *this)
{
  void **v1; // rbx
  HRESULT Service; // eax
  bool v4; // bl
  unsigned int v5; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (void **)((char *)this + 184);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 23);
  Service = IUnknown_QueryService(
              *((IUnknown **)this - 1),
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
              v1);
  v4 = 0;
  v5 = Service;
  if ( Service >= 0 )
  {
    v8 = 0;
    v9 = 0;
    if ( (int)wil::wnf_query_nothrow<int>(&WNF_TMCN_ISTABLETMODE, &v8, &v9) >= 0 )
    {
      if ( v8 )
        v4 = v9 != 0;
    }
    *((_BYTE *)this + 360) = v4;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x126,
      (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)Service);
    return v5;
  }
}
