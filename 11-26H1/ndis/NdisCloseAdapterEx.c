/*
 * XREFs of NdisCloseAdapterEx @ 0x140066670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     NdisCloseAdapter @ 0x140176E20 (NdisCloseAdapter.c)
 */

NDIS_STATUS __stdcall NdisCloseAdapterEx(NDIS_HANDLE NdisBindingHandle)
{
  NDIS_STATUS v2; // edi
  char v4[4]; // [rsp+30h] [rbp-18h]
  NDIS_STATUS v5; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      71,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      (char)NdisBindingHandle);
  *((_BYTE *)NdisBindingHandle + 65) = 1;
  NdisCloseAdapter(&v5, NdisBindingHandle);
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v5;
  v2 = v5;
  *(_DWORD *)v4 = v5;
  WPP_RECORDER_SF_qL(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4u,
    6u,
    0x48u,
    (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
    (char)NdisBindingHandle,
    *(_DWORD *)v4);
  return v2;
}
