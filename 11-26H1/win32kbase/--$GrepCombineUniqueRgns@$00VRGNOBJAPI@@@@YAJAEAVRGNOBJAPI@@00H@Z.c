/*
 * XREFs of ??$GrepCombineUniqueRgns@$00VRGNOBJAPI@@@@YAJAEAVRGNOBJAPI@@00H@Z @ 0x140022C50
 * Callers:
 *     GreCombineRgn @ 0x140020BA0 (GreCombineRgn.c)
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     EngSetLastError @ 0x140020060 (EngSetLastError.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepCombineUniqueRgns<1,RGNOBJAPI>(__m128i **this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __m128i *v9; // rcx
  unsigned int sizeScan; // eax
  REGION *v11; // rbx
  __int64 v12; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v13; // rcx
  unsigned int (__fastcall **v14)(const struct REGION_CORE *); // rbx
  const struct REGION_CORE *v15; // rdi
  int v16; // edi
  int v17; // ebx
  __m128i *v18; // rax
  void *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-8h] BYREF
  REGION *Region; // [rsp+68h] [rbp+38h] BYREF

  if ( !*(_QWORD *)a2 || !*(_QWORD *)a3 || (v9 = *this) == 0LL )
  {
    EngSetLastError(6u);
    return 0LL;
  }
  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)&v9[1].m128i_u64[1]);
  if ( sizeScan < 0x70 )
    sizeScan = 112;
  Region = RGNMEMOBJ::AllocateRegion(sizeScan);
  if ( Region )
  {
    RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
    v11 = Region;
    v13 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v12) + 88)
                                                                          + 72LL);
    if ( v13 )
    {
      v19 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v13, v11);
      if ( v19 )
      {
        *((_QWORD *)v11 + 14) = v19;
      }
      else
      {
        REGION::vDeleteREGION(Region);
        Region = 0LL;
      }
    }
    else
    {
      *((_QWORD *)v11 + 14) = 0LL;
    }
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&Region);
  if ( !Region )
    goto LABEL_18;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v14 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v15 = (const struct REGION_CORE *)(((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL));
    (*(void (__fastcall **)(const struct REGION_CORE *, unsigned __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                  + 48LL))(
      v15,
      (unsigned __int64)&(*this)[1].m128i_u64[1] & -(__int64)(*this != 0LL),
      -(__int64)*this);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v14, v15);
  }
  else
  {
    v18 = *this;
    v21 = ((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL);
    v20 = (unsigned __int64)&v18[1].m128i_u64[1] & -(__int64)(v18 != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v21, (const struct RGNCOREOBJ *)&v20);
  }
  v16 = RGNOBJ::iCombine((RGNOBJ *)&Region, a2, a3, a4);
  if ( v16 )
    v17 = (unsigned int)RGNOBJAPI::bSwap(this, (__m128i **)&Region) != 0 ? v16 : 0;
  else
LABEL_18:
    v17 = 0;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region);
  if ( !v17 )
    return 0LL;
  return RGNOBJ::iComplexity((RGNOBJ *)this);
}
