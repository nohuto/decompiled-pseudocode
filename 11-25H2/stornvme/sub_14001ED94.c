/*
 * XREFs of sub_14001ED94 @ 0x14001ED94
 * Callers:
 *     sub_14000DBA0 @ 0x14000DBA0 (sub_14000DBA0.c)
 *     sub_140011F70 @ 0x140011F70 (sub_140011F70.c)
 *     sub_140019EC0 @ 0x140019EC0 (sub_140019EC0.c)
 *     sub_14001DED0 @ 0x14001DED0 (sub_14001DED0.c)
 * Callees:
 *     sub_14000D060 @ 0x14000D060 (sub_14000D060.c)
 *     sub_14000D710 @ 0x14000D710 (sub_14000D710.c)
 *     sub_14000F840 @ 0x14000F840 (sub_14000F840.c)
 *     sub_140018930 @ 0x140018930 (sub_140018930.c)
 *     sub_1400192CC @ 0x1400192CC (sub_1400192CC.c)
 *     sub_14001D254 @ 0x14001D254 (sub_14001D254.c)
 *     sub_14001DF50 @ 0x14001DF50 (sub_14001DF50.c)
 *     sub_14001F6DC @ 0x14001F6DC (sub_14001F6DC.c)
 *     sub_1400206E0 @ 0x1400206E0 (sub_1400206E0.c)
 *     sub_140028BD4 @ 0x140028BD4 (sub_140028BD4.c)
 *     sub_14002EB94 @ 0x14002EB94 (sub_14002EB94.c)
 *     sub_1400316E0 @ 0x1400316E0 (sub_1400316E0.c)
 *     __security_check_cookie @ 0x140032780 (__security_check_cookie.c)
 *     sub_140032C80 @ 0x140032C80 (sub_140032C80.c)
 */

char __fastcall sub_14001ED94(__int64 a1, char a2)
{
  char v2; // r15
  char v6; // dl
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  char v14; // di
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  char v18; // al
  __int64 i; // rcx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _BYTE v23[4]; // [rsp+60h] [rbp-69h] BYREF
  int v24; // [rsp+64h] [rbp-65h]
  __int64 v25; // [rsp+68h] [rbp-61h]
  __int128 v26; // [rsp+70h] [rbp-59h]
  __int128 v27; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v28[96]; // [rsp+90h] [rbp-39h] BYREF

  v2 = 0;
  v26 = 0LL;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 3748), 0) )
    return 1;
  *(_DWORD *)(a1 + 24) |= 0x80000u;
  StorPortPause(a1, 120LL);
  _interlockedbittestandset((volatile signed __int32 *)(a1 + 24), 4u);
  v8 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v8 )
    StorPortExtendedFunction(81LL, a1, v8, v7);
  *(_DWORD *)(a1 + 24) &= 0xFFFFFDFE;
  sub_14001D254(a1, v6);
  v10 = *(unsigned int *)(a1 + 156);
  if ( (_DWORD)v10 )
    StorPortExtendedFunction(81LL, a1, v10, v9);
  sub_14001DF50(a1, 14, v10, v9);
  if ( sub_140018930(a1, v11, v12) )
    goto LABEL_8;
  sub_14000D060(v13);
  if ( a2 )
  {
    if ( !_bittest64((const signed __int64 *)(a1 + 192), 0x24u) || !(unsigned __int8)sub_1400206E0(a1) )
    {
LABEL_8:
      v14 = 0;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(a1 + 3728) & 3) == 3 )
      *(_BYTE *)(a1 + 3728) |= 4u;
    goto LABEL_16;
  }
  if ( !(unsigned int)sub_14000F840(a1, 0, v15, v16) )
  {
    *(_BYTE *)(a1 + 3728) &= ~4u;
LABEL_16:
    v14 = sub_140028BD4(a1);
    goto LABEL_30;
  }
  v14 = 0;
  v23[0] = 0;
  if ( (*(_DWORD *)(a1 + 56) & 0x1840) != 0 && !(unsigned int)StorPortExtendedFunction(109LL, a1, v23, v17) && !v23[0] )
  {
    *(_DWORD *)(a1 + 24) &= ~0x10u;
    if ( (*(_DWORD *)(a1 + 56) & 0x40) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 0LL))
      || (*(_DWORD *)(a1 + 56) & 0x800) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 2LL))
      || (*(_DWORD *)(a1 + 56) & 0x1000) != 0 && (*(_BYTE *)(a1 + 3728) |= 4u, !(unsigned int)sub_14001F6DC(a1, 1LL)) )
    {
      v14 = 1;
      goto LABEL_30;
    }
    v18 = *(_BYTE *)(a1 + 3728);
    if ( (v18 & 4) != 0 )
      *(_BYTE *)(a1 + 3728) = v18 & 0xFB;
  }
  v2 = 1;
LABEL_30:
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 224); i = (unsigned int)(i + 1) )
  {
    v20 = *(_QWORD *)(a1 + 8 * i + 1672);
    if ( v20 )
    {
      if ( !a2 )
        ++*(_DWORD *)(v20 + 40);
      ++*(_DWORD *)(*(_QWORD *)(a1 + 8 * i + 1672) + 44LL);
    }
  }
  v21 = *(_DWORD *)(a1 + 24);
  if ( (v21 & 0x10) != 0 )
    *(_DWORD *)(a1 + 24) = v21 & 0xFFFFFFEF;
  *(_DWORD *)(a1 + 3748) &= ~1u;
  StorPortResume(a1);
  sub_14002EB94(a1);
  v22 = a1;
  if ( v14 )
  {
    *(_QWORD *)&v26 = v26 | 0x200;
    goto LABEL_42;
  }
  sub_14000D710(a1);
  if ( v2 )
  {
    sub_140032C80(v28, 0LL, 88LL);
    sub_1400192CC(a1, (__int64)v28);
    v25 = 0LL;
    v25 = *(_QWORD *)(a1 + 24);
    v24 = -1056964606;
    StorPortNotification(4109LL, a1, 0LL);
    *(_QWORD *)&v26 = v26 | 0x400;
    v22 = a1;
LABEL_42:
    v27 = v26;
    sub_1400316E0(v22, &v27, 0LL, 0LL);
  }
  *(_DWORD *)(a1 + 24) &= ~0x80000u;
  return v14;
}
