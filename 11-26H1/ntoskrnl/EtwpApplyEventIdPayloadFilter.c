/*
 * XREFs of EtwpApplyEventIdPayloadFilter @ 0x14051F084
 * Callers:
 *     EtwpEventWriteFull @ 0x14021344C (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140B85DAC (EtwpWriteUserEvent.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     EtwpPerfectHashFunctionSearch @ 0x140441960 (EtwpPerfectHashFunctionSearch.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1406CCDC8 (EtwpApplyPayloadFilterInternal.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall EtwpApplyEventIdPayloadFilter(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        char a8,
        unsigned __int8 a9)
{
  __int64 v9; // rbp
  __int64 v12; // rsi
  volatile signed __int32 *v13; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v15; // r10
  __int64 v16; // rdx
  char v17; // al
  _BYTE *v18; // rdx
  char v19; // al
  __int64 v20; // rbx
  __int64 v21; // rdx
  char v22; // al
  _BYTE *v23; // rdx
  _BYTE *v24; // rdx
  _BYTE v26[16]; // [rsp+40h] [rbp-38h] BYREF

  v9 = (unsigned int)a2;
  v26[0] = 1;
  v12 = a1;
  v13 = 0LL;
  if ( a9 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    v15 = 104 * v9;
    v16 = *(_QWORD *)(104 * v9 + *(_QWORD *)(v12 + 640) + 72);
    if ( v16 )
    {
      v17 = EtwpPerfectHashFunctionSearch(a4, v16);
      if ( *v18 == v17 )
        goto LABEL_11;
      v19 = 0;
      v26[0] = 0;
    }
    else
    {
      v19 = v26[0];
    }
    if ( !v19 )
    {
LABEL_13:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      goto LABEL_20;
    }
LABEL_11:
    v13 = *(volatile signed __int32 **)(v15 + *(_QWORD *)(v12 + 640) + 80);
    if ( v13 )
      _InterlockedIncrement(v13);
    goto LABEL_13;
  }
  v20 = 104LL * (unsigned int)a2;
  v21 = *(_QWORD *)(v20 + *(_QWORD *)(a1 + 640) + 72);
  if ( v21 )
  {
    v22 = EtwpPerfectHashFunctionSearch(a4, v21);
    if ( *v23 != v22 )
    {
      v26[0] = 0;
      return v26[0];
    }
  }
  v13 = *(volatile signed __int32 **)(*(_QWORD *)(v12 + 640) + v20 + 80);
LABEL_20:
  if ( v13 )
  {
    v24 = v26;
    LOBYTE(v24) = a5;
    if ( (int)EtwpApplyPayloadFilterInternal(a4, v24, a6, a7, a8, a3 == 0, v13 + 2, v26) < 0 )
      v26[0] = 1;
    if ( a9 < 2u && _InterlockedExchangeAdd(v13, 0xFFFFFFFF) == 1 )
      ExFreePoolWithTag((PVOID)v13, 0);
  }
  return v26[0];
}
