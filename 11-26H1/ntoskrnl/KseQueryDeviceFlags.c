/*
 * XREFs of KseQueryDeviceFlags @ 0x1409D7790
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     KsepEvntLogFlagsApplied @ 0x14050E58C (KsepEvntLogFlagsApplied.c)
 *     KseQueryDeviceData @ 0x1409D6F80 (KseQueryDeviceData.c)
 */

__int64 __fastcall KseQueryDeviceFlags(PCWSTR SourceString, PCWSTR a2, _QWORD *a3)
{
  int v6; // edi
  int v8; // esi
  __int64 v9; // rbx
  _BYTE var30[72]; // [rsp+30h] [rbp-30h] BYREF
  int v11; // [rsp+98h] [rbp+38h] BYREF

  *(_QWORD *)&var30[8] = 0LL;
  if ( dword_140E66D14 != 2 || (KseEngine & 2) != 0 )
    return (unsigned int)-1073741275;
  if ( !SourceString || !a2 || !a3 )
    return (unsigned int)-1073741811;
  *a3 = 0LL;
  v11 = 11;
  *(_DWORD *)var30 = 8;
  v6 = KseQueryDeviceData(SourceString, a2, &v11, (struct _KLOCK_ENTRIES *)var30, &var30[8]);
  if ( v6 >= 0 )
  {
    v8 = v11;
    if ( (v11 & 0xCFFFFFFF) == 0xB )
    {
      memset(&var30[16], 0, 32);
      RtlInitUnicodeString((PUNICODE_STRING)&var30[32], SourceString);
      RtlInitUnicodeString((PUNICODE_STRING)&var30[16], a2);
      v9 = *(_QWORD *)&var30[8];
      KsepEvntLogFlagsApplied(
        (unsigned __int16 *)&var30[32],
        (unsigned __int16 *)&var30[16],
        (v8 & 0x10000000) == 0,
        *(_QWORD *)&var30[8]);
      *a3 = v9;
      return (unsigned int)v6;
    }
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v6;
}
