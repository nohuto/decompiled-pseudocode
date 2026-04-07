/*
 * XREFs of ?OnSoftwareCursorOffsetUpdated@CMagnifierControl@@UEAAJPEAVCVisual@@AEBUtagPOINT@@@Z @ 0x1800BB1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z @ 0x1800BB388 (-UpdateFullscreenBoundsFromSoftwareCursorOffset@CMagnifierControl@@AEAAJAEBUtagPOINT@@0@Z.c)
 */

__int64 __fastcall CMagnifierControl::OnSoftwareCursorOffsetUpdated(
        CMagnifierControl *this,
        struct CVisual *a2,
        const struct tagPOINT *a3)
{
  struct tagPOINT v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r8d
  struct tagPOINT *v9; // r9
  LONG v10; // r8d
  LONG v11; // edx
  LONG v12; // edx
  struct tagPOINT v14; // [rsp+20h] [rbp-20h] BYREF
  tagCURSORINFO pci; // [rsp+28h] [rbp-18h] BYREF
  struct tagPOINT Point; // [rsp+60h] [rbp+20h] BYREF
  tagLASTINPUTINFO plii; // [rsp+78h] [rbp+38h] BYREF

  if ( !*((_BYTE *)this + 112) )
    return 0LL;
  plii.dwTime = 0;
  memset(&pci, 0, sizeof(pci));
  pci.cbSize = 24;
  plii.cbSize = 8;
  GetLastInputInfo(&plii);
  if ( GetCursorInfo(&pci) )
  {
    Point = 0LL;
    v6 = 0LL;
    if ( GetCursorPos(&Point) )
    {
      v14.x = Point.x - a3->x;
      v14.y = Point.y - a3->y;
      v6 = v14;
    }
    v7 = *((_QWORD *)a2 + 9);
    v8 = *((_DWORD *)this + 42);
    if ( (HCURSOR)*((_QWORD *)this + 19) != pci.hCursor || *((_QWORD *)this + 20) != v7 )
    {
      *((_QWORD *)this + 19) = pci.hCursor;
      goto LABEL_12;
    }
    if ( v8 < 2 )
    {
      if ( v6.x == *((_DWORD *)this + 29) || v6.y == *((_DWORD *)this + 30) )
      {
        *((_DWORD *)this + 42) = v8 + 1;
        goto LABEL_13;
      }
LABEL_12:
      *((_DWORD *)this + 42) = 0;
      *((_QWORD *)this + 20) = v7;
      *(struct tagPOINT *)((char *)this + 116) = v6;
    }
  }
LABEL_13:
  if ( *((_QWORD *)this + 4) )
  {
    v9 = (struct tagPOINT *)((char *)this + 124);
    v10 = a3->x + *((_DWORD *)this + 29);
    v11 = a3->y + *((_DWORD *)this + 30);
    Point.x = v10;
    Point.y = v11;
    if ( v10 != *((_DWORD *)this + 31) || v11 != *((_DWORD *)this + 32) )
    {
      v12 = v11 - *((_DWORD *)this + 32);
      v14.x = v10 - v9->x;
      v14.y = v12;
      *v9 = Point;
      CMagnifierControl::UpdateFullscreenBoundsFromSoftwareCursorOffset(
        (CMagnifierControl *)((char *)this - 16),
        (const struct tagPOINT *)((char *)this + 124),
        &v14);
    }
  }
  return 0LL;
}
