/*
 * XREFs of ACPIWakeCompleteRequestQueue @ 0x140033C74
 * Callers:
 *     ACPIWakeEmptyRequestQueue @ 0x14003202C (ACPIWakeEmptyRequestQueue.c)
 *     OSNotifyDeviceWakeCallBack @ 0x140033C00 (OSNotifyDeviceWakeCallBack.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqss @ 0x140018464 (WPP_RECORDER_SF_qDqss.c)
 *     ACPIDeviceIrpWaitWakeRequestComplete @ 0x140033D60 (ACPIDeviceIrpWaitWakeRequestComplete.c)
 */

void __fastcall ACPIWakeCompleteRequestQueue(_QWORD **a1, int a2)
{
  _QWORD *v2; // rbx
  _QWORD *v5; // rsi
  const char *v6; // r8
  const char *v7; // rcx
  __int64 v8; // r10
  _QWORD *v9; // rax
  __int64 v10; // rdx

  v2 = *a1;
  while ( v2 != a1 )
  {
    v5 = v2;
    v6 = byte_140075A82;
    v2 = (_QWORD *)*v2;
    v7 = byte_140075A82;
    LOBYTE(v8) = 0;
    v9 = (_QWORD *)v5[5];
    if ( v9 )
    {
      v10 = v9[1];
      v8 = v5[5];
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v6 = (const char *)v9[76];
        if ( (v10 & 0x400000000000LL) != 0 )
          v7 = (const char *)v9[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0xAu,
        (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
        (char)v5,
        a2,
        v8,
        v6,
        v7);
    *((_DWORD *)v5 + 64) = a2;
    ACPIDeviceIrpWaitWakeRequestComplete(v5);
  }
}
