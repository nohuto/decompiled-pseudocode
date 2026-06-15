/*
 * XREFs of sub_14001D0C8 @ 0x14001D0C8
 * Callers:
 *     sub_14001DCF4 @ 0x14001DCF4 (sub_14001DCF4.c)
 * Callees:
 *     sub_14001D640 @ 0x14001D640 (sub_14001D640.c)
 *     sub_1400487B4 @ 0x1400487B4 (sub_1400487B4.c)
 */

char __fastcall sub_14001D0C8(__int64 a1, _WORD *a2)
{
  char v2; // di
  _WORD *v4; // rax
  _WORD *v6; // rcx
  _WORD *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx

  v2 = 0;
  v4 = a2;
  if ( !*a2 )
    return 0;
  do
    v6 = v4++;
  while ( *v4 );
  if ( v4 <= a2 )
    return 0;
  while ( v6 != a2 && *v6 == 32 )
    --v6;
  if ( v6 <= a2 )
    return 0;
  do
  {
    if ( *v6 == 32 )
      break;
    --v6;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  v7 = v6 + 1;
  do
  {
    if ( *v6 != 32 )
      break;
    *v6-- = 0;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  do
  {
    if ( *v6 == 32 )
      break;
    --v6;
  }
  while ( v6 != a2 );
  if ( v6 <= a2 )
    return 0;
  v8 = o__wcstoui64(v6 + 1, 0LL, 16LL);
  sub_14001D640(a1 + 152, v8);
  v9 = o__wcstoui64(v7, 0LL, 16LL);
  sub_14001D640(a1 + 120, v9);
  if ( (unsigned __int8)sub_1400487B4(v10, *(_QWORD *)(a1 + 152)) )
  {
    if ( (unsigned __int8)sub_1400487B4(v11, *(_QWORD *)(a1 + 120)) )
      return 1;
  }
  return v2;
}
