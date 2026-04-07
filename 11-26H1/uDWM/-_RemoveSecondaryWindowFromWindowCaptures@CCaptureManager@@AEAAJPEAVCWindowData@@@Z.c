/*
 * XREFs of ?_RemoveSecondaryWindowFromWindowCaptures@CCaptureManager@@AEAAJPEAVCWindowData@@@Z @ 0x180066260
 * Callers:
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x18007EC90 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180083BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x18009C4D4 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CCaptureManager::_RemoveSecondaryWindowFromWindowCaptures(
        CCaptureManager *this,
        struct CWindowData *a2)
{
  _QWORD *v4; // rdi
  _QWORD *i; // rbx
  CapturedWindowRepresentation *v6; // rcx
  int v7; // eax
  unsigned int v8; // esi
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 3) )
  {
    v4 = (_QWORD *)*((_QWORD *)this + 2);
    for ( i = (_QWORD *)*v4; i != v4; i = (_QWORD *)*i )
    {
      v6 = (CapturedWindowRepresentation *)i[6];
      if ( v6 )
      {
        v7 = CapturedWindowRepresentation::ForceRemoveSecondaryWindow(v6, a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8F8,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
            (const char *)(unsigned int)v7,
            v9);
          return v8;
        }
      }
    }
  }
  return 0LL;
}
