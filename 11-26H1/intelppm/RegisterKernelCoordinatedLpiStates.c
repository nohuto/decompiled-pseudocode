/*
 * XREFs of RegisterKernelCoordinatedLpiStates @ 0x140038AF8
 * Callers:
 *     RegisterIdleComplete @ 0x140038858 (RegisterIdleComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 *     AcpiGetCoordinatedLpiStates @ 0x14002FA9C (AcpiGetCoordinatedLpiStates.c)
 *     PepNotifyCoordinatedLpiStates @ 0x140039EE0 (PepNotifyCoordinatedLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003F484 (LpiTranslateCoordinatedIdleStates.c)
 */

__int64 __fastcall RegisterKernelCoordinatedLpiStates(__int64 a1)
{
  int CoordinatedLpiStates; // ebx
  unsigned __int16 v3; // r9
  __int64 v4; // rsi
  __int64 v5; // rbx
  void *v6; // rax
  __int64 v7; // rbp
  int v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  CoordinatedLpiStates = AcpiGetCoordinatedLpiStates(a1, &qword_140019888);
  if ( CoordinatedLpiStates >= 0 )
  {
    v4 = qword_140019888;
    if ( !*(_DWORD *)qword_140019888 )
      return 0;
    CoordinatedLpiStates = LpiTranslateCoordinatedIdleStates(
                             a1,
                             qword_140019888,
                             (unsigned int)&v10,
                             (unsigned int)&v11,
                             (__int64)&v12);
    if ( CoordinatedLpiStates < 0 )
      return (unsigned int)CoordinatedLpiStates;
    v5 = v10;
    *(_QWORD *)(v10 + 32) = PepQueryPlatformStateResidency;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
    {
      *(_QWORD *)(v5 + 16) = PepNotifyLpiPreExecute;
      v6 = PepNotifyLpiComplete;
    }
    else
    {
      v6 = AcpiCStateIdleComplete;
    }
    v7 = v11;
    *(_QWORD *)(v5 + 24) = v6;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x2Cu) )
      PepNotifyCoordinatedLpiStates(a1, v4, v5, v7);
    qword_140019880 = v12;
    qword_140019870 = v5;
    qword_140019878 = v7;
    byte_140019858 = 1;
    CoordinatedLpiStates = ((__int64 (__fastcall *)(__int64))qword_1400194F8)(v5);
    if ( CoordinatedLpiStates >= 0 )
      return 0;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)CoordinatedLpiStates;
    v3 = 22;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v3 = 21;
LABEL_4:
    v9 = CoordinatedLpiStates;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      v3,
      (__int64)&WPP_cba3f7556d013b244d3f95d724507a97_Traceguids,
      v9);
  }
  return (unsigned int)CoordinatedLpiStates;
}
