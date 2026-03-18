/*
 * XREFs of ?bValid@OPTAPIDCOBJ@@QEAA_NXZ @ 0x1400B7374
 * Callers:
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ?GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z @ 0x1400173F4 (-GrepCreateCompatibleBitmap@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKPEAU_LUID@@PEAG@Z.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x140073700 (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400B5D94 (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x1400B75A0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x14016A02C (-bSpUpdateSprite@@YAHPEAVSPRITE@@AEAVOPTAPIDCOBJ@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTIO.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x14016A6F8 (-bSpUpdateShape@@YAHPEAVSPRITE@@KAEAVOPTAPIDCOBJ@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x14016AE30 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 *     NtGdiTransparentBlt @ 0x14016B240 (NtGdiTransparentBlt.c)
 *     ?GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z @ 0x14016B868 (-GrepMaskBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHPEAUHBITMAP__@@HHKK@Z.c)
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x14016BC94 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 *     NtGdiPlgBlt @ 0x14031E570 (NtGdiPlgBlt.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400FD974 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x140155DFC (-vUnlock@DCOBJ@@QEAAXXZ.c)
 */

char __fastcall OPTAPIDCOBJ::bValid(OPTAPIDCOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int CurrentProcessId; // eax
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rbp
  struct _DC_ATTR *UserAttr; // rax
  __int64 v12; // rax
  int v14; // eax
  int v15; // eax

  if ( *(_QWORD *)this )
    return 1;
  if ( *((_BYTE *)this + 105) != 1 )
  {
    LOBYTE(a3) = 1;
    v4 = HmgLock(*((_QWORD *)this + 2), *((_QWORD *)this + 12), a3, 0LL);
    *(_QWORD *)this = v4;
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 2136) )
      {
        _InterlockedDecrement16((volatile signed __int16 *)(v4 + 12));
        *(_QWORD *)this = 0LL;
      }
    }
    else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction(v6) != 1 )
    {
      GrepAuditBehaviorRestrictionViolations(1LL);
    }
    if ( *(_QWORD *)this )
    {
      if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
      {
        CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
        v8 = *(_QWORD *)this;
        v9 = CurrentProcessId & 0xFFFFFFFC;
        if ( **(_QWORD **)this )
        {
          v10 = HmgPentryFromPobj(*((_QWORD *)this + 2), v8);
        }
        else
        {
          v10 = v8 + 2152;
          *(_OWORD *)(v8 + 2152) = 0LL;
          *(_QWORD *)(v8 + 2168) = 0LL;
          *(_DWORD *)(v8 + 2160) = -2147483630;
          *(_QWORD *)(v8 + 2168) = GreEncodeUserModePointer(0LL);
        }
        if ( v9 == (*(_DWORD *)(v10 + 8) & 0xFFFFFFFE) )
        {
          UserAttr = DCOBJ::GetUserAttr(this);
          if ( UserAttr )
          {
            if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
            {
              _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
              *(_QWORD *)this = 0LL;
              goto LABEL_15;
            }
          }
        }
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      v5 = *(_QWORD *)this;
      v6 = *(unsigned int *)(*(_QWORD *)this + 520LL);
      if ( (v6 & 4) != 0 )
      {
        v6 = (unsigned int)v6 & 0xFFFFFFFB;
        *(_DWORD *)(v5 + 520) = v6;
        v5 = *(_QWORD *)(v5 + 976);
        v14 = *(_DWORD *)(v5 + 340);
        if ( (v6 & 1) != 0 )
          v15 = v14 | 0x16090;
        else
          v15 = v14 | 0x6090;
        *(_DWORD *)(v5 + 340) = v15;
      }
    }
LABEL_15:
    v12 = *(_QWORD *)this;
    *((_BYTE *)this + 105) = 1;
    if ( v12 )
    {
      if ( *(_WORD *)(v12 + 12) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5);
      if ( *(_WORD *)(*(_QWORD *)this + 12LL) == 1 )
        return 1;
      DCOBJ::vUnlock(this);
    }
  }
  return 0;
}
