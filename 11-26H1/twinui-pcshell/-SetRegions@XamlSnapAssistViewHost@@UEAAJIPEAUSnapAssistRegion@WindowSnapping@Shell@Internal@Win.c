/*
 * XREFs of ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x180201430
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@QEAAAEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@$$QEAU234567@@Z @ 0x1805BDC8C (--$emplace_back@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vector@USnapAs.c)
 *     ??$_Reallocate@$0A@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x1806A8670 (--$_Reallocate@$0A@@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$a.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetRegions(
        XamlSnapAssistViewHost *this,
        unsigned int a2,
        struct ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *a3,
        const char *a4)
{
  char *v6; // rdi
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = (char *)this + 528;
  v7 = *((_QWORD *)this + 66);
  if ( v7 != *((_QWORD *)this + 67) )
    *((_QWORD *)this + 67) = v7;
  try
  {
    v11 = a2;
    if ( a2 > (unsigned __int64)((__int64)(*((_QWORD *)this + 68) - *((_QWORD *)this + 66)) >> 5) )
      std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate<0>(
        (char *)this + 528,
        &v11);
    for ( i = 0; i < a2; ++i )
      std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::emplace_back<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>(
        v6,
        (char *)a3 + 32 * i);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E4,
                           (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
