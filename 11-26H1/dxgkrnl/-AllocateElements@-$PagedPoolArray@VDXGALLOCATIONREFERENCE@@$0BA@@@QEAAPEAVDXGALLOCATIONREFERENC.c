/*
 * XREFs of ?AllocateElements@?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$0BA@@@QEAAPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x140395050
 * Callers:
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x140294050 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x14003B4B0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::AllocateElements(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax
  bool v7; // cf
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi

  v2 = (unsigned int)a2;
  if ( (unsigned int)a2 <= 0x10 )
  {
    *a1 = (__int64)(a1 + 1);
    if ( (_DWORD)a2 )
    {
      v4 = 0LL;
      a2 = (unsigned int)a2;
      do
      {
        *(_QWORD *)(v4 + *a1) = 0LL;
        v4 += 8LL;
        --a2;
      }
      while ( a2 );
    }
LABEL_5:
    result = *a1;
    *((_DWORD *)a1 + 34) = v2;
    return result;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a2 >= 8 )
  {
    v6 = 8LL * (unsigned int)a2;
    if ( !is_mul_ok((unsigned int)a2, 8uLL) )
      v6 = -1LL;
    v7 = __CFADD__(v6, 8LL);
    v8 = v6 + 8;
    if ( v7 )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4B677844u, 256LL);
    v10 = 0LL;
    if ( v9 )
    {
      v10 = v9 + 8;
      *(_QWORD *)v9 = v2;
      `vector constructor iterator'(
        (char *)(v9 + 8),
        8LL,
        v2,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
    }
    *a1 = v10;
    goto LABEL_5;
  }
  return 0LL;
}
