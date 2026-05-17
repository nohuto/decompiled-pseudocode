/*
 * XREFs of RtlpHpHeapAllocate @ 0x18008D814
 * Callers:
 *     RtlpHpHeapCreate @ 0x18008DE64 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180028160 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpMetadataAlloc @ 0x180043620 (RtlpHpMetadataAlloc.c)
 *     RtlpLogHeapCommit @ 0x1800721FC (RtlpLogHeapCommit.c)
 *     RtlpHpFreeVA @ 0x18008B9D0 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x18008BB10 (RtlpHpAllocVA.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x18008DAF8 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x18008DB2C (RtlpHpLfhContextMaximumExtension.c)
 *     RtlpHpMetadataCommit @ 0x18008DCD8 (RtlpHpMetadataCommit.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __m128i *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // eax
  __m128i v10; // xmm0
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // rdx
  __m128i *v14; // r12
  int v15; // edi
  int v16; // edi
  __int64 v17; // rcx
  volatile signed __int64 *v18; // rbx
  int v19; // r15d
  __int64 v21; // rax
  __m128i v22; // [rsp+30h] [rbp-20h] BYREF
  __m128i v23; // [rsp+40h] [rbp-10h] BYREF
  void *v24; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v25; // [rsp+98h] [rbp+48h] BYREF

  v24 = 0LL;
  v6 = RtlpHpLfhContextMaximumExtension(a2);
  v9 = RtlpHpVsCalculateAffinitySlotCount(a2, v7, v8, v6);
  v10 = *a3;
  v11 = 4096LL;
  v22.m128i_i64[0] = 4096LL;
  v13 = 4LL * v9 + (v9 << 7) - (unsigned __int64)((4 * (_BYTE)v9 - 1) & 0x3F) + v12 + 2431;
  v14 = (__m128i *)(v13 - (((_WORD)v13 - 1) & 0xFFF) + 4095);
  v25 = (unsigned __int64)v14;
  if ( (a1 & 0x2000000) != 0 )
  {
    v15 = a1 & 0x40000000;
  }
  else
  {
    v15 = a1 & 0x40000000;
    if ( !v15 && !v10.m128i_i8[2] && ((v10.m128i_i8[0] & 6) == 6 || v10.m128i_i8[1] >= 2u && v10.m128i_i8[1] < 5u) )
    {
      v22 = v10;
      v21 = RtlpHpMetadataAlloc((unsigned __int64)v14, 0x1000uLL, 1, (__int128 *)v22.m128i_i8);
      v18 = (volatile signed __int64 *)v21;
      if ( !v21 )
        goto LABEL_12;
      v22 = *a3;
      RtlpHpMetadataCommit(v21, v21 + 4096, v25 - 4096, (unsigned int)&v22, 0);
      v19 = 1;
      goto LABEL_9;
    }
  }
  v16 = -v15;
  v23 = v10;
  if ( (int)RtlpHpAllocVA((__int64 *)&v24, (__m128i **)&v25, 0LL, 0x2000u, v16 != 0 ? 64 : 4, &v23) < 0
    || (v23 = *a3, (int)RtlpHpAllocVA((__int64 *)&v24, (__m128i **)&v22, 0LL, 0x1000u, v16 != 0 ? 64 : 4, &v23) < 0) )
  {
    v18 = 0LL;
    goto LABEL_12;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v17 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v17 = 2147353472LL;
  v11 = v22.m128i_i64[0];
  if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapCommit((__int64)v24, (__int64)v24, v22.m128i_i64[0], 11);
  v18 = (volatile signed __int64 *)v24;
  v19 = 0;
  v24 = 0LL;
LABEL_9:
  memset_thunk_772440563353939046((void *)v18, 0, 0x940uLL);
  *((_QWORD *)v18 + 30) = v18 + 296;
  *((_QWORD *)v18 + 31) = (char *)v18 + v11;
  *((_QWORD *)v18 + 32) = (char *)v18 + (_QWORD)v14;
  *((_QWORD *)v18 + 33) = (char *)v18 + v25;
  if ( v19 )
    *((_WORD *)v18 + 15) |= 1u;
  _InterlockedAdd64(v18 + 16, v25 >> 12);
  _InterlockedAdd64(v18 + 17, v11 >> 12);
LABEL_12:
  if ( v24 )
  {
    v23 = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v24, &v25, 0x8000u, &v23);
  }
  return v18;
}
