/*
 * XREFs of ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x180033838
 * Callers:
 *     ?GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXUhstring@6@UShellViewAnimationProperties@3UI@WindowsUdk@6@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x18026D23C (-GetInvokeTypeFromContextAndAnimationProperties@DashboardManager@implementation@Shell@Internal@W.c)
 * Callees:
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180033648 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802C72B8 (-_Xlen_string@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::getline<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(
        __int64 a1,
        __int64 *a2,
        __int16 a3)
{
  __int16 v3; // r12
  __int64 v5; // rdi
  unsigned int v6; // esi
  char v7; // bl
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  _WORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r13
  _WORD *v16; // rax
  __int64 v17; // rax
  __int16 v18; // cx
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 size_of; // rax
  char *v23; // rax
  __int64 v24; // rbx
  char *v25; // r12
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v29; // rbx
  __int16 v30; // [rsp+20h] [rbp-58h]
  unsigned int v31; // [rsp+24h] [rbp-54h]
  char *v32; // [rsp+28h] [rbp-50h]
  char v36; // [rsp+98h] [rbp+20h]
  __int64 v37; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v5 = a1;
  v6 = 0;
  v31 = 0;
  v7 = 0;
  v36 = 0;
  v8 = a1;
  v9 = std::basic_ios<unsigned short>::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
  v10 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, v9);
  LOBYTE(v10) = 1;
  if ( !(unsigned __int8)std::basic_istream<unsigned short>::_Ipfx(v5, v10) )
    goto LABEL_32;
  a2[2] = 0LL;
  v11 = a2;
  if ( (unsigned __int64)a2[3] > 7 )
    v11 = (_WORD *)*a2;
  *v11 = 0;
  v12 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
  try
  {
    v18 = std::basic_streambuf<unsigned short>::sgetc(v12);
    v30 = v18;
    while ( 1 )
    {
      v13 = 0x7FFFFFFFFFFFFFFELL;
      if ( v18 == -1 )
      {
        v6 = 1;
        goto LABEL_28;
      }
      if ( v18 == v3 )
      {
        v7 = 1;
        v36 = 1;
        v26 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
        std::basic_streambuf<unsigned short>::sbumpc(v26);
        goto LABEL_35;
      }
      v14 = a2[2];
      if ( v14 >= 0x7FFFFFFFFFFFFFFELL )
        break;
      v15 = a2[3];
      if ( v14 >= v15 )
      {
        v19 = (v14 + 1) | 7;
        if ( v19 > 0x7FFFFFFFFFFFFFFELL || (v20 = v15 >> 1, v15 > 0x7FFFFFFFFFFFFFFELL - (v15 >> 1)) )
        {
          v21 = 0x7FFFFFFFFFFFFFFELL;
        }
        else
        {
          v21 = v20 + v15;
          if ( v19 >= v20 + v15 )
            v21 = (v14 + 1) | 7;
        }
        size_of = std::_Get_size_of_n<2>(v21 + 1);
        v23 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of);
        v32 = v23;
        a2[2] = v14 + 1;
        a2[3] = v21;
        v24 = 2 * v14;
        v37 = 2 * v14;
        if ( v15 > 7 )
        {
          v29 = *a2;
          memcpy_0(v23, (const void *)*a2, 2 * v14);
          v25 = v32;
          *(_WORD *)&v32[v37] = v30;
          *(_WORD *)&v32[v37 + 2] = 0;
          std::_Deallocate<16>(v29, 2 * v15 + 2);
        }
        else
        {
          memcpy_0(v23, a2, 2 * v14);
          v25 = v32;
          *(_WORD *)&v32[v24] = v30;
          *(_WORD *)&v32[v24 + 2] = 0;
        }
        *a2 = (__int64)v25;
      }
      else
      {
        a2[2] = v14 + 1;
        v16 = a2;
        if ( v15 > 7 )
          v16 = (_WORD *)*a2;
        v16[v14] = v18;
        v16[v14 + 1] = 0;
      }
      v7 = 1;
      v36 = 1;
      v17 = std::basic_ios<unsigned short>::rdbuf(v5 + *(int *)(*(_QWORD *)v5 + 4LL));
      v18 = std::basic_streambuf<unsigned short>::snextc(v17);
      v30 = v18;
      v8 = a1;
      v3 = a3;
    }
    v6 = 2;
LABEL_28:
    v31 = v6;
  }
  catch ( ... )
  {
    LOBYTE(v13) = 1;
    std::basic_ios<unsigned short>::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), 4LL, v13);
    v5 = a1;
    v6 = v31;
    v7 = v36;
    v8 = a1;
  }
LABEL_35:
  if ( !v7 )
LABEL_32:
    v6 |= 2u;
  std::basic_ios<unsigned short>::setstate(v5 + *(int *)(*(_QWORD *)v5 + 4LL), v6, 0LL);
  v27 = std::basic_ios<unsigned short>::rdbuf(v8 + *(int *)(*(_QWORD *)v8 + 4LL));
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return v5;
}
