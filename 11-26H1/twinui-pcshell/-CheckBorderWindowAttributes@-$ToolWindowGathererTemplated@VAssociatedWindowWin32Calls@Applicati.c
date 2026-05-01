/*
 * XREFs of ?CheckBorderWindowAttributes@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x180089044
 * Callers:
 *     ?Finalize@ChromeWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008857C (-Finalize@ChromeWindowGatherer@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applica.c)
 * Callees:
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x18030AB14 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAttributes(
        __int128 *a1,
        HWND a2,
        __int64 a3,
        __int64 a4)
{
  int WindowLongPtrW; // eax
  HWND Window; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  WindowLongPtrW = GetWindowLongPtrW(a2, -16);
  if ( (WindowLongPtrW & 0x10000000) == 0 )
    return 2147500037LL;
  if ( (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) != 0 )
    return 2147500037LL;
  if ( (GetWindowLongPtrW(a2, -20) & 0x80080) != 0x80080 )
    return 2147500037LL;
  Window = GetWindow(a2, 4u);
  if ( Window )
  {
    if ( IsWindowVisible(Window) )
      return 2147500037LL;
  }
  v10 = *a1;
  return ((__int64 (__fastcall *)(__int128 *, HWND, _QWORD, __int64))ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::CheckBorderWindowAlignment)(
           &v10,
           a2,
           0LL,
           a4);
}
