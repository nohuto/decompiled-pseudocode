/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x14040C74C
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x14077DECC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x14086D520 (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrInitSecurityCookie @ 0x140B05D40 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(unsigned __int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // rbp
  int v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  v8 = 0;
  if ( a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = 0LL;
    if ( !a1 )
      return 0LL;
  }
  else if ( *(_WORD *)a1 == 23117
         && (v4 = a1 + *(unsigned int *)(a1 + 60), v4 >= a1)
         && (a1 >= 0x7FFFFFFF0000LL || v4 + 264 <= 0x7FFFFFFF0000LL && v4 + 264 > v4) )
  {
    if ( *(_DWORD *)v4 != 17744 )
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  LOBYTE(a2) = 1;
  v5 = (_DWORD *)RtlImageDirectoryEntryToData(a1, a2, 10LL, &v8);
  v6 = v5;
  if ( a1 < 0x7FFFFFFF0000LL )
    ProbeForRead(v5, 4uLL, 1u);
  if ( !v6 || !v8 || v8 != *v6 )
    return 0LL;
  if ( *(_WORD *)(v4 + 4) == 0x8664 )
    return v6;
  return (_DWORD *)v2;
}
