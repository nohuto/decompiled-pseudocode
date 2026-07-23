/*
 * XREFs of DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C
 * Callers:
 *     MiSegmentDelete @ 0x140A8752C (MiSegmentDelete.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x140AC9EC0 (MiSwitchBaseAddress.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x1404D8D14 (DbgUnicodeStringToAnsiString.c)
 *     DebugService2 @ 0x140536E00 (DebugService2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgUnLoadImageSymbolsUnicode(PCUNICODE_STRING SourceString, __int64 a2, __int64 a3)
{
  PVOID P[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  *(_OWORD *)P = 0LL;
  if ( !(unsigned int)DbgUnicodeStringToAnsiString((PANSI_STRING)P, SourceString) )
    return 0LL;
  v7[0] = a2;
  v7[1] = a3;
  v7[2] = 0LL;
  DebugService2(P, v7, 4LL);
  ExFreePoolWithTag(P[1], 0);
  return 1LL;
}
