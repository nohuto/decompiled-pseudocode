/*
 * XREFs of ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x14004AF3C (UpdateMonitorForWindowAndChildren.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1401ED678 (zzzUpdateWindowsAfterModeChange.c)
 * Callees:
 *     OffsetChildren @ 0x1400186DC (OffsetChildren.c)
 *     OffsetWindow @ 0x140018874 (OffsetWindow.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

void __fastcall UpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1, __int64 a2)
{
  struct tagWLDBI *v2; // rbx
  const struct tagWND *v3; // rax
  const struct tagWND *v4; // rdi
  const struct tagWND *v5; // rcx
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( a1 )
  {
    v2 = a1;
    do
    {
      LOBYTE(a2) = 1;
      v3 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)v2 + 1), a2);
      v4 = v3;
      if ( v3 && (*((_DWORD *)v2 + 6) || IsChildWindowDpiBoundary(v3)) )
      {
        v5 = (const struct tagWND *)*((_QWORD *)v4 + 13);
        *(_OWORD *)v8 = *(_OWORD *)(*((_QWORD *)v5 + 5) + 104LL);
        LogicalToPhysicalInPlaceRectWithSubpixel(v5, v8, 0LL);
        PhysicalToLogicalInPlaceRectWithSubpixel(v4, v8, 0LL);
        a2 = *((_QWORD *)v4 + 5);
        v6 = v8[1] + *((_DWORD *)v2 + 5) - *(_DWORD *)(a2 + 92);
        v7 = v8[0] + *((_DWORD *)v2 + 4) - *(_DWORD *)(a2 + 88);
        if ( v7 || v6 )
        {
          OffsetWindow(v4, v7, v6);
          OffsetChildren(v4, v7, v6, 0LL);
        }
      }
      v2 = *(struct tagWLDBI **)v2;
    }
    while ( v2 );
  }
}
