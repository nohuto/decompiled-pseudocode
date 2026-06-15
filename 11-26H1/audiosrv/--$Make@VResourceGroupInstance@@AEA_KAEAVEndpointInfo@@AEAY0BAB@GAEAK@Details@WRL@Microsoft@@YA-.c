/*
 * XREFs of ??$Make@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800EFECC
 * Callers:
 *     ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800EFF98 (--$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA-AV-$ComPtr@.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800F0700 (--0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
ResourceGroupInstance **__fastcall Microsoft::WRL::Details::Make<ResourceGroupInstance,unsigned __int64 &,EndpointInfo &,unsigned short (&)[257],unsigned long &>(
        ResourceGroupInstance **a1,
        unsigned __int64 *a2,
        struct EndpointInfo *a3,
        const unsigned __int16 *a4,
        unsigned int *a5)
{
  void *v9; // rax
  ResourceGroupInstance *v10; // rdi
  void *v12[4]; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  v9 = operator new[](0x2A0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12[0] = v9;
  v12[1] = v9;
  if ( v9 )
  {
    v12[2] = v9;
    v10 = ResourceGroupInstance::ResourceGroupInstance((ResourceGroupInstance *)v9, *a2, a3, a4, *a5);
    if ( *a1 )
      (*(void (__fastcall **)(ResourceGroupInstance *))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v10;
    v12[0] = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(v12);
  return a1;
}
