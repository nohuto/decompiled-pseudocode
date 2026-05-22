/*
 * XREFs of ?InitializeProxyUnderLock@?$ListPrincipalSimpleCommon@VBamoList_SimpleHapticsControllerFeedback_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@VBamoList_SimpleHapticsControllerFeedback_Stub@2345@USimpleHapticsControllerFeedback@@AEBU8@@Bamo@Microsoft@@MEAAJPEAVBamoList_SimpleHapticsControllerFeedback_Stub@ISMBamos_AutoBamos@Lib@23@@Z @ 0x1800768A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::Bamo::ListPrincipalSimpleCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Principal,ISMBamos_AutoBamos::BamoConnection,Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_SimpleHapticsControllerFeedback_Stub,SimpleHapticsControllerFeedback,SimpleHapticsControllerFeedback const &>::InitializeProxyUnderLock(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rbx
  __int64 v5; // r8
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)i >= (unsigned __int64)((*(_QWORD *)(a1 + 64) - v5) >> 3) )
      break;
    v10 = *(_QWORD *)(v5 + 8 * i);
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(a2 + 8) + 24LL))(
           a2 + 8,
           (unsigned int)i,
           &v10);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x135,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoList.inl",
        (const char *)(unsigned int)v6,
        v8);
  }
  return 0LL;
}
