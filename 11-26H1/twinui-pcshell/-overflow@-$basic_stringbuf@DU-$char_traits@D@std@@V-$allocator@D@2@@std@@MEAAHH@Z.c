/*
 * XREFs of ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x180505310
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

__int64 __fastcall std::stringbuf::overflow(__int64 a1, unsigned int a2)
{
  int *v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rcx
  _BYTE *v10; // rdx
  size_t v11; // rdi
  void *v12; // r15
  unsigned __int64 v13; // rbp
  char *v14; // r14
  char *v15; // r8
  int v16; // r9d
  _DWORD *v17; // rax
  _QWORD *v18; // rcx
  _BYTE *v19; // rdx

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == -1 )
      return 0LL;
    v5 = *(int **)(a1 + 88);
    v6 = **(_QWORD **)(a1 + 64);
    v7 = *v5;
    v8 = v6 + v7;
    if ( v6 && v6 < v8 )
    {
      *v5 = v7 - 1;
      v9 = *(_QWORD **)(a1 + 64);
      v10 = (_BYTE *)(*v9)++;
      *v10 = a2;
      *(_QWORD *)(a1 + 104) = v6 + 1;
      return a2;
    }
    v11 = 0LL;
    v12 = **(void ***)(a1 + 24);
    v13 = 32LL;
    if ( !v6 || (v11 = v8 - (_QWORD)v12, v8 - (unsigned __int64)v12 < 0x20) )
    {
LABEL_13:
      v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(v13);
      memcpy_0(v14, v12, v11);
      *(_QWORD *)(a1 + 104) = &v14[v11 + 1];
      **(_QWORD **)(a1 + 32) = v14;
      **(_QWORD **)(a1 + 64) = &v14[v11];
      **(_DWORD **)(a1 + 88) = v13 - v11;
      if ( (*(_BYTE *)(a1 + 112) & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v14;
        **(_QWORD **)(a1 + 56) = v14;
        **(_DWORD **)(a1 + 80) = 0;
      }
      else
      {
        v15 = &v14[**(_QWORD **)(a1 + 56) - (_QWORD)v12];
        v16 = *(_QWORD *)(a1 + 104) - (_DWORD)v15;
        **(_QWORD **)(a1 + 24) = v14;
        **(_QWORD **)(a1 + 56) = v15;
        **(_DWORD **)(a1 + 80) = v16;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
        std::_Deallocate<16>(v12, (struct std::nothrow_t *)v11);
      v17 = *(_DWORD **)(a1 + 88);
      *(_DWORD *)(a1 + 112) |= 1u;
      --*v17;
      v18 = *(_QWORD **)(a1 + 64);
      v19 = (_BYTE *)(*v18)++;
      *v19 = a2;
      return a2;
    }
    if ( v11 < 0x3FFFFFFF )
    {
      v13 = 2 * v11;
      goto LABEL_13;
    }
    v13 = 0x7FFFFFFFLL;
    if ( v11 < 0x7FFFFFFF )
      goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
