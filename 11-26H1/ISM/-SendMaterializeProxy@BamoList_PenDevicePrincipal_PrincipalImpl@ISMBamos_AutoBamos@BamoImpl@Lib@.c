/*
 * XREFs of ?SendMaterializeProxy@BamoList_PenDevicePrincipal_PrincipalImpl@ISMBamos_AutoBamos@BamoImpl@Lib@Bamo@Microsoft@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@36@@Z @ 0x180067D30
 * Callers:
 *     <none>
 * Callees:
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl::SendMaterializeProxy(
        Microsoft::Bamo::Lib::BamoImpl::ISMBamos_AutoBamos::BamoList_PenDevicePrincipal_PrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __m128i v13; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__int64)a2 + 56;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v11 = (__int64)a2 + 56;
    if ( !a2 )
      v11 = 72LL;
    *(_BYTE *)v11 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v13 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  LOWORD(v12) = 77;
  v8 = CoreUICallSend(a2, &v13, 2LL);
  if ( v8 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC3A,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v8,
      v12);
  v9 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v9 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC49,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v9,
      v12);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    if ( !a2 )
      v4 = 72LL;
    *(_BYTE *)v4 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v13 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  LOWORD(v12) = 82;
  v10 = CoreUICallSend(a2, &v13, 2LL);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xBC5F,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v10,
      v12);
}
