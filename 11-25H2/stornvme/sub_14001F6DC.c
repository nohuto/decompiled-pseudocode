/*
 * XREFs of sub_14001F6DC @ 0x14001F6DC
 * Callers:
 *     sub_14001ED94 @ 0x14001ED94 (sub_14001ED94.c)
 *     sub_140028860 @ 0x140028860 (sub_140028860.c)
 * Callees:
 *     <none>
 */

__int64 sub_14001F6DC(__int64 a1, unsigned int a2, __int64 a3, ...)
{
  __int64 v3; // r9
  unsigned int v6; // esi
  __int64 v8; // [rsp+F8h] [rbp+20h] BYREF
  va_list va; // [rsp+F8h] [rbp+20h]
  va_list va1; // [rsp+100h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v8 = va_arg(va1, _QWORD);
  v3 = v8;
  LOBYTE(v8) = 0;
  if ( (unsigned int)StorPortExtendedFunction(109LL, a1, (__int64 *)va, v3) || (_BYTE)v8 )
  {
    v6 = -1056964600;
  }
  else
  {
    v6 = StorPortExtendedFunction(114LL, a1, a2, 0LL);
    if ( !v6 )
    {
      if ( a2 )
      {
        if ( a2 == 2 )
        {
          ++*(_DWORD *)(a1 + 4160);
        }
        else if ( a2 == 1 )
        {
          ++*(_DWORD *)(a1 + 4168);
        }
      }
      else
      {
        ++*(_DWORD *)(a1 + 4152);
      }
      return v6;
    }
  }
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      ++*(_DWORD *)(a1 + 4164);
      *(_DWORD *)(a1 + 28) = 28;
    }
    else if ( a2 == 1 )
    {
      ++*(_DWORD *)(a1 + 4172);
      *(_DWORD *)(a1 + 28) = 29;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 4156);
    *(_DWORD *)(a1 + 28) = 25;
  }
  if ( (*(_BYTE *)(a1 + 21) & 2) != 0 )
    StorPortExtendedFunction(87LL, a1, 0LL, 1LL);
  return v6;
}
