/*
 * XREFs of SepIsImageInMinTcbList @ 0x14097A150
 * Callers:
 *     SepIsMinTCB @ 0x140979428 (SepIsMinTCB.c)
 *     SepIsSystemAppTCB @ 0x140A3B608 (SepIsSystemAppTCB.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     SeCompareSigningLevels @ 0x140A8FB90 (SeCompareSigningLevels.c)
 *     SepCheckAndSetAuditModeForProcess @ 0x140B5CD50 (SepCheckAndSetAuditModeForProcess.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        char *a7,
        char *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // edi
  unsigned int i; // ebx
  __int64 v15; // rsi
  char *v16; // rdx
  unsigned __int64 v17; // rcx
  int v19; // eax
  unsigned __int8 v20; // bl
  char *v21; // r14
  char v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx

  v9 = 0;
  for ( i = 0; ; ++i )
  {
    if ( i >= a2 )
      return (unsigned int)-1073741275;
    v15 = a1 + 24LL * i;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)v15, 1u) )
    {
      v19 = *(_DWORD *)(v15 + 20);
      if ( !v19 || v19 == LODWORD(ExpSysDbgLock.ThreadListEntry.Blink) )
        break;
    }
  }
  _mm_lfence();
  v20 = *(_BYTE *)(v15 + 18);
  if ( !v20 )
  {
    if ( !a5 )
    {
      v21 = a7;
      *a7 = *(_BYTE *)(v15 + 16);
      v22 = *(_BYTE *)(v15 + 17);
      goto LABEL_10;
    }
    v20 = a5;
  }
  v21 = a7;
  v16 = SeProtectedMapping;
  v17 = (unsigned __int64)v20 >> 4;
  *a7 = SeProtectedMapping[2 * v17];
  v22 = SeProtectedMapping[2 * v17 + 1];
LABEL_10:
  LOBYTE(v16) = a6;
  *a8 = v22;
  LOBYTE(v17) = *v21;
  if ( !(unsigned int)SeCompareSigningLevels(v17, v16) )
    *v21 = a6;
  LOBYTE(v24) = *a8;
  LOBYTE(v23) = a6;
  if ( !(unsigned int)SeCompareSigningLevels(v24, v23) )
    *a8 = a6;
  if ( (v20 & 7) != 1 && ((a4 & 1) != 0 || (v20 & 7) == 2) )
  {
    if ( (*a8 & 0xFu) < 4 )
      *a8 = *v21;
    v20 = ((*a9 ^ v20) & 8 ^ v20) & 0xF8 | 2;
  }
  *a9 = v20;
  SepCheckAndSetAuditModeForProcess(a3, a8);
  return v9;
}
