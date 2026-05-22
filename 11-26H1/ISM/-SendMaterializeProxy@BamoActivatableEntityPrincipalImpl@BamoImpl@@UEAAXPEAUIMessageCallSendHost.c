/*
 * XREFs of ?SendMaterializeProxy@BamoActivatableEntityPrincipalImpl@BamoImpl@@UEAAXPEAUIMessageCallSendHost@@PEAVBamoStubImpl@2Microsoft@@@Z @ 0x180035EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ @ 0x1800366D4 (-GetSendHost@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEBAPEAUIMessageCallSendHost@@XZ.c)
 *     ?GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ @ 0x180036710 (-GetItemId@BamoPrincipalImpl@BamoImpl@Microsoft@@QEBAIXZ.c)
 *     ?TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z @ 0x18003D940 (-TrackError@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJJI@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::SendMaterializeProxy(
        BamoImpl::BamoActivatableEntityPrincipalImpl *this,
        struct IMessageCallSendHost *a2,
        struct Microsoft::BamoImpl::BamoStubImpl *a3)
{
  __int64 v3; // rbx
  int v7; // eax
  _BYTE *v8; // r14
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v9; // rcx
  struct IMessageCallSendHost *SendHost; // rax
  __int64 v11; // r8
  struct IMessageCallSendHost *v12; // rdi
  unsigned int *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // rcx
  int v16; // eax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v17; // rcx
  struct IMessageCallSendHost *v18; // rax
  __int64 v19; // r8
  struct IMessageCallSendHost *v20; // rdi
  unsigned int *v21; // rbx
  __int64 v22; // r12
  __int64 v23; // rcx
  int v24; // eax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v25; // rcx
  struct IMessageCallSendHost *v26; // rdi
  __int64 v27; // rbx
  unsigned int ItemId; // eax
  int v29; // eax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v30; // rcx
  struct IMessageCallSendHost *v31; // rax
  __int64 v32; // r8
  struct IMessageCallSendHost *v33; // rdi
  unsigned int *v34; // rbx
  __int64 v35; // r12
  __int64 v36; // rcx
  int v37; // eax
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v38; // rcx
  struct IMessageCallSendHost *v39; // rax
  __int64 v40; // r8
  struct IMessageCallSendHost *v41; // rdi
  unsigned int *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // rcx
  int v45; // eax
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // eax
  __int64 v54; // rdx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rax
  int v62; // [rsp+20h] [rbp-30h]
  __m128i v63; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v65; // [rsp+A8h] [rbp+58h]

  v3 = *((_QWORD *)a3 + 4);
  v65 = v3;
  if ( *(_BYTE *)(v3 + 48) )
  {
    v60 = (__int64)a2 + 56;
    if ( !a2 )
      v60 = 72LL;
    *(_BYTE *)v60 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v63 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v3 + 36)), (__m128i)0LL);
  LOWORD(v62) = 1;
  v7 = CoreUICallSend(a2, &v63, 2LL);
  if ( v7 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x6696,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v7,
      v62);
  v8 = (char *)a3 + 56;
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v9 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *((_QWORD *)v9 + 8) )
    {
      SendHost = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v11 = *((_QWORD *)a3 + 3);
      v12 = SendHost;
      v13 = (unsigned int *)(v11 + 24);
      v14 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v11 + 24) && *(int *)(v11 + 8) > 0 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 32LL);
        v49 = *(_QWORD *)(v48 + 64);
        if ( v49 )
        {
          v50 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v49 + 24LL))(
                  v49,
                  *(unsigned int *)(v48 + 28),
                  v11,
                  v11 + 24);
          if ( v50 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v50,
              v62);
        }
      }
      v15 = *v13;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v63.m128i_i64[0] = v14;
      v63.m128i_i64[1] = v15;
      LOWORD(v62) = 0;
      v16 = CoreUICallSend(v12, &v63, 2LL);
      if ( v16 < 0 && v16 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x678C,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v16,
          v62);
    }
    else
    {
      if ( v9 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v9, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v62);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v17 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *((_QWORD *)v17 + 8) )
    {
      v18 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v19 = *((_QWORD *)a3 + 3);
      v20 = v18;
      v21 = (unsigned int *)(v19 + 24);
      v22 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v19 + 24) && *(int *)(v19 + 8) > 0 )
      {
        v51 = *(_QWORD *)(*(_QWORD *)(v19 + 16) + 32LL);
        v52 = *(_QWORD *)(v51 + 64);
        if ( v52 )
        {
          v53 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v52 + 24LL))(
                  v52,
                  *(unsigned int *)(v51 + 28),
                  v19,
                  v19 + 24);
          if ( v53 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v53,
              v62);
        }
      }
      v23 = *v21;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v63.m128i_i64[0] = v22;
      LOWORD(v62) = 1;
      v63.m128i_i64[1] = v23;
      v24 = CoreUICallSend(v20, &v63, 2LL);
      if ( v24 < 0 && v24 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x67C2,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v24,
          v62);
    }
    else
    {
      if ( v17 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v17, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v62);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v25 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *((_QWORD *)v25 + 8) )
    {
      v26 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v27 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      ItemId = Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(*((Microsoft::BamoImpl::BamoPrincipalImpl **)a3 + 3));
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v63.m128i_i64[1] = ItemId;
      v63.m128i_i64[0] = v27;
      LOWORD(v62) = 2;
      v29 = CoreUICallSend(v26, &v63, 2LL);
      if ( v29 < 0 && v29 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x67F8,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v29,
          v62);
    }
    else
    {
      if ( v25 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v25, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v62);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v30 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *((_QWORD *)v30 + 8) )
    {
      v31 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v32 = *((_QWORD *)a3 + 3);
      v33 = v31;
      v34 = (unsigned int *)(v32 + 24);
      v35 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v32 + 24) && *(int *)(v32 + 8) > 0 )
      {
        v54 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 32LL);
        v55 = *(_QWORD *)(v54 + 64);
        if ( v55 )
        {
          v56 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v55 + 24LL))(
                  v55,
                  *(unsigned int *)(v54 + 28),
                  v32,
                  v32 + 24);
          if ( v56 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v56,
              v62);
        }
      }
      v36 = *v34;
      v63.m128i_i64[0] = v35;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v63.m128i_i64[1] = v36;
      LOWORD(v62) = 3;
      v37 = CoreUICallSend(v33, &v63, 2LL);
      if ( v37 < 0 && v37 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x682E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v37,
          v62);
    }
    else
    {
      if ( v30 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v30, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v62);
    }
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 64LL) )
  {
    v38 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)a3 + 4) + 24LL) + 32LL);
    if ( *v8 && *((_QWORD *)v38 + 8) )
    {
      v39 = Microsoft::BamoImpl::BaseBamoPeerImpl::GetSendHost(*((Microsoft::BamoImpl::BaseBamoPeerImpl **)a3 + 4));
      v40 = *((_QWORD *)a3 + 3);
      v41 = v39;
      v42 = (unsigned int *)(v40 + 24);
      v43 = *(unsigned int *)(*((_QWORD *)a3 + 4) + 36LL);
      if ( !*(_DWORD *)(v40 + 24) && *(int *)(v40 + 8) > 0 )
      {
        v57 = *(_QWORD *)(*(_QWORD *)(v40 + 16) + 32LL);
        v58 = *(_QWORD *)(v57 + 64);
        if ( v58 )
        {
          v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v58 + 24LL))(
                  v58,
                  *(unsigned int *)(v57 + 28),
                  v40,
                  v40 + 24);
          if ( v59 < 0 )
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x42B,
              (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
              (const char *)(unsigned int)v59,
              v62);
        }
      }
      v44 = *v42;
      v63.m128i_i64[0] = v43;
      ++*((_DWORD *)a3 + 4);
      *((_BYTE *)a3 + 60) = 1;
      v63.m128i_i64[1] = v44;
      LOWORD(v62) = 4;
      v45 = CoreUICallSend(v41, &v63, 2LL);
      if ( v45 < 0 && v45 != -2018375675 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6864,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
          (const char *)(unsigned int)v45,
          v62);
    }
    else
    {
      if ( v38 )
        Microsoft::BamoImpl::BaseBamoConnectionImpl::TrackError(v38, -2018375675, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x181,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
        (const char *)0x87B20805LL,
        v62);
    }
  }
  v46 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::BamoStubImpl *))(*(_QWORD *)a3 + 40LL))(a3);
  if ( v46 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66A5,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v46,
      v62);
  if ( *(_BYTE *)(*((_QWORD *)a3 + 4) + 48LL) )
  {
    v61 = (__int64)a2 + 56;
    if ( !a2 )
      v61 = 72LL;
    *(_BYTE *)v61 = 1;
  }
  Microsoft::BamoImpl::BamoPrincipalImpl::GetItemId(this);
  v63 = _mm_unpacklo_epi32(_mm_loadl_epi64((const __m128i *)(v65 + 36)), (__m128i)0LL);
  LOWORD(v62) = 82;
  v47 = CoreUICallSend(a2, &v63, 2LL);
  if ( v47 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x66BB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
      (const char *)(unsigned int)v47,
      v62);
}
