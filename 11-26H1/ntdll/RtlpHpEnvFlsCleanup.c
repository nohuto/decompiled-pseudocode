/*
 * XREFs of RtlpHpEnvFlsCleanup @ 0x18007FF10
 * Callers:
 *     LdrShutdownThread @ 0x18007E040 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18007ECA0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlpFlsDataCleanup @ 0x18007F010 (RtlpFlsDataCleanup.c)
 */

void __fastcall RtlpHpEnvFlsCleanup(char a1)
{
  _QWORD *v1; // rdx
  int v2; // ebx
  char v3; // r8
  int v4; // edi
  struct _TEB *v5; // rax

  v1 = (_QWORD *)((unsigned __int64)NtCurrentTeb()->HeapFlsData & 0xFFFFFFFFFFFFFFFEuLL);
  if ( v1 )
  {
    v2 = a1 & 1;
    v3 = v2 | 2;
    v4 = a1 & 2;
    if ( (a1 & 2) == 0 )
      v3 = a1 & 1;
    RtlpFlsDataCleanup(&RtlpHpEnvFlsContext, v1, v3);
    if ( v2 )
    {
      v5 = NtCurrentTeb();
      v5->HeapFlsData = (void *)((unsigned __int64)v5->HeapFlsData | 1);
    }
    if ( v4 )
      NtCurrentTeb()->HeapFlsData = (void *)1;
  }
}
