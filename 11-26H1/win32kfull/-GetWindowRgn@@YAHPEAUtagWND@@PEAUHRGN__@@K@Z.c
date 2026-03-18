/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x14004DFF4
 * Callers:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x14004DB50 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1401DA998 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CalcVisRgn @ 0x14004E180 (CalcVisRgn.c)
 *     GreScaleRgnToDestLogPixel @ 0x140295600 (GreScaleRgnToDestLogPixel.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  char *v3; // rbx
  unsigned int RgnBox; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  HRGN v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h] BYREF

  v3 = (char *)a1 + 40;
  v13 = a2;
  if ( (a3 & 2) != 0 )
  {
    v14 = 0LL;
    CalcVisRgn(&v13);
    RgnBox = GreGetRgnBox(v13, &v14);
  }
  else
  {
    v10 = *(_QWORD *)(*(_QWORD *)v3 + 168LL);
    if ( !v10 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v10, 0LL, 5LL);
  }
  v8 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  if ( (*(_WORD *)(*(_QWORD *)v3 + 42LL) & 0x2FFF) != 0x29D )
    v8 = GreOffsetRgn(
           v13,
           (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 88LL),
           (unsigned int)-*(_DWORD *)(*(_QWORD *)v3 + 92LL));
  if ( (a3 & 0x20) != 0
    && PtiCurrent(v7)
    && *((_QWORD *)PtiCurrent(v11) + 61)
    && (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrent(v12) + 61) + 8LL) + 64LL) & 1) != 0
    && (*(_DWORD *)(*(_QWORD *)v3 + 288LL) & 0x4000000F) == 0x40000000 )
  {
    GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(*(_QWORD *)v3 + 284LL), v13);
  }
  return v8;
}
