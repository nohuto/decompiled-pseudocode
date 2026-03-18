/*
 * XREFs of ?bCopy@RGNOBJ@@QEAAHAEAV1@@Z @ 0x140038140
 * Callers:
 *     ?bCompute@DC@@QEAAHXZ @ 0x140037910 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x140038094 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1401F1910 (EngUpdateDeviceSurface.c)
 * Callees:
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z @ 0x140021DD0 (-bIsResizeRequiredBeforeCopyingRegion@RGNCOREOBJ@@QEBA_NAEBV1@PEAK@Z.c)
 *     ?vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z @ 0x1401BCBC0 (-vCopy@RGNCOREOBJ@@QEBAXAEBV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bCopy(RGNOBJ *this, struct RGNOBJ *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+30h] BYREF
  REGION_CORE *v12; // [rsp+78h] [rbp+38h] BYREF

  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD **)this;
  v5 = v3 + 24;
  if ( !WPP_MAIN_CB.Dpc.DeferredContext )
  {
    LODWORD(v11) = 0;
    v12 = (REGION_CORE *)(v5 & -(__int64)(v3 != 0));
    v10 = (unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL);
    if ( RGNCOREOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNCOREOBJ *)&v10, &v12, (unsigned int *)&v11) )
    {
      if ( **(_QWORD **)this )
        return 0LL;
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11, v11);
      if ( !v11 )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
        return 0LL;
      }
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v11);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v11);
    }
    v11 = (*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL);
    RGNCOREOBJ::vCopy((RGNCOREOBJ *)&v11, (const struct RGNCOREOBJ *)&v12);
    return 1LL;
  }
  v6 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
  v7 = (unsigned __int64)(v4 + 3) & -(__int64)(v4 != 0LL);
  v8 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 56LL))(
         v7,
         v5 & -(__int64)(v3 != 0));
  if ( !(*(unsigned int (__fastcall **)(__int64))(v6 + 176))(v7) )
    GrepCaptureLiveMemoryDump(400LL, 64LL, v7, 0LL, 0LL, 0);
  return v8;
}
