/*
 * XREFs of ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00
 * Callers:
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14003D020 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1DCMEMOBJ@@QEAA@XZ @ 0x14003DC30 (--1DCMEMOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0 (-vUnlock@DCOBJ@@QEAAXXZ.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GrepDeleteDC @ 0x14003ECB0 (GrepDeleteDC.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x140019EC0 (HmgPentryFromPobj.c)
 *     ?RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z @ 0x14003DB50 (-RestoreAttributes@DC@@QEAAXPEAU_DC_ATTR@@@Z.c)
 *     ?GreDecodeUserModePointer@@YAPEAXPEAX@Z @ 0x140041EB0 (-GreDecodeUserModePointer@@YAPEAXPEAX@Z.c)
 */

void __fastcall DCOBJ::RestoreAttributesHelper(DCOBJ *this)
{
  unsigned int CurrentProcessId; // eax
  __int64 v3; // rdx
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  struct _DC_ATTR *v8; // rax

  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  v3 = *(_QWORD *)this;
  v4 = CurrentProcessId & 0xFFFFFFFC;
  if ( **(_QWORD **)this )
  {
    v5 = HmgPentryFromPobj(*((_QWORD *)this + 2));
  }
  else
  {
    v5 = v3 + 2152;
    *(_OWORD *)(v3 + 2152) = 0LL;
    *(_QWORD *)(v3 + 2168) = 0LL;
    *(_DWORD *)(v3 + 2160) = -2147483630;
    *(_QWORD *)(v3 + 2168) = 0LL;
  }
  if ( v4 == (*(_DWORD *)(v5 + 8) & 0xFFFFFFFE) )
  {
    v6 = *(_QWORD *)this;
    if ( **(_QWORD **)this )
    {
      v7 = HmgPentryFromPobj(*((_QWORD *)this + 2));
    }
    else
    {
      v7 = v6 + 2152;
      *(_OWORD *)(v6 + 2152) = 0LL;
      *(_QWORD *)(v6 + 2168) = 0LL;
      *(_DWORD *)(v6 + 2160) = -2147483630;
      *(_QWORD *)(v6 + 2168) = 0LL;
    }
    if ( v7 )
    {
      v8 = (struct _DC_ATTR *)GreDecodeUserModePointer(*(void **)(v7 + 16));
      if ( v8 )
        DC::RestoreAttributes(*(DC **)this, v8);
    }
  }
}
