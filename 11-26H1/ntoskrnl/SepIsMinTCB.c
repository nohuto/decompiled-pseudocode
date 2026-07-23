/*
 * XREFs of SepIsMinTCB @ 0x140979428
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A3B45C (SeQuerySigningPolicy.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     SepIsImageInMinTcbList @ 0x14097A150 (SepIsImageInMinTcbList.c)
 *     RtlPrefixUnicodeString @ 0x140A3CC90 (RtlPrefixUnicodeString.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140B5CD50 (SepCheckAndSetAuditModeForProcess.c)
 *     SepSetSystemPaths @ 0x140B603B4 (SepSetSystemPaths.c)
 */

__int64 __fastcall SepIsMinTCB(
        PCUNICODE_STRING String2,
        unsigned int a2,
        unsigned __int8 a3,
        char a4,
        char *a5,
        char *a6,
        unsigned __int8 *a7)
{
  unsigned __int64 CurrentServerSilo; // rax
  volatile signed __int64 *ServerSiloGlobals; // rax
  PCUNICODE_STRING *v13; // rbp
  __int16 v14; // si
  unsigned int Length; // ecx
  int v16; // ecx
  __int64 v18; // rcx
  wchar_t *Buffer; // rax
  unsigned __int64 v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rbp
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  int v25; // eax
  unsigned __int8 v26; // di
  char *v27; // rsi
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  UNICODE_STRING String1; // [rsp+50h] [rbp-38h] BYREF

  String1 = 0LL;
  CurrentServerSilo = PsGetCurrentServerSilo();
  ServerSiloGlobals = (volatile signed __int64 *)PsGetServerSiloGlobals(CurrentServerSilo);
  v13 = (PCUNICODE_STRING *)(ServerSiloGlobals + 92);
  if ( !_InterlockedCompareExchange64(ServerSiloGlobals + 96, 0LL, 0LL) )
  {
    v16 = SepSetSystemPaths(v13);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( !String2 )
    return (unsigned int)-1073741275;
  v14 = 42;
  Length = v13[4]->Length;
  if ( (unsigned __int16)Length >= 0x2Au )
    Length = 42;
  if ( String2->Length <= Length )
    return (unsigned int)-1073741275;
  if ( String2->Buffer[1] == 63 )
  {
    if ( !RtlPrefixUnicodeString(v13[4], String2, 1u) && !RtlPrefixUnicodeString(v13[4] + 1, String2, 1u) )
      return (unsigned int)-1073741275;
    v14 = v13[4]->Length;
  }
  else if ( !RtlPrefixUnicodeString(&stru_1400019E0, String2, 1u)
         && !RtlPrefixUnicodeString(&stru_14000D940, String2, 1u) )
  {
    return (unsigned int)-1073741275;
  }
  v18 = (unsigned __int16)(String2->Length - v14);
  Buffer = String2->Buffer;
  v20 = ((unsigned __int64)String2->Length - v18) >> 1;
  v21 = 0;
  String1.Length = v18;
  String1.MaximumLength = v18;
  String1.Buffer = &Buffer[v20];
  while ( v21 < 0x14 )
  {
    v22 = 3LL * v21;
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&SeMsMinTCBList[3 * v21], 1u) )
    {
      v25 = dword_140BE5EF4[6 * v21];
      if ( !v25 || v25 == LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) )
      {
        _mm_lfence();
        v26 = byte_140BE5EF2[24 * v21];
        if ( v26 )
          goto LABEL_23;
        if ( a3 )
        {
          v26 = a3;
LABEL_23:
          v27 = a5;
          v24 = (unsigned __int64)v26 >> 4;
          *a5 = SeProtectedMapping[2 * v24];
          v28 = byte_140BDFB89[2 * v24];
        }
        else
        {
          v27 = a5;
          *a5 = byte_140BE5EF0[8 * v22];
          v28 = byte_140BE5EF1[8 * v22];
        }
        LOBYTE(v23) = a4;
        *a6 = v28;
        LOBYTE(v24) = *v27;
        if ( !(unsigned int)SeCompareSigningLevels(v24, v23) )
          *v27 = a4;
        LOBYTE(v30) = *a6;
        LOBYTE(v29) = a4;
        if ( !(unsigned int)SeCompareSigningLevels(v30, v29) )
          *a6 = a4;
        if ( (v26 & 7) != 1 && ((a2 & 1) != 0 || (v26 & 7) == 2) )
        {
          if ( (*a6 & 0xFu) < 4 )
            *a6 = *v27;
          v26 = ((*a7 ^ v26) & 8 ^ v26) & 0xF8 | 2;
        }
        *a7 = v26;
        SepCheckAndSetAuditModeForProcess(&String1, a6);
        return 0;
      }
    }
    ++v21;
  }
  v16 = -1073741275;
  if ( (BYTE4(RtlpBootStatHandleLock.Affinity) & 1) == 0 && (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    return (unsigned int)SepIsImageInMinTcbList(L" \"", 9LL, &String1, a2, a3, a4, a5, a6, a7);
  return (unsigned int)v16;
}
