/*
 * XREFs of xxxSynchronizeDWMWindowChanges @ 0x140221FD8
 * Callers:
 *     ?xxxSendInput@@YAIIPEAUtagINPUT@@@Z @ 0x140276408 (-xxxSendInput@@YAIIPEAUtagINPUT@@@Z.c)
 *     ?xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z @ 0x1402769F4 (-xxxSendInputEx@@YAIIPEAUtagINPUT@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DwmSyncFlushWindowChanges @ 0x14011825C (DwmSyncFlushWindowChanges.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

void __fastcall xxxSynchronizeDWMWindowChanges(__int64 a1, __int64 a2)
{
  void *v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = (void *)ReferenceDwmApiPort(a1, a2);
  if ( v2 )
  {
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v5, 0);
    DwmSyncFlushWindowChanges(v2, v3, v4);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v5);
  }
}
