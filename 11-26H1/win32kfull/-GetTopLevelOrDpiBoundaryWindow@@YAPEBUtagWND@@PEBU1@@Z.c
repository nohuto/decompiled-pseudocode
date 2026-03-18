/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928
 * Callers:
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14002C070 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14008C0D8 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x14008FCC0 (PhysicalToLogicalInPlacePointWithParent.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14002EDBC (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 */

const struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(const struct tagWND *a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  v3 = a1;
  v4 = *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96);
  if ( *(_DWORD *)(v4 + 120) )
  {
    while ( v3 )
    {
      v5 = *((_QWORD *)v3 + 13);
      if ( v5 )
      {
        v6 = *((_QWORD *)v3 + 3);
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( v7 )
          {
            if ( v5 == *(_QWORD *)(v7 + 24) )
              break;
          }
        }
      }
      if ( IsChildWindowDpiBoundary(v3) )
        break;
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  else
  {
    while ( v3 && !(unsigned int)IsTopLevelWindow(v3, v4) )
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
  }
  return v3;
}
