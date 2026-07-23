/*
 * XREFs of HalacpiIrqTranslateResourcesIsa @ 0x1407890A0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x140430260 (HalpIsInterruptTypeSecondary.c)
 *     TranslateGlobalVectorToIsaVector @ 0x140789254 (TranslateGlobalVectorToIsaVector.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourcesIsa(
        __int64 a1,
        __int128 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rbx
  __int64 v10; // r14
  char v11; // bp
  unsigned int v14; // edx
  __int64 result; // rax
  __int16 v16; // r10
  unsigned int i; // ecx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v7 = *a2;
  v8 = a7;
  v10 = a5;
  v11 = 0;
  v20 = 0;
  *a7 = v7;
  *((_DWORD *)v8 + 4) = *((_DWORD *)a2 + 4);
  v14 = *((_DWORD *)a2 + 2);
  if ( v14 + 0x100000 <= 0xFFFFE || HalpIsInterruptTypeSecondary(0, v14) )
    return 0LL;
  if ( !a3 )
  {
    *((_WORD *)v8 + 2) = *((_WORD *)HalpPicVectorRedirect + 2 * *((unsigned __int16 *)a2 + 2));
    *((_DWORD *)v8 + 2) = *((_DWORD *)HalpPicVectorRedirect + *((unsigned int *)a2 + 2));
    return 0LL;
  }
  if ( a3 != 1 )
    return 0LL;
  result = TranslateGlobalVectorToIsaVector(*((unsigned __int16 *)a2 + 2), &v20);
  if ( (int)result >= 0 )
  {
    *((_WORD *)v8 + 2) = v20;
    result = TranslateGlobalVectorToIsaVector(*((unsigned int *)a2 + 2), &v20);
    if ( (int)result >= 0 )
    {
      *((_DWORD *)v8 + 2) = v20;
      if ( v16 == 9 )
      {
        for ( i = 0; i < a4; i += a3 )
        {
          v18 = 32LL * i;
          v19 = *(_DWORD *)(v18 + v10 + 8);
          if ( v19 < 9 )
          {
            if ( v19 >= 2 && *(_DWORD *)(v18 + v10 + 12) <= 2u )
              v11 = a3;
          }
          else if ( *(_DWORD *)(v18 + v10 + 12) <= 9u )
          {
            return 0LL;
          }
        }
        if ( v11 )
        {
          *((_WORD *)v8 + 2) = 2;
          *((_DWORD *)v8 + 2) = 2;
        }
      }
      return 0LL;
    }
  }
  return result;
}
