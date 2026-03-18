/*
 * XREFs of ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x140015950 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x14001E0D0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     GreCreateRectRgnIndirect @ 0x14001E880 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 * Callees:
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     PALLOCMEM @ 0x1400420F8 (PALLOCMEM.c)
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400431F0 (-GreAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140043320 (-GreReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     _GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator() @ 0x1401C205C (_GrepCaptureLiveMemoryDump_--_2_--_lambda_1_--operator().c)
 *     ?RustOnZeroSizedScanCallback@@YAXXZ @ 0x1401C3F80 (-RustOnZeroSizedScanCallback@@YAXXZ.c)
 *     ??1Serializer@NSInstrumentation@@QEAA@XZ @ 0x1401EE3EC (--1Serializer@NSInstrumentation@@QEAA@XZ.c)
 *     ?Deserialize@?$DeserializedTypeIsolationFactory@V?$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CDeserializedTypeIsolation@$0KAAA@$0KA@@2@V?$CDeserializedTypeIsolation@$0MAAA@$0MA@@2@V?$CDeserializedTypeIsolation@$0JAAA@$0JA@@2@V?$CDeserializedTypeIsolation@$0BEAAA@$0BEA@@2@V?$CDeserializedTypeIsolation@$0NOAAA@$0NOA@@2@V?$CDeserializedTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVDeserializer@NSInstrumentation@@@Z @ 0x1401EF4F4 (-Deserialize@-$DeserializedTypeIsolationFactory@V-$CDeserializedTypeIsolation@$0CMAAA@$0CMA@@NSI.c)
 *     ?Serialize@?$TypeIsolationFactory@V?$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0MAAA@$0MA@@2@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@2@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0NOAAA@$0NOA@@2@V?$CTypeIsolation@$0IAAA@$0IA@@2@@gdi@@SA_NPEAPEAEAEAVSerializer@NSInstrumentation@@@Z @ 0x1401F0640 (-Serialize@-$TypeIsolationFactory@V-$CLookAsideTypeIsolation@$0CMAAA@$0CMA@@NSInstrumentation@@V.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

void __fastcall RGNOBJ::vSet(RGNOBJ *this)
{
  PVOID DeferredContext; // rdx
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rsi
  void *v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h]

  DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
  v2 = *(_QWORD *)this;
  v3 = *(_QWORD *)this + 24LL;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v8 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v9 = -v2;
    v10 = v3 & -(__int64)(v9 != 0);
    (*(void (__fastcall **)(__int64, PVOID, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 120LL))(
      v10,
      WPP_MAIN_CB.Dpc.DeferredContext,
      v9);
    if ( !(*(unsigned int (__fastcall **)(__int64))(v8 + 176))(v10) )
    {
      v12 = *(_QWORD *)(W32GetSessionState(v11) + 88);
      if ( v12 != -3736 )
        GreAcquirePushLockExclusive((struct W32_PUSH_LOCK *)(v12 + 3736));
      v13 = (void *)PALLOCMEM(1572864LL, 1886221383LL);
      v14 = v13;
      if ( v13 )
      {
        memmove(v13, *(const void **)(v12 + 1856), 0x180000uLL);
        *(_QWORD *)(v12 + 3752) = v14;
      }
      else
      {
        EngSetLastError(8u);
      }
      v15 = PALLOCMEM(64LL, 1869834581LL);
      *(_QWORD *)(v12 + 3744) = v15;
      if ( v15 )
      {
        v16 = *(_QWORD *)(v12 + 4384);
        v21 = 0LL;
        v20 = 0LL;
        v22 = 0LL;
        if ( (unsigned __int8)gdi::TypeIsolationFactory<NSInstrumentation::CLookAsideTypeIsolation<180224,704>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<49152,192>,NSInstrumentation::CLookAsideTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<909312,3552>,NSInstrumentation::CTypeIsolation<32768,128>>::Serialize(
                                v16,
                                &v20) )
        {
          v17 = *(_QWORD *)(v12 + 3744);
          v18 = v20;
          v19 = v21;
          gdi::DeserializedTypeIsolationFactory<NSInstrumentation::CDeserializedTypeIsolation<180224,704>,NSInstrumentation::CDeserializedTypeIsolation<40960,160>,NSInstrumentation::CDeserializedTypeIsolation<49152,192>,NSInstrumentation::CDeserializedTypeIsolation<36864,144>,NSInstrumentation::CDeserializedTypeIsolation<81920,320>,NSInstrumentation::CDeserializedTypeIsolation<909312,3552>,NSInstrumentation::CDeserializedTypeIsolation<32768,128>>::Deserialize(
            v17,
            &v18);
        }
        NSInstrumentation::Serializer::~Serializer((NSInstrumentation::Serializer *)&v20);
      }
      v18 = v12;
      DbgkWerCaptureLiveKernelDump(L"GreLKD", 400LL, 64LL, v10, 0LL, 0LL, 0LL, 0LL, 0);
      LOBYTE(v19) = 0;
      GrepCaptureLiveMemoryDump_::_2_::_lambda_1_::operator()(&v18);
      if ( v14 )
        GreDeleteFastMutex(v14);
      if ( v12 != -3736 )
        GreReleasePushLockExclusive((struct W32_PUSH_LOCK *)(v12 + 3736));
    }
  }
  else
  {
    v4 = -v2;
    v5 = v3 & -(__int64)(v4 != 0);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v5 + 0x10) = 16LL;
    if ( v6 < 0x10 )
    {
      *(_QWORD *)((v3 & -(__int64)(v4 != 0)) + 0x10) = v6;
      RustOnZeroSizedScanCallback();
      DeferredContext = WPP_MAIN_CB.Dpc.DeferredContext;
    }
    *(_DWORD *)(v5 + 24) = 1;
    *(_OWORD *)(v5 + 28) = 0LL;
    if ( DeferredContext )
      v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)DeferredContext + 208LL))(v5);
    else
      v7 = *(_QWORD *)v5;
    *(_DWORD *)v7 = 0;
    *(_DWORD *)(v7 + 4) = 0x80000000;
    *(_QWORD *)(v7 + 8) = 0x7FFFFFFFLL;
  }
}
