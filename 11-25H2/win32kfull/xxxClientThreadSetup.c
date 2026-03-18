/*
 * XREFs of xxxClientThreadSetup @ 0x1401A3F70
 * Callers:
 *     <none>
 * Callees:
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x14001F450 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401A4014 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1402709B8 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 */

__int64 xxxClientThreadSetup()
{
  unsigned int Count; // eax
  unsigned int v1; // ebx
  char v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  v4 = 0;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v3, 1);
  EtwTraceBeginCallback(84LL);
  v1 = KeUserModeCallback(84LL, 0LL, 0LL, &v5, &v4);
  EtwTraceEndCallback(84LL);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v3);
  return v1;
}
