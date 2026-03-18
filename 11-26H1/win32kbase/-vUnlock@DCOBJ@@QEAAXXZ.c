/*
 * XREFs of ?vUnlock@DCOBJ@@QEAAXXZ @ 0x14003DDB0
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14003BBF4 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiGetDeviceCaps @ 0x14003C450 (NtGdiGetDeviceCaps.c)
 *     GreGetDeviceCaps @ 0x14003C780 (GreGetDeviceCaps.c)
 *     GreSelectBitmap @ 0x14003E380 (GreSelectBitmap.c)
 *     GreIntersectClipRect @ 0x14003F300 (GreIntersectClipRect.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140040038 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1401C57B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?RestoreAttributesHelper@DCOBJ@@AEAAXXZ @ 0x14003DE00 (-RestoreAttributesHelper@DCOBJ@@AEAAXXZ.c)
 */

void __fastcall DCOBJ::vUnlock(DCOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
      {
        DCOBJ::RestoreAttributesHelper(this);
        *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
        *((_DWORD *)this + 2) = 0;
      }
    }
    _InterlockedDecrement16((volatile signed __int16 *)(*(_QWORD *)this + 12LL));
    *(_QWORD *)this = 0LL;
  }
}
