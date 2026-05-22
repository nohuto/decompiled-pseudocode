/*
 * XREFs of ??$Make@VInputSite@@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAKPEAVInputSiteManager@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VInputSite@@@12@AEAV?$span@UInputSiteId@@$0?0@gsl@@AEAK$$QEAPEAVInputSiteManager@@@Z @ 0x18002CFB8
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoInputSiteElementProxy@@AEBUInputSiteId@@@Z @ 0x18002D430 (-RegisterInputSiteElementWithHint@InputSiteManager@@MEAAJPEAVBamoInputSiteManagerStub@@PEAVBamoI.c)
 *     ?CreateInputSiteFromId@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002DFAC (-CreateInputSiteFromId@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSite.c)
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18002D184 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18002D1A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Buy_nonzero@?$vector@UInputSiteId@@V?$allocator@UInputSiteId@@@std@@@std@@AEAAX_K@Z @ 0x18002D1EC (-_Buy_nonzero@-$vector@UInputSiteId@@V-$allocator@UInputSiteId@@@std@@@std@@AEAAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C928 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
void ***__fastcall Microsoft::WRL::Details::Make<InputSite,gsl::span<InputSiteId,-1> &,unsigned long &,InputSiteManager *>(
        void ***a1,
        __m128i *a2,
        int *a3,
        void **a4)
{
  void **v8; // rbx
  void *v9; // rdi
  int v10; // r13d
  __m128i v11; // xmm6
  void **v12; // rbp
  __int64 v13; // r14
  char *v14; // xmm6_8
  __int64 v15; // r14
  char *v16; // rsi
  void **v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-60h]

  *a1 = 0LL;
  v8 = (void **)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = *a4;
    if ( v9 )
      (**(void (__fastcall ***)(void *))v9)(v9);
    v10 = *a3;
    v11 = *a2;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(v8);
    *v8 = &InputSite::`vftable';
    v12 = v8 + 2;
    v13 = 16 * v11.m128i_i64[0];
    v14 = (char *)_mm_srli_si128(v11, 8).m128i_u64[0];
    v19 = (__int64)&v14[v13];
    v8[2] = 0LL;
    v8[3] = 0LL;
    v8[4] = 0LL;
    if ( v14 > &v14[v13] )
    {
      _o_terminate(0LL);
    }
    else
    {
      v15 = v13 >> 4;
      if ( v15 )
      {
        std::vector<InputSiteId>::_Buy_nonzero(v8 + 2, v15);
        v16 = (char *)*v12;
        std::_Copy_memmove<enum _Button *,enum _Button *>(v14, v19, *v12);
        v8[3] = &v16[16 * v15];
      }
      *((_DWORD *)v8 + 10) = v10;
      v12 = 0LL;
      *((_BYTE *)v8 + 480) = 0;
      v8[61] = 0LL;
      v8[62] = 0LL;
      v8[63] = 0LL;
      v8[64] = v9;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef();
      if ( v9 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 8LL))(v9);
      v17 = *a1;
      if ( !*a1 )
        goto LABEL_10;
    }
    (*((void (__fastcall **)(void **))*v17 + 2))(v17);
LABEL_10:
    *a1 = v8;
    v8 = v12;
  }
  if ( v8 )
    operator delete(v8, (const struct std::nothrow_t *)1);
  return a1;
}
