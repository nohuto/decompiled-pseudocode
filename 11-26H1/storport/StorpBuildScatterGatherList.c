/*
 * XREFs of StorpBuildScatterGatherList @ 0x140058304
 * Callers:
 *     StorBuildScatterGatherListProxy @ 0x1400582B8 (StorBuildScatterGatherListProxy.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     WPP_SF_ @ 0x14005BCE8 (WPP_SF_.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall StorpBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v14; // rcx
  int v15; // eax
  int *v16; // [rsp+60h] [rbp-18h] BYREF
  int *v17; // [rsp+80h] [rbp+8h] BYREF

  v17 = 0LL;
  v16 = 0LL;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 52LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    RaidpPortGetAdapter(a1, &v17, &v16);
    if ( v17 )
    {
      v14 = *((_QWORD *)v17 + 112);
      if ( v14 )
      {
        v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(v14 + 8) + 112LL))(
                v14,
                *((_QWORD *)v17 + 1),
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
        return RaidNtStatusToStorStatus(v15);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 54LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
        }
        return 3238002695LL;
      }
    }
    else
    {
      if ( !v16 )
        return 3238002694LL;
      return 3238002690LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 53LL, &WPP_ae4a842482683e60d599cfcbd438ee73_Traceguids);
    }
    return 3238002696LL;
  }
}
