/*
 * XREFs of ?ClampValue@CAcrylicSheet@@AEAAJJJJ@Z @ 0x180036430
 * Callers:
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x1800361CC (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAcrylicSheet::ClampValue(CAcrylicSheet *this, signed int a2, signed int a3, int a4)
{
  unsigned int v4; // eax

  v4 = a2;
  if ( a3 >= a2 )
  {
    v4 = a3;
    a3 = a2;
  }
  if ( a4 > a3 )
  {
    a3 = a4;
    if ( a4 >= (int)v4 )
      return v4;
  }
  return (unsigned int)a3;
}
