/*
 * XREFs of RtlIsValidOemCharacter @ 0x14097E350
 * Callers:
 *     RtlGenerate8dot3Name @ 0x14097B570 (RtlGenerate8dot3Name.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     NLS_UPCASE @ 0x14041C340 (NLS_UPCASE.c)
 *     RtlpIsUtf8Process @ 0x14097D580 (RtlpIsUtf8Process.c)
 */

BOOLEAN __stdcall RtlIsValidOemCharacter(PWCHAR Char)
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v3; // dl
  struct _LIST_ENTRY *Blink; // r9
  struct _LIST_ENTRY *Flink; // r11
  __int16 v6; // di
  __int64 v7; // rcx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  int v10; // edx
  WCHAR v11; // r10
  __int64 v12; // r11
  __int16 v13; // ax
  __int64 v15; // r11
  int v16; // edx
  signed __int32 v17[10]; // [rsp+0h] [rbp-28h] BYREF

  RtlpIsUtf8Process();
  _InterlockedOr(v17, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( v3 == 1 )
  {
    v16 = *Char;
    if ( (unsigned __int16)v16 <= 0x7Fu )
    {
      *Char = NLS_UPCASE((__int64)CurrentServerSiloGlobals[75].Flink, v16);
      return 1;
    }
  }
  else
  {
    Blink = CurrentServerSiloGlobals[70].Blink;
    Flink = CurrentServerSiloGlobals[71].Flink;
    v6 = WORD2(CurrentServerSiloGlobals[68].Blink);
    v7 = *Char;
    if ( WORD2(CurrentServerSiloGlobals[69].Flink) )
    {
      v8 = *((unsigned __int16 *)&Flink->Flink + v7);
      v9 = *((unsigned __int16 *)&CurrentServerSiloGlobals[74].Flink->Flink + ((unsigned __int64)v8 >> 8));
      if ( (_WORD)v9 )
        v10 = *((unsigned __int16 *)&CurrentServerSiloGlobals[72].Flink->Flink + v9 + (unsigned __int8)v8);
      else
        v10 = *((unsigned __int16 *)&Blink->Flink + (unsigned __int8)v8);
      v11 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[75].Flink, v10);
      v13 = *(_WORD *)(v12 + 2LL * v11);
    }
    else
    {
      v11 = NLS_UPCASE(
              (__int64)CurrentServerSiloGlobals[75].Flink,
              *((unsigned __int16 *)&Blink->Flink + *((unsigned __int8 *)&Flink->Flink + v7)));
      v13 = *(char *)(v11 + v15);
    }
    if ( v13 != v6 )
    {
      *Char = v11;
      return 1;
    }
  }
  return 0;
}
