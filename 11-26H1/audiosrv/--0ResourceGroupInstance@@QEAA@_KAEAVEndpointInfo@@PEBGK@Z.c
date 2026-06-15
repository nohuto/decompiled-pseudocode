/*
 * XREFs of ??0ResourceGroupInstance@@QEAA@_KAEAVEndpointInfo@@PEBGK@Z @ 0x1800F0700
 * Callers:
 *     ??$Make@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800EFECC (--$Make@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA-.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180047620 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ @ 0x18007A818 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4EndpointInfo@@QEAAAEAV0@AEBV0@@Z @ 0x1800F0DE0 (--4EndpointInfo@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1800F52CC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=2
ResourceGroupInstance *__fastcall ResourceGroupInstance::ResourceGroupInstance(
        ResourceGroupInstance *this,
        __int64 a2,
        struct EndpointInfo *a3,
        char *a4,
        unsigned int a5)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>(this);
  *(_QWORD *)this = &ResourceGroupInstance::`vftable';
  *((_OWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 7LL;
  *((_WORD *)this + 272) = 0;
  *((_OWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_QWORD *)this + 75) = 7LL;
  *((_WORD *)this + 288) = 0;
  *((_OWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 7LL;
  *((_WORD *)this + 304) = 0;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a5;
  EndpointInfo::operator=((ResourceGroupInstance *)((char *)this + 544));
  StringCchCopyW((char *)this + 32, 256LL, a4);
  ResourceGroupInstance::SetAssignedResourceGroup(this, 1);
  return this;
}
