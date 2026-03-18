/*
 * XREFs of ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110C4C
 * Callers:
 *     ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110B98 (-FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 *     ??1VIDMM_PROCESS@@QEAA@XZ @ 0x1401294CC (--1VIDMM_PROCESS@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping(VIDMM_FENCE_STORAGE_PAGE *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  _QWORD *v5; // rax
  _BYTE v6[32]; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 27) )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2789;
      DxgkLogInternalTriageEvent(v2, 262146LL);
    }
    VIDMM_PROCESS::UnmapHostAddressesFromGuest(
      *((VIDMM_PROCESS **)this + 5),
      *((void **)this + 27),
      *((_QWORD *)this + 26));
    if ( *((_BYTE *)this + 224) )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v6,
        (struct _KTHREAD **)(*((_QWORD *)this + 5) + 104LL));
      v3 = (_QWORD *)((char *)this + 24);
      v4 = *((_QWORD *)this + 3);
      if ( *(VIDMM_FENCE_STORAGE_PAGE **)(v4 + 8) != (VIDMM_FENCE_STORAGE_PAGE *)((char *)this + 24)
        || (v5 = (_QWORD *)*((_QWORD *)this + 4), (_QWORD *)*v5 != v3) )
      {
        __fastfail(3u);
      }
      *v5 = v4;
      *(_QWORD *)(v4 + 8) = v5;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v6);
      *v3 = 0LL;
      *((_QWORD *)this + 4) = 0LL;
    }
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
}
