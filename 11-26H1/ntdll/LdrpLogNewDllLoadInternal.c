/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x1800D7090
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 *     LdrLogNewDataDllLoad @ 0x1800D6F00 (LdrLogNewDataDllLoad.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // esi
  __int64 result; // rax
  __int64 v11; // rbx
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  result = RtlAllocateHeap_0();
  v11 = result;
  if ( result )
  {
    v12 = 5297;
    if ( (unsigned int)(a3 - 5) > 1 )
      v12 = 5296;
    *(_WORD *)(v11 + 6) = v12;
    *(_QWORD *)(v11 + 32) = a1;
    *(_QWORD *)(v11 + 40) = a2;
    *(_DWORD *)(v11 + 48) = a3;
    memmove((void *)(v11 + 52), Src, (unsigned int)v6);
    *(_WORD *)(v11 + 2 * (v6 >> 1) + 52) = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    NtTraceEvent(*(unsigned __int8 *)v13, 1027LL, v9 - 32, v11);
    return RtlFreeHeap_0();
  }
  return result;
}
