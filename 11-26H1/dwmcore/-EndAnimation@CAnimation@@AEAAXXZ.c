/*
 * XREFs of ?EndAnimation@CAnimation@@AEAAXXZ @ 0x18016A468
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x18016A32C (--1CAnimation@@UEAA@XZ.c)
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x18016A5D0 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800F33F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x18016A508 (-UnregisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimation::EndAnimation(CAnimation *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !*((_BYTE *)this + 293) )
  {
    for ( i = 0; i < *((_DWORD *)this + 26); ++i )
    {
      v4 = *(_QWORD *)(*((_QWORD *)this + 10) + 16LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    *((_DWORD *)this + 26) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 80, 0x10u);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
      McTemplateU0x_EventWriteTransfer(v3, &EVTDESC_DCOMPEVENT_END_ANIMATION, (__int64)this);
    *((_BYTE *)this + 293) = 1;
  }
  if ( *((_BYTE *)this + 112) )
    CBaseAnimation::UnregisterAnimateResource(this);
}
