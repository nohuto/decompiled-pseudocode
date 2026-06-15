/*
 * XREFs of ?_Tidy@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAXXZ @ 0x1800313A4
 * Callers:
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180030F50 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     ??1CEndpointCharacteristics@@UEAA@XZ @ 0x180031A8C (--1CEndpointCharacteristics@@UEAA@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180011720 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180013CA8 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800B24B4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::vector<std::shared_ptr<EffectPack>>::_Tidy(void **a1)
{
  char *v1; // rbx
  char *v3; // rsi
  std::_Ref_count_base *v4; // rcx
  char *v5; // rcx
  signed __int64 v6; // rdx
  const struct std::nothrow_t *v7; // rdx
  void *v8; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (char *)*a1;
  if ( *a1 )
  {
    v3 = (char *)a1[1];
    while ( v1 != v3 )
    {
      v4 = (std::_Ref_count_base *)*((_QWORD *)v1 + 1);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v1 += 16;
    }
    v5 = (char *)*a1;
    v6 = (_BYTE *)a1[2] - (_BYTE *)*a1;
    v8 = *a1;
    v7 = (const struct std::nothrow_t *)(v6 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = (unsigned __int64)v7;
    if ( (unsigned __int64)v7 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned(&v8, &v9);
      v5 = (char *)v8;
      v7 = (const struct std::nothrow_t *)v9;
    }
    operator delete(v5, v7);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}
