/*
 * XREFs of ??1ESTROBJ@@QEAA@XZ @ 0x14017EF58
 * Callers:
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400BF184 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ?GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x14026FC74 (-GrepGetStringBitmapW@@YAIAEAVUDCOBJ@@PEAGIPEAUSTRINGBITMAP@@IW4EntryPoint@RFONTOBJ@@@Z.c)
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
