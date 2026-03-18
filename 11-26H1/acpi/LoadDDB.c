/*
 * XREFs of LoadDDB @ 0x14006CDDC
 * Callers:
 *     LoadFieldUnitDDB @ 0x14006CF10 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x14006D0F8 (LoadMemDDB.c)
 *     LoadTable @ 0x140070D90 (LoadTable.c)
 *     AMLILoadDDB @ 0x1400DC2B4 (AMLILoadDDB.c)
 * Callees:
 *     FreeContext @ 0x140003D30 (FreeContext.c)
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RtlStringCchCopyNA @ 0x140030530 (RtlStringCchCopyNA.c)
 *     PushFrame @ 0x14004944C (PushFrame.c)
 */

__int64 __fastcall LoadDDB(char *Entry, const char *a2, __int64 a3, __int64 a4)
{
  unsigned int v8; // esi
  __int64 v10; // rcx
  char pszSrc[8]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)pszSrc = 0LL;
  if ( gdwfAMLIInit >= 0 && !strncmp(a2 + 28, "MSFT", 4uLL) && *((_DWORD *)a2 + 8) < 0x1000000u )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError((__int64)Entry, -1072431079);
    *(_DWORD *)pszSrc = *(_DWORD *)a2;
    RtlStringCchCopyNA(byte_14008EC24, 5uLL, pszSrc, 4uLL);
    PrintDebugMessage(0x50u, byte_14008EC24, a2, 0LL, 0LL);
  }
  else
  {
    v8 = PushFrame((__int64)Entry, 1179927628, 0x40u, (__int64)ParseLoad, (__int64 **)pszSrc);
    if ( !v8 )
    {
      v10 = *(_QWORD *)pszSrc;
      *(_QWORD *)(*(_QWORD *)pszSrc + 32LL) = a3;
      *(_QWORD *)(v10 + 48) = a4;
      *(_QWORD *)(v10 + 56) = a2;
      return v8;
    }
  }
  *((_QWORD *)Entry + 11) = 0LL;
  FreeContext(Entry);
  return v8;
}
