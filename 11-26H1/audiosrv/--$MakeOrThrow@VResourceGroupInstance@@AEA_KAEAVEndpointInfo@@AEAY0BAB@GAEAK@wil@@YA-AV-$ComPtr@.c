/*
 * XREFs of ??$MakeOrThrow@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@wil@@YA?AV?$ComPtr@VResourceGroupInstance@@@WRL@Microsoft@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800EFF98
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x1800F1D7C (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@AEAVEndpointInfo@@PEAU.c)
 * Callees:
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800CF800 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$Make@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA?AV?$ComPtr@VResourceGroupInstance@@@12@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Z @ 0x1800EFECC (--$Make@VResourceGroupInstance@@AEA_KAEAVEndpointInfo@@AEAY0BAB@GAEAK@Details@WRL@Microsoft@@YA-.c)
 */

// Hidden C++ exception states: #wind=1
ResourceGroupInstance **__fastcall wil::MakeOrThrow<ResourceGroupInstance,unsigned __int64 &,EndpointInfo &,unsigned short (&)[257],unsigned long &>(
        ResourceGroupInstance **a1,
        unsigned __int64 *a2,
        struct EndpointInfo *a3,
        const unsigned __int16 *a4,
        unsigned int *a5)
{
  const char *v6; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Microsoft::WRL::Details::Make<ResourceGroupInstance,unsigned __int64 &,EndpointInfo &,unsigned short (&)[257],unsigned long &>(
    a1,
    a2,
    a3,
    a4,
    a5);
  if ( !*a1 )
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      63LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v6);
  return a1;
}
