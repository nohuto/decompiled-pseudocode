/*
 * XREFs of RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___ @ 0x1401C40E4
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z @ 0x1401C4890 (-iCombine@RGNOBJ@@QEAAJAEBVRustAutoHotpatchLockSH@@AEAV1@1J@Z.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14000E41C (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x14000E920 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x14000EB90 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x140099180 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAV1@@Z @ 0x1400C6DAC (-bContain@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNCOREOBJ::iCombine_RGNOBJ__RGNOBJ::iCombine_::_2_::_lambda_1___(
        __int64 a1,
        const struct REGION_CORE *a2,
        RGNOBJ *a3,
        const struct REGION_CORE *a4,
        unsigned int a5,
        RGNOBJ *a6)
{
  RGNOBJ *v6; // rbx
  struct RGNOBJ *v7; // rdi
  __int64 v9; // rdi
  const struct REGION_CORE *v10; // rsi
  unsigned int v11; // ebx
  const struct REGION_CORE *v13; // rdx
  struct RGNOBJ *v14; // rdx
  int v15; // eax
  const struct REGION_CORE *v16; // rdx
  __int64 v17; // rax
  __m128i v18; // xmm1
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // xmm1_8
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // xmm0_8
  LONG v23; // r8d
  LONG v24; // edx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r9
  unsigned __int64 v27; // r10
  struct _RECTL v28; // [rsp+30h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a4;
  if ( qword_1402A10B0 )
  {
    v9 = *(_QWORD *)qword_1402A10B0;
    v10 = (const struct REGION_CORE *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL));
    v11 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, __int64, _QWORD))(*(_QWORD *)qword_1402A10B0
                                                                                          + 192LL))(
            v10,
            (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL),
            (*(_QWORD *)a4 + 24LL) & -(__int64)(*(_QWORD *)a4 != 0LL),
            a5);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan((unsigned int (__fastcall **)(const struct REGION_CORE *))(v9 + 48), v10);
    return v11;
  }
  if ( a5 - 1 > 1 )
    goto LABEL_33;
  if ( (unsigned int)RGNOBJ::bRectl(a3, a2) && (unsigned int)RGNOBJ::bContain(v6, v7) )
  {
    if ( a5 != 1 )
      v7 = v6;
    v14 = v7;
LABEL_9:
    v15 = RGNOBJ::bCopy(a6, v14);
    goto LABEL_10;
  }
  if ( (unsigned int)RGNOBJ::bRectl(v7, v13) && (unsigned int)RGNOBJ::bContain(v7, v6) )
  {
    if ( a5 != 1 )
      v6 = v7;
    v14 = v6;
    goto LABEL_9;
  }
  if ( a5 != 1
    || (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v6 + 24LL)) != 56
    || (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)v7 + 24LL)) != 56 )
  {
LABEL_33:
    LOBYTE(a4) = byte_14025D458[a5];
    v15 = RGNOBJ::bMerge(a2, v6, v7, a4);
LABEL_10:
    if ( v15 )
      return RGNOBJ::iComplexity(a2, v16);
    RGNOBJ::vSet(a2);
    return 0LL;
  }
  v17 = *(_QWORD *)v6;
  v28 = 0LL;
  v18 = *(__m128i *)(v17 + 52);
  v19 = *(_QWORD *)(v17 + 52);
  v20 = _mm_srli_si128(v18, 8).m128i_u64[0];
  v21 = *(_QWORD *)(*(_QWORD *)v7 + 52LL);
  v22 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)v7 + 52LL), 8).m128i_u64[0];
  v23 = *(_OWORD *)(*(_QWORD *)v7 + 52LL);
  if ( (int)v19 > (int)v21 )
    v23 = v19;
  v24 = v22;
  v28.left = v23;
  if ( (int)v20 < (int)v22 )
    v24 = v20;
  v25 = HIDWORD(v19);
  v26 = HIDWORD(v21);
  v28.right = v24;
  if ( (int)v25 > (int)v26 )
    LODWORD(v26) = v25;
  v27 = HIDWORD(v22);
  v28.top = v26;
  if ( SHIDWORD(v20) < SHIDWORD(v22) )
    LODWORD(v27) = HIDWORD(v20);
  v28.bottom = v27;
  if ( v23 >= v24 || (int)v26 >= (int)v27 )
    RGNOBJ::vSet(a2);
  else
    RGNOBJ::vSet(a2, &v28);
  return 2LL;
}
