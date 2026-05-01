/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800088C0
 * Callers:
 *     HamPopulateActivityPropertiesByClass @ 0x180009530 (HamPopulateActivityPropertiesByClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchLengthW(const unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rax
  int v4; // r9d

  if ( !a1 )
  {
    v4 = -2147024809;
LABEL_15:
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v4;
  }
  v3 = a2;
  v4 = 0;
  while ( *a1 )
  {
    ++a1;
    if ( !--v3 )
      goto LABEL_7;
  }
  if ( v3 )
    goto LABEL_8;
LABEL_7:
  v4 = -2147024809;
LABEL_8:
  if ( a3 )
  {
    if ( v4 < 0 )
      *a3 = 0LL;
    else
      *a3 = a2 - v3;
  }
  if ( v4 < 0 )
    goto LABEL_15;
  return (unsigned int)v4;
}
