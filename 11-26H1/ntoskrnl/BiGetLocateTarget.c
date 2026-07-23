/*
 * XREFs of BiGetLocateTarget @ 0x1408992A8
 * Callers:
 *     BiResolveLocateDevice @ 0x140897718 (BiResolveLocateDevice.c)
 *     BiResolveLocate @ 0x14089933C (BiResolveLocate.c)
 * Callees:
 *     BiGetElement @ 0x1409A5A7C (BiGetElement.c)
 */

__int64 __fastcall BiGetLocateTarget(void *a1, __int64 a2, _QWORD *a3, char *a4)
{
  int v5; // r8d
  ULONG v7; // edx
  __int64 result; // rax
  char v9; // al

  v5 = *(_DWORD *)(a2 + 20);
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      *a3 = a2 + 32;
      v9 = 0;
LABEL_8:
      *a4 = v9;
      return 0LL;
    }
  }
  else if ( a1 )
  {
    v7 = *(_DWORD *)(a2 + 28);
    if ( (v7 & 0xF000000) == 0x2000000 )
    {
      result = BiGetElement(a1, v7);
      if ( (int)result < 0 )
        return result;
      *a3 = 0LL;
      v9 = 1;
      goto LABEL_8;
    }
  }
  return 3221225659LL;
}
