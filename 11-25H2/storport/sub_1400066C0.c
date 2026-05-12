/*
 * XREFs of sub_1400066C0 @ 0x1400066C0
 * Callers:
 *     sub_140005A20 @ 0x140005A20 (sub_140005A20.c)
 *     sub_1400081BC @ 0x1400081BC (sub_1400081BC.c)
 *     sub_1400088AC @ 0x1400088AC (sub_1400088AC.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_140009D88 @ 0x140009D88 (sub_140009D88.c)
 *     sub_14001046C @ 0x14001046C (sub_14001046C.c)
 *     sub_140019650 @ 0x140019650 (sub_140019650.c)
 *     sub_140021A00 @ 0x140021A00 (sub_140021A00.c)
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 *     sub_140033A28 @ 0x140033A28 (sub_140033A28.c)
 *     sub_140034B00 @ 0x140034B00 (sub_140034B00.c)
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 *     sub_14004E598 @ 0x14004E598 (sub_14004E598.c)
 *     sub_140058E38 @ 0x140058E38 (sub_140058E38.c)
 *     sub_140059080 @ 0x140059080 (sub_140059080.c)
 *     sub_140099564 @ 0x140099564 (sub_140099564.c)
 *     sub_14009DD50 @ 0x14009DD50 (sub_14009DD50.c)
 *     sub_1400A16D0 @ 0x1400A16D0 (sub_1400A16D0.c)
 *     sub_1400A9E40 @ 0x1400A9E40 (sub_1400A9E40.c)
 *     sub_14017F720 @ 0x14017F720 (sub_14017F720.c)
 *     sub_1401AEE2C @ 0x1401AEE2C (sub_1401AEE2C.c)
 * Callees:
 *     sub_140069280 @ 0x140069280 (sub_140069280.c)
 */

__int64 __fastcall sub_1400066C0(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r11
  unsigned __int64 v4; // r9
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // ebx
  int v12; // eax
  __int64 v13; // rax

  v3 = a1;
  v4 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v5 = *(_DWORD *)(v4 + *(_QWORD *)(a1 + 40));
  while ( (v5 & 1) == 0 )
  {
    a1 = *(_QWORD *)(v3 + 40);
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + a1), v5 + 2, v5);
    if ( v6 == v5 )
      goto LABEL_4;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 1032));
LABEL_4:
  v7 = *(_DWORD *)(v3 + 56);
  if ( !a3 )
  {
    v12 = v7 - 5;
    if ( v12 && (unsigned int)(v12 - 1) >= 2 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    goto LABEL_15;
  }
  v8 = v7 - 5;
  if ( !v8 )
  {
    if ( a2 )
    {
      v13 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v13 == 27 )
      {
        v10 = 0;
        goto LABEL_9;
      }
      if ( *(_BYTE *)v13 == 14 && *(_DWORD *)(v13 + 24) == 266276 )
      {
        v10 = 0;
        goto LABEL_9;
      }
    }
    goto LABEL_15;
  }
  v9 = v8 - 1;
  if ( !v9 )
  {
LABEL_15:
    v10 = -1073741738;
    goto LABEL_9;
  }
  if ( v9 == 1 )
    v10 = sub_140069280(a1, a2);
  else
    v10 = 0;
LABEL_9:
  if ( v10 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 520), 0, 0);
  return (unsigned int)v10;
}
