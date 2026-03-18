/*
 * XREFs of ?ProcessOfferLists@VIDMM_GLOBAL@@QEAAXXZ @ 0x14010E378
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 *     ?UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ @ 0x14010E940 (-UnderCleanupLimit@VIDMM_GLOBAL@@QEAA_NXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ProcessOfferLists(struct _KTHREAD **this)
{
  __int64 v2; // rbx
  signed __int64 v3; // rcx
  struct _KTHREAD *v4; // rax
  char v5; // si
  __int64 i; // rbp
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( ((_DWORD)this[873] & 0x8000) != 0 || qword_14008A498 )
  {
    v2 = 0x8000000000000000uLL;
    if ( ((_DWORD)this[873] & 0x8000) != 0 || (v3 = this[571] - this[885], v3 >= qword_14008A498) )
    {
      v5 = 0;
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
      {
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v9, this + 5031);
        v7 = *((_QWORD *)this[5040] + i);
        v5 |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 392LL))(v7);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9);
      }
      if ( VIDMM_GLOBAL::UnderCleanupLimit((VIDMM_GLOBAL *)this) )
      {
        *v8 = this[571];
        if ( v5 )
          v2 = -qword_14008A498;
      }
    }
    else
    {
      v2 = v3 - qword_14008A498;
    }
    v4 = *this;
    if ( v2 > *((_QWORD *)*this + 16) )
    {
      *((_QWORD *)v4 + 16) = v2;
      *((_BYTE *)v4 + 214) = 4;
    }
  }
}
