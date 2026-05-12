/*
 * XREFs of sub_14005DAC0 @ 0x14005DAC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140055EE0 @ 0x140055EE0 (sub_140055EE0.c)
 *     sub_1400A63F0 @ 0x1400A63F0 (sub_1400A63F0.c)
 */

void __fastcall sub_14005DAC0(struct _KDPC *Dpc, _QWORD *DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned int v6; // ecx
  _DWORD *v7; // rax

  v4 = DeferredContext[8];
  v5 = *(unsigned int *)(v4 + 968);
  if ( (unsigned int)v5 > 1 )
  {
    v6 = 0;
    v7 = (_DWORD *)(*(_QWORD *)(v4 + 960) + 136LL);
    do
    {
      v6 += *v7;
      v7 += 80;
      --v5;
    }
    while ( v5 );
    if ( v6 > *(_DWORD *)(v4 + 588) && !(unsigned int)sub_140055EE0(v4) )
    {
      if ( _InterlockedIncrement((volatile signed __int32 *)(v4 + 980)) != 2 )
        return;
      sub_1400A63F0(v4);
    }
    _InterlockedExchange((volatile __int32 *)(v4 + 980), 0);
  }
}
