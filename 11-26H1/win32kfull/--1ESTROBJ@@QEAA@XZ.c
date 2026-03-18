/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x1401A6358
 * Callers:
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x14028A034 (-GrepGetStringBitmapW@@YAIAEAVDCOBJ@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ESTROBJ::~ESTROBJ(ESTROBJ *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 58);
  if ( (v1 & 0x801) != 0 )
  {
    if ( (v1 & 1) != 0 )
      FreeTmpBuffer(*((_QWORD *)this + 8));
    if ( (*((_DWORD *)this + 58) & 0x800) != 0 )
      Win32FreePool(*((void **)this + 33));
  }
}
