/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@1@Z @ 0x14015DE10
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x140074670 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     _lambda_3ed15a572a362cb111cc1d3010d8268d_::operator() @ 0x14014C6EC (_lambda_3ed15a572a362cb111cc1d3010d8268d_--operator().c)
 * Callees:
 *     ?reset@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKString@Rtl@@@Z @ 0x140056810 (-reset@-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAXPEAUKStri.c)
 *     ndisIfCreateInterfaceFromPersistentStore @ 0x140089D40 (ndisIfCreateInterfaceFromPersistentStore.c)
 *     ??1NdisNetworkInterfacePersistedState@@QEAA@XZ @ 0x14008F360 (--1NdisNetworkInterfacePersistedState@@QEAA@XZ.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1400D2C00 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memcmp @ 0x1400EA9E0 (memcmp.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015F2A0 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(
        const struct _GUID *a1,
        struct KRegKey *a2,
        struct KRegKey *a3)
{
  int NetworkInterfaceV2; // edi
  unsigned int v6; // r8d
  struct _GUID v7; // [rsp+20h] [rbp-79h] BYREF
  struct KRegKey v8[2]; // [rsp+30h] [rbp-69h] BYREF
  __int16 v9; // [rsp+40h] [rbp-59h]
  __int64 v10; // [rsp+48h] [rbp-51h]
  int v11; // [rsp+50h] [rbp-49h]
  __int128 Buf1; // [rsp+54h] [rbp-45h] BYREF
  __int64 v13; // [rsp+64h] [rbp-35h]
  int v14; // [rsp+6Ch] [rbp-2Dh]
  __int128 v15; // [rsp+70h] [rbp-29h]
  __int128 v16; // [rsp+80h] [rbp-19h]
  __int16 v17; // [rsp+90h] [rbp-9h]
  __int128 v18; // [rsp+92h] [rbp-7h]
  __int128 v19; // [rsp+A2h] [rbp+9h]
  int v20; // [rsp+B2h] [rbp+19h]
  __int16 v21; // [rsp+B6h] [rbp+1Dh]
  __int64 v22; // [rsp+B8h] [rbp+1Fh]
  int v23; // [rsp+C0h] [rbp+27h]

  *(_OWORD *)&v8[0].m_ptr = 0LL;
  v9 = 0;
  v11 = 0;
  v10 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v17 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  Buf1 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  NetworkInterfaceV2 = Ndis::BindRegistry::ReadNetworkInterfaceV2(
                         a2,
                         a3,
                         v8,
                         (struct NdisNetworkInterfacePersistedState *)a3);
  if ( NetworkInterfaceV2 >= 0 )
  {
    if ( !memcmp(&Buf1, &ndisDefaultNetworkGuid, 0x10uLL) )
      Buf1 = (__int128)*ndisIfGetDefaultNetworkGuid(&v7);
    if ( (unsigned int)ndisIfCreateInterfaceFromPersistentStore(a1, (__int64)v8, v6) )
    {
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v8[1].m_ptr, 0LL);
      wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v8[0].m_ptr, 0LL);
      return 3221225473LL;
    }
    else
    {
      NdisNetworkInterfacePersistedState::~NdisNetworkInterfacePersistedState(&v8[0].m_ptr);
      return 0LL;
    }
  }
  else
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v8[1].m_ptr, 0LL);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::reset(&v8[0].m_ptr, 0LL);
    return (unsigned int)NetworkInterfaceV2;
  }
}
