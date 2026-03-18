/*
 * XREFs of ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x140046D20
 * Callers:
 *     ?PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z @ 0x1402D747C (-PopulateGdiDisplayModeFromPath@VIDPN_MGR@@SAJPEBVDMMVIDPNPRESENTPATH@@PEAU_CDD_DEVMODE@@@Z.c)
 *     BmlGetNextBestSourceMode @ 0x1402DE3F8 (BmlGetNextBestSourceMode.c)
 *     _BmlGetPathModeListForPath @ 0x1402DFF2C (_BmlGetPathModeListForPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::GetBitsPerPixel(DMMVIDPNSOURCEMODE *this, __int64 a2)
{
  int v2; // eax
  unsigned int v4; // ebx

  v2 = *((_DWORD *)this + 18);
  if ( v2 != 1 && (unsigned int)(v2 - 3) > 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 191;
  }
  switch ( *((_DWORD *)this + 24) )
  {
    case 0x14:
      return 24;
    case 0x15:
    case 0x16:
      return 32;
    case 0x17:
      return 16;
    case 0x20:
      return 32;
    case 0x29:
      return 8;
    default:
      v4 = 0;
      *(_QWORD *)(WdLogNewEntry5_WdTrace((unsigned int)(*((_DWORD *)this + 24) - 32), a2) + 24) = *((int *)this + 24);
      WdLogGlobalForLineNumber = 198;
      break;
  }
  return v4;
}
