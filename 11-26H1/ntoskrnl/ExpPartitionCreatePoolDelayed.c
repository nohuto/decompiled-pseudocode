/*
 * XREFs of ExpPartitionCreatePoolDelayed @ 0x140775290
 * Callers:
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 * Callees:
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpPartitionCreatePoolInternal @ 0x140B6F508 (ExpPartitionCreatePoolInternal.c)
 */

__int64 __fastcall ExpPartitionCreatePoolDelayed(__int64 a1, unsigned __int16 *a2, int a3, int a4)
{
  int v5; // edi
  bool IsNodeInitialized; // al
  int v7; // r9d
  unsigned __int16 v8; // r10
  int v9; // r11d
  __int64 v10; // r8
  unsigned __int16 *v11; // rax

  v5 = (int)a2;
  IsNodeInitialized = KeIsNodeInitialized(((unsigned int)*(_QWORD *)(*(_QWORD *)(a1 + 8)
                                                                   + 8LL
                                                                   * (a4
                                                                    + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
                                                                    * (a3 + 8 * (unsigned int)*a2))) >> 1) & 0x7F);
  v10 = 0LL;
  if ( IsNodeInitialized )
    v11 = (unsigned __int16 *)KeNodeBlock[v8];
  else
    v11 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8)
                  + 8LL
                  * (v7
                   + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v9 + 8 * (unsigned int)*v11))) & 1) == 0 )
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8)
                    + 8LL
                    * (v7
                     + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v9 + 8 * (unsigned int)*v11)));
  return ExpPartitionCreatePoolInternal(a1, (2 * *(_DWORD *)(v10 + 716)) >> 1, *(_DWORD *)(v10 + 720), v5, v9, v7);
}
