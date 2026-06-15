/*
 * XREFs of ?CopyResourceLimits@CConstraintModel@@AEAAJPEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@0@Z @ 0x180159934
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015A460 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AddTail@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_ResourceInfo@@@Z @ 0x18015960C (-AddTail@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEAAPEAU__POSITION@@AEBU_Resource.c)
 *     ?FindIndex@?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z @ 0x180159A68 (-FindIndex@-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@QEBAPEAU__POSITION@@_K@Z.c)
 */

__int64 __fastcall CConstraintModel::CopyResourceLimits(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // r15
  __int64 v4; // rsi
  int v5; // edi
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rbx
  __int64 Index; // rax
  __int64 v9; // rcx
  _BYTE *v10; // rdx
  __int64 v11; // rax
  ATL::CAtlException *v13; // rbx
  unsigned __int64 v14; // [rsp+20h] [rbp-258h]
  ATL::CAtlException *v15; // [rsp+28h] [rbp-250h] BYREF
  _BYTE v16[584]; // [rsp+30h] [rbp-248h] BYREF
  unsigned __int64 v19; // [rsp+298h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  v5 = 0;
  v6 = *(_QWORD *)(a2 + 16);
  v14 = v6;
  for ( i = 0LL; ; ++i )
  {
    v19 = i;
    if ( i >= v6 || v5 < 0 )
      break;
    Index = ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::FindIndex(v4, i);
    if ( !Index )
      ATL::AtlThrowImpl(-2147467259);
    v9 = Index + 16;
    v10 = v16;
    v11 = 4LL;
    do
    {
      *(_OWORD *)v10 = *(_OWORD *)v9;
      *((_OWORD *)v10 + 1) = *(_OWORD *)(v9 + 16);
      *((_OWORD *)v10 + 2) = *(_OWORD *)(v9 + 32);
      *((_OWORD *)v10 + 3) = *(_OWORD *)(v9 + 48);
      *((_OWORD *)v10 + 4) = *(_OWORD *)(v9 + 64);
      *((_OWORD *)v10 + 5) = *(_OWORD *)(v9 + 80);
      *((_OWORD *)v10 + 6) = *(_OWORD *)(v9 + 96);
      v10 += 128;
      *((_OWORD *)v10 - 1) = *(_OWORD *)(v9 + 112);
      v9 += 128LL;
      --v11;
    }
    while ( v11 );
    try
    {
      *(_OWORD *)v10 = *(_OWORD *)v9;
      *((_QWORD *)v10 + 2) = *(_QWORD *)(v9 + 16);
      *((_DWORD *)v10 + 6) = *(_DWORD *)(v9 + 24);
      v5 = 0;
      ATL::CAtlList<_ResourceInfo,ResourceInfoTraits>::AddTail(v3, (__int64)v16);
    }
    catch ( ATL::CAtlException *v15 )
    {
      v13 = v15;
      if ( *(_DWORD *)v15 == -1073741571 )
        _o__resetstkoflw();
      v3 = a3;
      v4 = a2;
      v5 = *(_DWORD *)v13;
      v6 = v14;
      i = v19;
      continue;
    }
  }
  return (unsigned int)v5;
}
