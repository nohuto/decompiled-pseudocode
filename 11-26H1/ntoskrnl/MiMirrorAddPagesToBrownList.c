/*
 * XREFs of MiMirrorAddPagesToBrownList @ 0x140485C4C
 * Callers:
 *     MiMirrorZeroFreeListsCallback @ 0x14049AC50 (MiMirrorZeroFreeListsCallback.c)
 *     MiMirrorHugeRangeZeroFreeListsCallback @ 0x1406F4890 (MiMirrorHugeRangeZeroFreeListsCallback.c)
 *     MiWalkPagesOnLists @ 0x140C0B898 (MiWalkPagesOnLists.c)
 * Callees:
 *     RtlSetBitsEx @ 0x1403712C0 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiMirrorAddPagesToBrownList(int a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // r9
  volatile signed __int32 *v7; // r8
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  int v10; // esi

  v3 = 32LL * a1;
  v4 = a3;
  RtlSetBitsEx((__int64)&MiState + v3 + 10104, a2, a3);
  v6 = a2 & 0x1F;
  v7 = (volatile signed __int32 *)(*(_QWORD *)((char *)&MiState + v3 + 10128) + 4 * (a2 >> 5));
  result = v6 + v4;
  if ( v6 + v4 <= 0x20 )
  {
    if ( v4 == 32 )
    {
      *v7 = 0;
      return result;
    }
    result = (unsigned int)~(((1 << v4) - 1) << v6);
    goto LABEL_4;
  }
  if ( (a2 & 0x1F) != 0 )
  {
    v10 = a2 & 0x1F;
    result = (unsigned int)~(((1 << (32 - v10)) - 1) << v6);
    _InterlockedAnd(v7, result);
    v4 -= (unsigned int)(32 - v10);
    ++v7;
  }
  if ( v4 >= 0x20 )
  {
    v9 = v4 >> 5;
    result = -32LL * (v4 >> 5);
    v4 += result;
    do
    {
      *v7++ = 0;
      --v9;
    }
    while ( v9 );
  }
  if ( v4 )
  {
    result = (unsigned int)(-1 << v4);
LABEL_4:
    _InterlockedAnd(v7, result);
  }
  return result;
}
