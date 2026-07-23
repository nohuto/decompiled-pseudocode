/*
 * XREFs of RtlInterlockedSetBitRunEx @ 0x14044D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInterlockedSetBitRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 *v3; // r11
  __int64 v4; // r9
  __int64 result; // rax
  unsigned int v6; // r10d
  unsigned __int64 v7; // rcx

  v3 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
  v4 = a2 & 0x1F;
  result = v4 + a3;
  if ( v4 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      *v3 = -1;
      return result;
    }
    v6 = ((1 << a3) - 1) << v4;
    goto LABEL_4;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    result = (unsigned int)(((1 << (32 - (a2 & 0x1F))) - 1) << v4);
    _InterlockedOr(v3, result);
    a3 -= 32 - (unsigned int)(a2 & 0x1F);
    ++v3;
  }
  if ( a3 >= 0x20 )
  {
    v7 = a3 >> 5;
    result = -32LL * (a3 >> 5);
    a3 += result;
    do
    {
      *v3++ = -1;
      --v7;
    }
    while ( v7 );
  }
  if ( a3 )
  {
    v6 = (1 << a3) - 1;
LABEL_4:
    _InterlockedOr(v3, v6);
  }
  return result;
}
