/*
 * XREFs of ?StCompactionFindEmptiest@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAPEAT_ST_REGION_STATE@1@KKK@Z @ 0x14042F020
 * Callers:
 *     ?StCompactionPerformInMem@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z @ 0x140393B98 (-StCompactionPerformInMem@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KK@Z.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCompactionFindEmptiest(__int64 a1, char *a2, int a3, unsigned int a4, int a5)
{
  unsigned int v5; // esi
  char *v6; // r13
  unsigned __int64 v8; // rcx
  unsigned int v11; // edi
  _WORD *v12; // r14
  int v14; // eax
  unsigned int v15; // ecx
  char *i; // r15
  unsigned int v17; // ecx
  int v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v5 = 0;
  v6 = a2 + 256;
  v8 = 32LL;
  if ( a2 >= a2 + 256 )
    v8 = 0LL;
  LOWORD(v18) = 0x1FFF;
  if ( v8 )
    memset64(a2, (unsigned __int64)&v18, v8);
  v11 = 0;
  if ( *(_DWORD *)(a1 + 788) )
  {
    do
    {
      v12 = (_WORD *)(*(_QWORD *)(a1 + 1368) + 2LL * v11);
      if ( (*v12 & 0x1FFF) != 0 && (*v12 & 0x1FFFu) <= a4 )
      {
        v14 = a5;
        v15 = (unsigned __int16)*v12 >> 13;
        if ( _bittest(&v14, v15) )
        {
          if ( v11 != *(_DWORD *)(a1 + 16 * (v15 + 89LL)) )
          {
            for ( i = a2; i < v6; i += 8 )
            {
              if ( (unsigned __int16)(*v12 & 0x1FFF) < (unsigned __int16)(**(_WORD **)i & 0x1FFF) )
              {
                memmove(i + 8, i, v6 - i - 8);
                *(_QWORD *)i = v12;
                v17 = v5 + 1;
                if ( v5 >= 0x20 )
                  v17 = v5;
                v5 = v17;
                if ( v17 >= 0x20 )
                  a4 = (**((_WORD **)v6 - 1) & 0x1FFF) - 1;
                break;
              }
            }
          }
        }
      }
      ++v11;
    }
    while ( v11 != *(_DWORD *)(a1 + 788) );
  }
  return v5;
}
