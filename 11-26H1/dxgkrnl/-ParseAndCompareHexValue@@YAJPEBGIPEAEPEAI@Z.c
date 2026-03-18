/*
 * XREFs of ?ParseAndCompareHexValue@@YAJPEBGIPEAEPEAI@Z @ 0x14023B9AC
 * Callers:
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x14023B648 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ParseAndCompareHexValue(const unsigned __int16 *a1, int a2, unsigned __int8 *a3, unsigned int *a4)
{
  int v4; // r10d
  int v6; // r11d
  char v8; // bl
  unsigned int v9; // edi
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  unsigned __int8 v14; // al

  v4 = *a4;
  v6 = 0;
  v8 = 0;
  v9 = 0;
  while ( 1 )
  {
    v10 = a1[v4];
    if ( v10 == 35 )
      break;
    if ( !(_WORD)v10 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 93;
      return 3221225485LL;
    }
    if ( v10 == 44 )
    {
      v11 = v6 == a2;
      v6 = 0;
      v9 = 0;
      if ( v11 )
        v8 = 1;
    }
    else
    {
      if ( (unsigned __int16)(v10 - 48) > 9u && (unsigned __int16)((v10 | 0x20) - 97) > 5u )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 75;
        return 3221225485LL;
      }
      if ( (unsigned __int16)(v10 - 48) > 9u )
        v12 = ((_BYTE)v10 - 7) & 0xF;
      else
        v12 = v10 - 48;
      ++v9;
      v6 = v12 + 16 * v6;
      if ( v9 > 8 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 85;
        return 3221225485LL;
      }
    }
    ++v4;
  }
  v14 = v8;
  *a4 = v4 + 1;
  if ( v6 == a2 )
    v14 = 1;
  *a3 = v14;
  return 0LL;
}
