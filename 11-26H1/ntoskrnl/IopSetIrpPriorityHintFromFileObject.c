/*
 * XREFs of IopSetIrpPriorityHintFromFileObject @ 0x14041DB40
 * Callers:
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopSetIrpPriorityHintFromFileObject(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  struct _KTHREAD *CurrentThread; // r8
  int v4; // eax
  unsigned __int64 v5; // rcx
  int v6; // ecx
  int v7; // ecx
  __int64 result; // rax
  int v9; // ecx

  v2 = *(_QWORD *)(a1 + 208);
  if ( v2 && (v9 = *(_DWORD *)(v2 + 88)) != 0 )
  {
    result = (v9 << 17) | *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(a2 + 16) = result;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v4 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
    v5 = CurrentThread->Process[1].Padding[3];
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 1084);
      if ( v4 >= v6 )
        v4 = v6;
    }
    if ( v4 < 2 && CurrentThread == KeGetCurrentThread() )
    {
      if ( LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
        v4 = 2;
    }
    v7 = v4 + 1;
    result = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF;
    *(_DWORD *)(a2 + 16) = result | (v7 << 17);
  }
  return result;
}
