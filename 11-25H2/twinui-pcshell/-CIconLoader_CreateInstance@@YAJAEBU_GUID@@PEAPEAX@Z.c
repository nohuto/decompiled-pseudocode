/*
 * XREFs of ?CIconLoader_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1801C3BC0
 * Callers:
 *     ?_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x1800F9DAC (-_InitChildServices@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCIconLoader@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoader@@@Z @ 0x1801C3C9C (--$MakeAndInitialize@VCIconLoader@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCIconLoader@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CIconLoader_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v10)(_QWORD, GUID *, void **); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v10);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CIconLoader,CIconLoader,>(&v10);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v6 = (**v10)(v10, &GUID_f622d8ac_35d3_4374_9148_66f1f7894191, a2);
    v4 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
        (const char *)(unsigned int)v6);
    v7 = (__int64)v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCA,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\iconloader.cpp",
      (const char *)(unsigned int)v3);
    v5 = (__int64)v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return v4;
}
