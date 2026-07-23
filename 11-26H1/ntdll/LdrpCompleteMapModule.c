/*
 * XREFs of LdrpCompleteMapModule @ 0x18011C230
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180031100 (LdrpLogInternal.c)
 *     RtlImageDirectoryEntryToData @ 0x1800785F0 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogEtwEvent @ 0x18007B5D8 (LdrpLogEtwEvent.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D5034 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogError @ 0x1800FBAE0 (LdrpLogError.c)
 *     LdrpCorFixupImage @ 0x1801002AC (LdrpCorFixupImage.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  NTSTATUS v7; // ebx
  _BYTE *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rsi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 *v17; // r15
  void *v18; // r14
  _BYTE *v19; // rax
  __int64 v20; // r12
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // r13d
  char *Heap_0; // rax
  _WORD *v25; // rbx
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  ULONG Size; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = RtlImageDirectoryEntryToData(*(PVOID *)(v3 + 48), 1u, 0xEu, &Size);
  if ( !v8 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return 3221225595LL;
  *(_DWORD *)(v3 + 104) |= 0x400000u;
  if ( (v8[16] & 1) == 0 )
    goto LABEL_8;
  *(_DWORD *)(v3 + 104) |= 0x1000000u;
  if ( RtlImageDirectoryEntryToData(*(PVOID *)(v3 + 48), 1u, 9u, &Size) )
    return 3221225595LL;
  if ( (*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(PVOID *)(v3 + 48)), v7 >= 0) )
  {
LABEL_8:
    if ( (*(_WORD *)(a2 + 22) & 0x2000) == 0 )
    {
      result = (unsigned int)v7;
      *(_DWORD *)(v3 + 104) &= ~4u;
      return result;
    }
    if ( *(char *)(a1 + 32) < 0 && *(char *)(a2 + 94) >= 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrmap.c",
        1152,
        (__int64)"LdrpCompleteMapModule",
        0,
        "Could not validate the crypto signature for DLL %wZ\n",
        v3 + 72);
      return 3221226536LL;
    }
    if ( (*(_DWORD *)(v3 + 104) & 0x1000000) == 0 && (a3 == 1073741827 || a3 == 1073741878) )
    {
      v10 = 2147353476LL;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v12 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v12 = 2147353476LL;
      v13 = 2147353477LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v14 = NtCurrentPeb()->SharedData;
        if ( v14 && *v14 )
          v15 = (__int64)NtCurrentPeb()->SharedData + 555;
        else
          v15 = 2147353477LL;
        if ( (*(_BYTE *)v15 & 0x20) != 0 )
          LdrpLogEtwEvent(5264, *(_QWORD *)(v3 + 48), 255, 255, 0LL, 0LL);
      }
      if ( a3 != 1073741827 )
        goto LABEL_51;
      v16 = *(_QWORD *)(a1 + 168);
      v17 = (unsigned __int16 *)(v3 + 72);
      v18 = *(void **)(v3 + 48);
      v31 = v16;
      Size = 0;
      LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 359, (__int64)"LdrpRelocateImage", 3, "DLL name: %wZ\n", v3 + 72);
      LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 360, (__int64)"LdrpRelocateImage", 5, "%wZ\n", v3 + 72);
      if ( (*(_BYTE *)(a2 + 22) & 1) != 0 || RtlImageDirectoryEntryToData(v18, 1u, 5u, &Size) && Size )
      {
        Size = 0;
        v19 = RtlImageDirectoryEntryToData(v18, 1u, 0xEu, &Size);
        if ( v19 && Size >= 0x48 && (v19[16] & 1) != 0 )
        {
          v7 = 0;
        }
        else
        {
          v20 = *(_QWORD *)(a2 + 48);
          v21 = NtCurrentPeb()->SharedData;
          if ( v21 && *v21 )
            v22 = (__int64)NtCurrentPeb()->SharedData + 554;
          else
            v22 = 2147353476LL;
          if ( *(_BYTE *)v22 )
          {
            v23 = *v17 + 64;
            Heap_0 = (char *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v23);
            v25 = Heap_0;
            if ( Heap_0 )
            {
              *((_WORD *)Heap_0 + 3) = 5152;
              *((_QWORD *)Heap_0 + 4) = v20;
              *((_QWORD *)Heap_0 + 5) = v18;
              *((_QWORD *)Heap_0 + 6) = v31;
              memmove(Heap_0 + 56, *(const void **)(v3 + 80), *v17);
              v25[((unsigned __int64)*v17 >> 1) + 28] = 0;
              v26 = NtCurrentPeb()->SharedData;
              if ( v26 && *v26 )
                v27 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v27 = 2147353476LL;
              NtTraceEvent((HANDLE)*(unsigned __int8 *)v27, 0x402u, v23 - 32, v25);
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v25);
            }
          }
          v7 = LdrpProtectAndRelocateImage(v18);
        }
      }
      else
      {
        v7 = 0;
      }
      LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 398, (__int64)"LdrpRelocateImage", 4, "Status: 0x%08lx\n", v7);
      LdrpLogInternal("minkernel\\ldr\\ldrmap.c", 399, (__int64)"LdrpRelocateImage", 6, "%x\n", v7);
      if ( v7 < 0 )
      {
        LdrpLogError(v7, 144, 0, (unsigned __int16 *)(v3 + 72));
      }
      else
      {
LABEL_51:
        v28 = NtCurrentPeb()->SharedData;
        if ( v28 && *v28 )
          v10 = (__int64)NtCurrentPeb()->SharedData + 554;
        if ( *(_BYTE *)v10 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
        {
          v29 = NtCurrentPeb()->SharedData;
          if ( v29 && *v29 )
            v13 = (__int64)NtCurrentPeb()->SharedData + 555;
          if ( (*(_BYTE *)v13 & 0x20) != 0 )
            LdrpLogEtwEvent(5265, *(_QWORD *)(v3 + 48), 255, 255, 0LL, 0LL);
        }
      }
    }
  }
  return (unsigned int)v7;
}
