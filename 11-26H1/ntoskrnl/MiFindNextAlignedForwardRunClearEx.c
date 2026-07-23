/*
 * XREFs of MiFindNextAlignedForwardRunClearEx @ 0x1405001FC
 * Callers:
 *     MiObtainDynamicVa @ 0x1402A4348 (MiObtainDynamicVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiFindNextAlignedForwardRunClearEx(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9
  unsigned __int64 i; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _QWORD *v11; // r11

  v3 = a1[1];
  v4 = ~(a3 - 1);
  v5 = (a2 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = v4 & *a1;
  if ( v5 <= v6 )
  {
    for ( i = 0LL; i < v6 && v5 + i <= v6; i += v4 & ((v9 << 6) + a3 + 63) )
    {
      v9 = 0LL;
      v10 = v5 >> 6;
      if ( v5 >> 6 )
      {
        v11 = (_QWORD *)(v3 + 8 * (i >> 6));
        while ( !*v11 )
        {
          ++v9;
          ++v11;
          if ( v9 >= v10 )
            goto LABEL_9;
        }
      }
      else
      {
LABEL_9:
        if ( v9 == v10 )
          return i;
      }
    }
  }
  return -1LL;
}
