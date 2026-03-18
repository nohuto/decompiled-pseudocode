/*
 * XREFs of BiGetLocateTarget @ 0x140892EA8
 * Callers:
 *     BiResolveLocateDevice @ 0x14089131C (BiResolveLocateDevice.c)
 *     BiResolveLocate @ 0x140892F3C (BiResolveLocate.c)
 * Callees:
 *     BiGetElement @ 0x1409D4A9C (BiGetElement.c)
 */

__int64 __fastcall BiGetLocateTarget(__int64 a1, __int64 a2, _QWORD *a3, char *a4)
{
  int v5; // r8d
  __int64 v7; // rdx
  __int64 result; // rax
  char v9; // al
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v10[0] = 0LL;
  v5 = *(_DWORD *)(a2 + 20);
  v11 = 0;
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
    v7 = *(unsigned int *)(a2 + 28);
    if ( (v7 & 0xF000000) == 0x2000000 )
    {
      result = BiGetElement(a1, v7, v10, &v11);
      if ( (int)result < 0 )
        return result;
      *a3 = v10[0];
      v9 = 1;
      goto LABEL_8;
    }
  }
  return 3221225659LL;
}
