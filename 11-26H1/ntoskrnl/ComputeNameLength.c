/*
 * XREFs of ComputeNameLength @ 0x140802AC0
 * Callers:
 *     PfxFindPrefix @ 0x140802BA0 (PfxFindPrefix.c)
 *     PfxInsertPrefix @ 0x140802CA0 (PfxInsertPrefix.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x14096CC40 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall ComputeNameLength(unsigned __int16 *a1)
{
  bool v2; // di
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned int v5; // r8d
  unsigned int v6; // ecx
  unsigned int v7; // edx
  __int64 v8; // r10
  int v9; // r9d
  unsigned int v10; // eax
  _BYTE *v11; // rax
  __int64 v12; // r9
  unsigned int v13; // edx
  signed __int32 v15[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = 0;
  Blink = 0LL;
  if ( !(unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    _InterlockedOr(v15, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    Blink = CurrentServerSiloGlobals[73].Blink;
    v2 = WORD2(CurrentServerSiloGlobals[65].Flink) != 0;
  }
  v5 = 1;
  v6 = *a1 - 1;
  if ( v2 )
  {
    v7 = 0;
    if ( *a1 != 1 )
    {
      do
      {
        v8 = *(unsigned __int8 *)(v7 + *((_QWORD *)a1 + 1));
        if ( *((_WORD *)&Blink->Flink + v8) )
        {
          v9 = 2;
        }
        else
        {
          v10 = v5 + 1;
          v9 = 1;
          if ( (_BYTE)v8 != 92 )
            v10 = v5;
          v5 = v10;
        }
        v7 += v9;
      }
      while ( v7 < v6 );
    }
  }
  else if ( *a1 != 1 )
  {
    v11 = (_BYTE *)*((_QWORD *)a1 + 1);
    v12 = v6;
    do
    {
      v13 = v5 + 1;
      if ( *v11 != 92 )
        v13 = v5;
      ++v11;
      v5 = v13;
      --v12;
    }
    while ( v12 );
  }
  return v5;
}
