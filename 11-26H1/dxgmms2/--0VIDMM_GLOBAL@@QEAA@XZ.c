/*
 * XREFs of ??0VIDMM_GLOBAL@@QEAA@XZ @ 0x14009C438
 * Callers:
 *     ?VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z @ 0x1400A67B8 (-VidMmiInit@@YAPEAVVIDMM_GLOBAL@@PEAVADAPTER_RENDER@@I@Z.c)
 * Callees:
 *     ??0DXGK_LOG@@QEAA@XZ @ 0x14005B5B4 (--0DXGK_LOG@@QEAA@XZ.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?InitializePeriodicTrimData@@YAXPEAUVIDMM_PERIODIC_TRIM_DATA@@@Z @ 0x14009F5DC (-InitializePeriodicTrimData@@YAXPEAUVIDMM_PERIODIC_TRIM_DATA@@@Z.c)
 *     ??0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z @ 0x1400AB1B8 (--0VIDMM_PURGE_TELEMETRY@@QEAA@PEAVVIDMM_GLOBAL@@@Z.c)
 */

VIDMM_GLOBAL *__fastcall VIDMM_GLOBAL::VIDMM_GLOBAL(VIDMM_GLOBAL *this)
{
  unsigned __int64 *v2; // rcx
  unsigned int v3; // edx
  __m128i v4; // xmm3
  __m128i v5; // xmm2
  __m128i v6; // xmm2
  unsigned __int64 v7; // xmm0_8

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 471) = 0LL;
  *((_QWORD *)this + 472) = 0LL;
  *((_DWORD *)this + 946) = 0;
  *((_DWORD *)this + 947) = 13;
  *((_QWORD *)this + 570) = 0LL;
  *((_QWORD *)this + 571) = 0LL;
  *((_BYTE *)this + 4576) = 0;
  memset((char *)this + 4577, 0, 0x40uLL);
  memset((char *)this + 6440, 0, 0x200uLL);
  *((_DWORD *)this + 1739) = 0;
  *((_QWORD *)this + 870) = 0LL;
  *((_QWORD *)this + 871) = 0LL;
  *((_BYTE *)this + 7040) = 0;
  *((_BYTE *)this + 7042) = 0;
  *((_QWORD *)this + 981) = 0LL;
  *((_DWORD *)this + 1964) = 0;
  *((_QWORD *)this + 4985) = 0LL;
  *((_QWORD *)this + 4986) = 0LL;
  *((_DWORD *)this + 9974) = 0;
  *((_DWORD *)this + 9975) = 76;
  *((_DWORD *)this + 9976) = 71;
  *((_QWORD *)this + 4990) = (char *)this + 39912;
  *((_QWORD *)this + 4989) = (char *)this + 39912;
  *((_QWORD *)this + 4992) = (char *)this + 39928;
  *((_QWORD *)this + 4991) = (char *)this + 39928;
  *((_QWORD *)this + 4997) = 0LL;
  *((_QWORD *)this + 4998) = 0LL;
  *((_DWORD *)this + 9998) = 0;
  *((_DWORD *)this + 9999) = 1;
  *((_DWORD *)this + 10000) = -1;
  *((_DWORD *)this + 10022) = 0;
  *((_DWORD *)this + 10024) = 257;
  *((_BYTE *)this + 40100) = 0;
  *((_QWORD *)this + 5015) = 0LL;
  *((_QWORD *)this + 5016) = 0LL;
  *((_DWORD *)this + 10034) = 0;
  *((_DWORD *)this + 10035) = 12;
  *((_BYTE *)this + 40144) = 0;
  *((_QWORD *)this + 5019) = 0LL;
  *((_QWORD *)this + 5020) = 0LL;
  *((_QWORD *)this + 5031) = 0LL;
  *((_QWORD *)this + 5032) = 0LL;
  *((_DWORD *)this + 10066) = 0;
  *((_DWORD *)this + 10067) = 76;
  *((_DWORD *)this + 10068) = 46;
  *((_DWORD *)this + 10070) = -1;
  *((_QWORD *)this + 5036) = 0LL;
  *((_QWORD *)this + 5037) = 0LL;
  *((_QWORD *)this + 5038) = 0LL;
  *((_QWORD *)this + 5039) = 0LL;
  memset((char *)this + 40512, 0, 0x220uLL);
  *((_BYTE *)this + 41064) &= 0x9Du;
  *((_BYTE *)this + 41065) &= 0xF2u;
  *((_BYTE *)this + 41066) &= ~1u;
  *((_DWORD *)this + 10264) = 0;
  *(_WORD *)((char *)this + 41067) = 0;
  *((_BYTE *)this + 41072) = 0;
  *((_QWORD *)this + 5143) = 0LL;
  *((_QWORD *)this + 5144) = 0LL;
  *((_DWORD *)this + 10290) = 0;
  *((_DWORD *)this + 10291) = 1;
  DXGK_LOG::DXGK_LOG((VIDMM_GLOBAL *)((char *)this + 41168));
  *((_QWORD *)this + 5150) = 0LL;
  *((_DWORD *)this + 10302) = 0;
  *((_QWORD *)this + 5152) = 0LL;
  *((_QWORD *)this + 5153) = 0LL;
  *((_DWORD *)this + 10308) = 0;
  *((_DWORD *)this + 10309) = 20;
  *((_DWORD *)this + 10310) = 66;
  *((_QWORD *)this + 5157) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5156);
  *((_QWORD *)this + 5160) = 0LL;
  *((_QWORD *)this + 5161) = 0LL;
  *((_DWORD *)this + 10324) = 0;
  *((_DWORD *)this + 10325) = 1;
  *((_DWORD *)this + 10330) = 0;
  *((_DWORD *)this + 10346) = 1;
  *((_QWORD *)this + 5164) = (char *)this + 41304;
  *((_QWORD *)this + 5163) = (char *)this + 41304;
  *((_QWORD *)this + 5171) = DXG_DEFERRED_WORK_QUEUE::DeferredWorkQueueCallback;
  *((_QWORD *)this + 5172) = (char *)this + 41280;
  *((_QWORD *)this + 5169) = 0LL;
  KeInitializeEvent((PRKEVENT)this + 1722, NotificationEvent, 1u);
  VIDMM_PURGE_TELEMETRY::VIDMM_PURGE_TELEMETRY((VIDMM_GLOBAL *)((char *)this + 41392), this);
  *((_DWORD *)this + 11138) = 0;
  *((_QWORD *)this + 5586) = (char *)this + 44680;
  *((_QWORD *)this + 5585) = (char *)this + 44680;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5606);
  *((_QWORD *)this + 5607) = 0LL;
  *((_QWORD *)this + 5608) = 0LL;
  *((_QWORD *)this + 5609) = 0LL;
  *((_DWORD *)this + 11220) = 0;
  *((_DWORD *)this + 11221) = 1;
  *((_DWORD *)this + 11228) = 0;
  KeInitializeEvent((PRKEVENT)((char *)this + 44888), NotificationEvent, 1u);
  *((_QWORD *)this + 5616) = 0LL;
  *((_QWORD *)this + 5617) = 0LL;
  *((_QWORD *)this + 5618) = 0LL;
  *((_QWORD *)this + 5619) = 0LL;
  *((_QWORD *)this + 5620) = 0LL;
  *((_QWORD *)this + 5621) = 0LL;
  *((_QWORD *)this + 5622) = 0LL;
  *((_DWORD *)this + 11246) = 0;
  *((_DWORD *)this + 11247) = 1;
  *((_DWORD *)this + 11248) = -1;
  *((_QWORD *)this + 5625) = 0LL;
  *((_QWORD *)this + 5626) = 0LL;
  *((_DWORD *)this + 11254) = 0;
  *((_DWORD *)this + 11255) = 7;
  *((_DWORD *)this + 11256) = 60;
  *((_QWORD *)this + 5639) = 0LL;
  *((_QWORD *)this + 5640) = 0LL;
  *((_QWORD *)this + 5641) = 0LL;
  *((_QWORD *)this + 5642) = 0LL;
  *((_QWORD *)this + 5643) = 0LL;
  *((_BYTE *)this + 45152) = 0;
  *((_QWORD *)this + 5645) = 0LL;
  *((_QWORD *)this + 5646) = 0LL;
  *((_DWORD *)this + 11294) = 0;
  *((_DWORD *)this + 11295) = 76;
  *((_DWORD *)this + 11296) = -1;
  *((_BYTE *)this + 45192) = 0;
  *((_DWORD *)this + 11299) = -1;
  *((_BYTE *)this + 45216) = 0;
  *((_QWORD *)this + 5653) = 0LL;
  *((_QWORD *)this + 5654) = 0LL;
  *((_QWORD *)this + 5657) = 0LL;
  *((_QWORD *)this + 5658) = 0LL;
  v2 = (unsigned __int64 *)((char *)this + 45048);
  *((_DWORD *)this + 11342) = 0;
  v3 = 0;
  *((_QWORD *)this + 5680) = 0LL;
  *((_QWORD *)this + 466) = (char *)this + 3720;
  *((_QWORD *)this + 465) = (char *)this + 3720;
  *((_QWORD *)this + 5568) = (char *)this + 44536;
  *((_QWORD *)this + 5567) = (char *)this + 44536;
  *((_QWORD *)this + 5159) = (char *)this + 41264;
  *((_QWORD *)this + 5158) = (char *)this + 41264;
  *((_QWORD *)this + 468) = (char *)this + 3736;
  *((_QWORD *)this + 467) = (char *)this + 3736;
  *((_QWORD *)this + 470) = (char *)this + 3752;
  *((_QWORD *)this + 469) = (char *)this + 3752;
  *((_QWORD *)this + 4996) = (char *)this + 39960;
  *((_QWORD *)this + 4995) = (char *)this + 39960;
  *((_QWORD *)this + 4994) = (char *)this + 39944;
  *((_QWORD *)this + 4993) = (char *)this + 39944;
  *((_QWORD *)this + 5638) = (char *)this + 45096;
  *((_QWORD *)this + 5637) = (char *)this + 45096;
  *((_QWORD *)this + 5651) = (char *)this + 45200;
  *((_QWORD *)this + 5650) = (char *)this + 45200;
  *((_QWORD *)this + 5014) = (char *)this + 40104;
  *((_QWORD *)this + 5013) = (char *)this + 40104;
  v4 = _mm_unpacklo_epi64((__m128i)((unsigned __int64)this + 45032), (__m128i)((unsigned __int64)this + 45032));
  do
  {
    v5 = _mm_cvtsi32_si128(v3);
    v3 += 2;
    v6 = _mm_add_epi64(
           _mm_slli_epi64(
             _mm_unpacklo_epi32(_mm_add_epi32(_mm_shuffle_epi32(v5, 0), _mm_loadl_epi64(&_xmm)), (__m128i)0LL),
             4u),
           v4);
    *(v2 - 1) = v6.m128i_i64[0];
    v7 = _mm_srli_si128(v6, 8).m128i_u64[0];
    v2[1] = v7;
    *v2 = v7;
    *(v2 - 2) = v6.m128i_i64[0];
    v2 += 4;
  }
  while ( v3 < 4 );
  memset((char *)this + 7056, 0, 0x50uLL);
  *((_QWORD *)this + 881) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)this + 5566);
  *((_OWORD *)this + 489) = 0LL;
  *((_QWORD *)this + 980) = 0LL;
  memset((char *)this + 640, 0, 0x200uLL);
  memset((char *)this + 1152, 0, 0x200uLL);
  memset((char *)this + 3792, 0, 0x100uLL);
  memset((char *)this + 1664, 0, 0x100uLL);
  memset((char *)this + 1920, 0, 0x100uLL);
  memset((char *)this + 2176, 0, 0x100uLL);
  memset((char *)this + 2432, 0, 0x100uLL);
  memset((char *)this + 2688, 0, 0x200uLL);
  memset((char *)this + 3200, 0, 0x200uLL);
  memset((char *)this + 4048, 0, 0x100uLL);
  memset((char *)this + 4304, 0, 0x100uLL);
  memset((char *)this + 4644, 0, 0x100uLL);
  memset((char *)this + 4904, 0, 0x200uLL);
  memset((char *)this + 5928, 0, 0x200uLL);
  memset((char *)this + 5416, 0, 0x200uLL);
  *(_OWORD *)((char *)this + 6984) = 0LL;
  *(_OWORD *)((char *)this + 7000) = 0LL;
  *(_OWORD *)((char *)this + 7016) = 0LL;
  *((_QWORD *)this + 879) = 0LL;
  *((_DWORD *)this + 1738) = 1;
  memset((char *)this + 7136, 0, 0x2B0uLL);
  ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)((char *)this + 40384), 0LL, 0LL, 0, 0x20uLL, 0x61356956u, 0);
  *((_QWORD *)this + 5655) = 0LL;
  *((_QWORD *)this + 5593) = VidMmUpgrade64KBWork;
  *((_QWORD *)this + 5594) = this;
  *((_QWORD *)this + 5591) = 0LL;
  *((_QWORD *)this + 5595) = 2LL;
  *((_DWORD *)this + 11166) = 0x40000;
  InitializePeriodicTrimData((VIDMM_GLOBAL *)((char *)this + 40168));
  InitializePeriodicTrimData((VIDMM_GLOBAL *)((char *)this + 40208));
  return this;
}
