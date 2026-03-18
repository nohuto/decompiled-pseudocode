/*
 * XREFs of ?bEnumPath@XCLIPOBJ@@QEAAHPEAU_PATHOBJ@@KPEAU_CLIPLINE@@H@Z @ 0x1400E1918
 * Callers:
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     NtGdiPATHOBJ_bEnumClipLines @ 0x14032FA30 (NtGdiPATHOBJ_bEnumClipLines.c)
 *     PATHOBJ_bEnumClipLines @ 0x140334FB0 (PATHOBJ_bEnumClipLines.c)
 * Callees:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1400E1A18 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 *     ?bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z @ 0x1400E1B48 (-bGetLine@XCLIPOBJ@@IEAAHPEAVEPATHOBJ@@PEBK@Z.c)
 */

_BOOL8 __fastcall XCLIPOBJ::bEnumPath(
        XCLIPOBJ *this,
        struct _PATHOBJ *a2,
        unsigned int a3,
        struct _CLIPLINE *a4,
        int a5)
{
  const unsigned int *v9; // r8
  __int64 v10; // r10

  a4->c = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    return 0LL;
  while ( 1 )
  {
    if ( !(unsigned int)XCLIPOBJ::bEnumLine(this, a3, a4) )
      XCLIPOBJ::bGetLine(this, (struct EPATHOBJ *)a2, v9);
    if ( a4->c )
      break;
    if ( (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) != 0 )
    {
      v10 = *((_QWORD *)this + 18);
      goto LABEL_9;
    }
  }
  v10 = *((_QWORD *)this + 18);
  if ( (*(_DWORD *)(v10 + 24) & 0x2000000) == 0 )
    return (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0;
LABEL_9:
  if ( *(int *)(v10 + 180) > 0 )
  {
    if ( a5 )
      **(_DWORD **)(v10 + 184) = (unsigned __int16)(*(_DWORD *)(v10 + 176) % *(_DWORD *)(v10 + 200)) | ((unsigned __int16)(*(_DWORD *)(v10 + 176) / *(_DWORD *)(v10 + 200)) << 16);
  }
  return (*(_DWORD *)(*((_QWORD *)this + 18) + 24LL) & 0x2000000) == 0;
}
