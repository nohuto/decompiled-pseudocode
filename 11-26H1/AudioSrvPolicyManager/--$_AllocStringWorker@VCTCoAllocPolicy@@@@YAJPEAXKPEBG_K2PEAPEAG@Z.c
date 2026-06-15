/*
 * XREFs of ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18000B504
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180009150 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18000B24C (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x180030A1C (memset_0.c)
 */

__int64 __fastcall _AllocStringWorker<CTCoAllocPolicy>(
        __int64 a1,
        __int64 a2,
        _BYTE *a3,
        unsigned __int64 a4,
        int a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  _WORD *v9; // rax
  _WORD *v10; // rcx
  unsigned int v11; // ebx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  __int64 v15; // r14
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
    v9 = CoTaskMemAlloc(2 * v6);
    *a6 = v9;
    v10 = v9;
    if ( v9 )
    {
      if ( v6 > 0x7FFFFFFF )
      {
        *v9 = 0;
        return 0;
      }
      else if ( v7 >= 0x7FFFFFFF )
      {
        v11 = 0;
        if ( v6 )
          *v9 = 0;
      }
      else
      {
        if ( !a3 )
        {
          a3 = byte_180056CEC;
          v7 = 0LL;
        }
        v11 = 0;
        if ( v6 )
        {
          v13 = v7 - v6;
          v14 = v6;
          v15 = a3 - (_BYTE *)v9;
          v16 = 0LL;
          v17 = v9;
          do
          {
            if ( !(v13 + v14) )
              break;
            v18 = *(_WORD *)((char *)v10 + v15);
            if ( !v18 )
              break;
            *v10 = v18;
            ++v16;
            ++v10;
            --v14;
          }
          while ( v14 );
          v19 = v10 - 1;
          if ( v14 )
            v19 = v10;
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
  return v11;
}
