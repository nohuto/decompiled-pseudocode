/*
 * XREFs of ?ProviderFinalRelease@CMuteHardware@@UEAAXXZ @ 0x180109360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800CFD20 (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMuteHardware::ProviderFinalRelease(CMuteHardware *this)
{
  _QWORD *v1; // rdi

  v1 = (_QWORD *)((char *)this + 48);
  if ( *((_QWORD *)this + 6) && *((_DWORD *)this + 16) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xDu,
        (__int64)&WPP_896a03467a023f83569b8c3d81c0998d_Traceguids,
        this);
    }
    (*(void (__fastcall **)(_QWORD, CMuteHardware *))(*(_QWORD *)*v1 + 120LL))(*v1, this);
    *((_DWORD *)this + 16) = 0;
  }
  ATL::CComPtrBase<IPart>::Release(v1);
}
