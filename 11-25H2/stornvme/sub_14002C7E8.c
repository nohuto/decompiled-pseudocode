/*
 * XREFs of sub_14002C7E8 @ 0x14002C7E8
 * Callers:
 *     sub_14002BC40 @ 0x14002BC40 (sub_14002BC40.c)
 * Callees:
 *     sub_140006100 @ 0x140006100 (sub_140006100.c)
 *     sub_140006580 @ 0x140006580 (sub_140006580.c)
 *     sub_1400092F0 @ 0x1400092F0 (sub_1400092F0.c)
 *     sub_140009580 @ 0x140009580 (sub_140009580.c)
 *     sub_14000CF50 @ 0x14000CF50 (sub_14000CF50.c)
 *     sub_140032980 @ 0x140032980 (sub_140032980.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_14002C7E8(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  unsigned int v7; // r8d
  int i; // edx
  __int64 v9; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v10; // [rsp+B0h] [rbp+40h]
  __int64 v11; // [rsp+B8h] [rbp+48h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( a2 )
  {
    result = StorPortExtendedFunction(0LL, a1, 4096LL, 1701672526LL);
    v6 = v10;
    if ( !v10 )
    {
      ++*(_DWORD *)(a1 + 4204);
      goto LABEL_7;
    }
    sub_140032C80(v10, 0LL, 4096LL);
    sub_140032980(v10, a2, 4096LL);
  }
  result = sub_140006100(a1, 0x1000u);
  if ( v9 )
  {
    sub_140032C80(v9, 0LL, 4096LL);
    sub_140009580(a1, a1 + 1264);
    for ( i = 0; i < 2; *(_BYTE *)(*(_QWORD *)(a1 + 1360) + 4225LL) |= i )
      ++i;
    LOBYTE(v7) = 4;
    *(_WORD *)(*(_QWORD *)(a1 + 1360) + 4212LL) = 0;
    sub_140006580(a1, *(_QWORD *)(a1 + 1360), v7, 0x1000u, v11, 0, 0LL, 0);
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4160LL) = v9;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4168LL) = v11;
    *(_DWORD *)(*(_QWORD *)(a1 + 1360) + 4208LL) = 4096;
    *(_BYTE *)(*(_QWORD *)(a1 + 1360) + 4225LL) |= 4u;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4192LL) = sub_14002CA30;
    *(_QWORD *)(*(_QWORD *)(a1 + 1360) + 4200LL) = v10;
    return sub_1400092F0(a1, a1 + 1272);
  }
  ++*(_DWORD *)(a1 + 4200);
  v6 = v10;
LABEL_7:
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
  {
    result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
    v6 = v10;
  }
  if ( v6 )
    result = StorPortExtendedFunction(1LL, a1, v6, v5);
  if ( v9 )
    result = sub_14000CF50(a1, 4096LL, &v9, v11);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3748), 1u);
  return result;
}
