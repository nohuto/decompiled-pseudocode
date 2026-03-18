/*
 * XREFs of ?iCombine@RGNOBJAPI@@QEAAJAEAVRGNOBJ@@0J@Z @ 0x140022E10
 * Callers:
 *     <none>
 * Callees:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vDeleteREGION@REGION@@AEAAXXZ @ 0x140015A00 (-vDeleteREGION@REGION@@AEAAXXZ.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x140015AE0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     ?vInit@RGNMEMOBJ@@QEAAXXZ @ 0x14001FA3C (-vInit@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x140021730 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?get_sizeScan@REGION_CORE@@IEBAKXZ @ 0x140021850 (-get_sizeScan@REGION_CORE@@IEBAKXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x140113F54 (-BeginTrack@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@QEAAPEAXPEAX@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJAPI::iCombine(__m128i **this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  unsigned int sizeScan; // eax
  REGION *v9; // rbx
  __int64 v10; // rcx
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v11; // rcx
  unsigned int (__fastcall **v12)(const struct REGION_CORE *); // rbx
  const struct REGION_CORE *v13; // rdi
  unsigned int v14; // ebx
  __m128i *v16; // rax
  void *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v19; // [rsp+28h] [rbp-8h] BYREF
  REGION *Region; // [rsp+60h] [rbp+30h] BYREF

  sizeScan = REGION_CORE::get_sizeScan((REGION_CORE *)&(*this)[1].m128i_u64[1]);
  if ( sizeScan < 0x70 )
    sizeScan = 112;
  Region = RGNMEMOBJ::AllocateRegion(sizeScan);
  if ( Region )
  {
    RGNMEMOBJ::vInit((RGNMEMOBJ *)&Region);
    v9 = Region;
    v11 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(W32GetSessionState(v10) + 88)
                                                                          + 72LL);
    if ( v11 )
    {
      v17 = NSInstrumentation::CReferenceTracker::CReferenceCountedType::BeginTrack(v11, v9);
      if ( v17 )
      {
        *((_QWORD *)v9 + 14) = v17;
      }
      else
      {
        REGION::vDeleteREGION(Region);
        Region = 0LL;
      }
    }
    else
    {
      *((_QWORD *)v9 + 14) = 0LL;
    }
  }
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&Region);
  if ( !Region )
    goto LABEL_13;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v12 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v13 = (const struct REGION_CORE *)(((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL));
    (*(void (__fastcall **)(const struct REGION_CORE *, unsigned __int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                  + 48LL))(
      v13,
      (unsigned __int64)&(*this)[1].m128i_u64[1] & -(__int64)(*this != 0LL),
      -(__int64)*this);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v12, v13);
  }
  else
  {
    v16 = *this;
    v19 = ((unsigned __int64)Region + 24) & -(__int64)(Region != 0LL);
    v18 = (unsigned __int64)&v16[1].m128i_u64[1] & -(__int64)(v16 != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v19, (const struct RGNCOREOBJ *)&v18);
  }
  v14 = RGNOBJ::iCombine((RGNOBJ *)&Region, a2, a3, a4);
  if ( !v14 || !(unsigned int)RGNOBJAPI::bSwap(this, (__m128i **)&Region) )
LABEL_13:
    v14 = 0;
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&Region);
  return v14;
}
