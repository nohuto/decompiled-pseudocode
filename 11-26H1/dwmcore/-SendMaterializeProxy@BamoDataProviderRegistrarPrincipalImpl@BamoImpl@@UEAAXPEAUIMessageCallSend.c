/*
 * XREFs of ?SendMaterializeProxy@BamoDataProviderRegistrarPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180241E80
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x18023F9C4 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoDataProviderRegistrarPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoDataProviderRegistrarPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 v8; // rax
  int ItemId; // eax
  __m128i v10; // xmm1
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // [rsp+20h] [rbp-58h]
  int v16; // [rsp+20h] [rbp-58h]
  __int64 v17; // [rsp+38h] [rbp-40h]
  __int64 v18; // [rsp+38h] [rbp-40h]
  __m128i v19; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v3 = *((_QWORD *)a3 + 4);
  v4 = (__int64)a2 + 56;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v8 = (__int64)a2 + 56;
    if ( !a2 )
      v8 = 72LL;
    *(_BYTE *)v8 = 1;
  }
  ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v10 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  v19.m128i_i64[1] = v10.m128i_i64[1];
  v11 = CoreUICallSend(a2, &v19, 2LL, 7LL, 2, &unk_180373365, ItemId, v17, v10.m128i_i32[0]);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E04,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v11,
      v15);
  v12 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E13,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v12,
      v15);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    if ( !a2 )
      v4 = 72LL;
    *(_BYTE *)v4 = 1;
  }
  v13 = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v19 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  v14 = CoreUICallSend(a2, &v19, 2LL, 7LL, 5, &unk_180373365, v13, v18, v19.m128i_i32[0]);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E29,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v14,
      v16);
}
