/*
 * XREFs of RtlpHpLfhPrivateSlotListCompact @ 0x14063CB34
 * Callers:
 *     RtlpHpLfhPrivateSlotsCompact @ 0x14063CC3C (RtlpHpLfhPrivateSlotsCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027D6E0 (RtlpHpAcquireLockExclusive.c)
 *     RtlpHpLfhHeatMapQuery @ 0x1403497A0 (RtlpHpLfhHeatMapQuery.c)
 *     RtlpHpLfhOwnerCompact @ 0x140349990 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhPrivateSlotShutdown @ 0x140349F4C (RtlpHpLfhPrivateSlotShutdown.c)
 *     RtlpHpReleaseLockExclusive @ 0x14034F380 (RtlpHpReleaseLockExclusive.c)
 *     RtlpHpEnvTlsGetValue @ 0x14041CE70 (RtlpHpEnvTlsGetValue.c)
 *     RtlpHpLfhThreadDataInitializeSet @ 0x140529D0C (RtlpHpLfhThreadDataInitializeSet.c)
 */

void __fastcall RtlpHpLfhPrivateSlotListCompact(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // r13
  __int64 Value; // rbx
  __int64 v6; // r8
  struct _KLOCK_ENTRIES *v7; // r9
  char v8; // al
  unsigned __int16 v9; // bp
  __int64 v10; // rsi
  signed int v11; // eax
  struct _KLOCK_ENTRIES *v12; // r9
  unsigned __int8 v13; // [rsp+60h] [rbp+8h]

  v3 = (unsigned __int16 *)(a2 + 88);
  Value = RtlpHpEnvTlsGetValue(*(_DWORD *)(a1 + 84));
  if ( !Value )
    Value = RtlpHpLfhThreadDataInitializeSet(a1);
  v8 = RtlpHpAcquireLockExclusive((int *)(a2 + 80), *(unsigned __int8 *)(a1 + 73), v6, v7);
  v9 = *v3;
  v13 = v8;
  while ( v9 )
  {
    v10 = a1 + ((unsigned __int64)v9 << 6);
    if ( (unsigned __int16 *)(v10 + 16) == v3 )
      break;
    v9 = *(_WORD *)(v10 + 16);
    if ( (_WORD)Value == *(_WORD *)(v10 + 4) )
    {
      v11 = RtlpHpLfhHeatMapQuery(
              a1,
              a1 + ((unsigned __int64)*(unsigned __int16 *)(v10 + 6) << 6),
              (unsigned __int8 *)a2);
      if ( v11 >= 2 )
        RtlpHpLfhOwnerCompact(a1, (unsigned __int8 *)v10, v11, v12);
      else
        RtlpHpLfhPrivateSlotShutdown(a1, v10, Value, 1);
    }
  }
  RtlpHpReleaseLockExclusive((struct _KTHREAD *)(a2 + 80), *(unsigned __int8 *)(a1 + 73), v13);
}
