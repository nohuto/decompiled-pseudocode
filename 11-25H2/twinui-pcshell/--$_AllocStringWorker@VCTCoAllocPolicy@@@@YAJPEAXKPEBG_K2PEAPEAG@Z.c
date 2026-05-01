/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180040F10
 * Callers:
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x180040D24 (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 *     ?_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z @ 0x18009B7DC (-_CheckLinkHash@CLauncherTipContextMenu@@AEAAJAEBVCPropertyStoreHelper@@PEAK@Z.c)
 * Callees:
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
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
  unsigned int v9; // ebx
  _WORD *v11; // rax
  _WORD *v12; // rcx
  const WCHAR *v13; // r9
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // r10
  signed __int64 v17; // r9
  unsigned __int64 v18; // r8
  _WORD *v19; // r11
  __int16 v20; // ax
  _WORD *v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r8

  v6 = a4 + 1;
  *a6 = 0LL;
  if ( a4 + 1 >= a4 && (*a6 = 0LL, is_mul_ok(v6, 2uLL)) )
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
      else if ( a4 >= 0x7FFFFFFF )
      {
        v9 = 0;
        if ( v6 )
          *v11 = 0;
      }
      else
      {
        v13 = &LocaleName;
        if ( a3 )
          v13 = a3;
        v14 = a4 & -(__int64)(a3 != 0LL);
        v9 = 0;
        if ( v6 )
        {
          v15 = v14 - v6;
          v16 = 0LL;
          v17 = (char *)v13 - (char *)v11;
          v18 = v6;
          v19 = v11;
          do
          {
            if ( !(v15 + v6) )
              break;
            v20 = *(_WORD *)((char *)v12 + v17);
            if ( !v20 )
              break;
            *v12 = v20;
            ++v16;
            ++v12;
            --v6;
          }
          while ( v6 );
          v21 = v12 - 1;
          if ( v6 )
            v21 = v12;
          *v21 = 0;
          v22 = v16 - 1;
          if ( v6 )
            v22 = v16;
          v23 = v18 - v22;
          if ( v6 )
          {
            if ( v23 > 1 )
            {
              v24 = 2 * v23;
              if ( v24 > 2 )
                memset_0(&v19[v22 + 1], 0, v24 - 2);
            }
          }
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
