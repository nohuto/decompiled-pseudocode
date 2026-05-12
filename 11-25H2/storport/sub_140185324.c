/*
 * XREFs of sub_140185324 @ 0x140185324
 * Callers:
 *     sub_140012624 @ 0x140012624 (sub_140012624.c)
 *     sub_140185AA8 @ 0x140185AA8 (sub_140185AA8.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140067EAC @ 0x140067EAC (sub_140067EAC.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 */

__int64 __fastcall sub_140185324(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  void *v8; // rbx
  _DWORD Dst[15]; // [rsp+60h] [rbp+7h] BYREF
  __int16 v10; // [rsp+9Ch] [rbp+43h]
  unsigned int v11; // [rsp+D8h] [rbp+7Fh] BYREF

  memset_0(Dst, 0, 0x40uLL);
  if ( !a2 )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 608);
  *a2 = 0LL;
  if ( *(int *)(v7 + 184) >= 0 || (*(_DWORD *)(v7 + 188) & 2) == 0 )
    return 3221225659LL;
  v8 = (void *)sub_1400143E0(64LL, 128LL, 1179476306LL, *(_QWORD *)(a1 + 8));
  if ( !v8 )
    return 3221225626LL;
  Dst[0] = 210;
  Dst[10] = 32;
  v10 = 1;
  result = sub_140187D84(a1, (_DWORD)v8, 0, 128, (__int64)Dst);
  v11 = result;
  if ( (int)result < 0 )
  {
    sub_140067EAC(0, &v11);
    ExFreePoolWithTag(v8, 0x464D6152u);
    result = v11;
  }
  else
  {
    *a2 = v8;
  }
  if ( a3 )
    *a3 = 0;
  return result;
}
