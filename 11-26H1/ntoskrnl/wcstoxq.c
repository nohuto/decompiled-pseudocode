/*
 * XREFs of wcstoxq @ 0x14053B040
 * Callers:
 *     _wcstoi64 @ 0x14053B008 (_wcstoi64.c)
 *     RtlUnicodeStringToInt64 @ 0x14080A570 (RtlUnicodeStringToInt64.c)
 *     LocalpConvertStringSidToSid @ 0x140A6D254 (LocalpConvertStringSidToSid.c)
 *     GetOperandValue @ 0x140A70FD0 (GetOperandValue.c)
 *     LocalGetRelativeAttributeForString @ 0x140B56E2C (LocalGetRelativeAttributeForString.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _iswctype_l @ 0x14053B328 (_iswctype_l.c)
 *     _wchartodigit @ 0x14053CD2C (_wchartodigit.c)
 */

unsigned __int64 __fastcall wcstoxq(__int64 a1, wint_t *a2, wint_t **a3, unsigned int a4, int a5, _DWORD *a6)
{
  unsigned int v6; // r14d
  wint_t v9; // bp
  wint_t *v10; // rbx
  unsigned __int64 v11; // rsi
  wint_t i; // cx
  int v13; // edi
  unsigned __int64 v14; // r12
  unsigned int v15; // ecx
  int v16; // ecx
  __int64 v17; // r8
  wint_t *v18; // rbx
  unsigned __int64 result; // rax

  v6 = a4;
  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && a4 - 2 > 0x22 )
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
  v9 = *a2;
  v10 = a2 + 1;
  v11 = 0LL;
  for ( i = *a2; iswctype_l(i, 8u, 0LL); v9 = i )
  {
    do
      i = *v10++;
    while ( i == v9 );
  }
  v13 = a5;
  if ( v9 == 45 )
  {
    v13 = a5 | 2;
  }
  else if ( v9 != 43 )
  {
    goto LABEL_14;
  }
  v9 = *v10++;
LABEL_14:
  if ( v6 )
  {
    if ( v6 - 2 > 0x22 )
    {
      if ( a3 )
        *a3 = a2;
      return 0LL;
    }
    if ( v6 != 16 )
      goto LABEL_30;
    goto LABEL_26;
  }
  if ( (unsigned int)wchartodigit(v9) )
  {
    v6 = 10;
  }
  else
  {
    if ( *v10 == 120 || *v10 == 88 )
    {
      v6 = 16;
LABEL_26:
      if ( !(unsigned int)wchartodigit(v9) && (*v10 == 120 || *v10 == 88) )
      {
        v9 = v10[1];
        v10 += 2;
      }
      goto LABEL_30;
    }
    v6 = 8;
  }
LABEL_30:
  v14 = 0xFFFFFFFFFFFFFFFFuLL / v6;
  while ( 1 )
  {
    v15 = wchartodigit(v9);
    if ( v15 != -1 )
      goto LABEL_37;
    if ( (unsigned __int16)(v9 - 65) > 0x19u && (unsigned __int16)(v9 - 97) > 0x19u )
      break;
    v16 = v9 - 32;
    if ( (unsigned __int16)(v9 - 97) > 0x19u )
      v16 = v9;
    v15 = v16 - 55;
LABEL_37:
    if ( v15 >= v6 )
      break;
    v13 |= 8u;
    if ( v11 < v14 )
    {
      v17 = v15;
LABEL_47:
      v11 = v17 + v6 * v11;
      goto LABEL_48;
    }
    if ( v11 == v14 )
    {
      v17 = v15;
      if ( v15 <= 0xFFFFFFFFFFFFFFFFuLL % v6 )
        goto LABEL_47;
    }
    v13 |= 4u;
    if ( !a3 )
      break;
LABEL_48:
    v9 = *v10++;
  }
  v18 = v10 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_60;
      if ( (v13 & 2) != 0 )
      {
        if ( v11 <= 0x8000000000000000uLL )
          goto LABEL_60;
      }
      else if ( v11 <= 0x7FFFFFFFFFFFFFFFLL )
      {
        goto LABEL_60;
      }
    }
    if ( a6 )
      *a6 = 34;
    if ( (v13 & 1) != 0 )
      v11 = -1LL;
    else
      v11 = ((v13 & 2) != 0) + 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( a3 )
      v18 = a2;
    v11 = 0LL;
  }
LABEL_60:
  if ( a3 )
    *a3 = v18;
  result = -(__int64)v11;
  if ( (v13 & 2) == 0 )
    return v11;
  return result;
}
