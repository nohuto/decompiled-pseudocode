/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x1400D4970
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1400686C8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140092338 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14016B110 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x140186F40 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x1401B6604 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x140213C90 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 * Callees:
 *     <none>
 */

struct CPTPProcessor *__fastcall CPTPProcessorFactory::GetProcessor(struct DEVICEINFO *a1)
{
  struct CPTPProcessor *result; // rax

  result = (struct CPTPProcessor *)*((_QWORD *)a1 + 57);
  if ( result )
    return (struct CPTPProcessor *)*((_QWORD *)result + 133);
  return result;
}
