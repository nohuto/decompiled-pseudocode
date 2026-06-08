/*
 * XREFs of PepNotifyQueryWpsCapabilities @ 0x14003C114
 * Callers:
 *     InitPep @ 0x14003D440 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     ProcLibTraceQueryWpsCapabilities @ 0x14002CA80 (ProcLibTraceQueryWpsCapabilities.c)
 */

__int64 __fastcall PepNotifyQueryWpsCapabilities(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  unsigned __int16 v6; // r9
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  __int16 v9; // kr00_2
  int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 1120);
  v11 = 0;
  v2 = PoFxProcessorNotification(v1, 50LL, &v11);
  v5 = v2;
  if ( v2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 10;
      v7 = 4;
      v8 = 2;
LABEL_4:
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        v8,
        v6,
        (__int64)&WPP_8e2bd501024a3f356a388249f760a2d5_Traceguids,
        v2);
    }
  }
  else
  {
    v9 = v11;
    LOBYTE(v3) = BYTE1(v11);
    LOBYTE(v4) = v11;
    v2 = ((__int64 (__fastcall *)(__int64, __int64))qword_1400195D8)(v4, v3);
    v5 = v2;
    if ( v2 >= 0 )
    {
      word_140019B90 = v9;
      ProcLibTraceQueryWpsCapabilities(0);
      return v5;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 11;
      v7 = 2;
      v8 = 3;
      goto LABEL_4;
    }
  }
  return v5;
}
