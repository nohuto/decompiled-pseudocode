/*
 * XREFs of LdrRegisterDllNotification @ 0x180101340
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x1800332F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180034960 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl LdrRegisterDllNotification(
        ULONG Flags,
        PLDR_DLL_NOTIFICATION_FUNCTION NotificationFunction,
        PVOID Context,
        PVOID *Cookie)
{
  _QWORD *Heap_0; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  NTSTATUS result; // eax

  if ( Flags || !Cookie || !NotificationFunction )
    return -1073741811;
  Heap_0 = RtlAllocateHeap_0(LdrpHeap, NtdllBaseTag + 0x40000, 0x20uLL);
  v8 = Heap_0;
  if ( !Heap_0 )
    return -1073741801;
  Heap_0[2] = NotificationFunction;
  Heap_0[3] = Context;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  v9 = off_1801C48D8[0];
  if ( *(_UNKNOWN ***)off_1801C48D8[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *v8 = &LdrpDllNotificationList;
  v8[1] = v9;
  *v9 = v8;
  off_1801C48D8[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  result = 0;
  *Cookie = v8;
  return result;
}
