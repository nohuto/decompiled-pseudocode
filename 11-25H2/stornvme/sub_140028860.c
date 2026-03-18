/*
 * XREFs of sub_140028860 @ 0x140028860
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000D710 @ 0x14000D710 (sub_14000D710.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_14001D254 @ 0x14001D254 (sub_14001D254.c)
 *     sub_14001DF50 @ 0x14001DF50 (sub_14001DF50.c)
 *     sub_14001F6DC @ 0x14001F6DC (sub_14001F6DC.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 *     sub_14002EB94 @ 0x14002EB94 (sub_14002EB94.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

__int64 __fastcall sub_140028860(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // di
  __int64 v6; // r9
  bool v7; // zf
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  char v19; // al
  __int64 i; // rcx
  __int64 v21; // rdx
  int v22; // eax
  __int128 v24; // [rsp+70h] [rbp-39h] BYREF
  _BYTE v25[96]; // [rsp+80h] [rbp-29h] BYREF

  v5 = 0;
  sub_140032C80(v25, 0LL, 88LL);
  v7 = (*(_DWORD *)(a1 + 24) & 0x8008) == 0;
  v24 = 0LL;
  if ( v7 && *(_QWORD *)(a1 + 3928) && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
  {
    *(_DWORD *)(a1 + 24) |= 0x40000u;
    StorPortPause(a1, 120LL);
    *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
    v10 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v10 )
      StorPortExtendedFunction(81LL, a1, v10, v9);
    *(_DWORD *)(a1 + 24) |= 0x10u;
    sub_14001D254(a1, v8);
    v12 = *(unsigned int *)(a1 + 156);
    if ( (_DWORD)v12 )
      StorPortExtendedFunction(81LL, a1, v12, v11);
    sub_14001DF50(a1, 14, v12, v11);
    v14 = 10000000LL;
    v15 = 1000 * **(unsigned __int16 **)(a1 + 3928);
    if ( v15 < 0x989680 )
      v14 = v15;
    StorPortExtendedFunction(81LL, a1, v14, v13);
    StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 3928) + 2LL) & 1) == 0 || (unsigned int)sub_14000F840(a1, 0, v16, v17) )
    {
      v18 = *(_QWORD *)(a1 + 3928);
      *(_DWORD *)(a1 + 24) &= ~0x10u;
      if ( (*(_BYTE *)(v18 + 2) & 4) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 0, v16))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3928) + 2LL) & 0x20) != 0
        && (*(_DWORD *)(a1 + 56) & 0x800) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 2u, v16))
        || (*(_BYTE *)(*(_QWORD *)(a1 + 3928) + 2LL) & 0x10) != 0
        && (*(_DWORD *)(a1 + 56) & 0x1000) != 0
        && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 1u, v16)) )
      {
        v5 = 1;
      }
      else
      {
        v19 = *(_BYTE *)(a1 + 3728);
        if ( (v19 & 4) != 0 )
          *(_BYTE *)(a1 + 3728) = v19 & 0xFB;
      }
    }
    else
    {
      *(_BYTE *)(a1 + 3728) &= ~4u;
      v5 = sub_140028BD4(a1);
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
    {
      v21 = *(_QWORD *)(a1 + 8 * i + 1672);
      if ( v21 )
        ++*(_DWORD *)(v21 + 44);
    }
    v22 = *(_DWORD *)(a1 + 3748);
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    *(_DWORD *)(a1 + 3748) = v22 & 0xFFFFFFFE;
    StorPortResume(a1);
    sub_14002EB94(a1);
    if ( v5 )
    {
      ++*(_DWORD *)(a1 + 4128);
      goto LABEL_32;
    }
    if ( !*(_BYTE *)(a1 + 20) )
    {
      sub_14000D710(a1);
      sub_1400192CC(a1, (__int64)v25);
      StorPortNotification(4109LL, a1, 0LL);
      *(_QWORD *)&v24 = v24 | 0x400;
      sub_1400316E0(a1, &v24, 0LL, 0LL);
    }
  }
  ++*(_DWORD *)(a1 + 4132);
LABEL_32:
  *(_DWORD *)(a1 + 24) &= ~0x40000u;
  return StorPortExtendedFunction(31LL, a1, a3, v6);
}
