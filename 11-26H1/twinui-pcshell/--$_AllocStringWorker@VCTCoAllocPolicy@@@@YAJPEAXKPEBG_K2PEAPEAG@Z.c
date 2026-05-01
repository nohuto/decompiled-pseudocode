/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800AAF34
 * Callers:
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x1800AA594 (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x1800AAD30 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        unsigned __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v9; // ebx
  _WORD *v11; // rax
  _WORD *v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  signed __int64 v15; // r14
  __int64 v16; // r8
  _WORD *v17; // r9
  __int16 v18; // ax
  _WORD *v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rdi

  v6 = a4 + 1;
  v7 = a4;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && is_mul_ok(v6, 2uLL) )
  {
    v11 = CoTaskMemAlloc(2 * v6);
    *a6 = v11;
    v12 = v11;
    if ( v11 )
    {
      if ( v6 > 0x7FFFFFFF )
      {
        *v11 = 0;
        return 0;
      }
      else if ( v7 >= 0x7FFFFFFF )
      {
        v9 = 0;
        if ( v6 )
          *v11 = 0;
      }
      else
      {
        if ( !a3 )
        {
          a3 = &pvData;
          v7 = 0LL;
        }
        v9 = 0;
        if ( v6 )
        {
          v13 = v7 - v6;
          v14 = v6;
          v15 = (char *)a3 - (char *)v11;
          v16 = 0LL;
          v17 = v11;
          do
          {
            if ( !(v13 + v14) )
              break;
            v18 = *(_WORD *)((char *)v12 + v15);
            if ( !v18 )
              break;
            *v12 = v18;
            ++v16;
            ++v12;
            --v14;
          }
          while ( v14 );
          v19 = v12 - 1;
          if ( v14 )
            v19 = v12;
          *v19 = 0;
          v20 = v16 - 1;
          if ( v14 )
            v20 = v16;
          v21 = v6 - v20;
          if ( v14 && v21 > 1 && 2 * v21 > 2 )
            memset_0(&v17[v20 + 1], 0, 2 * v21 - 2);
        }
      }
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v9;
}
