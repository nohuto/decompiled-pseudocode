/*
 * XREFs of ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x140013CA0
 * Callers:
 *     GreIntersectClipRect @ 0x140043770 (GreIntersectClipRect.c)
 * Callees:
 *     ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x14000DDA0 (-bCopy@RGNOBJ@@QEAAHAEAV1@@Z.c)
 *     ?RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z @ 0x14000E384 (-RegionCore_bContain_region@Win32kRS@@YAHPEBVREGION_CORE@@0@Z.c)
 *     ?RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z @ 0x14000E4A0 (-RegionCore_is_rect@Win32kRS@@YAHPEBVREGION_CORE@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x14000E530 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x14000E920 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x14000E9F0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1?ObfDereferenceObject@@YA_J0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x14000EB2C (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_DEVICE_OBJECT@@$$A6A_JPEAX@Z$1-ObfDe.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14000EB3C (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x14000EB90 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x14000EE20 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ @ 0x140010450 (-vDeleteRGNOBJ@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011470 (-vSet@RGNCOREOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x140011FD0 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012320 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x1400133F0 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ??0RGNMEMOBJ@@QEAA@XZ @ 0x140013C70 (--0RGNMEMOBJ@@QEAA@XZ.c)
 *     EngSetLastError @ 0x140015E30 (EngSetLastError.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x14001C880 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140044FB0 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@XZ @ 0x140046948 (--0-$SEMOBJSHARED@$00@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x14009004C (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z @ 0x1400F32DC (-RegionCore_iCombine@Win32kRS@@YAJPEAVREGION_CORE@@00J@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DC::iCombine(DC *this, struct _RECTL *a2, int a3)
{
  LONG left; // eax
  __int64 v5; // r15
  __int64 v7; // r12
  ULONG_PTR v9; // rbx
  struct REGION_CORE *v10; // rsi
  unsigned int v11; // r14d
  char *v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // eax
  ULONG_PTR *v16; // rcx
  const struct REGION_CORE *v17; // rdx
  const struct REGION_CORE *v18; // r9
  Win32kRS *v19; // rcx
  const struct REGION_CORE *v20; // r8
  const struct REGION_CORE *v21; // rdx
  Win32kRS *v22; // rcx
  const struct REGION_CORE *v23; // r8
  struct RGNOBJ *v24; // rdx
  Win32kRS **v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // xmm1_8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // xmm0_8
  LONG v30; // r8d
  LONG v31; // edx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r9
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rax
  _DWORD *v36; // rbx
  LONG v37; // r9d
  unsigned __int64 v38; // rdx
  LONG top; // r8d
  char *v40; // r10
  LONG v41; // r9d
  LONG v42; // eax
  int v43; // ecx
  LONG v44; // r8d
  LONG v45; // edx
  int v46; // [rsp+20h] [rbp-49h]
  struct _RECTL *v47; // [rsp+50h] [rbp-19h] BYREF
  Win32kRS *v48; // [rsp+58h] [rbp-11h] BYREF
  ULONG_PTR v49; // [rsp+60h] [rbp-9h] BYREF
  __int64 v50; // [rsp+68h] [rbp-1h] BYREF
  struct _RECTL v51; // [rsp+70h] [rbp+7h] BYREF

  left = a2->left;
  v5 = *((_QWORD *)this + 20);
  v47 = a2;
  v7 = a3;
  if ( (left & 0xF8000000) != -134217728 && (left & 0xF8000000) != 0
    || (a2->bottom & 0xF8000000) != -134217728 && (a2->bottom & 0xF8000000) != 0
    || (a2->right & 0xF8000000) != 0 && (a2->right & 0xF8000000) != -134217728
    || (a2->top & 0xF8000000) != 0 && (a2->top & 0xF8000000) != -134217728 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v49);
  v9 = v49;
  if ( !v49 )
    return 0LL;
  v10 = qword_1402A10B0;
  v11 = 2;
  if ( qword_1402A10B0 )
  {
    v12 = (char *)qword_1402A10B0 + 8;
    v48 = (Win32kRS *)((v49 + 24) & -(__int64)(v49 != 0));
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v10 + 8, 2LL);
    v13 = *(_QWORD *)v10;
    (*(void (__fastcall **)(Win32kRS *, struct _RECTL *))(v13 + 176))(v48, v47);
    if ( !(*(unsigned int (__fastcall **)(Win32kRS *))(v13 + 216))(v48) )
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v48, 0LL, 0LL, 0LL, 0LL, 0);
    ExReleasePushLockSharedEx(v12, 2LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    v48 = (Win32kRS *)((v49 + 24) & -(__int64)(v49 != 0));
    RGNCOREOBJ::vSet(&v48, a2);
  }
  DC::vReleaseRao(this);
  if ( v5 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
    if ( !v47 )
    {
      v11 = 0;
      goto LABEL_21;
    }
    v48 = (Win32kRS *)v5;
    if ( v47 == *(struct _RECTL **)(*(_QWORD *)(W32GetSessionState() + 88) + 4160LL) )
    {
LABEL_43:
      v14 = RGNOBJ::iComplexity((RGNOBJ *)&v47, v17);
      goto LABEL_16;
    }
    if ( qword_1402A10B0 )
    {
      v14 = Win32kRS::RegionCore_iCombine(
              (Win32kRS *)((unsigned __int64)&v47[1].right & -(__int64)(v47 != 0LL)),
              (struct REGION_CORE *)(v5 + 24),
              (struct REGION_CORE *)((v9 + 24) & -(__int64)(v9 != 0)),
              (struct REGION_CORE *)(unsigned int)v7,
              v46);
LABEL_16:
      v11 = v14;
      goto LABEL_17;
    }
    if ( (unsigned int)(v7 - 1) > 1 )
    {
LABEL_42:
      LOBYTE(v18) = byte_14025D458[v7];
      if ( !(unsigned int)RGNOBJ::bMerge((RGNOBJ *)&v47, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v49, v18) )
      {
LABEL_51:
        RGNOBJ::vSet((RGNOBJ *)&v47);
        v11 = 0;
        goto LABEL_17;
      }
      goto LABEL_43;
    }
    v19 = (Win32kRS *)(v5 + 24);
    if ( qword_1402A10B0 )
    {
      if ( !(unsigned int)Win32kRS::RegionCore_is_rect(v19, v17) )
        goto LABEL_30;
    }
    else if ( (unsigned int)REGION_CORE::get_sizeScan(v19) != 56 )
    {
LABEL_30:
      v21 = qword_1402A10B0;
      goto LABEL_31;
    }
    v21 = qword_1402A10B0;
    if ( qword_1402A10B0 )
    {
      if ( !(unsigned int)Win32kRS::RegionCore_bContain_region(
                            (Win32kRS *)(v5 + 24),
                            (const struct REGION_CORE *)((v9 + 24) & -(__int64)(v9 != 0)),
                            v20) )
        goto LABEL_30;
    }
    else if ( *(_DWORD *)(v5 + 52) > *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x1C)
           || *(_DWORD *)(v5 + 60) < *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x24)
           || *(_DWORD *)(v5 + 56) > *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x20)
           || *(_DWORD *)(v5 + 64) < *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x28) )
    {
LABEL_31:
      v22 = (Win32kRS *)((v9 + 24) & -(__int64)(v9 != 0));
      if ( v21 )
      {
        if ( (unsigned int)Win32kRS::RegionCore_is_rect(v22, v21) )
          goto LABEL_33;
      }
      else if ( (unsigned int)REGION_CORE::get_sizeScan(v22) == 56 )
      {
LABEL_33:
        if ( qword_1402A10B0 )
        {
          if ( (unsigned int)Win32kRS::RegionCore_bContain_region(
                               (Win32kRS *)((v9 + 24) & -(__int64)(v9 != 0)),
                               (const struct REGION_CORE *)(v5 + 24),
                               v23) )
          {
LABEL_38:
            v24 = (struct RGNOBJ *)&v49;
            v25 = &v48;
            goto LABEL_48;
          }
        }
        else if ( *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x1C) <= *(_DWORD *)(v5 + 52)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x24) >= *(_DWORD *)(v5 + 60)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x20) <= *(_DWORD *)(v5 + 56)
               && *(_DWORD *)(((v9 + 24) & -(__int64)(v9 != 0)) + 0x28) >= *(_DWORD *)(v5 + 64) )
        {
          goto LABEL_38;
        }
      }
      if ( (_DWORD)v7 == 1
        && (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v5 + 24)) == 56
        && (unsigned int)REGION_CORE::get_sizeScan((REGION_CORE *)(v9 + 24)) == 56 )
      {
        v51 = 0LL;
        v26 = *(_QWORD *)(v5 + 52);
        v27 = _mm_srli_si128(*(__m128i *)(v5 + 52), 8).m128i_u64[0];
        v28 = *(_QWORD *)(v9 + 52);
        v29 = _mm_srli_si128(*(__m128i *)(v9 + 52), 8).m128i_u64[0];
        v30 = *(_OWORD *)(v9 + 52);
        if ( (int)v26 > (int)v28 )
          v30 = *(_QWORD *)(v5 + 52);
        v31 = v29;
        v51.left = v30;
        if ( (int)v27 < (int)v29 )
          v31 = v27;
        v32 = HIDWORD(v26);
        v33 = HIDWORD(v28);
        v51.right = v31;
        if ( (int)v32 > (int)v33 )
          LODWORD(v33) = v32;
        v34 = HIDWORD(v29);
        v51.top = v33;
        if ( SHIDWORD(v27) < SHIDWORD(v29) )
          LODWORD(v34) = HIDWORD(v27);
        v51.bottom = v34;
        if ( v30 >= v31 || (int)v33 >= (int)v34 )
          RGNOBJ::vSet((RGNOBJ *)&v47);
        else
          RGNOBJ::vSet((RGNOBJ *)&v47, &v51);
LABEL_17:
        if ( v11 )
        {
          ++v47[4].bottom;
          *((_QWORD *)this + 20) = v47;
          if ( (*(_DWORD *)(v5 + 76))-- != 1 )
          {
LABEL_21:
            RGNOBJ::vDeleteRGNOBJ(&v49);
            return v11;
          }
          v16 = (ULONG_PTR *)&v48;
        }
        else
        {
          v16 = (ULONG_PTR *)&v47;
        }
        RGNOBJ::vDeleteRGNOBJ(v16);
        goto LABEL_21;
      }
      goto LABEL_42;
    }
    v24 = (struct RGNOBJ *)&v48;
    v25 = (Win32kRS **)&v49;
LABEL_48:
    if ( (_DWORD)v7 == 1 )
      v24 = (struct RGNOBJ *)v25;
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v47, v24) )
      goto LABEL_51;
    goto LABEL_43;
  }
  if ( (_DWORD)v7 != 1 )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_DEVICE_OBJECT *,__int64 (void *),&__int64 ObfDereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_DEVICE_OBJECT *,_DEVICE_OBJECT *,0,std::nullptr_t>>>(&v48);
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v48, 0x70u);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v48);
    if ( v47 )
    {
      if ( v48 )
      {
        if ( (unsigned int)DC::bDpiScaledSurface(this) )
          v35 = *(_QWORD *)((char *)this + 532);
        else
          v35 = *((_QWORD *)this + 64);
        v36 = (_DWORD *)*((_QWORD *)this + 6);
        v37 = 0;
        *(_QWORD *)&v51.left = 0LL;
        v38 = HIDWORD(v35);
        top = 0;
        *(_QWORD *)&v51.right = v35;
        if ( *((_QWORD *)this + 62) )
        {
          SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v50);
          if ( (v36[10] & 0x20000) != 0 && *(int *)(*((_QWORD *)this + 62) + 112LL) < 0 )
          {
            v51.left += v36[644];
            v51.right += v36[644];
            v51.top += v36[645];
            v51.bottom += v36[645];
          }
          GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(GreReleaseSemaphoreSharedInternal, v50);
          LODWORD(v38) = v51.bottom;
          LODWORD(v35) = v51.right;
          top = v51.top;
          v37 = v51.left;
        }
        v40 = (char *)this + 1024;
        if ( (*((_DWORD *)this + 10) & 1) == 0 )
          v40 = (char *)this + 1016;
        v41 = v37 - *(_DWORD *)v40;
        v42 = v35 - *(_DWORD *)v40;
        v51.left = v41;
        v43 = *((_DWORD *)v40 + 1);
        v44 = top - v43;
        v45 = v38 - v43;
        v51.right = v42;
        v51.top = v44;
        v51.bottom = v45;
        if ( v44 == v45 || v41 == v42 || v41 < v42 && v44 < v45 )
        {
          RGNOBJ::vSet((RGNOBJ *)&v48, &v51);
          v11 = RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)&v48, (struct RGNOBJ *)&v49, v7);
          if ( v11 )
          {
            ++v47[4].bottom;
            *((_QWORD *)this + 20) = v47;
            goto LABEL_76;
          }
        }
        else
        {
          v11 = 0;
        }
        RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v47);
        goto LABEL_76;
      }
      RGNOBJ::vDeleteRGNOBJ((ULONG_PTR *)&v47);
    }
    v11 = 0;
LABEL_76:
    RGNOBJ::vDeleteRGNOBJ(&v49);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v48);
    return v11;
  }
  ++*(_DWORD *)(v9 + 76);
  *((_QWORD *)this + 20) = v9;
  return v11;
}
