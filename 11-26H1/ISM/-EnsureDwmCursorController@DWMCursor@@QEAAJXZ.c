/*
 * XREFs of ?EnsureDwmCursorController@DWMCursor@@QEAAJXZ @ 0x1801CCF20
 * Callers:
 *     ?CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z @ 0x1801CBC08 (-CreateMotionTransformAndVerifySend@DWMCursorBroker@@AEAAJPEAVDWMCursor@@I@Z.c)
 *     ?Initialize@DWMCursor@@QEAAJXZ @ 0x1801CD08C (-Initialize@DWMCursor@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z @ 0x1800FBD00 (-GetCursorDeviceIdForInputType@@YA_KW4InputType@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::EnsureDwmCursorController(DWMCursor *this)
{
  unsigned __int64 CursorDeviceIdForInputType; // rdi
  int CursorController; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  CursorDeviceIdForInputType = GetCursorDeviceIdForInputType(*((_DWORD *)this + 13));
  if ( !CursorDeviceIdForInputType )
  {
    CursorController = -2147024809;
    v4 = 90LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)CursorController);
    return (unsigned int)CursorController;
  }
  v6 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CursorController = MilCompositionEngine_CreateCursorController(
                       CursorDeviceIdForInputType,
                       (struct IDwmCursorController **)this + 9);
  if ( CursorController < 0 )
  {
    v4 = 95LL;
    goto LABEL_3;
  }
  return 0LL;
}
