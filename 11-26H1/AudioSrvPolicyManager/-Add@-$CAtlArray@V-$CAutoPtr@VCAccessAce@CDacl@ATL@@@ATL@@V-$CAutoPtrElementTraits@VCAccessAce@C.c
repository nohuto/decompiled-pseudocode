/*
 * XREFs of ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x18001DFB0
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002E3D0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x18001E294 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18002E7E8 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x180030966 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 */

unsigned __int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
        __int64 a1,
        __int64 *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  size_t v9; // rdx
  size_t v10; // rbp
  size_t v11; // r14
  void *v12; // rax
  __int64 v13; // rcx
  void *v14; // r15
  const void *v15; // rdx
  size_t v16; // r8
  int v17; // ebp
  void *v18; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  if ( v2 >= v4 )
  {
    v9 = v2 + 1;
    if ( v2 + 1 > v4 )
    {
      v10 = *(int *)(a1 + 24);
      if ( *(_QWORD *)a1 )
      {
        if ( !*(_DWORD *)(a1 + 24) )
        {
          v10 = v4 >> 1;
          if ( v9 - v4 > v4 >> 1 )
            v10 = v9 - v4;
        }
        v11 = v4 + v10;
        if ( v9 >= v4 + v10 )
          v11 = v2 + 1;
        v12 = calloc(v11, 8uLL);
        v14 = v12;
        if ( v12 )
        {
          v15 = *(const void **)a1;
          v16 = 8LL * *(_QWORD *)(a1 + 8);
          if ( v16 )
          {
            if ( !v15 )
            {
              v17 = 22;
              *(_DWORD *)_o__errno(v13, 0LL) = 22;
              invalid_parameter_noinfo();
              goto LABEL_15;
            }
            memcpy_0(v12, v15, v16);
          }
          v17 = 0;
LABEL_15:
          ATL::AtlCrtErrorCheck(v17);
          free(*(void **)a1);
          *(_QWORD *)a1 = v14;
          *(_QWORD *)(a1 + 16) = v11;
          goto LABEL_2;
        }
      }
      else
      {
        if ( v10 <= v9 )
          v10 = v2 + 1;
        v18 = calloc(v10, 8uLL);
        *(_QWORD *)a1 = v18;
        if ( v18 )
        {
          *(_QWORD *)(a1 + 16) = v10;
          goto LABEL_2;
        }
      }
      ATL::AtlThrowImpl(-2147024882);
    }
  }
LABEL_2:
  result = v2;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 8 * v2);
  v8 = *a2;
  *a2 = 0LL;
  *v7 = v8;
  ++*(_QWORD *)(a1 + 8);
  return result;
}
