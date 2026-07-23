/*
 * XREFs of KiTraceParkingRundown @ 0x1405FB69C
 * Callers:
 *     KeEtwRundown @ 0x1405E7258 (KeEtwRundown.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x140306A90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceForceParkTransition @ 0x1406C8550 (EtwTraceForceParkTransition.c)
 *     EtwTraceParkTransition @ 0x1406C88AC (EtwTraceParkTransition.c)
 */

void __fastcall KiTraceParkingRundown(char a1)
{
  int v1; // r14d
  __int64 v2; // rdi
  char v3; // r15
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bp
  char v6; // al
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 i; // [rsp+58h] [rbp+10h] BYREF

  if ( a1 )
  {
    LOBYTE(v1) = 0;
    v2 = 0LL;
    for ( i = 0LL; (unsigned int)v2 < (unsigned int)KeNumberProcessors_0; v2 = (unsigned int)(v2 + 1) )
    {
      v3 = 0;
      v4 = KiProcessorBlock[v2];
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      KiAcquirePrcbLocksForIsolationUnit(v4, 0, (unsigned __int64 *)&i);
      v6 = *(_BYTE *)(v4 + 35);
      if ( (v6 & 0x10) != 0 )
      {
        if ( (v6 & 8) != 0 )
        {
          v7 = 3;
          v3 = 1;
          v1 = *(_DWORD *)(*(_QWORD *)(v4 + 34544) + 336LL);
        }
        else
        {
          v7 = ((v6 & 4) != 0) + 1;
        }
      }
      else
      {
        v7 = 0;
      }
      KiReleasePrcbLocksForIsolationUnit(&i);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      EtwTraceParkTransition(v4, v7, v7);
      if ( v3 )
      {
        LOBYTE(v8) = v1;
        EtwTraceForceParkTransition(v4, v8, 0LL);
      }
    }
  }
}
