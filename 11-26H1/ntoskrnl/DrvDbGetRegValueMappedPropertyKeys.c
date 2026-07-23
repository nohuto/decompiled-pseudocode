/*
 * XREFs of DrvDbGetRegValueMappedPropertyKeys @ 0x1408A4C00
 * Callers:
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x1408A43CC (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x1408A45F4 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x1408A4714 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 * Callees:
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _DWORD *a7)
{
  _DWORD *v7; // rdi
  __int64 result; // rax
  __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 i; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // [rsp+78h] [rbp+20h] BYREF

  v7 = a7;
  result = 0LL;
  v9 = a5;
  v10 = 0LL;
  for ( i = 0LL; (unsigned int)i < a4; i = (unsigned int)(i + 1) )
  {
    v17 = 0;
    result = PnpCtxRegQueryValue(a1, a2, *(_QWORD *)(a3 + 40 * i + 16), 0LL, 0LL, &v17);
    if ( (_DWORD)result != -1073741772 )
    {
      if ( (_DWORD)result && (_DWORD)result != -1073741789 )
        return result;
      if ( v9 )
      {
        if ( (unsigned int)v10 < a6 )
        {
          v15 = *(_QWORD *)(a3 + 40 * i);
          v16 = 5 * v10;
          v10 = (unsigned int)(v10 + 1);
          *(_OWORD *)(v9 + 4 * v16) = *(_OWORD *)v15;
          *(_DWORD *)(v9 + 4 * v16 + 16) = *(_DWORD *)(v15 + 16);
        }
      }
      a1 = (unsigned int)(*v7 + 1);
      if ( (unsigned int)a1 < *v7 )
      {
        result = 3221225621LL;
        *v7 = 0;
        return result;
      }
      *v7 = a1;
    }
    result = 0LL;
  }
  return result;
}
