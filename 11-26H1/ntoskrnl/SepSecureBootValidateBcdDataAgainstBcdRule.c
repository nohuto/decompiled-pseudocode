/*
 * XREFs of SepSecureBootValidateBcdDataAgainstBcdRule @ 0x1408162F8
 * Callers:
 *     NtFilterBootOption @ 0x140815AF0 (NtFilterBootOption.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140816134 (SepSecureBootUpdateBcdDataForRule.c)
 * Callees:
 *     memcmp @ 0x14073D750 (memcmp.c)
 */

__int64 __fastcall SepSecureBootValidateBcdDataAgainstBcdRule(__int64 a1, _BYTE *a2, unsigned int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  __int16 v6; // dx
  int v7; // ecx
  int v8; // ecx
  bool v9; // zf
  struct _LIST_ENTRY *v10; // rdx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY **v12; // r8
  unsigned __int64 i; // rax

  v3 = *(unsigned int *)(a1 + 8);
  v4 = 0;
  v6 = *(_WORD *)((_BYTE *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3) & 0x1F;
  if ( v6 != 8 )
  {
    v7 = (*(_BYTE *)(a1 + 7) & 0xF) - 2;
    if ( !v7 )
    {
      if ( v6 || (a3 & 1) != 0 )
        return (unsigned int)-1069350910;
      for ( ; a3; a3 -= 2 )
      {
        if ( *(_WORD *)&a2[2 * ((unsigned __int64)a3 >> 1) - 2] )
          break;
      }
      if ( a3 != *(unsigned __int16 *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3 + 2) )
        return (unsigned int)-1069350910;
      v9 = memcmp(a2, (char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3 + 4, a3) == 0;
      goto LABEL_29;
    }
    v8 = v7 - 3;
    if ( v8 )
    {
      if ( v8 != 1 )
        return v4;
      if ( v6 != 1 || a3 - 1 > 1 )
        return (unsigned int)-1069350910;
      v9 = (*(_WORD *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3 + 2) != 0) == (*a2 != 0);
LABEL_29:
      if ( v9 )
        return v4;
      return (unsigned int)-1069350910;
    }
    if ( a3 != 8 )
      return (unsigned int)-1069350910;
    v10 = *(struct _LIST_ENTRY **)a2;
    v11 = *(struct _LIST_ENTRY **)a2;
    if ( (*(_WORD *)((_BYTE *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3) & 0x1F) != 5 )
    {
      if ( (*(_WORD *)((_BYTE *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3) & 0x1F) == 6 )
      {
        if ( v10 >= *(struct _LIST_ENTRY **)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Blink
                                           + v3
                                           + 2)
          && v10 <= *(struct _LIST_ENTRY **)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink[1].Flink
                                           + v3
                                           + 2) )
        {
          goto LABEL_21;
        }
      }
      else
      {
        if ( (*(_WORD *)((_BYTE *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3) & 0x1F) != 7 )
          return (unsigned int)-1069350909;
        v12 = (struct _LIST_ENTRY **)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Blink + v3 + 4);
        for ( i = 0LL;
              i < *(unsigned __int16 *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Blink + v3 + 2);
              ++i )
        {
          if ( *v12 == v10 )
            return v4;
          ++v12;
        }
      }
    }
    v11 = *(struct _LIST_ENTRY **)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3 + 2);
LABEL_21:
    v9 = v10 == v11;
    goto LABEL_29;
  }
  return *(_WORD *)((char *)&RtlpBootStatHandleLock.SchedulerApc.ApcListEntry.Blink->Flink + v3 + 2) == 0
       ? 0xC0430002
       : 0;
}
