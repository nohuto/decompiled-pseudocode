/*
 * XREFs of ?vLock@DCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x14007E3C0
 * Callers:
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x1400771BC (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007E1D8 (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     DxgkEngAcquireStableVisRgn @ 0x14007E270 (DxgkEngAcquireStableVisRgn.c)
 *     GreGradientFill @ 0x14007E5D4 (GreGradientFill.c)
 *     ?LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z @ 0x140310EB4 (-LookUpWndobjs@@YAHAEAVXDCOBJ@@PEAVDCOBJ@@PEAPEAUHDC__@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DCOBJ::vLock(DCOBJ *this, HDC a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int CurrentProcessId; // eax
  __int64 v6; // rsi
  unsigned int v7; // edi
  __int64 v8; // rbp
  struct _DC_ATTR *UserAttr; // rax
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx

  LOBYTE(a3) = 1;
  v4 = HmgLock(*((_QWORD *)this + 2), a2, a3, 0LL);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 2136) )
    {
      _InterlockedDecrement16((volatile signed __int16 *)(v4 + 12));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned int)GrepGetCurrentProcessBehaviorRestriction() != 1 )
  {
    GrepAuditBehaviorRestrictionViolations(1LL);
  }
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
      v6 = *(_QWORD *)this;
      v7 = CurrentProcessId & 0xFFFFFFFC;
      if ( **(_QWORD **)this )
      {
        v8 = HmgPentryFromPobj(*((_QWORD *)this + 2), *(_QWORD *)this);
      }
      else
      {
        v8 = v6 + 2152;
        *(_OWORD *)(v6 + 2152) = 0LL;
        *(_QWORD *)(v6 + 2168) = 0LL;
        *(_DWORD *)(v6 + 2160) = -2147483630;
        *(_QWORD *)(v6 + 2168) = GreEncodeUserModePointer(0LL);
      }
      if ( v7 == (*(_DWORD *)(v8 + 8) & 0xFFFFFFFE) )
      {
        UserAttr = DCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
            *(_QWORD *)this = 0LL;
            return;
          }
        }
      }
      *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      *((_DWORD *)this + 2) = 1;
    }
    v10 = *(_QWORD *)this;
    v11 = *(_DWORD *)(*(_QWORD *)this + 520LL);
    if ( (v11 & 4) != 0 )
    {
      v12 = v11 & 0xFFFFFFFB;
      *(_DWORD *)(v10 + 520) = v12;
      v13 = *(_QWORD *)(v10 + 976);
      v14 = *(_DWORD *)(v13 + 340);
      if ( (v12 & 1) != 0 )
        v15 = v14 | 0x16090;
      else
        v15 = v14 | 0x6090;
      *(_DWORD *)(v13 + 340) = v15;
    }
  }
}
