/*
 * XREFs of RtlSuffixUnicodeString @ 0x140AE1D90
 * Callers:
 *     PiDrvDbSetupNodeHive @ 0x1407BAE00 (PiDrvDbSetupNodeHive.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 */

BOOLEAN __stdcall RtlSuffixUnicodeString(PCUNICODE_STRING String1, PCUNICODE_STRING String2, BOOLEAN CaseInSensitive)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v4; // rdx
  char v5; // r9
  unsigned __int16 *v6; // r11
  __int64 v7; // rcx
  __int64 Flink; // rdi
  __int64 v9; // rax
  char *v10; // r11
  unsigned __int64 v11; // rcx
  char *v12; // rsi
  __int64 v14; // rbx
  unsigned __int16 *v15; // r11
  __int16 v16; // ax
  __int64 v17; // r11
  __int16 v18; // r10

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v7 = *v4;
  Flink = (__int64)CurrentServerSiloGlobals[75].Flink;
  v9 = *v6;
  if ( (unsigned __int16)v7 < (unsigned __int16)v9 )
    return 0;
  v10 = (char *)*((_QWORD *)v6 + 1);
  v11 = (unsigned __int64)(v7 - v9) >> 1;
  v12 = &v10[2 * ((unsigned __int64)(unsigned int)v9 >> 1)];
  if ( !v5 )
    return memcmp(v10, (const void *)(*((_QWORD *)v4 + 1) + 2 * v11), (unsigned int)v9) == 0;
  v14 = *((_QWORD *)v4 + 1) + 2 * v11 - (_QWORD)v10;
  while ( v10 < v12 )
  {
    NLS_UPCASE(Flink, *(unsigned __int16 *)&v10[v14]);
    v16 = NLS_UPCASE(Flink, *v15);
    if ( v16 != v18 )
      return 0;
    v10 = (char *)(v17 + 2);
  }
  return 1;
}
