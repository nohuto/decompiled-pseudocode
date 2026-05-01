/*
 * XREFs of CrmStateMonitorWNFStart @ 0x18006BCB4
 * Callers:
 *     CrmStateMonitorStart @ 0x180048F00 (CrmStateMonitorStart.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x180020280 (CrmStateMonitorStateSizeGet.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 */

__int64 __fastcall CrmStateMonitorWNFStart(int *a1, __int64 a2)
{
  _DWORD *v2; // r9
  int v4; // ecx
  unsigned int v6; // eax
  const void *v7; // r9
  void *v8; // r10
  __int64 v9; // rcx
  void *v10; // r9
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v2 = a1 + 14;
  v14 = 0LL;
  *((_QWORD *)a1 + 5) = a1 + 14;
  v4 = *a1;
  *v2 = 0;
  v6 = CrmStateMonitorStateSizeGet(v4);
  memcpy_0(v8, v7, v6);
  if ( *a1 == 13 || (unsigned int)*a1 <= 0x22 && (v9 = 0x54000C000LL, _bittest64(&v9, *a1)) )
    v10 = CrmStateMonitorSebCallback;
  else
    v10 = CrmStateMonitorWNFCallback;
  v11 = RtlSubscribeWnfStateChangeNotification(&v14, a2, 0LL, v10, a1, 0LL, 0, 0);
  if ( v11 < 0 )
  {
    v12 = v14;
  }
  else
  {
    v12 = 0LL;
    *((_QWORD *)a1 + 11) = v14;
    v11 = 0;
    v14 = 0LL;
  }
  if ( v12 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v11;
}
