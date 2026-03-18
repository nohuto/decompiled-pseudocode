/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730
 * Callers:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x140013030 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     GreValidateVisrgn @ 0x1400149E8 (GreValidateVisrgn.c)
 *     GreSelectVisRgn @ 0x140016B80 (GreSelectVisRgn.c)
 *     GreSelectVisRgnShared @ 0x140017500 (GreSelectVisRgnShared.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x140017FB0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z @ 0x14003B040 (-GrepSetDCOwnerEx@@YAHAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@KHH@Z.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x14003E960 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiCreateRectRgn @ 0x140102C20 (NtGdiCreateRectRgn.c)
 *     ?MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x140121BC0 (-MulEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z.c)
 *     EngCreateClip @ 0x140121DA0 (EngCreateClip.c)
 *     GreCreateRectRgn @ 0x140194400 (GreCreateRectRgn.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z @ 0x1401A5920 (-iCombine@DC@@QEAAJPEAVEXFORMOBJR@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1401BABF0 (GreIntersectVisRect.c)
 * Callees:
 *     ?set_sizeScan@REGION_CORE@@IEAAXK@Z @ 0x14000F730 (-set_sizeScan@REGION_CORE@@IEAAXK@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ @ 0x1400A8710 (-get_pScan@REGION_CORE@@IEAAPEAVSCAN@@XZ.c)
 *     ?vSet@RGNCOREOBJ@@QEAAXXZ @ 0x1400FD0A0 (-vSet@RGNCOREOBJ@@QEAAXXZ.c)
 *     _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C (_GrepCaptureLiveMemoryDump_--_2_--_lambda_1_--operator().c)
 *     ??1Serializer@NSInstrumentation@@QEAA@XZ @ 0x1401EE3EC (--1Serializer@NSInstrumentation@@QEAA@XZ.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSI.c)
 *     ?Serialize@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F0640 (-Serialize@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this, const struct _RECTL *const a2)
{
  __int64 v2; // r8
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  const struct BaseRustExports *v7; // rbx
  __int64 v8; // r14
  void *v9; // rax
  void *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct SCAN *pScan; // rax
  _DWORD *v15; // r8
  struct SCAN *v16; // rax
  char *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  __int64 v20; // [rsp+58h] [rbp-40h]
  __int128 v21; // [rsp+60h] [rbp-38h] BYREF
  __int64 v22; // [rsp+70h] [rbp-28h]
  __int64 v23; // [rsp+78h] [rbp-20h]
  __int64 v24; // [rsp+B0h] [rbp+18h] BYREF

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v5 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    if ( !v2 )
      v4 = 0LL;
    (*(void (__fastcall **)(__int64))(v5 + 136))(v4);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v5 + 176))(v4) )
    {
      v8 = *(_QWORD *)(W32GetSessionState(v6) + 88);
      if ( v8 != -3736 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v8 + 3736));
      v9 = (void *)PALLOCMEM(1572864LL, 1886221383LL);
      v10 = v9;
      if ( v9 )
      {
        memmove(v9, *(const void **)(v8 + 1856), 0x180000uLL);
        *(_QWORD *)(v8 + 3752) = v10;
      }
      else
      {
        EngSetLastError(8u);
      }
      v11 = PALLOCMEM(64LL, 1869834581LL);
      *(_QWORD *)(v8 + 3744) = v11;
      if ( v11 )
      {
        v12 = *(_QWORD *)(v8 + 4384);
        v22 = 0LL;
        v21 = 0LL;
        v23 = 0LL;
        if ( (unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Serialize(
                                v12,
                                &v21) )
        {
          v13 = *(_QWORD *)(v8 + 3744);
          v19 = v21;
          v20 = v22;
          gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
            v13,
            &v19);
        }
        NSInstrumentation::Serializer::~Serializer((NSInstrumentation::Serializer *)&v21);
      }
      v19 = v8;
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v4, 0LL, 0LL, 0LL, 0LL, 0);
      LOBYTE(v20) = 0;
      GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator()(&v19);
      if ( v10 )
        GreDeleteFastMutex(v10);
      if ( v8 != -3736 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v8 + 3736));
    }
  }
  else
  {
    if ( !v2 )
      v4 = 0LL;
    v24 = v4;
    if ( WPP_MAIN_CB.Dpc.DeferredContext )
    {
      v7 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 136LL))(v4);
      RgnCaptureLiveMemoryDumpOnZeroSizedScan(v7, (const struct REGION_CORE *)v4);
    }
    else if ( a2->left == a2->right || a2->top == a2->bottom )
    {
      RGNCOREOBJ::vSet((RGNCOREOBJ *)&v24);
    }
    else
    {
      *(struct _RECTL *)(v4 + 28) = *a2;
      if ( REGION_CORE::get_sizeScan((REGION_CORE *)v4) == 56 )
      {
        pScan = REGION_CORE::get_pScan((REGION_CORE *)v4);
        *((_DWORD *)pScan + 2) = a2->top;
        v15 = (_DWORD *)((char *)pScan + (unsigned int)(4 * *(_DWORD *)pScan + 16));
        v15[1] = a2->top;
        v15[2] = a2->bottom;
        v15[3] = a2->left;
        v15[4] = a2->right;
        *(_DWORD *)((char *)v15 + (unsigned int)(4 * *v15 + 16) + 4) = a2->bottom;
      }
      else
      {
        REGION_CORE::set_sizeScan((REGION_CORE *)v4, 0x38u);
        *(_DWORD *)(v4 + 24) = 3;
        v16 = REGION_CORE::get_pScan((REGION_CORE *)v4);
        *(_DWORD *)v16 = 0;
        v17 = (char *)v16 + 16;
        *((_DWORD *)v16 + 1) = 0x80000000;
        *((_DWORD *)v16 + 2) = a2->top;
        *((_DWORD *)v16 + 3) = 0;
        *((_DWORD *)v16 + 4) = 2;
        *((_DWORD *)v16 + 5) = a2->top;
        *((_DWORD *)v16 + 6) = a2->bottom;
        *((_DWORD *)v16 + 7) = a2->left;
        *((_DWORD *)v16 + 8) = a2->right;
        *((_DWORD *)v16 + 9) = 2;
        v18 = (unsigned int)(4 * *((_DWORD *)v16 + 4) + 16);
        *(_DWORD *)&v17[v18] = 0;
        *(_DWORD *)&v17[(unsigned int)v18 + 4] = a2->bottom;
        *(_QWORD *)&v17[(unsigned int)v18 + 8] = 0x7FFFFFFFLL;
      }
    }
  }
}
