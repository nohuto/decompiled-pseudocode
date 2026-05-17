/*
 * XREFs of RtlpHpAllocVA @ 0x18008BB10
 * Callers:
 *     RtlpHpSegMgrCommit @ 0x180069E10 (RtlpHpSegMgrCommit.c)
 *     RtlpHpLargeAlloc @ 0x18008A18C (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18008B664 (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 *     RtlpHpHeapExtendContext @ 0x18008E320 (RtlpHpHeapExtendContext.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18002D9F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     RtlpHpTlLogVAChange @ 0x18008BD58 (RtlpHpTlLogVAChange.c)
 *     RtlpHpEnvAllocVA @ 0x18008BE90 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrAlloc @ 0x18008C3AC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrCtxAllocatorFind @ 0x18008CC50 (RtlpHpVaMgrCtxAllocatorFind.c)
 *     RtlpHpVaMgrCtxCommit @ 0x18011D560 (RtlpHpVaMgrCtxCommit.c)
 *     RtlHeapZero @ 0x1801642D0 (RtlHeapZero.c)
 */

__int64 __fastcall RtlpHpAllocVA(__int64 *a1, __m128i **a2, __int64 a3, unsigned int a4, unsigned int a5, __m128i *a6)
{
  __m128i v10; // xmm1
  __int64 v11; // r9
  unsigned int v12; // ecx
  __m128i *v13; // r8
  int v14; // eax
  __m128i *v15; // r8
  int v16; // ebx
  char *v18; // rbp
  __int64 v19; // rcx
  _DWORD v20[3]; // [rsp+50h] [rbp-28h] BYREF
  int v21; // [rsp+5Ch] [rbp-1Ch]
  unsigned __int64 v22; // [rsp+60h] [rbp-18h]

  v20[0] = 0;
  v21 = 0;
  v10 = *a6;
  v11 = a6->m128i_i64[0];
  if ( HIBYTE(a6->m128i_u32[0]) )
    v12 = BYTE3(a6->m128i_i64[0]) - 1;
  else
    v12 = -1;
  v20[0] = v12;
  v20[2] = BYTE2(v11);
  v20[1] = BYTE1(v11);
  if ( (v11 & 8) != 0 )
    v21 = 1;
  v13 = *a2;
  v22 = _mm_srli_si128(v10, 8).m128i_u64[0];
  v14 = (_DWORD)v13 - 1;
  if ( a4 == 0x2000 )
  {
    a6 = (__m128i *)((char *)v13 - (v14 & 0xFFFFF) + 0xFFFFF);
    if ( v12 == -1 )
    {
      RtlAcquireSRWLockShared((volatile signed __int64 *)&unk_1801C8168);
      v18 = (char *)RtlpHpVaMgrCtxAllocatorFind(&unk_1801C7908, v20, 0LL, 0LL);
      RtlReleaseSRWLockShared((volatile signed __int64 *)&unk_1801C8168);
    }
    else
    {
      v18 = (char *)&unk_1801C8178 + 48 * v12;
    }
    v19 = RtlpHpVaMgrAlloc(v18, &a6, a3);
    if ( v19 )
    {
      *a2 = a6;
      *a1 = v19;
      goto LABEL_9;
    }
    v16 = -1073741670;
  }
  else
  {
    v15 = (__m128i *)((char *)v13 - (v14 & 0xFFF) + 4095);
    a6 = v15;
    if ( (unsigned __int8)(_mm_cvtsi128_si32(_mm_srli_si128(v10, 1)) - 2) > 2u )
    {
      v16 = RtlpHpEnvAllocVA((_DWORD)a1, (unsigned int)&a6, a3, a4, a5);
      if ( v16 < 0 )
        goto LABEL_10;
      goto LABEL_8;
    }
    v16 = RtlpHpVaMgrCtxCommit(&unk_1801C7908, *a1, v15, a5);
    if ( v16 >= 0 )
    {
      if ( (a4 & 0x40000000) != 0 )
        RtlHeapZero(*a1, a6);
LABEL_8:
      *a2 = a6;
LABEL_9:
      v16 = 0;
    }
  }
LABEL_10:
  if ( (RtlpHpHeapFeatures & 0x10) != 0 )
    RtlpHpTlLogVAChange(a4, *a2, *a1, (unsigned int)v16);
  return (unsigned int)v16;
}
