/*
 * XREFs of strcmp @ 0x140742840
 * Callers:
 *     PopWatchdogDumpControlRoutine @ 0x140616660 (PopWatchdogDumpControlRoutine.c)
 *     ExpSetBootEntry @ 0x140842100 (ExpSetBootEntry.c)
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MmCallDllInitialize @ 0x14087B8BC (MmCallDllInitialize.c)
 *     MiCompactServiceTable @ 0x14088106C (MiCompactServiceTable.c)
 *     NtEnumerateBootEntries @ 0x140A2CCB0 (NtEnumerateBootEntries.c)
 *     MiUnloadApproved @ 0x140B3D458 (MiUnloadApproved.c)
 *     ViXdvDriverLoadImage @ 0x140C2E5CC (ViXdvDriverLoadImage.c)
 *     HdlspDispatch @ 0x140C52320 (HdlspDispatch.c)
 *     HalpAcpiFindRsdp @ 0x140CB381C (HalpAcpiFindRsdp.c)
 * Callees:
 *     <none>
 */

int __cdecl strcmp(const char *Str1, const char *Str2)
{
  signed __int64 v2; // r9
  char v3; // al
  unsigned __int8 v4; // dl
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned int v10; // edx

  v2 = Str2 - Str1;
  if ( ((unsigned __int8)Str1 & 7) != 0 )
  {
    while ( 1 )
    {
LABEL_2:
      v3 = *Str1;
      v4 = Str1[v2];
      if ( *Str1 != v4 )
        return -((unsigned int)*Str1 < v4) - (((unsigned int)*Str1 < v4) - 1);
      ++Str1;
      if ( !v3 )
        return 0;
      if ( ((unsigned __int8)Str1 & 7) == 0 )
        goto LABEL_5;
    }
  }
  else
  {
    while ( 1 )
    {
LABEL_5:
      if ( (((_WORD)v2 + (_WORD)Str1) & 0xFFFu) > 0xFF8 )
        goto LABEL_2;
      v5 = *(_QWORD *)Str1;
      v6 = *(_QWORD *)&Str1[v2];
      if ( *(_QWORD *)Str1 != v6 )
        goto LABEL_2;
      Str1 += 8;
      if ( (((v6 + 0x7EFEFEFEFEFEFEFFLL) ^ ~v5) & 0x8101010101010100uLL) != 0 )
      {
        if ( !(_BYTE)v6 )
          return 0;
        if ( !BYTE1(v6) )
          return 0;
        v8 = v6 >> 16;
        if ( !(_BYTE)v8 )
          return 0;
        if ( !BYTE1(v8) )
          return 0;
        v9 = v8 >> 16;
        if ( !(_BYTE)v9 )
          return 0;
        if ( !BYTE1(v9) )
          return 0;
        v10 = WORD1(v9);
        if ( !(_BYTE)v10 || !BYTE1(v10) )
          return 0;
      }
    }
  }
}
