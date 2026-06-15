/*
 * XREFs of ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180158A38
 * Callers:
 *     ?AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV?$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1?PropVariantClear@@YAJ0@ZP6AX0@Z$1?PropVariantInit@@YAX0@Z@wil@@00@Z @ 0x1801591BC (-AddExtendedTopologyInfo@EndpointInfo@@QEAAJAEBV-$unique_struct@UtagPROPVARIANT@@P6AJPEAU1@@Z$1-.c)
 * Callees:
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x1800F59E0 (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1801401C8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??1_Sentry_base@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x180158FC0 (--1_Sentry_base@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        void **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  char v5; // si
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  unsigned __int16 i; // ax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+70h] [rbp+18h]
  unsigned int v18; // [rsp+78h] [rbp+20h]

  v3 = a1;
  v4 = 0;
  v18 = 0;
  v5 = 0;
  v17 = 0;
  v14 = a1;
  v6 = std::basic_ios<unsigned short>::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
  v7 = v6;
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 8LL))(v6, v6);
  LOBYTE(v7) = 1;
  if ( !(unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v3, v7) )
    goto LABEL_14;
  try
  {
    std::wstring::erase(a2);
    v8 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    for ( i = std::basic_streambuf<unsigned short>::sgetc(v8); ; i = std::basic_streambuf<unsigned short>::snextc(v11) )
    {
      if ( i == 0xFFFF )
      {
        v4 = 1;
        goto LABEL_11;
      }
      if ( i == 47 )
      {
        v5 = 1;
        v17 = 1;
        v9 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
        std::basic_streambuf<unsigned short>::sbumpc(v9);
        goto LABEL_19;
      }
      if ( (unsigned __int64)a2[2] >= 0x7FFFFFFFFFFFFFFELL )
        break;
      std::wstring::push_back(a2, i);
      v5 = 1;
      v17 = 1;
      v11 = std::basic_ios<unsigned short>::rdbuf(v3 + *(int *)(*(_QWORD *)v3 + 4LL));
    }
    v4 = 2;
LABEL_11:
    v18 = v4;
  }
  catch ( ... )
  {
    LOBYTE(v10) = 1;
    std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v10);
    v3 = a1;
    v4 = v18;
    v5 = v17;
  }
LABEL_19:
  if ( !v5 )
LABEL_14:
    v4 |= 2u;
  std::basic_ios<unsigned short>::setstate(v3 + *(int *)(*(_QWORD *)v3 + 4LL), v4, 0LL);
  std::basic_istream<unsigned short>::_Sentry_base::~_Sentry_base(&v14);
  return v3;
}
