/*
 * XREFs of RtlpHpHeapAllocate @ 0x14063B058
 * Callers:
 *     RtlpHpHeapCreate @ 0x14063B29C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpFreeVA @ 0x140352258 (RtlpHpFreeVA.c)
 *     RtlpHpMetadataAlloc @ 0x1403542D4 (RtlpHpMetadataAlloc.c)
 *     RtlpHpAllocVA @ 0x1403660F0 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x1404D8AFC (RtlpHpMetadataCommit.c)
 *     RtlpHpVsCalculateAffinitySlotCount @ 0x140533670 (RtlpHpVsCalculateAffinitySlotCount.c)
 *     RtlpHpLfhContextMaximumExtension @ 0x14063C91C (RtlpHpLfhContextMaximumExtension.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall RtlpHpHeapAllocate(int a1, unsigned int a2, __int128 *a3)
{
  unsigned int v6; // eax
  __int128 v7; // xmm0
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  int v11; // edi
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  __int128 v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int64 v21; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  RtlpHpLfhContextMaximumExtension(a2);
  v6 = RtlpHpVsCalculateAffinitySlotCount(a2);
  v7 = *a3;
  v18 = 4096LL;
  v9 = 4LL * v6 + (v6 << 7) - (unsigned __int64)((4 * (_BYTE)v6 - 1) & 0x3F) + v8 + 2431;
  v19 = v7;
  v10 = v9 - (((_WORD)v9 - 1) & 0xFFF) + 4095;
  v21 = v10;
  if ( (a1 & 0x2000000) != 0 )
  {
    v11 = a1 & 0x40000000;
LABEL_3:
    v12 = -v11;
    v19 = v7;
    if ( (int)RtlpHpAllocVA(&v20, (__int64 *)&v21, 0LL, (struct _KLOCK_ENTRIES *)0x2000, v12 != 0 ? 64 : 4, &v19) < 0
      || (v19 = *a3,
          (int)RtlpHpAllocVA(&v20, (__int64 *)&v18, 0LL, (struct _KLOCK_ENTRIES *)0x1000, v12 != 0 ? 64 : 4, &v19) < 0) )
    {
      v13 = 0LL;
      goto LABEL_17;
    }
    v13 = v20;
    v15 = 0;
    v20 = 0LL;
    goto LABEL_14;
  }
  v11 = a1 & 0x40000000;
  if ( v11 || BYTE2(v19) || (v19 & 6) != 6 && (BYTE1(v19) < 2u || BYTE1(v19) >= 5u) )
    goto LABEL_3;
  v19 = v7;
  v14 = RtlpHpMetadataAlloc(v10, 0x1000uLL, 1, &v19);
  v13 = v14;
  if ( !v14 )
    goto LABEL_17;
  v19 = *a3;
  RtlpHpMetadataCommit(v14, v14 + v18, v21 - v18, &v19, 0);
  v15 = 1;
LABEL_14:
  memset_0((void *)v13, 0, 0x940uLL);
  *(_QWORD *)(v13 + 240) = v13 + 2368;
  v16 = v13 + v18;
  *(_QWORD *)(v13 + 256) = v10 + v13;
  *(_QWORD *)(v13 + 248) = v16;
  *(_QWORD *)(v13 + 264) = v13 + v21;
  if ( v15 )
    *(_WORD *)(v13 + 30) |= 1u;
  _InterlockedAdd64((volatile signed __int64 *)(v13 + 128), v21 >> 12);
  _InterlockedAdd64((volatile signed __int64 *)(v13 + 136), v18 >> 12);
LABEL_17:
  if ( v20 )
  {
    v19 = *a3;
    RtlpHpFreeVA((unsigned __int64 *)&v20, &v21, 0x8000LL, &v19);
  }
  return v13;
}
