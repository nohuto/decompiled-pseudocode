/*
 * XREFs of LdrRegisterDllNotification @ 0x180101BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlEnterCriticalSection @ 0x180048D70 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18004A3E0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrRegisterDllNotification(int a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 Heap_0; // rax
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 result; // rax

  if ( a1 || !a4 || !a2 )
    return 3221225485LL;
  Heap_0 = RtlAllocateHeap_0();
  v8 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  *(_QWORD *)(Heap_0 + 16) = a2;
  *(_QWORD *)(Heap_0 + 24) = a3;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v9 = (__int64 *)off_1801C58D8[0];
  if ( *(_UNKNOWN ***)off_1801C58D8[0] != &LdrpDllNotificationList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpDllNotificationList;
  *(_QWORD *)(v8 + 8) = v9;
  *v9 = v8;
  off_1801C58D8[0] = (_UNKNOWN **)v8;
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock);
  result = 0LL;
  *a4 = v8;
  return result;
}
