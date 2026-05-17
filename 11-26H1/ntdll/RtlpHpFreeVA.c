/*
 * XREFs of RtlpHpFreeVA @ 0x18008B9D0
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x18008A7C4 (RtlpHpSegMgrRelease.c)
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 * Callees:
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpVaMgrCtxFree @ 0x18008C0B4 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxDecommit @ 0x18011D928 (RtlpHpVaMgrCtxDecommit.c)
 *     ZwFreeVirtualMemory @ 0x18015F300 (ZwFreeVirtualMemory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpFreeVA(unsigned __int64 *a1, unsigned __int64 *a2, unsigned int a3, __m128i *a4)
{
  __m128i v4; // xmm1
  char v8; // cl
  __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // r14d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // xmm1_8

  v4 = *a4;
  if ( a3 == 0x8000 )
  {
    v13 = (*a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v14 = *a1 + *a2 - v13;
    *a1 = v13;
    *a2 = v14;
    if ( !v14 )
      return 0;
    RtlpHpVaMgrCtxFree(&unk_1801C7908, a1, a2, v14);
    v11 = 0;
  }
  else
  {
    v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 1));
    if ( (unsigned __int8)(v8 - 2) <= 2u )
    {
      RtlpHpVaMgrCtxDecommit(&unk_1801C7908);
      v11 = 0;
    }
    else
    {
      v9 = (unsigned __int16)a3 & 0xC000;
      if ( v8 == 5 )
      {
        v15 = _mm_srli_si128(v4, 8).m128i_u64[0];
        v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64 *, unsigned __int64 *, _DWORD))(v15 ^ *(_QWORD *)(v15 + 16) ^ RtlpHpHeapGlobals))(
                v15 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v15,
                -1LL,
                a1,
                a2,
                v9);
      }
      else
      {
        v10 = ZwFreeVirtualMemory(-1LL, a1, a2, v9);
      }
      v11 = v10;
    }
  }
  if ( (RtlpHpHeapFeatures & 0x10) != 0 )
    RtlpHpTlLogVAChange(a3, *a2, *a1, v11);
  return v11;
}
