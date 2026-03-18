/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1400C5040
 * Callers:
 *     GreCopyVisRgn @ 0x1400C4DA0 (GreCopyVisRgn.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x140021890 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@K@Z @ 0x140021D3C (--0RGNMEMOBJTMP@@QEAA@K@Z.c)
 *     ?bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z @ 0x140022F9C (-bIsResizeRequiredBeforeCopyingRegion@RGNOBJ@@IEAAHAEAV1@PEAK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1400C5470 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(__m128i **this, struct RGNOBJ *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rbx
  __int64 v6; // rsi
  unsigned int v7; // ebp
  __m128i *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v5 = *(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext;
    v6 = (unsigned __int64)&(*this)[1].m128i_u64[1] & -(__int64)(*this != 0LL);
    v7 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext + 56LL))(
           v6,
           (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL));
    if ( !(*(unsigned int (__fastcall **)(__int64))(v5 + 176))(v6) )
      GrepCaptureLiveMemoryDump(400LL, 64LL, v6, 0LL, 0LL, 0);
    return v7;
  }
  else
  {
    LODWORD(v9) = 0;
    if ( (unsigned int)RGNOBJ::bIsResizeRequiredBeforeCopyingRegion((RGNOBJ *)this, a2, (unsigned int *)&v9) )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9, (unsigned int)v9);
      if ( v9 )
      {
        RGNOBJ::vCopy((RGNOBJ *)&v9, a2);
        v2 = RGNOBJAPI::bSwap(this, &v9);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v9);
      return v2;
    }
    else
    {
      RGNOBJ::vCopy((RGNOBJ *)this, a2);
      return 1LL;
    }
  }
}
