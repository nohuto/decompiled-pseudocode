/*
 * XREFs of ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1401BB0C4
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x14012BF48 (_ChangeWindowMessageFilterEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMessageAllowedByFilterEx(void *const *a1, unsigned __int16 a2, void ***a3, void ***a4)
{
  void **v6; // r9
  unsigned int v7; // r8d
  void **v9; // r11

  if ( a1
    && (v6 = (void **)a1[(unsigned __int64)a2 >> 13]) != 0LL
    && (v9 = (void **)v6[((unsigned __int64)a2 >> 9) & 0xF]) != 0LL
    && (v7 = 1, ((unsigned __int8)(1 << (a2 & 7)) & *((_BYTE *)v9 + (((unsigned __int64)a2 >> 3) & 0x3F))) != 0) )
  {
    if ( a3 )
      *a3 = v6;
    if ( a4 )
      *a4 = v9;
  }
  else
  {
    return 0;
  }
  return v7;
}
