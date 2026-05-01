/*
 * XREFs of ?GetLogo@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUSize@Foundation@5@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18003C4E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180001D20 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18003C21C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAUIRandomAccessStream@Streams@Storage@Windows@@@Fou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::GetLogo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __m128 v4; // xmm7
  __m128 v5; // xmm8
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  DWORD v17; // edx
  int v18; // r8d
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v23; // rcx
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  HRESULT v27; // eax
  HSTRING v28; // rbx
  int ActivationFactory; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // [rsp+38h] [rbp-49h] BYREF
  __int64 v42; // [rsp+40h] [rbp-41h] BYREF
  __int64 (__fastcall ***v43)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-39h] BYREF
  __int64 v44; // [rsp+50h] [rbp-31h] BYREF
  __int64 v45; // [rsp+58h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-21h] BYREF
  HSTRING string; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v44 = a2;
  v4 = (__m128)(unsigned int)a2;
  v5 = (__m128)HIDWORD(a2);
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  v41 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 64) + 80LL))(*(_QWORD *)(a1 + 64), &v41);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( v41 )
    {
      v42 = 0LL;
      v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v42);
      v8 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x43,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
          (const char *)(unsigned int)v10);
        v12 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
        v13 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        return (unsigned int)v8;
      }
      if ( v42 )
      {
        v43 = 0LL;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v42 + 48LL))(
                v42,
                v11,
                _mm_unpacklo_ps(v4, v5).m128_u64[0],
                &v43);
        v8 = v16;
        if ( v16 >= 0 )
        {
          v45 = 0LL;
          v22 = v43;
          v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::Streams::IRandomAccessStream *> *>(
                 v43,
                 v17,
                 v18);
          if ( v8 >= 0 )
            v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *))(*v22)[8])(
                   v22,
                   &v45);
          if ( v8 >= 0 )
          {
            v44 = 0LL;
            string = 0LL;
            v27 = WindowsCreateStringReference(
                    L"Windows.Storage.Streams.RandomAccessStreamReference",
                    0x33u,
                    &hstringHeader,
                    &string);
            if ( v27 < 0 )
            {
              Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
              JUMPOUT(0x18003CA04LL);
            }
            v28 = string;
            if ( v44 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
            ActivationFactory = RoGetActivationFactory(v28, &GUID_857309dc_3fbf_4e7d_986f_ef3b1a07a964, &v44);
            v8 = ActivationFactory;
            if ( ActivationFactory >= 0 )
            {
              v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v44 + 64LL))(v44, v45, a3);
              v8 = v35;
              if ( v35 < 0 )
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x58,
                  (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                  (const char *)(unsigned int)v35);
              v36 = v44;
              if ( v44 )
              {
                v44 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
              }
              v37 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
              }
              v38 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v38)[2])(v38);
              }
              v39 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
              }
              v40 = v41;
              if ( v41 )
              {
                v41 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
              }
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x56,
                (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
                (const char *)(unsigned int)ActivationFactory);
              v30 = v44;
              if ( v44 )
              {
                v44 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
              }
              v31 = v45;
              if ( v45 )
              {
                v45 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
              }
              v32 = v43;
              if ( v43 )
              {
                v43 = 0LL;
                ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
              }
              v33 = v42;
              if ( v42 )
              {
                v42 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
              }
              v34 = v41;
              if ( v41 )
              {
                v41 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
              }
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x4D,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
              (const char *)(unsigned int)v8);
            v23 = v45;
            if ( v45 )
            {
              v45 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
            }
            v24 = v43;
            if ( v43 )
            {
              v43 = 0LL;
              ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v24)[2])(v24);
            }
            v25 = v42;
            if ( v42 )
            {
              v42 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
            }
            v26 = v41;
            if ( v41 )
            {
              v41 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
            }
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4A,
            (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
            (const char *)(unsigned int)v16);
          v19 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v19)[2])(v19);
          }
          v20 = v42;
          if ( v42 )
          {
            v42 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          }
          v21 = v41;
          if ( v41 )
          {
            v41 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
        }
        return (unsigned int)v8;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x44,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)0x80004003LL);
      v14 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x40,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
        (const char *)0x80004003LL);
    }
    v15 = v41;
    if ( v41 )
    {
      v41 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return 2147500035LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3F,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\tileappdisplayinfo.cpp",
    (const char *)(unsigned int)v7);
  v9 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return (unsigned int)v8;
}
