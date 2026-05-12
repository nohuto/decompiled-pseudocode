/*
 * XREFs of sub_140072AE8 @ 0x140072AE8
 * Callers:
 *     sub_1400E7FA4 @ 0x1400E7FA4 (sub_1400E7FA4.c)
 * Callees:
 *     sub_14006B2F4 @ 0x14006B2F4 (sub_14006B2F4.c)
 *     sub_14006B358 @ 0x14006B358 (sub_14006B358.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall sub_140072AE8(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+40h] [rbp-68h] BYREF
  int v11; // [rsp+44h] [rbp-64h] BYREF
  char v12; // [rsp+50h] [rbp-58h]

  v6 = 0x80000000;
  memset_0(&v11, 0, 0x54uLL);
  if ( *(_DWORD *)(a2 + 1640) )
    return 0LL;
  if ( !(unsigned __int8)sub_14017B0EC(a1 + 1144, v7) )
  {
    result = sub_14017AF58(v8, *(_QWORD *)(a1 + 32), a1 + 176);
    if ( (int)result < 0 )
      return result;
    v10 = 1;
    if ( (int)sub_14006B358((int *)(a1 + 1144), (__int64)&v10) >= 0 && (v12 & 2) != 0 )
      *(_DWORD *)(a1 + 976) |= 8u;
  }
  v10 = 1;
  if ( (int)sub_14006B358((int *)(a1 + 1144), (__int64)&v10) >= 0 && (v12 & 2) != 0 )
    *(_DWORD *)(a1 + 976) |= 8u;
  if ( !a3 )
    goto LABEL_22;
  if ( (*(_DWORD *)(a3 + 220) & 4) != 0 )
    v6 = *(_DWORD *)(a1 + 1008);
  if ( *(_BYTE *)(a3 + 144) == 2 )
  {
    if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1360) = -1LL;
    *(_QWORD *)(a1 + 1376) = 0x100000000LL;
    goto LABEL_21;
  }
  if ( *(_BYTE *)(a3 + 144) == 3 )
  {
    if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
      *(_QWORD *)(a1 + 1360) = -1LL;
    *(_QWORD *)(a1 + 1376) = 0LL;
LABEL_21:
    *(_QWORD *)(a1 + 1392) = -1LL;
  }
LABEL_22:
  result = sub_14006B2F4(
             a1 + 1144,
             0x2000,
             *(_QWORD *)(a1 + 1368),
             *(_QWORD *)(a1 + 1360),
             *(_QWORD *)(a1 + 1376),
             *(_DWORD *)(a1 + 1352),
             v6,
             a2 + 1624);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 != 0x80000000 )
  {
    result = sub_14006B2F4(
               a1 + 1144,
               0x2000,
               *(_QWORD *)(a1 + 1368),
               *(_QWORD *)(a1 + 1360),
               *(_QWORD *)(a1 + 1376),
               *(_DWORD *)(a1 + 1352),
               0x80000000,
               a2 + 1624);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
