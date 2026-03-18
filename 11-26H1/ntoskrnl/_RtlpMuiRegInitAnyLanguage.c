/*
 * XREFs of _RtlpMuiRegInitAnyLanguage @ 0x140B2DD14
 * Callers:
 *     _RtlpMuiRegAddBaseLanguage @ 0x1408A9884 (_RtlpMuiRegAddBaseLanguage.c)
 *     RtlpMuiRegAddLanguageByName @ 0x140B2DC3C (RtlpMuiRegAddLanguageByName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     RtlCultureNameToLCID @ 0x140779FB0 (RtlCultureNameToLCID.c)
 *     RtlpMuiRegGetOrAddString @ 0x1408A8BCC (RtlpMuiRegGetOrAddString.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x1408A9BC0 (_RtlpMuiRegAddNeutralLanguage.c)
 */

__int64 __fastcall RtlpMuiRegInitAnyLanguage(__int64 a1, __int64 a2, WCHAR *a3, __int16 a4)
{
  __int64 v8; // r8
  int v9; // r8d
  __int16 v11[2]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+24h] [rbp-24h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-20h] BYREF

  DestinationString = 0LL;
  v12 = 0;
  v11[0] = -1;
  RtlInitUnicodeString(&DestinationString, a3);
  if ( RtlCultureNameToLCID(&DestinationString.Length, &v12) )
  {
    LOBYTE(v8) = 1;
    v9 = RtlpMuiRegGetOrAddString(a1, a3, v8, v11);
    if ( v9 >= 0 )
    {
      *(_WORD *)(a2 + 4) = v12;
      *(_WORD *)(a2 + 6) = v11[0];
      *(_WORD *)a2 = a4;
      *(_WORD *)(a2 + 2) = 0;
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_DWORD *)(a2 + 24) = 0;
      if ( (a4 & 0x2000) == 0 )
        RtlpMuiRegAddNeutralLanguage(a1, a2);
    }
  }
  else
  {
    return (unsigned int)-1073020924;
  }
  return (unsigned int)v9;
}
