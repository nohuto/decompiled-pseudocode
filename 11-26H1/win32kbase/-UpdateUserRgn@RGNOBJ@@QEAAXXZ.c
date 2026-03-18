/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x14001E310
 * Callers:
 *     GreGetRegionData @ 0x1400103C0 (GreGetRegionData.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreSetRectRgn @ 0x14001D700 (GreSetRectRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x14001D9B8 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x14001DA20 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x14001DE10 (SetRectRgnIndirect.c)
 *     GreOffsetRgn @ 0x1400208C0 (GreOffsetRgn.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     GreGetRgnBox @ 0x140022720 (GreGetRgnBox.c)
 *     bDeleteRegion @ 0x1400555E0 (bDeleteRegion.c)
 *     GreRectInRegion @ 0x1400A8460 (GreRectInRegion.c)
 *     GrePtInRegion @ 0x140106D90 (GrePtInRegion.c)
 *     GreEqualRgn @ 0x14012AF60 (GreEqualRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  __int64 SessionState; // rax
  __int64 v3; // rax
  _DWORD *v4; // rax
  _DWORD *v5; // rdi

  if ( *(_QWORD *)this )
  {
    SessionState = W32GetSessionState(this);
    v3 = HmgPentryFromPobj(*(_QWORD *)(SessionState + 88));
    v4 = GreDecodeUserModePointer(*(void **)(v3 + 16));
    v5 = v4;
    if ( v4 )
    {
      if ( (*v4 & 0x10) != 0 )
      {
        v4[1] = RGNOBJ::iComplexity(this);
        *(_OWORD *)(v5 + 2) = *(_OWORD *)(*(_QWORD *)this + 52LL);
      }
    }
  }
}
