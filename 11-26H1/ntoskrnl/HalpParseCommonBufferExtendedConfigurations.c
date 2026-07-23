/*
 * XREFs of HalpParseCommonBufferExtendedConfigurations @ 0x14058B278
 * Callers:
 *     HalpCreateCommonBufferFromMdlVerifyParams @ 0x14058B17C (HalpCreateCommonBufferFromMdlVerifyParams.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpParseCommonBufferExtendedConfigurations(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 i; // r10
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  if ( a1 )
  {
    for ( i = 0LL; (unsigned int)i < a2; i = (unsigned int)(i + 1) )
    {
      v5 = *(_DWORD *)(a1 + 40 * i);
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
            return 3221225659LL;
          if ( *(_BYTE *)(a3 + 38) )
            return 3221225485LL;
          v7 = *(_DWORD *)(a1 + 40 * i + 8);
          if ( v7 >= 3 )
            return 3221225485LL;
          *(_DWORD *)(a3 + 32) = v7;
          *(_BYTE *)(a3 + 38) = 1;
        }
        else
        {
          if ( *(_BYTE *)(a3 + 37) )
            return 3221225485LL;
          v8 = *(unsigned int *)(a1 + 40 * i + 16);
          *(_QWORD *)(a3 + 16) = v8;
          if ( !v8 )
            return 3221225485LL;
          *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 40 * i + 8);
          *(_BYTE *)(a3 + 37) = 1;
        }
      }
      else
      {
        if ( *(_BYTE *)(a3 + 36) )
          return 3221225485LL;
        v9 = *(_QWORD *)(a1 + 40 * i + 8);
        *(_QWORD *)a3 = v9;
        v10 = *(_QWORD *)(a1 + 40 * i + 16);
        *(_QWORD *)(a3 + 8) = v10;
        if ( v9 >= v10 )
          return 3221225485LL;
        *(_BYTE *)(a3 + 36) = 1;
      }
    }
  }
  return 0LL;
}
