/*
 * XREFs of DrvDbGetDriverDatabaseCompositeMappedPropertyKeys @ 0x1408A42B4
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1408A43CC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 * Callees:
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 */

__int64 __fastcall DrvDbGetDriverDatabaseCompositeMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8)
{
  unsigned int *v8; // rdi
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v16; // rcx
  __int64 *v17; // rdx
  unsigned int v18; // ecx
  int v19; // [rsp+88h] [rbp+20h] BYREF
  int v20; // [rsp+8Ch] [rbp+24h]

  v20 = HIDWORD(a4);
  v8 = a8;
  result = 0LL;
  v10 = a6;
  v11 = 0LL;
  v19 = 0;
  v12 = 0LL;
  a5 = 0;
  while ( (unsigned int)v12 < 8 )
  {
    result = DrvDbGetDriverDatabaseMappedProperty(a1, a2, a3, off_140E0A4D0[v12], &v19, 0LL, 0, &a5);
    if ( (_DWORD)result != -1073741772 )
    {
      if ( (_DWORD)result && (_DWORD)result != -1073741789 )
        return result;
      if ( v10 )
      {
        if ( (unsigned int)v11 < a7 )
        {
          v16 = 5 * v11;
          v11 = (unsigned int)(v11 + 1);
          v17 = off_140E0A4D0[v12];
          *(_OWORD *)(v10 + 4 * v16) = *(_OWORD *)v17;
          *(_DWORD *)(v10 + 4 * v16 + 16) = *((_DWORD *)v17 + 4);
        }
      }
      v18 = *v8 + 1;
      if ( v18 < *v8 )
      {
        result = 3221225621LL;
        *v8 = 0;
        return result;
      }
      *v8 = v18;
    }
    result = 0LL;
    v12 = (unsigned int)(v12 + 1);
  }
  return result;
}
