/*
 * XREFs of sub_1400BD5E0 @ 0x1400BD5E0
 * Callers:
 *     sub_1400EBA60 @ 0x1400EBA60 (sub_1400EBA60.c)
 * Callees:
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_1400BD2A0 @ 0x1400BD2A0 (sub_1400BD2A0.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400BD5E0(char *Context, _DWORD *Src)
{
  __int64 result; // rax
  char *v5; // rbx
  int v6; // ebp
  __int64 v7; // rcx

  result = sub_1400BCC38((__int64)Context);
  if ( (int)result < 0 )
    return result;
  v5 = Context + 1656;
  v6 = sub_1400BD2A0((__int64)Context);
  if ( v6 >= 0 )
  {
    if ( !Src )
    {
LABEL_6:
      *(_DWORD *)(*(_QWORD *)v5 + 28LL) |= 0x100u;
LABEL_14:
      if ( !_interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)v5 + 28LL), 0) )
        IoQueueWorkItem(
          *(PIO_WORKITEM *)(*(_QWORD *)v5 + 40LL),
          (PIO_WORKITEM_ROUTINE)sub_1400BD410,
          DelayedWorkQueue,
          Context);
      return 0LL;
    }
    v7 = *(_QWORD *)v5;
    if ( *Src == -1 )
    {
      *(_DWORD *)(v7 + 28) |= 4u;
      goto LABEL_6;
    }
    if ( *Src )
    {
      memmove(*(void **)(v7 + 48), Src, 0x1000uLL);
      goto LABEL_14;
    }
    *(_DWORD *)(v7 + 28) |= 0x10u;
  }
  if ( *(_QWORD *)v5 )
    *(_DWORD *)(*(_QWORD *)v5 + 28LL) &= ~0x100u;
  _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 1u);
  _interlockedbittestandreset((volatile signed __int32 *)Context + 268, 2u);
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 69));
  return (unsigned int)v6;
}
