/*
 * XREFs of ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530
 * Callers:
 *     ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x14000DC40 (-iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z.c)
 *     GreCombineRgn @ 0x14000DFC0 (GreCombineRgn.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140097160 (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x140159390 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x14017D540 (GreIntersectVisRect.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x14000E384 (-RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z.c)
 *     ?bRectl@RGNOBJ@@QEBAHXZ @ 0x14000E41C (-bRectl@RGNOBJ@@QEBAHXZ.c)
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x14000E4A0 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x14000E920 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x14000EB90 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::iCombine(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // r14
  struct REGION_CORE *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  __int64 v12; // rsi
  unsigned int v13; // edi
  const struct REGION_CORE *v15; // rdx
  Win32kRS *v16; // rcx
  bool v17; // al
  const struct REGION_CORE *v18; // rdx
  const struct REGION_CORE *v19; // r8
  __int64 v20; // rdx
  unsigned int *v21; // rcx
  const struct REGION_CORE *v22; // r8
  __int64 v23; // rdx
  int v24; // eax
  struct RGNOBJ *v25; // rdx
  __int64 v26; // rax
  __m128i v27; // xmm1
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // xmm1_8
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // xmm0_8
  LONG v32; // r8d
  LONG v33; // edx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r10
  struct _RECTL v37; // [rsp+50h] [rbp-58h] BYREF

  v4 = a4;
  if ( *(_QWORD *)this != *(_QWORD *)(*(_QWORD *)(W32GetSessionState() + 88) + 4160LL) )
  {
    v8 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      v9 = *(_QWORD *)a3;
      v10 = *(_QWORD *)a2;
      v11 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx((char *)v8 + 8, 2LL);
      v12 = *(_QWORD *)v8;
      v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v8 + 192LL))(
              v11,
              (v10 + 24) & -(__int64)(v10 != 0),
              (v9 + 24) & -(__int64)(v9 != 0),
              (unsigned int)v4);
      if ( !(*(unsigned int (__fastcall **)(__int64))(v12 + 216))(v11) )
        DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v11, 0LL, 0LL, 0LL, 0LL, 0);
      ExReleasePushLockSharedEx((char *)v8 + 8, 2LL);
      KeLeaveCriticalRegion();
      return v13;
    }
    if ( (unsigned int)(v4 - 1) > 1 )
      goto LABEL_20;
    v15 = (const struct REGION_CORE *)(*(_QWORD *)a2 + 24LL);
    v16 = (Win32kRS *)((unsigned __int64)v15 & -(__int64)(*(_QWORD *)a2 != 0LL));
    if ( qword_1402A10B0 )
      v17 = (unsigned int)Win32kRS::RegionCore_is_rect(v16, v15) != 0;
    else
      v17 = REGION_CORE::get_sizeScan(v16) == 56;
    if ( v17 )
    {
      v20 = *(_QWORD *)a3 + 24LL;
      v21 = (unsigned int *)(v20 & -(__int64)(*(_QWORD *)a3 != 0LL));
      if ( qword_1402A10B0 )
      {
        if ( !(unsigned int)Win32kRS::RegionCore_bContain_region(
                              (Win32kRS *)((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)),
                              (const struct REGION_CORE *)(v20 & -(__int64)(*(_QWORD *)a3 != 0LL)),
                              v19) )
          goto LABEL_16;
      }
      else
      {
        v18 = (const struct REGION_CORE *)*(unsigned int *)((v20 & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x1C);
        if ( *(_DWORD *)(((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x1C) > (int)v18 )
          goto LABEL_16;
        v18 = (const struct REGION_CORE *)v21[9];
        if ( *(_DWORD *)(((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x24) < (int)v18 )
          goto LABEL_16;
        v18 = (const struct REGION_CORE *)v21[8];
        if ( *(_DWORD *)(((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x20) > (int)v18 )
          goto LABEL_16;
        v18 = (const struct REGION_CORE *)v21[10];
        if ( *(_DWORD *)(((*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x28) < (int)v18 )
          goto LABEL_16;
      }
      if ( (_DWORD)v4 != 1 )
        a3 = a2;
      v25 = a3;
      goto LABEL_29;
    }
LABEL_16:
    if ( (unsigned int)RGNOBJ::bRectl(a3, v18) )
    {
      v23 = *(_QWORD *)a2 + 24LL;
      if ( qword_1402A10B0 )
      {
        if ( !(unsigned int)Win32kRS::RegionCore_bContain_region(
                              (Win32kRS *)((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)),
                              (const struct REGION_CORE *)(v23 & -(__int64)(*(_QWORD *)a2 != 0LL)),
                              v22) )
          goto LABEL_19;
        goto LABEL_34;
      }
      if ( *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x1C) <= *(_DWORD *)((v23 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x1C)
        && *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x24) >= *(_DWORD *)((v23 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x24)
        && *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x20) <= *(_DWORD *)((v23 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x20)
        && *(_DWORD *)(((*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL)) + 0x28) >= *(_DWORD *)((v23 & -(__int64)(*(_QWORD *)a2 != 0LL)) + 0x28) )
      {
LABEL_34:
        if ( (_DWORD)v4 != 1 )
          a2 = a3;
        v25 = a2;
LABEL_29:
        v24 = RGNOBJ::bCopy(this, v25);
LABEL_21:
        if ( v24 )
        {
          return (unsigned int)RGNOBJ::iComplexity(this);
        }
        else
        {
          RGNOBJ::vSet(this);
          return 0;
        }
      }
    }
LABEL_19:
    if ( (_DWORD)v4 == 1
      && REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)a2 + 24LL)) == 56
      && REGION_CORE::get_sizeScan((REGION_CORE *)(*(_QWORD *)a3 + 24LL)) == 56 )
    {
      v26 = *(_QWORD *)a2;
      v37 = 0LL;
      v27 = *(__m128i *)(v26 + 52);
      v28 = *(_QWORD *)(v26 + 52);
      v29 = _mm_srli_si128(v27, 8).m128i_u64[0];
      v30 = *(_QWORD *)(*(_QWORD *)a3 + 52LL);
      v31 = _mm_srli_si128(*(__m128i *)(*(_QWORD *)a3 + 52LL), 8).m128i_u64[0];
      v32 = *(_OWORD *)(*(_QWORD *)a3 + 52LL);
      if ( (int)v28 > (int)v30 )
        v32 = v28;
      v33 = v31;
      v37.left = v32;
      if ( (int)v29 < (int)v31 )
        v33 = v29;
      v34 = HIDWORD(v28);
      v35 = HIDWORD(v30);
      v37.right = v33;
      if ( (int)v34 > (int)v35 )
        LODWORD(v35) = v34;
      v36 = HIDWORD(v31);
      v37.top = v35;
      if ( SHIDWORD(v29) < SHIDWORD(v31) )
        LODWORD(v36) = HIDWORD(v29);
      v37.bottom = v36;
      if ( v32 >= v33 || (int)v35 >= (int)v36 )
        RGNOBJ::vSet(this);
      else
        RGNOBJ::vSet(this, &v37);
      return 2;
    }
LABEL_20:
    v24 = RGNOBJ::bMerge(this, a2, a3, byte_14025D458[v4]);
    goto LABEL_21;
  }
  return RGNOBJ::iComplexity(this);
}
