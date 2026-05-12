/*
 * XREFs of StorpPutScatterGatherList @ 0x140059F78
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r8
  __int64 v8; // rcx
  int *v10; // [rsp+40h] [rbp+8h] BYREF
  int *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 55LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    RaidpPortGetAdapter(a1, &v10, &v11);
    if ( !v10 )
    {
      if ( v11 )
        return (unsigned int)-1056964606;
      return (unsigned int)-1056964602;
    }
    v8 = *((_QWORD *)v10 + 112);
    if ( v8 )
    {
      LOBYTE(v7) = a3;
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v8 + 8) + 96LL))(v8, a2, v7);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 57LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
      }
      return (unsigned int)-1056964601;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 56LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v3;
}
