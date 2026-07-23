/*
 * XREFs of EtwpIsEventNameFilterEnabled @ 0x140413F4C
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpApplyEventNameFilter @ 0x140413C18 (EtwpApplyEventNameFilter.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall EtwpIsEventNameFilterEnabled(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        __int64 a5,
        char a6)
{
  __int64 v6; // rbx
  char v7; // bp
  unsigned __int8 CurrentIrql; // si
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  unsigned __int8 v16; // al
  __int64 v17; // rbx
  __int64 v18; // rcx
  int v19; // eax

  v6 = *(_QWORD *)(a1 + 640);
  v7 = 0;
  CurrentIrql = 0;
  v11 = a1;
  if ( !v6 )
    return 0;
  v12 = 104LL * a2;
  v13 = 2147491840LL;
  v14 = *(_DWORD *)(v12 + v6);
  if ( a6 )
  {
    if ( (v14 & 0x80002000) != 0x80002000 )
      return 0;
    v17 = *(_QWORD *)(v12 + v6 + 56);
  }
  else
  {
    if ( (v14 & 0x80000400) != 0x80000400 )
      return 0;
    v17 = *(_QWORD *)(v12 + v6 + 96);
  }
  if ( !v17 )
    return 0;
  if ( a3 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v13) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, v13);
    }
  }
  v18 = *(_QWORD *)(v11 + 640);
  v19 = *(_DWORD *)(v12 + v18);
  if ( !a6 )
  {
    if ( (v19 & 0x80000400) == 0x80000400 )
    {
      v17 = *(_QWORD *)(v12 + v18 + 96);
      goto LABEL_5;
    }
LABEL_6:
    v16 = *(_BYTE *)(v17 + 1);
    if ( (a4 <= v16 || !v16)
      && (!a5 || (a5 & *(_QWORD *)(v17 + 8)) != 0 && (a5 & *(_QWORD *)(v17 + 16)) == *(_QWORD *)(v17 + 16)) )
    {
      v7 = 1;
    }
    goto LABEL_8;
  }
  if ( (v19 & 0x80002000) != 0x80002000 )
    goto LABEL_6;
  v17 = *(_QWORD *)(v12 + v18 + 56);
LABEL_5:
  if ( v17 )
    goto LABEL_6;
LABEL_8:
  if ( a3 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  return v7;
}
