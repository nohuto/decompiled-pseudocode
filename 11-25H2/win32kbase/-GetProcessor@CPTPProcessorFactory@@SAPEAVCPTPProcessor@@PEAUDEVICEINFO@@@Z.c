/*
 * XREFs of ?GetProcessor@CPTPProcessorFactory@@SAPEAVCPTPProcessor@@PEAUDEVICEINFO@@@Z @ 0x140105A80
 * Callers:
 *     ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x14012CEA0 (-OnPTPTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?TraceEnvironment@CPTPProcessor@@SAXXZ @ 0x140148878 (-TraceEnvironment@CPTPProcessor@@SAXXZ.c)
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x14014AFE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x14018C130 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401FB1F0 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x140200550 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     CBaseInput::ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___ @ 0x140210F78 (CBaseInput--ForEachDevice__lambda_af0f51c40a51d89eadb224966593ace4___.c)
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
