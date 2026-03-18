/*
 * XREFs of ??0PlaneInfo@CCheckMPOCache@@QEAA@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x180127528
 * Callers:
 *     ??0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z @ 0x180296270 (--0CCheckMPOCache@@QEAA@PEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CCheckMPOCache::PlaneInfo *__fastcall CCheckMPOCache::PlaneInfo::PlaneInfo(
        CCheckMPOCache::PlaneInfo *this,
        const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *a2)
{
  int v3; // r9d
  __int64 v4; // rcx
  int v5; // r8d
  unsigned __int64 v6; // xmm0_8

  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 4);
  *(_QWORD *)((char *)this + 28) = 0LL;
  *(_QWORD *)((char *)this + 20) = 0LL;
  *(_QWORD *)((char *)this + 36) = 0LL;
  *(_QWORD *)((char *)this + 12) = 0LL;
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 15) = *((_DWORD *)a2 + 19);
  *((_DWORD *)this + 16) = *((_DWORD *)a2 + 20);
  *((_DWORD *)this + 17) = *((_DWORD *)a2 + 25);
  *((_DWORD *)this + 18) = *((_DWORD *)a2 + 32);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 7);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 10) - *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 13) - *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 14) - *((_DWORD *)a2 + 12);
  v3 = *((_DWORD *)a2 + 12);
  v4 = *(_QWORD *)((char *)a2 + 60);
  v5 = -*((_DWORD *)a2 + 11);
  v6 = _mm_srli_si128(*(__m128i *)((char *)a2 + 60), 8).m128i_u64[0];
  *((_DWORD *)this + 10) = v4 - *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 11) = HIDWORD(v4) - v3;
  *((_DWORD *)this + 12) = v5 + v6;
  *((_DWORD *)this + 13) = HIDWORD(v6) - v3;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 32LL))(*((_QWORD *)a2 + 1));
  return this;
}
