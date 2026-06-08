/*
 * XREFs of PepNotifyQueryWpsCapabilities @ 0x14003AE50
 * Callers:
 *     InitPep @ 0x14003C830 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     ProcLibTraceQueryWpsCapabilities @ 0x1400250F4 (ProcLibTraceQueryWpsCapabilities.c)
 */

__int64 __fastcall PepNotifyQueryWpsCapabilities(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // r9d
  int v7; // r8d
  __int16 v8; // kr00_2
  int v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1120);
  v10 = 0;
  v2 = PoFxProcessorNotification(v1, 50LL, &v10);
  v5 = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
      LOBYTE(v3) = 4;
      v7 = 2;
LABEL_4:
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        v7,
        v6,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v2);
    }
  }
  else
  {
    v8 = v10;
    LOBYTE(v3) = BYTE1(v10);
    LOBYTE(v4) = v10;
    v2 = ((__int64 (__fastcall *)(__int64, __int64))qword_140015A08)(v4, v3);
    v5 = v2;
    if ( v2 >= 0 )
    {
      word_140015FC0 = v8;
      ProcLibTraceQueryWpsCapabilities(0);
      return v5;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 11;
      LOBYTE(v3) = 2;
      v7 = 3;
      goto LABEL_4;
    }
  }
  return v5;
}
