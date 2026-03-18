/*
 * XREFs of ?FindQMsgForCoalesce@@YAPEAUtagQMSG@@PEAUtagMLIST@@IPEAUHWND__@@PEAU1@@Z @ 0x1401DAA78
 * Callers:
 *     ProcessSuspendedEventMessage @ 0x1402A7174 (ProcessSuspendedEventMessage.c)
 *     ProcessSuspendedPostMessage @ 0x1402A7248 (ProcessSuspendedPostMessage.c)
 * Callees:
 *     <none>
 */

struct tagQMSG *__fastcall FindQMsgForCoalesce(struct tagMLIST *a1, int a2, HWND a3, struct tagQMSG *a4)
{
  struct tagQMSG *result; // rax
  int v5; // ecx

  if ( !a4 )
    a4 = a1;
  for ( result = (struct tagQMSG *)*((_QWORD *)a4 + 1); result; result = (struct tagQMSG *)*((_QWORD *)result + 1) )
  {
    v5 = *((_DWORD *)result + 24);
    if ( (!v5 || v5 == 9) && *((_DWORD *)result + 6) == a2 && *((HWND *)result + 2) == a3 )
      break;
  }
  return result;
}
