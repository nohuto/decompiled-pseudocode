/*
 * XREFs of ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18000E770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180006440 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x18002B87C (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x18002F820 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002FCE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180030A10 (memcpy_0.c)
 *     ?at@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAAEAV?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180049028 (-at@-$unordered_map@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@.c)
 *     ?count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEBA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180049080 (-count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 */

float __fastcall CEndpointVolumeStateManager::GetEndpointVolumeOverridePolicyVolume(
        CEndpointVolumeStateManager *this,
        unsigned __int16 *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  SIZE_T v7; // rbp
  unsigned __int64 v8; // rax
  char *v9; // rbp
  size_t v10; // rbx
  __int64 v11; // rbx
  void *v12; // rcx
  const struct std::nothrow_t *v13; // rdx
  size_t v15; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v17; // rbx
  float v18; // xmm6_4
  unsigned __int64 v19; // [rsp+20h] [rbp-78h] BYREF
  void *v20; // [rsp+28h] [rbp-70h] BYREF
  void *v21[2]; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned __int64 v23; // [rsp+48h] [rbp-50h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  v5 = -1LL;
  *(_OWORD *)v21 = 0LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = 0x7FFFFFFFFFFFFFFELL;
  if ( v5 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlength_error("string too long");
  if ( v5 > 7 )
  {
    if ( (v5 | 7) > 0x7FFFFFFFFFFFFFFELL )
    {
      v7 = -2LL;
    }
    else
    {
      v6 = v5 | 7;
      if ( (v5 | 7) < 0xA )
        v6 = 10LL;
      if ( (unsigned __int64)(v6 + 1) > 0x7FFFFFFFFFFFFFFFLL )
        std::_Throw_bad_array_new_length();
      v7 = 2 * (v6 + 1);
      if ( !v7 )
      {
        v9 = 0LL;
LABEL_13:
        v22 = v5;
        v10 = 2 * v5;
        v21[0] = v9;
        v23 = v6;
        memcpy_0(v9, a2, v10);
        *(_WORD *)&v9[v10] = 0;
        goto LABEL_14;
      }
    }
    if ( v7 < 0x1000 )
    {
      ProcessHeap = GetProcessHeap();
      v8 = (unsigned __int64)HeapAlloc(ProcessHeap, 0, v7);
    }
    else
    {
      v8 = std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v7);
    }
    v9 = (char *)v8;
    goto LABEL_13;
  }
  v22 = v5;
  v15 = 2 * v5;
  v23 = 7LL;
  memcpy_0(v21, a2, v15);
  *(_WORD *)((char *)v21 + v15) = 0;
LABEL_14:
  v11 = std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::count(
          (char *)this + 56,
          v21);
  if ( v23 > 7 )
  {
    v12 = v21[0];
    v13 = (const struct std::nothrow_t *)(2 * v23 + 2);
    v19 = (unsigned __int64)v13;
    v20 = v21[0];
    if ( (unsigned __int64)v13 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v20, &v19);
      v13 = (const struct std::nothrow_t *)v19;
      v12 = v20;
    }
    operator delete(v12, v13);
  }
  if ( v11 )
  {
    std::wstring::wstring(v21, a2);
    v17 = std::unordered_map<std::wstring,std::unique_ptr<CEndpointVolumeState>>::at((char *)this + 56, v21);
    std::wstring::~wstring((__int64)v21);
    if ( *(_BYTE *)(*(_QWORD *)v17 + 8LL) )
      v18 = 0.0;
    else
      v18 = *(float *)(*(_QWORD *)v17 + 4LL);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v18;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return FLOAT_1_0;
  }
}
