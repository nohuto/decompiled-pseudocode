/*
 * XREFs of ACPICMExperienceButtonHandleEvent @ 0x1400559D8
 * Callers:
 *     ACPICMButtonNotify @ 0x14004819C (ACPICMButtonNotify.c)
 * Callees:
 *     ACPISetDeviceWorker @ 0x14002AAD4 (ACPISetDeviceWorker.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033F50 (WPP_RECORDER_SF_dqss.c)
 */

void __fastcall ACPICMExperienceButtonHandleEvent(_QWORD *a1, int a2)
{
  char v3; // r11
  int v4; // edx
  int v5; // eax
  char v6; // r8
  const char *v7; // rax
  const char *v8; // r10
  __int64 v9; // r9

  v3 = a2;
  v4 = 2;
  v5 = a2 - 2;
  if ( !v5 )
    goto LABEL_10;
  if ( v5 == 126 )
  {
    v4 = 1;
LABEL_10:
    ACPISetDeviceWorker((__int64)a1, v4);
    return;
  }
  v6 = 0;
  v7 = byte_140075A82;
  v8 = byte_140075A82;
  if ( a1 )
  {
    v9 = a1[1];
    v6 = (char)a1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (const char *)a1[76];
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x11u,
      0x19u,
      (__int64)&WPP_8cbc4c30c1d63bc279c6551cfa219e8c_Traceguids,
      v3,
      v6,
      v7,
      v8);
}
