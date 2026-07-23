/*
 * XREFs of HvpIsLogFileBaseBlockValid @ 0x140ADD528
 * Callers:
 *     HvAnalyzeLogFiles @ 0x140ADCF88 (HvAnalyzeLogFiles.c)
 * Callees:
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

bool __fastcall HvpIsLogFileBaseBlockValid(__int64 a1, _QWORD *a2)
{
  bool result; // al
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v7; // r9

  result = 0;
  if ( *(_DWORD *)a1 == 1718052210 && *(_DWORD *)(a1 + 4) == *(_DWORD *)(a1 + 8) && *(_QWORD *)(a1 + 12) == *a2 )
  {
    v4 = *(_DWORD *)(a1 + 28);
    if ( v4 == 6 || v4 == 1 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      if ( v5 )
      {
        if ( v5 <= 0x7FFFE000 && (v5 & 0xFFF) == 0 )
        {
          v6 = HvpHeaderCheckSum(a1);
          if ( *(_DWORD *)(v7 + 508) == v6 )
            return 1;
        }
      }
    }
  }
  return result;
}
