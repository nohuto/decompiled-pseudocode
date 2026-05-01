/*
 * XREFs of ?UpdateScrollButtonEnablement@CScrollViewerHost@@UEAAXXZ @ 0x1804C8DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIScrollButtonContainer@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIScrollButtonContainer@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C8294 (--$As@UIScrollButtonContainer@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CScrollViewerHost::UpdateScrollButtonEnablement(CScrollViewerHost *this)
{
  __int64 (__fastcall ****v2)(_QWORD, GUID *, __int64 *); // rcx
  int v3; // eax
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 248);
  if ( *v2 )
  {
    v3 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IScrollButtonContainer>(v2, &v6);
    if ( v3 >= 0 )
    {
      if ( (*(double (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 48LL))(*((_QWORD *)this + 30)) >= 0.0001 )
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                             (*(double (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 48LL))(*((_QWORD *)this + 30))
                           - 100.0) & _xmm) < 0.0001;
      else
        v4 = 2LL;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v4);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB5,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\scrollviewerhostelement.cpp",
        (const char *)(unsigned int)v3);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
}
