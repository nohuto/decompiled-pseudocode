/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x1800CF1F0
 * Callers:
 *     LdrpCreatePendingEnclaveModule @ 0x1800CF104 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpAllocateModuleEntry @ 0x1800CF3D0 (LdrpAllocateModuleEntry.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // ebx
  ULONG v11; // edx
  unsigned __int16 *Heap_0; // rax
  unsigned __int16 *v14; // rsi
  __int64 ModuleEntry; // rax
  _DWORD *SharedData; // rcx
  __int64 v17; // rcx
  char *v19; // rcx

  v10 = 0;
  v11 = (NtdllBaseTag + 0x40000) | 8;
  *(_QWORD *)a6 = 0LL;
  Heap_0 = (unsigned __int16 *)RtlAllocateHeap_0(LdrpHeap, v11, *(unsigned __int16 *)a1 + 210LL);
  v14 = Heap_0;
  if ( Heap_0 )
  {
    *((_QWORD *)Heap_0 + 2) = a2;
    *((_QWORD *)Heap_0 + 23) = -1LL;
    *((_DWORD *)Heap_0 + 8) = a3 | 0x8000;
    *((_QWORD *)Heap_0 + 5) = a7;
    *((_QWORD *)Heap_0 + 6) = a5;
    *((_QWORD *)Heap_0 + 1) = Heap_0 + 104;
    *Heap_0 = *(_WORD *)a1;
    Heap_0[1] = *(_WORD *)a1 + 2;
    memmove(Heap_0 + 104, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*((_QWORD *)v14 + 1) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v14);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v17 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v17 = 2147353476LL;
      if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v19 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v19 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, v14, 0LL);
      }
    }
    else
    {
      RtlFreeHeap_0(LdrpHeap, 0, v14);
    }
  }
  if ( !*(_QWORD *)a6 )
    return (unsigned int)-1073741801;
  return v10;
}
