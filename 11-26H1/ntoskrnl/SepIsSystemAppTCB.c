/*
 * XREFs of SepIsSystemAppTCB @ 0x140A28568
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A283BC (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140215E70 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     RtlPrefixUnicodeString @ 0x140A29BF0 (RtlPrefixUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x140A88634 (SepIsImageInMinTcbList.c)
 */

__int64 __fastcall SepIsSystemAppTCB(
        PCUNICODE_STRING String2,
        unsigned int a2,
        char a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
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
  char v21; // [rsp+20h] [rbp-58h]
  char v22; // [rsp+28h] [rbp-50h]
  __int128 v23; // [rsp+50h] [rbp-28h] BYREF

  v23 = 0LL;
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
  else if ( !RtlPrefixUnicodeString(&stru_140004190, String2, 1u) )
  {
    return 3221226021LL;
  }
  v18 = (unsigned __int16)(String2->Length - v15);
  Buffer = String2->Buffer;
  v20 = ((unsigned __int64)String2->Length - v18) >> 1;
  LOWORD(v23) = String2->Length - v15;
  WORD1(v23) = v18;
  *((_QWORD *)&v23 + 1) = &Buffer[v20];
  v22 = a4;
  v21 = a3;
  return SepIsImageInMinTcbList(L"hj", 2LL, &v23, a2, v21, v22, a5, a6, a7);
}
