/*
 * XREFs of ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x180296270
 * Callers:
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180127258 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 * Callees:
 *     ??0PlaneInfo@CCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x180127528 (--0PlaneInfo@CCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z.c)
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x180127610 (-reserve_region@-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCa.c)
 */

CCheckMPOCache *__fastcall CCheckMPOCache::CCheckMPOCache(
        CCheckMPOCache *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2,
        unsigned int a3,
        char a4,
        unsigned __int64 a5)
{
  char *v5; // r10
  _QWORD *v6; // rsi
  __int64 v9; // rdi
  __int64 v10; // r14
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  CCheckMPOCache::PlaneInfo *v20; // rax
  _OWORD v22[9]; // [rsp+20h] [rbp-98h] BYREF

  v5 = (char *)this + 24;
  *(_QWORD *)this = (char *)this + 24;
  v6 = (_QWORD *)((char *)this + 480);
  *((_QWORD *)this + 1) = (char *)this + 24;
  *((_QWORD *)this + 2) = (char *)this + 480;
  *((_QWORD *)this + 60) = a5;
  *((_BYTE *)this + 488) = a4;
  if ( a3 )
  {
    v9 = 0LL;
    v10 = a3;
    do
    {
      v11 = *((_OWORD *)a2 + 1);
      v12 = *((_QWORD *)this + 1) - (_QWORD)v5;
      v22[0] = *(_OWORD *)a2;
      v13 = *((_OWORD *)a2 + 2);
      v22[1] = v11;
      v14 = *((_OWORD *)a2 + 3);
      v22[2] = v13;
      v15 = *((_OWORD *)a2 + 4);
      v22[3] = v14;
      v16 = *((_OWORD *)a2 + 5);
      v22[4] = v15;
      v17 = *((_OWORD *)a2 + 6);
      v22[5] = v16;
      v18 = *((_OWORD *)a2 + 7);
      v22[6] = v17;
      v19 = *((_OWORD *)a2 + 8);
      v22[7] = v18;
      v22[8] = v19;
      v20 = (CCheckMPOCache::PlaneInfo *)detail::vector_facade<CCheckMPOCache::PlaneInfo,detail::buffer_impl<CCheckMPOCache::PlaneInfo,6,1,detail::liberal_expansion_policy>>::reserve_region(
                                           (__int64 *)this,
                                           0x86BCA1AF286BCA1BuLL * (v12 >> 2));
      CCheckMPOCache::PlaneInfo::PlaneInfo(v20, (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v22);
      v5 = *(char **)this;
      if ( !*(_DWORD *)(v9 + *(_QWORD *)this + 8) || !*(_DWORD *)&v5[v9 + 12] )
        *v6 = 0LL;
      a2 = (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)((char *)a2 + 144);
      v9 += 76LL;
      --v10;
    }
    while ( v10 );
  }
  return this;
}
