/*
 * XREFs of sub_14006D53C @ 0x14006D53C
 * Callers:
 *     sub_140059080 @ 0x140059080 (sub_140059080.c)
 * Callees:
 *     sub_14000D760 @ 0x14000D760 (sub_14000D760.c)
 *     sub_14000EED4 @ 0x14000EED4 (sub_14000EED4.c)
 *     sub_140025E00 @ 0x140025E00 (sub_140025E00.c)
 *     sub_140028D00 @ 0x140028D00 (sub_140028D00.c)
 *     sub_14006DA4C @ 0x14006DA4C (sub_14006DA4C.c)
 */

__int64 __fastcall sub_14006D53C(__int64 a1, int a2, __int64 a3)
{
  _QWORD *v4; // r14
  char v5; // si
  unsigned int v6; // ebx
  unsigned int v7; // r12d
  __int64 v8; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  ULONGLONG v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  char v20; // [rsp+20h] [rbp-58h]
  unsigned int v21; // [rsp+24h] [rbp-54h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+28h] [rbp-50h]
  char v23; // [rsp+80h] [rbp+8h]
  char v26; // [rsp+98h] [rbp+20h]

  v4 = (_QWORD *)(a1 + 160);
  v5 = 0;
  v6 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v7 = 0;
  v26 = 0;
  v8 = 0LL;
  v21 = 0;
  v20 = 0;
  v23 = 0;
  if ( (_QWORD *)*v4 == v4 )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
LABEL_4:
  v10 = (_QWORD *)*v4;
  while ( v10 != v4 )
  {
    v11 = v10[3];
    if ( (*(_BYTE *)(v11 + 506) & 2) == 0 )
    {
      v12 = *(v10 - 2);
      if ( v12 == -1LL || v12 >= UnbiasedInterruptTime )
        break;
    }
    if ( !v5 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      v5 = 1;
      v26 = 1;
      goto LABEL_4;
    }
    if ( (*(_BYTE *)(v11 + 506) & 2) == 0 && !v23 )
    {
      v8 = v10[3];
      v23 = 1;
      v7 = *(_DWORD *)(v8 + 736) + *(_QWORD *)(v11 + 808) / 0x100000000LL;
    }
    v13 = *v10;
    v14 = v10[2] + 120LL;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 )
      goto LABEL_28;
    v15 = (_QWORD *)v10[1];
    if ( (_QWORD *)*v15 != v10 )
      goto LABEL_28;
    *v15 = v13;
    *(_QWORD *)(v13 + 8) = v15;
    if ( (*(_BYTE *)(v14 + 20) & 2) != 0 )
    {
      sub_140028D00((struct _EX_RUNDOWN_REF *)a1, 1);
      sub_14006DA4C((PSLIST_HEADER)(a1 + 96));
      sub_14006DA4C((PSLIST_HEADER)(a1 + 112));
      *(_BYTE *)(v14 + 20) &= ~2u;
      v6 = v21;
    }
    else
    {
      v16 = *(_QWORD *)v14;
      if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
        goto LABEL_28;
      v17 = *(_QWORD **)(v14 + 8);
      if ( *v17 != v14 )
        goto LABEL_28;
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
    }
    sub_14000EED4(a1, v14);
    *(_BYTE *)(v14 + 20) &= ~1u;
    if ( (*(_BYTE *)(v14 + 20) & 4) != 0 )
    {
      v8 = a1 - 720;
      v18 = *(_QWORD *)(a1 - 720 + 32);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 80) & 0x100) != 0 )
        {
          sub_14000D760(a1 - 720, 0);
          v20 = 1;
        }
      }
    }
    v19 = *(_QWORD **)(a3 + 8);
    if ( *v19 != a3 )
LABEL_28:
      __fastfail(3u);
    *v10 = a3;
    ++v6;
    v10[1] = v19;
    *v19 = v10;
    *(_QWORD *)(a3 + 8) = v10;
    v10 = (_QWORD *)*v4;
    v21 = v6;
    if ( v6 == a2 )
      goto LABEL_30;
    v5 = v26;
  }
  if ( v5 )
LABEL_30:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  else
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
  if ( v20 )
    sub_140025E00(v8, 0, 1);
  if ( v23 )
  {
    if ( v7 > *(_DWORD *)(v8 + 2268) )
      *(_DWORD *)(v8 + 2268) = v7;
  }
  return v6;
}
