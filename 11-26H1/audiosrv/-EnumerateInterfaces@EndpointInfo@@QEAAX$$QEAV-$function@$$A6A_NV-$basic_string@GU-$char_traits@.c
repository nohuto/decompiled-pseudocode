/*
 * XREFs of ?EnumerateInterfaces@EndpointInfo@@QEAAX$$QEAV?$function@$$A6A_NV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z@std@@@Z @ 0x1800F2FB4
 * Callers:
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800F52CC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180044828 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@@Z @ 0x18005E468 (--$_Destroy_range@V-$allocator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@st.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18005E4A0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x18007A13C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x1800B0C54 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@AEBV21@@Z @ 0x1800F0064 (--$_Emplace_reallocate@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vecto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EndpointInfo::EnumerateInterfaces(__int64 a1, __int64 a2)
{
  _QWORD **v2; // r14
  _QWORD **v3; // r13
  __int128 v4; // rcx
  _QWORD **v5; // rsi
  _QWORD **v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdi
  const wchar_t *v9; // r8
  const wchar_t *v10; // rcx
  void **v11; // rdi
  __int64 v12; // rcx
  char v13; // bl
  char *v14; // rdx
  __int128 v15; // [rsp+20h] [rbp-40h] BYREF
  __int64 v16; // [rsp+30h] [rbp-30h]
  _BYTE v17[40]; // [rsp+38h] [rbp-28h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v2 = *(_QWORD ***)(a1 + 104);
  v3 = *(_QWORD ***)(a1 + 112);
  v4 = 0LL;
LABEL_2:
  if ( v2 != v3 )
  {
    v5 = (_QWORD **)**v2;
    v6 = (_QWORD **)(*v2)[1];
    while ( 1 )
    {
      if ( v5 == v6 )
      {
        ++v2;
        goto LABEL_2;
      }
      v7 = (__int64)*v5;
      v8 = v4;
      if ( (_QWORD)v4 != *((_QWORD *)&v4 + 1) )
      {
        do
        {
          v9 = (const wchar_t *)v7;
          if ( *(_QWORD *)(v7 + 24) > 7uLL )
            v9 = *(const wchar_t **)v7;
          v10 = (const wchar_t *)v8;
          if ( *(_QWORD *)(v8 + 24) > 7uLL )
            v10 = *(const wchar_t **)v8;
          if ( std::_Traits_equal<std::char_traits<unsigned short>>(v10, *(_QWORD *)(v8 + 16), v9, *(_QWORD *)(v7 + 16)) )
            break;
          v8 += 32LL;
        }
        while ( v8 != *((_QWORD *)&v4 + 1) );
        v4 = v15;
      }
      if ( v8 == *((_QWORD *)&v4 + 1) )
      {
        if ( *((_QWORD *)&v4 + 1) == v16 )
        {
          std::vector<std::wstring>::_Emplace_reallocate<std::wstring const &>(
            (__int64 *)&v15,
            *((__int64 *)&v4 + 1),
            *v5);
        }
        else
        {
          std::wstring::wstring(*((__int64 *)&v4 + 1), *v5);
          *((_QWORD *)&v15 + 1) += 32LL;
        }
        v11 = (void **)std::wstring::wstring((__int64)v17, *v5);
        v12 = *(_QWORD *)(a2 + 56);
        if ( !v12 )
        {
          std::_Xbad_function_call();
          break;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 16LL))(v12, v11);
        std::wstring::~wstring(v11);
        if ( !v13 )
        {
          *(_QWORD *)&v4 = v15;
          if ( !(_QWORD)v15 )
            return;
          v14 = (char *)*((_QWORD *)&v15 + 1);
LABEL_27:
          std::_Destroy_range<std::allocator<std::wstring>>((char *)v4, v14);
          std::_Deallocate<16>((void *)v15, (struct std::nothrow_t *)((v16 - v15) & 0xFFFFFFFFFFFFFFE0uLL));
          return;
        }
        v4 = v15;
      }
      ++v5;
    }
  }
  if ( (_QWORD)v4 )
  {
    v14 = (char *)*((_QWORD *)&v4 + 1);
    goto LABEL_27;
  }
}
