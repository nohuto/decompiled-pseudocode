/*
 * XREFs of RtlInterlockedClearBitRunEx @ 0x140447470
 * Callers:
 *     MiMirrorOmitPagesFromCopy @ 0x140C099DC (MiMirrorOmitPagesFromCopy.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlInterlockedClearBitRunEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 *v3; // r10
  __int64 v4; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rcx

  v3 = (volatile signed __int32 *)(*(_QWORD *)(a1 + 8) + 4 * (a2 >> 5));
  v4 = a2 & 0x1F;
  result = v4 + a3;
  if ( v4 + a3 <= 0x20 )
  {
    if ( a3 == 32 )
    {
      result = 0LL;
      *v3 = 0;
      return result;
    }
    result = (unsigned int)~(((1 << a3) - 1) << v4);
    goto LABEL_4;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    result = (unsigned int)~(((1 << (32 - (a2 & 0x1F))) - 1) << v4);
    _InterlockedAnd(v3, result);
    a3 -= 32 - (unsigned int)(a2 & 0x1F);
    ++v3;
  }
  if ( a3 >= 0x20 )
  {
    v6 = a3 >> 5;
    a3 += -32LL * (a3 >> 5);
    result = 0LL;
    do
    {
      *v3++ = 0;
      --v6;
    }
    while ( v6 );
  }
  if ( a3 )
  {
    result = (unsigned int)(-1 << a3);
LABEL_4:
    _InterlockedAnd(v3, result);
  }
  return result;
}
