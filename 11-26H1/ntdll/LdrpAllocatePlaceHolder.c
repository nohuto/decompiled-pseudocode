/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x1800D1A80
 * Callers:
 *     LdrpCreatePendingEnclaveModule @ 0x1800D1994 (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpAllocateModuleEntry @ 0x1800D1C60 (LdrpAllocateModuleEntry.c)
 *     memmove @ 0x180164700 (memmove.c)
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
  __int64 Heap_0; // rax
  __int64 v13; // rsi
  __int64 ModuleEntry; // rax
  _DWORD *SharedData; // rcx
  __int64 v16; // rcx
  char *v18; // rcx

  v10 = 0;
  *(_QWORD *)a6 = 0LL;
  Heap_0 = RtlAllocateHeap_0();
  v13 = Heap_0;
  if ( Heap_0 )
  {
    *(_QWORD *)(Heap_0 + 16) = a2;
    *(_QWORD *)(Heap_0 + 184) = -1LL;
    *(_DWORD *)(Heap_0 + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap_0 + 40) = a7;
    *(_QWORD *)(Heap_0 + 48) = a5;
    *(_QWORD *)(Heap_0 + 8) = Heap_0 + 208;
    *(_WORD *)Heap_0 = *(_WORD *)a1;
    *(_WORD *)(Heap_0 + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap_0 + 208), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v13 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v13);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v16 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v16 = 2147353476LL;
      if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v18 = (unsigned int)RtlGetCurrentServiceSessionId()
            ? (char *)NtCurrentPeb()->SharedData + 555
            : (char *)2147353477;
        if ( (*v18 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v13, 0LL);
      }
    }
    else
    {
      RtlFreeHeap_0();
    }
  }
  if ( !*(_QWORD *)a6 )
    return (unsigned int)-1073741801;
  return v10;
}
