/*
 * XREFs of VrpFindDiffHiveEntryForMountPointWithLock @ 0x14093BB0C
 * Callers:
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14093B92C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14093BD4C (VrpFindDiffHiveEntryForMountPoint.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408DB730 (RtlUpcaseUnicodeChar.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 */

char *__fastcall VrpFindDiffHiveEntryForMountPointWithLock(PCUNICODE_STRING String1)
{
  __int64 v1; // rdi
  wchar_t *Buffer; // rbx
  unsigned __int64 v3; // rax
  __int64 v5; // rsi
  wchar_t *v6; // rbp
  __int64 v7; // r10
  __int64 v8; // r8
  char *v9; // rbx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  WCHAR v12; // [rsp+50h] [rbp+8h]
  __int64 v13; // [rsp+50h] [rbp+8h]

  v1 = 0LL;
  Buffer = String1->Buffer;
  v3 = (unsigned __int64)String1->Length >> 1;
  String2 = 0LL;
  v5 = 314159LL;
  v6 = &Buffer[v3];
  while ( Buffer < v6 )
  {
    v12 = RtlUpcaseUnicodeChar(*Buffer++);
    v5 = HIBYTE(v12) + 37 * ((unsigned __int8)v12 + 37 * v5);
  }
  v7 = -1LL << (BYTE4(gLoadedDiffHivesLock.Header.WaitListHead.Blink) & 0x1F);
  v8 = v5 & v7;
  if ( !(HIDWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink) >> 5) )
    goto LABEL_12;
  v13 = v5 & v7;
  v9 = (char *)gLoadedDiffHivesLock.SListFaultAddress
     + 8
     * (((HIDWORD(gLoadedDiffHivesLock.Header.WaitListHead.Blink) >> 5) - 1) & (HIBYTE(v13)
                                                                              - 877075889
                                                                              + 442596621 * (unsigned __int8)v8
                                                                              + 37
                                                                              * (BYTE6(v13)
                                                                               + 37
                                                                               * (BYTE5(v13)
                                                                                + 37
                                                                                * (BYTE4(v13)
                                                                                 + 37
                                                                                 * (BYTE3(v13)
                                                                                  + 37 * (BYTE2(v13) + 37 * BYTE1(v13))))))));
  do
  {
    v9 = *(char **)v9;
    if ( ((unsigned __int8)v9 & 1) != 0 )
      goto LABEL_12;
  }
  while ( v8 != (v7 & *((_QWORD *)v9 + 1)) );
LABEL_8:
  while ( v9 )
  {
    String2.Buffer = (wchar_t *)(v9 + 68);
    String2.Length = *((_WORD *)v9 + 32);
    String2.MaximumLength = String2.Length;
    if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      return v9;
    while ( 1 )
    {
      v9 = *(char **)v9;
      if ( ((unsigned __int8)v9 & 1) != 0 )
        break;
      if ( (v5 & (-1LL << (BYTE4(gLoadedDiffHivesLock.Header.WaitListHead.Blink) & 0x1F))) == ((-1LL << (BYTE4(gLoadedDiffHivesLock.Header.WaitListHead.Blink) & 0x1F)) & *((_QWORD *)v9 + 1)) )
        goto LABEL_8;
    }
LABEL_12:
    v9 = 0LL;
  }
  return (char *)v1;
}
