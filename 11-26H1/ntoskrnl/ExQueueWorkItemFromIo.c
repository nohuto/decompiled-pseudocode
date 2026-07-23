/*
 * XREFs of ExQueueWorkItemFromIo @ 0x140383910
 * Callers:
 *     IoQueueWorkItemEx @ 0x140383750 (IoQueueWorkItemEx.c)
 *     IoQueueWorkItem @ 0x1403841E0 (IoQueueWorkItem.c)
 *     DifExQueueWorkItemFromIoWrapper @ 0x140656DC0 (DifExQueueWorkItemFromIoWrapper.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140383B24 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v3; // r9
  ULONG_PTR v4; // rdi
  int v5; // r8d
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v3 = BugCheckParameter2[2];
  if ( v3 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v3, 0LL);
  v4 = a2;
  if ( (unsigned int)a2 >= 7 )
    v5 = a2 - 32;
  else
    v5 = ExpBuiltinPriorities[a2];
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), (_DWORD)BugCheckParameter2, v5, -1, 1);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v4, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
