/*
 * XREFs of ?SetRegions@XamlSnapAssistViewHost@@UEAAJIPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@ABI@@@Z @ 0x18020E220
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAPEAUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@QEAU234567@AEBU234567@@Z @ 0x180599870 (--$_Emplace_reallocate@AEBUSnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@-$vect.c)
 *     ??$_Reallocate@$0A@@?$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V?$allocator@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@@std@@@std@@AEAAXAEA_K@Z @ 0x180681400 (--$_Reallocate@$0A@@-$vector@USnapAssistRegion@WindowSnapping@Shell@Internal@Windows@winrt@@V-$a.c)
 */

__int64 __fastcall XamlSnapAssistViewHost::SetRegions(
        XamlSnapAssistViewHost *this,
        unsigned int a2,
        struct ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion *a3,
        const char *a4)
{
  char *v6; // rbx
  __int64 v7; // rax
  unsigned int i; // edi
  _OWORD *v9; // r8
  _OWORD *v10; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  v6 = (char *)this + 528;
  v7 = *((_QWORD *)this + 66);
  if ( v7 != *((_QWORD *)this + 67) )
    *((_QWORD *)this + 67) = v7;
  try
  {
    v13 = a2;
    if ( a2 > (unsigned __int64)((__int64)(*((_QWORD *)this + 68) - *((_QWORD *)this + 66)) >> 5) )
      std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Reallocate<0>(
        (char *)this + 528,
        &v13);
    for ( i = 0; i < a2; ++i )
    {
      v9 = (_OWORD *)((char *)a3 + 32 * i);
      v10 = (_OWORD *)*((_QWORD *)v6 + 1);
      if ( v10 == *((_OWORD **)v6 + 2) )
      {
        std::vector<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion>::_Emplace_reallocate<winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion const &>(
          v6,
          v10,
          v9);
      }
      else
      {
        *v10 = *v9;
        v10[1] = v9[1];
        *((_QWORD *)v6 + 1) += 32LL;
      }
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1E4,
                           (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewhost.cpp",
                           a4);
  }
  return result;
}
