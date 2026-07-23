/*
 * XREFs of PopBootLoaderSiData @ 0x140BFFC0C
 * Callers:
 *     PoBroadcastSystemState @ 0x140C0BF20 (PoBroadcastSystemState.c)
 * Callees:
 *     BapdRemoveWbclData @ 0x140C052E8 (BapdRemoveWbclData.c)
 *     BapdRegisterSiData @ 0x140C0E064 (BapdRegisterSiData.c)
 */

__int64 __fastcall PopBootLoaderSiData(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int *v4; // rdi
  __int64 v5; // rdx

  v1 = *(_DWORD **)(a1 + 32);
  result = BapdRemoveWbclData();
  if ( *v1 == 1281517896 )
  {
    v3 = 1;
    v4 = v1 + 4;
    do
    {
      v5 = v4[1];
      if ( (_DWORD)v5 )
        result = BapdRegisterSiData((char *)v1 + *v4, v5, v3);
      ++v3;
      v4 += 2;
    }
    while ( v3 <= 2 );
  }
  return result;
}
