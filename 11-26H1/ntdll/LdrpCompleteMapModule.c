/*
 * XREFs of LdrpCompleteMapModule @ 0x18011C480
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180084430 (LdrpMapDllWithSectionHandle.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     LdrpLogInternal @ 0x180046B90 (LdrpLogInternal.c)
 *     RtlImageDirectoryEntryToData @ 0x180081250 (RtlImageDirectoryEntryToData.c)
 *     LdrpLogEtwEvent @ 0x180084238 (LdrpLogEtwEvent.c)
 *     LdrpProtectAndRelocateImage @ 0x1800D8074 (LdrpProtectAndRelocateImage.c)
 *     LdrpLogError @ 0x1800FC390 (LdrpLogError.c)
 *     LdrpCorFixupImage @ 0x180100B5C (LdrpCorFixupImage.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall LdrpCompleteMapModule(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  int v7; // ebx
  _DWORD *v8; // rcx
  __int64 result; // rax
  __int64 v10; // rsi
  _DWORD *SharedData; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _DWORD *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int16 *v17; // r15
  const void *v18; // r14
  _DWORD *v19; // rax
  __int64 v20; // r12
  _DWORD *v21; // rcx
  __int64 v22; // rcx
  int v23; // r13d
  __int64 Heap_0; // rax
  __int64 v25; // rbx
  _DWORD *v26; // rcx
  __int64 v27; // rcx
  _DWORD *v28; // rcx
  _DWORD *v29; // rcx
  unsigned int v30; // [rsp+70h] [rbp+8h] BYREF
  __int64 v31; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 56);
  v7 = 0;
  v8 = RtlImageDirectoryEntryToData(*(_QWORD *)(v3 + 48), 1, 0xEu, &v30);
  if ( !v8 )
    goto LABEL_8;
  if ( (*(_DWORD *)(a1 + 32) & 0x800000) != 0 )
    return 3221225595LL;
  *(_DWORD *)(v3 + 104) |= 0x400000u;
  if ( (v8[4] & 1) == 0 )
    goto LABEL_8;
  *(_DWORD *)(v3 + 104) |= 0x1000000u;
  if ( RtlImageDirectoryEntryToData(*(_QWORD *)(v3 + 48), 1, 9u, &v30) )
    return 3221225595LL;
  if ( (*(_DWORD *)(a1 + 32) & 0x200000) == 0 || (v7 = LdrpCorFixupImage(*(_QWORD *)(v3 + 48)), v7 >= 0) )
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
        (int)"minkernel\\ldr\\ldrmap.c",
        1107,
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
      v18 = *(const void **)(v3 + 48);
      v31 = v16;
      v30 = 0;
      LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 358, (__int64)"LdrpRelocateImage", 3, "DLL name: %wZ\n", v3 + 72);
      LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 359, (__int64)"LdrpRelocateImage", 5, "%wZ\n", v3 + 72);
      if ( (*(_BYTE *)(a2 + 22) & 1) != 0 || RtlImageDirectoryEntryToData((unsigned __int64)v18, 1, 5u, &v30) && v30 )
      {
        v30 = 0;
        v19 = RtlImageDirectoryEntryToData((unsigned __int64)v18, 1, 0xEu, &v30);
        if ( v19 && v30 >= 0x48 && (v19[4] & 1) != 0 )
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
            Heap_0 = RtlAllocateHeap_0();
            v25 = Heap_0;
            if ( Heap_0 )
            {
              *(_WORD *)(Heap_0 + 6) = 5152;
              *(_QWORD *)(Heap_0 + 32) = v20;
              *(_QWORD *)(Heap_0 + 40) = v18;
              *(_QWORD *)(Heap_0 + 48) = v31;
              memmove((void *)(Heap_0 + 56), *(const void **)(v3 + 80), *v17);
              *(_WORD *)(v25 + 2 * ((unsigned __int64)*v17 >> 1) + 56) = 0;
              v26 = NtCurrentPeb()->SharedData;
              if ( v26 && *v26 )
                v27 = (__int64)NtCurrentPeb()->SharedData + 554;
              else
                v27 = 2147353476LL;
              NtTraceEvent(*(unsigned __int8 *)v27, 1026LL, (unsigned int)(v23 - 32), v25);
              RtlFreeHeap_0();
            }
          }
          v7 = LdrpProtectAndRelocateImage(v18);
        }
      }
      else
      {
        v7 = 0;
      }
      LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 397, (__int64)"LdrpRelocateImage", 4, "Status: 0x%08lx\n", v7);
      LdrpLogInternal((int)"minkernel\\ldr\\ldrmap.c", 398, (__int64)"LdrpRelocateImage", 6, "%x\n", v7);
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
