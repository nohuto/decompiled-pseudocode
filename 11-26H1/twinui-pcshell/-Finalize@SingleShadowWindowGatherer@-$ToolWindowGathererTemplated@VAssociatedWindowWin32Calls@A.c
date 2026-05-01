/*
 * XREFs of ?Finalize@SingleShadowWindowGatherer@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJAEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@@Z @ 0x18008872C
 * Callers:
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180088250 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1800870E4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x18022A7D8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::SingleShadowWindowGatherer::Finalize(
        __int64 a1,
        _QWORD *a2)
{
  HWND v2; // rdi
  int WindowLongPtrW; // eax
  HWND Window; // rax
  HWND v8; // rcx
  const char *v9; // r9
  LONG bottom; // eax
  LONG right; // ecx
  LONG top; // edx
  LONG left; // r8d
  void *v14; // r8
  __int64 v15; // rdx
  int v16; // eax
  unsigned int v17; // edi
  _QWORD *v18; // rdx
  _DWORD v19[4]; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v2 = *(HWND *)(a1 + 32);
  if ( !v2 )
    return 0LL;
  WindowLongPtrW = GetWindowLongPtrW(v2, -16);
  if ( (WindowLongPtrW & 0x10000000) == 0 )
    return 2147500037LL;
  if ( (*(_QWORD *)&WindowLongPtrW & 0xC70000LL) != 0 )
    return 2147500037LL;
  if ( (GetWindowLongPtrW(v2, -20) & 0x80080) != 0x80080 )
    return 2147500037LL;
  Window = GetWindow(v2, 4u);
  if ( Window )
  {
    if ( IsWindowVisible(Window) )
      return 2147500037LL;
  }
  v8 = *(HWND *)(a1 + 32);
  Rect = 0LL;
  if ( !GetWindowRect(v8, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x171,
             (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v9);
  bottom = *(_DWORD *)(a1 + 28);
  right = *(_DWORD *)(a1 + 24);
  if ( Rect.bottom > bottom )
    bottom = Rect.bottom;
  top = *(_DWORD *)(a1 + 20);
  if ( Rect.right > right )
    right = Rect.right;
  left = *(_DWORD *)(a1 + 16);
  if ( Rect.top < top )
    top = Rect.top;
  v19[1] = top;
  if ( Rect.left < left )
    left = Rect.left;
  v19[2] = right;
  v19[0] = left;
  v19[3] = bottom;
  if ( !(unsigned __int8)Geometry::operator==(v19, &Rect) )
    return 0LL;
  v15 = a2[1];
  if ( v15 != a2[3]
    || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)a2,
                v15 + 1,
                v14),
        v17 = v16,
        v16 >= 0) )
  {
    v18 = (_QWORD *)(*a2 + 8 * a2[1]++);
    if ( v18 )
      *v18 = *(_QWORD *)(a1 + 32);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x174,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
    (const char *)(unsigned int)v16);
  return v17;
}
