/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositionerHandoffContext@@QEAAJPEAUIAppLayout@@_N@Z @ 0x1805001AC
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVTabletModePositionerHandoffContext@@AEAPEAUIAppLayout@@AEA_N@Z @ 0x180500018 (--$MakeAndInitialize@VTabletModePositionerHandoffContext@@V1@AEAPEAUIAppLayout@@AEA_N@Details@WR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TabletModePositionerHandoffContext::RuntimeClassInitialize(
        TabletModePositionerHandoffContext *this,
        struct IAppLayout *a2,
        char a3)
{
  __int64 (__fastcall *v6)(struct IAppLayout *, GUID *, char *); // rdi
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(__int64 (__fastcall **)(struct IAppLayout *, GUID *, char *))(*(_QWORD *)a2 + 192LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
  v7 = v6(a2, &GUID_7baad876_2fc5_4561_93e1_17e868a174ed, (char *)this + 16);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *((_BYTE *)this + 24) = a3;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A,
      (int)"pcshell\\twinui\\tabletmode\\lib\\handoffcontext.cpp",
      (const char *)(unsigned int)v7);
    return v8;
  }
}
