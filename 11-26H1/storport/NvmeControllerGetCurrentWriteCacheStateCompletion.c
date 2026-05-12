/*
 * XREFs of NvmeControllerGetCurrentWriteCacheStateCompletion @ 0x1400CF2B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerGetCurrentWriteCacheStateCompletion(__int64 a1, __int64 *a2, unsigned int *a3)
{
  int v3; // r10d
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *((_WORD *)a3 + 7);
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v3 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v3 <= 6u && !(_BYTE)v3 )
        *(_QWORD *)(a1 + 136) = ((unsigned __int64)*a3 << 19) ^ (*(_QWORD *)(a1 + 136) ^ ((unsigned __int64)*a3 << 19)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
