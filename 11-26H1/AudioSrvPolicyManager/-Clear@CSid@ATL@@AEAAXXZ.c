/*
 * XREFs of ?Clear@CSid@ATL@@AEAAXXZ @ 0x18001DB54
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18001D3E0 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180004B90 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002848C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ATL::CSid::Clear(ATL::CSid *this)
{
  _QWORD *v2; // rdi
  ATL::CStringData *v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  ATL::CStringData *v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  ATL::CStringData *v9; // rcx
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  ATL::CStringData *v12; // rcx
  __int64 v13; // rsi

  *((_DWORD *)this + 20) = 7;
  v2 = (_QWORD *)((char *)this + 88);
  v3 = (ATL::CStringData *)(*((_QWORD *)this + 11) - 24LL);
  v4 = *(_QWORD *)v3;
  if ( *((_DWORD *)v3 + 2) )
  {
    if ( *((int *)v3 + 4) >= 0 )
    {
      ATL::CStringData::Release(v3);
      *v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v2, 0LL);
    }
  }
  v5 = (_QWORD *)((char *)this + 96);
  v6 = (ATL::CStringData *)(*((_QWORD *)this + 12) - 24LL);
  v7 = *(_QWORD *)v6;
  if ( *((_DWORD *)v6 + 2) )
  {
    if ( *((int *)v6 + 4) >= 0 )
    {
      ATL::CStringData::Release(v6);
      *v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v5, 0LL);
    }
  }
  v8 = (_QWORD *)((char *)this + 104);
  v9 = (ATL::CStringData *)(*((_QWORD *)this + 13) - 24LL);
  v10 = *(_QWORD *)v9;
  if ( *((_DWORD *)v9 + 2) )
  {
    if ( *((int *)v9 + 4) >= 0 )
    {
      ATL::CStringData::Release(v9);
      *v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v8, 0LL);
    }
  }
  v11 = (_QWORD *)((char *)this + 112);
  v12 = (ATL::CStringData *)(*((_QWORD *)this + 14) - 24LL);
  v13 = *(_QWORD *)v12;
  if ( *((_DWORD *)v12 + 2) )
  {
    if ( *((int *)v12 + 4) >= 0 )
    {
      ATL::CStringData::Release(v12);
      *v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(v11, 0LL);
    }
  }
  *((_BYTE *)this + 76) = 0;
}
