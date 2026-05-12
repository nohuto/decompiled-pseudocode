/*
 * XREFs of sub_140015A14 @ 0x140015A14
 * Callers:
 *     sub_140016234 @ 0x140016234 (sub_140016234.c)
 *     sub_14001C790 @ 0x14001C790 (sub_14001C790.c)
 *     sub_14001E870 @ 0x14001E870 (sub_14001E870.c)
 *     sub_14004E0E8 @ 0x14004E0E8 (sub_14004E0E8.c)
 *     sub_140052634 @ 0x140052634 (sub_140052634.c)
 *     sub_1400605C0 @ 0x1400605C0 (sub_1400605C0.c)
 *     sub_140060AF4 @ 0x140060AF4 (sub_140060AF4.c)
 *     sub_140085014 @ 0x140085014 (sub_140085014.c)
 *     sub_140085320 @ 0x140085320 (sub_140085320.c)
 *     sub_14009641C @ 0x14009641C (sub_14009641C.c)
 *     sub_140098900 @ 0x140098900 (sub_140098900.c)
 *     sub_14009DD50 @ 0x14009DD50 (sub_14009DD50.c)
 *     sub_14009F87C @ 0x14009F87C (sub_14009F87C.c)
 *     sub_14009FFCC @ 0x14009FFCC (sub_14009FFCC.c)
 *     DoScreenSave_0 @ 0x1400A0338 (DoScreenSave_0.c)
 *     sub_1400A070C @ 0x1400A070C (sub_1400A070C.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_14017869C @ 0x14017869C (sub_14017869C.c)
 *     sub_140179544 @ 0x140179544 (sub_140179544.c)
 *     sub_140187D84 @ 0x140187D84 (sub_140187D84.c)
 *     sub_1401AB4D8 @ 0x1401AB4D8 (sub_1401AB4D8.c)
 *     sub_1401AC4FC @ 0x1401AC4FC (sub_1401AC4FC.c)
 *     sub_1401ADED0 @ 0x1401ADED0 (sub_1401ADED0.c)
 *     sub_1401AF864 @ 0x1401AF864 (sub_1401AF864.c)
 * Callees:
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 */

__int64 __fastcall sub_140015A14(__int64 a1, unsigned int a2, char a3, char a4)
{
  __int64 Pool2; // r14
  bool v8; // zf
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // rax
  int v12; // r8d

  Pool2 = 0LL;
  if ( a3 != 1 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1918067026LL);
    if ( Pool2 || !a1 )
      return Pool2;
    v12 = 88;
    goto LABEL_34;
  }
  if ( a2 > 0x17 )
  {
    if ( a2 == 32 )
      goto LABEL_12;
    if ( a2 != 37 )
    {
      if ( a2 != 38 && a2 != 39 && a2 != 42 )
      {
        v8 = a2 == 43;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
    goto LABEL_16;
  }
  if ( a2 == 23 )
  {
LABEL_16:
    v9 = 168;
    goto LABEL_17;
  }
  if ( a2 )
  {
    if ( a2 == 2 || a2 == 9 )
      goto LABEL_12;
    if ( a2 != 10 )
    {
      if ( a2 != 16 )
      {
        v8 = a2 == 19;
LABEL_11:
        if ( !v8 )
          return Pool2;
      }
LABEL_12:
      v9 = 144;
      v10 = 0;
      goto LABEL_13;
    }
    v9 = 256;
LABEL_17:
    v10 = 1;
LABEL_13:
    v11 = ExAllocatePool2(64LL, v9, 1918067026LL);
    Pool2 = v11;
    if ( v11 )
    {
      *(_BYTE *)(v11 + 2) = 40;
      *(_WORD *)v11 = 8;
      *(_DWORD *)(v11 + 8) = 1397899864;
      *(_DWORD *)(v11 + 12) = 1;
      *(_DWORD *)(v11 + 16) = v9;
      *(_DWORD *)(v11 + 20) = a2;
      *(_WORD *)(v11 + 36) = 2;
      *(_DWORD *)(v11 + 52) = 128;
      *(_DWORD *)(v11 + 56) = v10;
      *(_WORD *)(v11 + 128) = 1;
      *(_DWORD *)(v11 + 132) = 4;
      if ( v10 )
        *(_DWORD *)(v11 + 120) = 144;
      return Pool2;
    }
    if ( a1 )
    {
      v12 = v9;
LABEL_34:
      sub_14008D9B8(a1, 64, v12, 1918067026, 0x80000000);
    }
    return Pool2;
  }
  if ( (a4 & 1) != 0 )
  {
    v9 = 184;
    goto LABEL_17;
  }
  return 0LL;
}
