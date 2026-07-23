/*
 * XREFs of WmipHexStringToDword @ 0x140A0F190
 * Callers:
 *     WmipUuidFromString @ 0x140A0ED88 (WmipUuidFromString.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmipHexStringToDword(_WORD *a1, _DWORD *a2, unsigned int a3, unsigned __int16 a4)
{
  int v5; // r10d
  unsigned int i; // r11d
  int v7; // r8d
  int v8; // r10d

  v5 = 0;
  for ( i = 0; i < a3; ++i )
  {
    v7 = (unsigned __int16)*a1;
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 65) <= 5u )
      {
        v8 = 16 * v5 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          return 0;
        v8 = 16 * v5 - 87;
      }
    }
    else
    {
      v8 = 16 * v5 - 48;
    }
    v5 = v7 + v8;
    ++a1;
  }
  *a2 = v5;
  return !a4 || *a1 == a4;
}
