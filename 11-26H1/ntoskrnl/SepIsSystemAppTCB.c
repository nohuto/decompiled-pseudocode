/*
 * XREFs of SepIsSystemAppTCB @ 0x140A3B608
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     SepIsImageInMinTcbList @ 0x14097A150 (SepIsImageInMinTcbList.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 */

__int64 __fastcall SepIsSystemAppTCB(
        PCUNICODE_STRING String2,
        char a2,
        unsigned __int8 a3,
        char a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  unsigned __int64 CurrentServerSilo; // rax
  const UNICODE_STRING **ServerSiloGlobals; // rax
  const UNICODE_STRING **v13; // rbp
  const UNICODE_STRING *v14; // r9
  __int16 v15; // si
  unsigned int Length; // ecx
  __int64 v18; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v20; // rdx
  UNICODE_STRING v21; // [rsp+50h] [rbp-28h] BYREF

  v21 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (const UNICODE_STRING **)PsGetServerSiloGlobals(CurrentServerSilo);
  v13 = ServerSiloGlobals;
  if ( !String2 )
    return 3221226021LL;
  v14 = ServerSiloGlobals[96];
  v15 = 46;
  Length = v14[3].Length;
  if ( (unsigned __int16)Length >= 0x2Eu )
    Length = 46;
  if ( String2->Length <= Length )
    return 3221226021LL;
  if ( String2->Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v14 + 3, String2, 1u) )
      return 3221226021LL;
    v15 = v13[96][3].Length;
  }
  else if ( !RtlPrefixUnicodeString(&stru_1400041B0, String2, 1u) )
  {
    return 3221226021LL;
  }
  v18 = (unsigned __int16)(String2->Length - v15);
  Buffer = String2->Buffer;
  v20 = ((unsigned __int64)String2->Length - v18) >> 1;
  v21.Length = String2->Length - v15;
  v21.MaximumLength = v18;
  v21.Buffer = &Buffer[v20];
  return SepIsImageInMinTcbList((__int64)L"hj", 2u, &v21, a2, a3, a4, a5, a6, a7);
}
