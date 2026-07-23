/*
 * XREFs of MiWakeAllZeroingThreads @ 0x1405075FC
 * Callers:
 *     MiWakeZeroingThreads @ 0x140713A28 (MiWakeZeroingThreads.c)
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x14023AEC0 (KeSetActualBasePriorityThread.c)
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiIncrementZeroEngineThread @ 0x1404FAFBC (MiIncrementZeroEngineThread.c)
 */

void __fastcall MiWakeAllZeroingThreads(__int64 a1)
{
  _QWORD **v1; // rbx
  __int64 v2; // r14
  _QWORD *i; // rdi
  _QWORD *v4; // rsi
  int v5; // ebp
  void *v6; // r15
  __int64 v7; // r8

  v1 = (_QWORD **)(a1 + 400);
  v2 = 3LL;
  do
  {
    if ( *((_BYTE *)v1 - 134) )
    {
      for ( i = *v1; i != v1; i = (_QWORD *)*i )
      {
        v4 = i - 20;
        v5 = *((_DWORD *)i - 8);
        if ( (v5 & 1) != 0 )
        {
          if ( (v5 & 4) == 0 )
          {
            v6 = (void *)v4[9];
            if ( ObReferenceObjectSafeWithTag((__int64)v6, 0x655A6D4Du) )
            {
              *((_DWORD *)v4 + 32) |= 8u;
              KeSetActualBasePriorityThread((__int64)v6, 12LL, v7);
              ObfDereferenceObjectWithTag(v6, 0x655A6D4Du);
            }
          }
          if ( (v5 & 2) != 0 )
            MiIncrementZeroEngineThread((__int64)(i - 20), 0);
        }
        else
        {
          *((_DWORD *)v4 + 32) |= 0x10u;
        }
      }
    }
    v1 += 63;
    --v2;
  }
  while ( v2 );
}
