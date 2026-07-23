/*
 * XREFs of SdbpCheckAttribute @ 0x14088D628
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140B47B94 (SdbpCheckAllAttributes.c)
 * Callees:
 *     SdbpCheckFromStringVersion @ 0x14088D874 (SdbpCheckFromStringVersion.c)
 *     SdbpCheckFromVersion @ 0x14088D99C (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoStringVersion @ 0x14088D9E4 (SdbpCheckUptoStringVersion.c)
 *     SdbpCheckUptoVersion @ 0x14088DB0C (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x14088DB54 (SdbpCheckVersion.c)
 *     AslLogCallPrintf @ 0x1409D5294 (AslLogCallPrintf.c)
 *     AslStringPatternMatchExW @ 0x1409D59C0 (AslStringPatternMatchExW.c)
 */

__int64 __fastcall SdbpCheckAttribute(_DWORD *a1, unsigned __int16 a2, _QWORD *a3, unsigned int a4, __int64 a5)
{
  int v5; // ebx
  int v7; // r8d
  int v8; // eax
  __int64 result; // rax
  int v10; // r10d
  bool v11; // zf

  v5 = 0;
  *a1 = 0;
  if ( a2 > 0x5012u )
  {
    if ( a2 != 20499 )
    {
      if ( a2 == 24644 || a2 == 24645 )
      {
        if ( a4 < 2 )
        {
          v7 = 272;
          goto LABEL_14;
        }
        v8 = SdbpCheckUptoStringVersion(a3, *(_QWORD *)(a5 + 16));
      }
      else
      {
        if ( (unsigned int)a2 - 24646 >= 2 )
          goto LABEL_26;
        if ( a4 < 2 )
        {
          v7 = 287;
          goto LABEL_14;
        }
        v8 = SdbpCheckFromStringVersion(a3, *(_QWORD *)(a5 + 16));
      }
LABEL_48:
      v5 = v8;
      goto LABEL_49;
    }
LABEL_45:
    if ( a4 < 8 )
    {
      v7 = 244;
      goto LABEL_14;
    }
    v8 = SdbpCheckFromVersion(*a3, *(_QWORD *)(a5 + 16));
    goto LABEL_48;
  }
  switch ( a2 )
  {
    case 0x5012u:
      goto LABEL_45;
    case 0x401Eu:
      if ( a4 < 4 )
      {
        v7 = 314;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 >= *(_DWORD *)(a5 + 16);
      goto LABEL_49;
    case 0x4033u:
      if ( a4 < 4 )
      {
        v7 = 301;
        goto LABEL_14;
      }
      LOBYTE(v5) = *(_DWORD *)a3 <= *(_DWORD *)(a5 + 16);
      goto LABEL_49;
    case 0x5002u:
    case 0x5003u:
      if ( a4 < 8 )
      {
        v7 = 230;
        goto LABEL_14;
      }
      v8 = SdbpCheckVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_48;
    case 0x5006u:
    case 0x500Du:
      if ( a4 < 8 )
      {
        v7 = 258;
LABEL_14:
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckAttribute", v7, (unsigned int)"Attribute size doesn't match");
        return 0LL;
      }
      v8 = SdbpCheckUptoVersion(*a3, *(_QWORD *)(a5 + 16));
      goto LABEL_48;
  }
LABEL_26:
  v10 = a2 & 0xF000;
  switch ( v10 )
  {
    case 16384:
      if ( a4 < 4 )
      {
        v7 = 330;
        goto LABEL_14;
      }
      v11 = *(_DWORD *)a3 == *(_DWORD *)(a5 + 16);
LABEL_38:
      LOBYTE(v5) = v11;
      break;
    case 20480:
      if ( a4 < 8 )
      {
        v7 = 360;
        goto LABEL_14;
      }
      v11 = *a3 == *(_QWORD *)(a5 + 16);
      goto LABEL_38;
    case 24576:
      if ( a4 < 2 )
      {
        v7 = 346;
        goto LABEL_14;
      }
      v8 = AslStringPatternMatchExW(a3, *(_QWORD *)(a5 + 16));
      goto LABEL_48;
  }
LABEL_49:
  result = 1LL;
  *a1 = v5;
  return result;
}
