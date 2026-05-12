/*
 * XREFs of sub_1400728C4 @ 0x1400728C4
 * Callers:
 *     StorPortGetUncachedExtension @ 0x140073F80 (StorPortGetUncachedExtension.c)
 * Callees:
 *     sub_14006B2F4 @ 0x14006B2F4 (sub_14006B2F4.c)
 *     sub_14006B358 @ 0x14006B358 (sub_14006B358.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 *     sub_14017AF58 @ 0x14017AF58 (sub_14017AF58.c)
 *     sub_14017B0EC @ 0x14017B0EC (sub_14017B0EC.c)
 */

__int64 __fastcall sub_1400728C4(__int64 a1, __int64 a2, int a3)
{
  int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  bool v12; // zf
  _DWORD v13[4]; // [rsp+40h] [rbp-78h] BYREF
  char v14; // [rsp+50h] [rbp-68h]

  v6 = 0x80000000;
  memset_0(v13, 0, 0x58uLL);
  if ( *(_DWORD *)(a1 + 1336) )
    return *(_QWORD *)(a1 + 1320);
  if ( !(unsigned __int8)sub_14017B0EC(a1 + 1144, v7) )
  {
    if ( (int)sub_14017AF58(v8, *(_QWORD *)(a1 + 32), a1 + 176) < 0 )
      return 0LL;
    v13[0] = 1;
    if ( (int)sub_14006B358((int *)(a1 + 1144), (__int64)v13) >= 0 && (v14 & 2) != 0 )
      *(_DWORD *)(a1 + 976) |= 8u;
  }
  if ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 220) & 4) != 0 )
      v6 = *(_DWORD *)(a1 + 1008);
    if ( *(_BYTE *)(a2 + 144) == 2 )
    {
      if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
        *(_QWORD *)(a1 + 1360) = -1LL;
      *(_QWORD *)(a1 + 1376) = 0x100000000LL;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 144) != 3 )
        goto LABEL_19;
      if ( *(_QWORD *)(a1 + 1360) < 0x100000000uLL )
        *(_QWORD *)(a1 + 1360) = -1LL;
      *(_QWORD *)(a1 + 1376) = 0LL;
    }
    *(_QWORD *)(a1 + 1392) = -1LL;
  }
LABEL_19:
  if ( (int)sub_14006B2F4(
              a1 + 1144,
              a3,
              *(_QWORD *)(a1 + 1368),
              *(_QWORD *)(a1 + 1360),
              *(_QWORD *)(a1 + 1376),
              *(_DWORD *)(a1 + 1352),
              v6,
              a1 + 1320) < 0
    && (v6 == 0x80000000
     || (int)sub_14006B2F4(
               a1 + 1144,
               a3,
               *(_QWORD *)(a1 + 1368),
               *(_QWORD *)(a1 + 1360),
               *(_QWORD *)(a1 + 1376),
               *(_DWORD *)(a1 + 1352),
               0x80000000,
               a1 + 1320) < 0) )
  {
    return 0LL;
  }
  if ( *(_BYTE *)(a2 + 144) == 4 )
  {
    v10 = *(_QWORD *)(a1 + 1328);
    v11 = v10 | 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 1384) = v10 & 0xFFFFFFFF00000000uLL;
    v12 = *(_QWORD *)(a1 + 1368) == 0LL;
    *(_QWORD *)(a1 + 1392) = v10 | 0xFFFFFFFFLL;
    if ( v12 )
      v10 &= 0xFFFFFFFF00000000uLL;
    *(_QWORD *)(a1 + 1360) = v11;
    *(_QWORD *)(a1 + 1368) = v10;
  }
  return *(_QWORD *)(a1 + 1320);
}
