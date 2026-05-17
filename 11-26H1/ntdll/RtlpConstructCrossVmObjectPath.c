/*
 * XREFs of RtlpConstructCrossVmObjectPath @ 0x18014611C
 * Callers:
 *     RtlConstructCrossVmMutexPath @ 0x180146110 (RtlConstructCrossVmMutexPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1800323C0 (RtlAppendUnicodeToString.c)
 *     RtlpAllocateAtom @ 0x180037BF0 (RtlpAllocateAtom.c)
 *     RtlpSysVolFree @ 0x180038000 (RtlpSysVolFree.c)
 *     RtlFreeAnsiString @ 0x180056B20 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     RtlStringFromGUIDEx @ 0x1800D5C80 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall RtlpConstructCrossVmObjectPath(_OWORD *a1, unsigned int *a2, unsigned int *a3)
{
  __int64 v6; // rdi
  int appended; // ebx
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-10h] BYREF

  v9 = 0LL;
  WORD1(v9) = 112;
  UnicodeString = 0LL;
  v11 = 0LL;
  if ( a3 )
    WORD1(v9) = 190;
  *((_QWORD *)&v9 + 1) = RtlpAllocateAtom(a3 != 0LL ? 190LL : 112LL);
  v6 = *((_QWORD *)&v9 + 1);
  if ( *((_QWORD *)&v9 + 1) )
  {
    appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)L" \"");
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, (__int64)&UnicodeString, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&UnicodeString),
           appended < 0)
       || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(a2, (__int64)&v11, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&v11), appended < 0) )
    {
      v6 = *((_QWORD *)&v9 + 1);
    }
    else
    {
      v6 = 0LL;
      *a1 = v9;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v11);
  if ( v6 )
    RtlpSysVolFree(v6);
  return (unsigned int)appended;
}
