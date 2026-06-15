/*
 * XREFs of ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18001E170
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
        __int64 a1,
        size_t a2)
{
  size_t v3; // rdi
  size_t v4; // rcx
  size_t v5; // rdx
  void *v6; // rax
  __int64 v7; // rcx
  void *v8; // rbp
  const void *v9; // rdx
  size_t v10; // r8
  int v11; // esi
  void *v13; // rax

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 16);
  if ( a2 <= v4 )
    return 1;
  v5 = *(int *)(a1 + 24);
  if ( *(_QWORD *)a1 )
  {
    if ( !*(_DWORD *)(a1 + 24) )
    {
      v5 = v4 >> 1;
      if ( v3 - v4 > v4 >> 1 )
        v5 = v3 - v4;
    }
    if ( v3 < v4 + v5 )
      v3 = v4 + v5;
    v6 = calloc(v3, 8uLL);
    v8 = v6;
    if ( v6 )
    {
      v9 = *(const void **)a1;
      v10 = 8LL * *(_QWORD *)(a1 + 8);
      if ( v10 )
      {
        if ( !v9 )
        {
          v11 = 22;
          *(_DWORD *)_o__errno(v7, 0LL) = 22;
          invalid_parameter_noinfo();
          goto LABEL_13;
        }
        memcpy_0(v6, v9, v10);
      }
      v11 = 0;
LABEL_13:
      ATL::AtlCrtErrorCheck(v11);
      free(*(void **)a1);
      *(_QWORD *)a1 = v8;
LABEL_14:
      *(_QWORD *)(a1 + 16) = v3;
      return 1;
    }
  }
  else
  {
    if ( v5 > v3 )
      v3 = *(int *)(a1 + 24);
    v13 = calloc(v3, 8uLL);
    *(_QWORD *)a1 = v13;
    if ( v13 )
      goto LABEL_14;
  }
  return 0;
}
