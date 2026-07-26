/*
 * XREFs of ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1401477AC
 * Callers:
 *     ?ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ @ 0x1400CF9FC (-ndisIfCompartmentSubsystemInitializePhase3@@YAJXZ.c)
 *     ndisIfCreateCompartment @ 0x1400CFBB8 (ndisIfCreateCompartment.c)
 * Callees:
 *     WPP_RECORDER_SF__guid_L @ 0x1400CF29C (WPP_RECORDER_SF__guid_L.c)
 *     WPP_RECORDER_SF__guid_LL @ 0x1400D42B0 (WPP_RECORDER_SF__guid_LL.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisIfCreateNetwork(struct _GUID *a1, int a2, int a3, int a4)
{
  __int64 v6; // rdx
  unsigned int v7; // esi
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+20h] [rbp-E0h]
  _QWORD v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+60h] [rbp-A0h]
  int v15; // [rsp+64h] [rbp-9Ch]
  struct _GUID *v16; // [rsp+68h] [rbp-98h]
  __int64 v17; // [rsp+70h] [rbp-90h]
  _DWORD *v18; // [rsp+78h] [rbp-88h]
  __int64 v19; // [rsp+80h] [rbp-80h]
  _DWORD v20[132]; // [rsp+90h] [rbp-70h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_L(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      a4,
      (struct _GUID *)&WPP_8c7d05b852ee33ce6c4fa26611c41e92_Traceguids,
      (__int64)a1,
      a2);
  v13[3] = 6LL;
  v13[1] = 0LL;
  v17 = 16LL;
  v19 = 528LL;
  memset(&v20[2], 0, 0x208uLL);
  v13[0] = 0LL;
  v13[2] = &NPI_MS_NDIS_MODULEID;
  v14 = 2;
  v18 = v20;
  v15 = 1;
  v16 = a1;
  v20[0] = 34603436;
  v20[1] = a2;
  v7 = NsiSetAllParametersEx(v13);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF__guid_LL(*((_QWORD *)WPP_GLOBAL_Control + 8), v6, v8, v9, v11, (__int64)a1);
  return v7;
}
