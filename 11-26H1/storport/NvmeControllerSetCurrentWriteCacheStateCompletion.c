/*
 * XREFs of NvmeControllerSetCurrentWriteCacheStateCompletion @ 0x1400CFCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NvmeControllerSetCurrentWriteCacheStateCompletion(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // r11
  int v4; // r9d
  __int64 result; // rax

  if ( a3 )
  {
    *(_WORD *)(*a2 + 4260) = *(_WORD *)(a3 + 14);
    v3 = *a2;
    if ( ((*(unsigned __int16 *)(*a2 + 4260) >> 9) & 7) == 0 )
    {
      v4 = *(unsigned __int16 *)(*a2 + 4260) >> 1;
      if ( (unsigned __int8)v4 <= 6u && !(_BYTE)v4 )
        *(_QWORD *)(a1 + 136) = ((unsigned __int64)*(unsigned int *)(v3 + 4140) << 19) ^ (*(_QWORD *)(a1 + 136) ^ ((unsigned __int64)*(unsigned int *)(v3 + 4140) << 19)) & 0xFFFFFFFFFFF7FFFFuLL;
    }
    *(_QWORD *)(a1 + 1096) = *(unsigned int *)(v3 + 4140) ^ (*(_QWORD *)(a1 + 1096) ^ *(unsigned int *)(v3 + 4140)) & 0xFFFFFFFFFFFFFFFEuLL | 2;
  }
  result = *a2;
  _interlockedbittestandreset((volatile signed __int32 *)(*a2 + 4256), 3u);
  return result;
}
