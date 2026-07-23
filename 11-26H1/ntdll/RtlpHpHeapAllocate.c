/*
 * XREFs of RtlpHpHeapAllocate @ 0x1800E6ECC
 * Callers:
 *     RtlpHpHeapCreate @ 0x180104964 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180013230 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataAlloc @ 0x18002DB90 (RtlpHpMetadataAlloc.c)
 *     RtlpHpFreeVA @ 0x18006EE10 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x18006EF50 (RtlpHpAllocVA.c)
 *     RtlpLogHeapCommit @ 0x1800956B0 (RtlpLogHeapCommit.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x1800E71B0 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x1800E71E4 (RtlpHpLfhContextMaximumExtension.c)
 *     RtlpHpMetadataCommit @ 0x1800E7268 (RtlpHpMetadataCommit.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __int128 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // eax
  __int128 v9; // xmm0
  unsigned __int64 v10; // rsi
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  ULONG_PTR v13; // r12
  int v14; // edi
  int v15; // edi
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  int v18; // r15d
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-20h] BYREF
  ULONG_PTR v22[2]; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+48h] BYREF

  BaseAddress = 0LL;
  RtlpHpLfhContextMaximumExtension(a2);
  v8 = RtlpHpVsCalculateAffinitySlotCount(a2, v6, v7);
  v9 = *a3;
  v10 = 4096LL;
  *(_QWORD *)&v21 = 4096LL;
  v12 = 4LL * v8 + (v8 << 7) - (unsigned __int64)((4 * (_BYTE)v8 - 1) & 0x3F) + v11 + 2431;
  v13 = v12 - (((_WORD)v12 - 1) & 0xFFF) + 4095;
  RegionSize = v13;
  if ( (a1 & 0x2000000) != 0 )
  {
    v14 = a1 & 0x40000000;
  }
  else
  {
    v14 = a1 & 0x40000000;
    if ( !v14 && !BYTE2(v9) && ((v9 & 6) == 6 || BYTE1(v9) >= 2u && BYTE1(v9) < 5u) )
    {
      v21 = v9;
      v20 = RtlpHpMetadataAlloc(v13, 0x1000uLL, 1, &v21);
      v17 = (volatile signed __int64 *)v20;
      if ( !v20 )
        goto LABEL_12;
      v21 = *a3;
      RtlpHpMetadataCommit(v20, v20 + 4096, RegionSize - 4096, (unsigned int)&v21, 0);
      v18 = 1;
      goto LABEL_9;
    }
  }
  v15 = -v14;
  *(_OWORD *)v22 = v9;
  if ( (int)RtlpHpAllocVA(&BaseAddress, (__m128i **)&RegionSize, 0LL, 0x2000u, v15 != 0 ? 64 : 4, (__m128i *)v22) < 0
    || (*(_OWORD *)v22 = *a3,
        (int)RtlpHpAllocVA(&BaseAddress, (__m128i **)&v21, 0LL, 0x1000u, v15 != 0 ? 64 : 4, (__m128i *)v22) < 0) )
  {
    v17 = 0LL;
    goto LABEL_12;
  }
  if ( RtlGetCurrentServiceSessionId() )
    v16 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v16 = 2147353472LL;
  v10 = v21;
  if ( *(_BYTE *)v16 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit((__int64)BaseAddress, (__int64)BaseAddress, v21, 11);
  v17 = (volatile signed __int64 *)BaseAddress;
  v18 = 0;
  BaseAddress = 0LL;
LABEL_9:
  memset_thunk_772440563353939046((void *)v17, 0, 0x940uLL);
  *((_QWORD *)v17 + 30) = v17 + 296;
  *((_QWORD *)v17 + 31) = (char *)v17 + v10;
  *((_QWORD *)v17 + 32) = (char *)v17 + v13;
  *((_QWORD *)v17 + 33) = (char *)v17 + RegionSize;
  if ( v18 )
    *((_WORD *)v17 + 15) |= 1u;
  _InterlockedAdd64(v17 + 16, RegionSize >> 12);
  _InterlockedAdd64(v17 + 17, v10 >> 12);
LABEL_12:
  if ( BaseAddress )
  {
    *(_OWORD *)v22 = *a3;
    RtlpHpFreeVA(&BaseAddress, &RegionSize, 0x8000u, (__m128i *)v22);
  }
  return v17;
}
