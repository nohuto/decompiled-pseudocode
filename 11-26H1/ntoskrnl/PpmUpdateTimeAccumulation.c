/*
 * XREFs of PpmUpdateTimeAccumulation @ 0x1402F8238
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x14025568C (PpmSnapPerformanceAccumulation.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1402F7C90 (PpmContinueActiveTimeAccumulation.c)
 *     PpmEndActiveTimeAccumulation @ 0x1402F9900 (PpmEndActiveTimeAccumulation.c)
 *     PpmBeginActiveTimeAccumulation @ 0x1402F9AE4 (PpmBeginActiveTimeAccumulation.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmUpdateTimeAccumulation(__int64 a1, __int64 a2, char a3)
{
  char v4; // cl
  __int64 v5; // r10
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rcx

  v4 = *(_BYTE *)(a1 + 172);
  v5 = a2;
  if ( v4 )
    v5 = a2 << v4;
  result = v5 * *(_QWORD *)(a1 + 176);
  v7 = ((unsigned __int64)v5 * (unsigned __int128)*(unsigned __int64 *)(a1 + 176)) >> 64;
  if ( _bittest64((const signed __int64 *)(a1 + 36832), 0x27u) )
  {
    result = __readmsr(0xDB2u);
    v8 = result;
  }
  else
  {
    v8 = 0LL;
  }
  if ( a3 )
  {
    v9 = a2 - *(_QWORD *)(a1 + 35016);
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 35032), v9);
    if ( _bittest64((const signed __int64 *)(a1 + 36832), 0x27u) )
    {
      v10 = v7 - *(_QWORD *)(a1 + 34984);
      if ( v9 )
      {
        if ( v10 )
        {
          v11 = v8 - *(_QWORD *)(a1 + 35096);
          if ( v10 != v11 )
          {
            if ( is_mul_ok(v9, v11) )
            {
              result = v9 * (unsigned __int128)v11 / v10;
              v9 = result;
            }
            else
            {
              result = v11 * (v9 % v10) / v10;
              v9 = v11 * (v9 / v10) + result;
            }
          }
        }
      }
      *(_QWORD *)(a1 + 35104) += v9;
    }
  }
  *(_QWORD *)(a1 + 35016) = a2;
  if ( a3 )
  {
    v12 = *(_QWORD *)(a1 + 34984);
    if ( v7 > v12 )
    {
      result = v7 + *(_QWORD *)(a1 + 34992) - v12;
      *(_QWORD *)(a1 + 34992) = result;
    }
  }
  *(_QWORD *)(a1 + 34984) = v7;
  if ( _bittest64((const signed __int64 *)(a1 + 36832), 0x27u) )
    *(_QWORD *)(a1 + 35096) = v8;
  return result;
}
