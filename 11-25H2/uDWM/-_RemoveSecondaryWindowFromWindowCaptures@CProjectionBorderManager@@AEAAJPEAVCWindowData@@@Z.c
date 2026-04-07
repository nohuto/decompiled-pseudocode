/*
 * XREFs of ?_RemoveSecondaryWindowFromWindowCaptures@CProjectionBorderManager@@AEAAJPEAVCWindowData@@@Z @ 0x180073788
 * Callers:
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800902E0 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z @ 0x1800A9314 (-ForceRemoveSecondaryWindow@CapturedWindowRepresentation@@QEAAJPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::_RemoveSecondaryWindowFromWindowCaptures(
        struct _RTL_GENERIC_TABLE *this,
        struct CWindowData *a2)
{
  struct _RTL_GENERIC_TABLE *v2; // rdi
  PVOID v5; // rax
  CapturedWindowRepresentation *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 6;
  if ( RtlNumberGenericTableElements(this + 6) )
  {
    RestartKey = 0LL;
    while ( 1 )
    {
      v5 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
      if ( !v5 )
        break;
      v6 = (CapturedWindowRepresentation *)*((_QWORD *)v5 + 3);
      if ( v6 )
      {
        v7 = CapturedWindowRepresentation::ForceRemoveSecondaryWindow(v6, a2);
        v8 = v7;
        if ( v7 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x980,
            (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
            (const char *)(unsigned int)v7,
            v9);
          return v8;
        }
      }
    }
  }
  return 0LL;
}
