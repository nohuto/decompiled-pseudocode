/*
 * XREFs of PccInitiateExecuteCallback @ 0x14000FD50
 * Callers:
 *     <none>
 * Callees:
 *     ProcLibTraceProcessorSpecificEvent @ 0x14000318C (ProcLibTraceProcessorSpecificEvent.c)
 *     WPP_RECORDER_SF_dD @ 0x14000FFD0 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

void __fastcall PccInitiateExecuteCallback(int a1, void (*a2)(void))
{
  __int64 v3; // rbx
  char v4; // bp
  unsigned __int8 *v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // r14
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  char v11; // bl
  int v12; // [rsp+20h] [rbp-48h]
  unsigned int v13; // [rsp+70h] [rbp+8h] BYREF

  if ( a1 >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_140019820);
    v3 = qword_140019228;
    v4 = 0;
    while ( (__int64 *)v3 != &qword_140019228 )
    {
      v5 = *(unsigned __int8 **)(v3 + 32);
      *(_DWORD *)(v3 + 20) = *v5;
      v6 = v5[1];
      if ( v6 <= 0x64 )
      {
        if ( !v5[1] )
          v6 = 1;
      }
      else
      {
        v6 = 100;
      }
      if ( v6 != *(_DWORD *)(v3 + 40) )
      {
        v7 = *(_QWORD *)(v3 - 40);
        *(_DWORD *)(v3 + 40) = v6;
        v13 = v6;
        v4 = 1;
        ProcLibTraceProcessorSpecificEvent(v7, &PPM_ETW_PCC_CAP_CHANGE, &PPM_ETW_PCC_CAP_CHANGE_HV, 4, (__int64)&v13);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dD(WPP_GLOBAL_Control->DeviceExtension, v8, v9, v10, v12, v6, *(_DWORD *)(v7 + 56));
      }
      v3 = *(_QWORD *)v3;
    }
    v11 = 0;
    if ( v4 )
    {
      LOBYTE(word_140019834) = 1;
      if ( !HIBYTE(word_140019834) )
      {
        HIBYTE(word_140019834) = 1;
        v11 = 1;
      }
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_140019820);
    if ( v11 )
      IoQueueWorkItem(qword_140019828, (PIO_WORKITEM_ROUTINE)PccCapWorker, CriticalWorkQueue, 0LL);
  }
  if ( a2 )
    a2();
}
