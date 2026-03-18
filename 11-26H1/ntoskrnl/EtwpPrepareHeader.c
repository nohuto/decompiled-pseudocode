/*
 * XREFs of EtwpPrepareHeader @ 0x140A13A08
 * Callers:
 *     EtwpFileModeCompress @ 0x1404003A8 (EtwpFileModeCompress.c)
 *     EtwpAddLogHeader @ 0x140A12D58 (EtwpAddLogHeader.c)
 *     EtwpBufferingModeFlush @ 0x140A13654 (EtwpBufferingModeFlush.c)
 * Callees:
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall EtwpPrepareHeader(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx

  v4 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( !v5 )
    v5 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 48) = v5;
  if ( v5 == 72 && a3 != 1 )
    return 2147483682LL;
  *(_WORD *)(a2 + 52) = a3 | 0x20;
  if ( (*(_QWORD *)(a1 + 800) || (a3 & 0x40) == 0) && (int)(*(_DWORD *)a2 - v5) > 0 )
    memset_0((void *)(a2 + v5), 255, (int)(*(_DWORD *)a2 - v5));
  if ( *(_DWORD *)(a2 + 48) == 72 )
    return (unsigned int)-2147483614;
  return v4;
}
