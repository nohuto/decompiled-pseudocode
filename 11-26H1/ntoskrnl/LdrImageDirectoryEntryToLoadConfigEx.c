/*
 * XREFs of LdrImageDirectoryEntryToLoadConfigEx @ 0x140429E94
 * Callers:
 *     LdrImageDirectoryEntryToLoadConfig @ 0x1407809CC (LdrImageDirectoryEntryToLoadConfig.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1408738F0 (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrInitSecurityCookie @ 0x140B07DD4 (LdrInitSecurityCookie.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfigEx(unsigned int *a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdi
  _DWORD *v4; // rax
  _DWORD *v5; // rbp
  ULONG Size; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  Size = 0;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = 0LL;
    if ( !a1 )
      return 0LL;
  }
  else if ( *(_WORD *)a1 == 23117
         && (v3 = (unsigned __int64)a1 + a1[15], v3 >= (unsigned __int64)a1)
         && ((unsigned __int64)a1 >= 0x7FFFFFFF0000LL || v3 + 264 <= 0x7FFFFFFF0000LL && v3 + 264 > v3) )
  {
    if ( *(_DWORD *)v3 != 17744 )
      v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = RtlImageDirectoryEntryToData(a1, 1u, 0xAu, &Size);
  v5 = v4;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    ProbeForRead(v4, 4uLL, 1u);
  if ( !v5 || !Size || Size != *v5 )
    return 0LL;
  if ( *(_WORD *)(v3 + 4) == 0x8664 )
    return v5;
  return (_DWORD *)v1;
}
