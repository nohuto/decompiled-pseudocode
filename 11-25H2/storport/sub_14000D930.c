/*
 * XREFs of sub_14000D930 @ 0x14000D930
 * Callers:
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 * Callees:
 *     sub_14002AE80 @ 0x14002AE80 (sub_14002AE80.c)
 */

__int64 __fastcall sub_14000D930(__int64 a1, char a2, char a3, __int64 a4)
{
  signed __int64 v4; // rax
  char v5; // di
  char v6; // si
  unsigned __int8 v7; // r14
  signed __int64 v12; // r8
  PSLIST_ENTRY v13; // rax
  char *v14; // rdx
  PSLIST_ENTRY v15; // rcx
  char *v16; // rax

  v4 = *(_QWORD *)(a1 + 88);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( (v4 & 1) != 0 )
    return 0LL;
  while ( 1 )
  {
    v12 = v4;
    if ( (unsigned int)(v4 / 0x100000000LL) )
      break;
    v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v4 - 4, v4);
    if ( v12 == v4 )
      goto LABEL_26;
LABEL_23:
    if ( (v4 & 1) != 0 )
      goto LABEL_27;
  }
  if ( a2 )
    goto LABEL_27;
  if ( !ExQueryDepthSList((PSLIST_HEADER)(a1 + 112)) )
  {
    if ( !a3 && !v6 )
    {
      if ( v5 )
      {
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
        v5 = 0;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      v6 = 1;
LABEL_22:
      v4 = *(_QWORD *)(a1 + 88);
      goto LABEL_23;
    }
    sub_14002AE80(a1);
  }
  if ( !a3 && !v6 && !v5 )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 80)) )
      return v7;
    v5 = 1;
  }
  if ( !*(_QWORD *)a4 )
  {
    v13 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 112));
    v14 = 0LL;
    v15 = v13;
    v16 = (char *)(&v13[-1].Next + 1);
    if ( v15 )
      v14 = v16;
    *(_QWORD *)a4 = v14;
    if ( !v14 )
      goto LABEL_22;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFF00000000uLL);
  *(_BYTE *)(*(_QWORD *)a4 + 20LL) &= 0xFCu;
LABEL_26:
  v7 = 1;
LABEL_27:
  if ( v5 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 80));
  if ( v6 )
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  return v7;
}
