/*
 * XREFs of EtwpMapEnableFlags @ 0x140ABB070
 * Callers:
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpMapEnableFlags(__int64 a1, char a2)
{
  int *v3; // r9
  __int64 v5; // r10
  unsigned int v6; // edx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rcx

  v3 = EtwpEnableFlagMap;
  v5 = 8LL;
  do
  {
    if ( a2 )
    {
      v6 = *v3;
      if ( a1 )
      {
        result = (unsigned __int64)v6 >> 29;
        if ( (v6 & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
        {
          v8 = (unsigned int)v3[1];
LABEL_11:
          result = v8 >> 29;
          *(_DWORD *)(a1 + 4 * (v8 >> 29)) |= v8 & 0x1FFFFFFF;
        }
      }
    }
    else if ( a1 )
    {
      result = (unsigned __int64)(unsigned int)v3[1] >> 29;
      if ( (v3[1] & *(_DWORD *)(a1 + 4 * result) & 0x1FFFFFFF) != 0 )
      {
        v8 = (unsigned int)*v3;
        goto LABEL_11;
      }
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  return result;
}
