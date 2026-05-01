/*
 * XREFs of ?GetNewDesktopButton@CVirtualDesktopBarElement@@UEAA?AV?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@XZ @ 0x1804CDE40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIVirtualDesktopNewElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopNewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804CDBA0 (--$As@UIVirtualDesktopNewElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-$C.c)
 */

__int64 *__fastcall CVirtualDesktopBarElement::GetNewDesktopButton(__int64 a1, __int64 *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IVirtualDesktopNewElement>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 544),
         a2);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC0,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
      (const char *)(unsigned int)v3);
  return a2;
}
