/*
 * XREFs of OffsetWindow @ 0x14005B9D0
 * Callers:
 *     OffsetChildren @ 0x14005B830 (OffsetChildren.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x140065C34 (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DwmChildRectChange @ 0x140036870 (DwmChildRectChange.c)
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x14005BB60 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x14005BB80 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x14005BBA4 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     UpdateSprite @ 0x14007B8E4 (UpdateSprite.c)
 *     FindSpb @ 0x1402B0DE8 (FindSpb.c)
 */

LONG_PTR __fastcall OffsetWindow(tagWND *this, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  HRGN ExplicitClipRgn; // rax
  LONG_PTR result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  _DWORD *Spb; // rax
  struct tagPOINT v15; // [rsp+70h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 88LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 96LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 92LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 100LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 104LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 112LL) += a2;
  *(_DWORD *)(*((_QWORD *)this + 5) + 108LL) += a3;
  *(_DWORD *)(*((_QWORD *)this + 5) + 116LL) += a3;
  v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 136LL);
  if ( v6 > 1 )
    GreOffsetRgn(v6, a2, a3);
  ExplicitClipRgn = tagWND::GetExplicitClipRgn(this);
  if ( ExplicitClipRgn )
    GreOffsetRgn(ExplicitClipRgn, v5, v4);
  if ( *(char *)(*((_QWORD *)this + 5) + 16LL) < 0 )
  {
    Spb = (_DWORD *)FindSpb(this);
    Spb[6] += v5;
    Spb[8] += v5;
    Spb[9] += v4;
    Spb[7] += v4;
  }
  result = IsWindowDesktopComposed(this);
  if ( (_DWORD)result )
  {
    v11 = PtiCurrent(v10, v9);
    result = IsThreadDesktopComposed(v11);
    if ( (_DWORD)result )
    {
      v15 = 0LL;
      result = CWindowProp::GetProp<CVisRgnTrackerProp>(this, &v15);
      if ( (_DWORD)result )
        result = DwmChildRectChange(this);
    }
  }
  v12 = *((_QWORD *)this + 5);
  if ( (*(_BYTE *)(v12 + 26) & 8) != 0 )
  {
    v15 = *(struct tagPOINT *)(v12 + 88);
    UserSessionState = W32GetUserSessionState(v12, v9);
    return UpdateSprite(
             *(HDEV *)(*(_QWORD *)(UserSessionState + 56968) + 48LL),
             this,
             &v15,
             0LL,
             0LL,
             0LL,
             0,
             0LL,
             0,
             0LL);
  }
  return result;
}
