/*
 * XREFs of ?Show@TouchKeyboardExperienceManager@@UEAAJIURect@Foundation@Windows@@PEAUIViewOptions@Text@Shell@Internal@4@@Z @ 0x1801D9C30
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??0ViewOptions@@QEAA@AEBU0@@Z @ 0x180026E24 (--0ViewOptions@@QEAA@AEBU0@@Z.c)
 *     ?_Tidy@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ @ 0x180028798 (-_Tidy@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801C392C (--4-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEA.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x180288CFC (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ??$_Reallocate@$0A@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@AEAAXAEA_K@Z @ 0x180465D90 (--$_Reallocate@$0A@@-$vector@URect@Foundation@Windows@@V-$allocator@URect@Foundation@Windows@@@s.c)
 *     ??$emplace_back@AEAURect@Foundation@Windows@@@?$vector@URect@Foundation@Windows@@V?$allocator@URect@Foundation@Windows@@@std@@@std@@QEAAAEAURect@Foundation@Windows@@AEAU234@@Z @ 0x180466390 (--$emplace_back@AEAURect@Foundation@Windows@@@-$vector@URect@Foundation@Windows@@V-$allocator@UR.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TouchKeyboardExperienceManager::Show(__int64 a1, unsigned int a2, float *a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  int v16; // eax
  __int64 v17; // rcx
  unsigned int i; // ebx
  int v19; // eax
  int v20; // edi
  ViewOptions *v21; // rax
  float v22; // xmm0_4
  float v23; // xmm1_4
  int v24; // eax
  int v26; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+28h] [rbp-D8h] BYREF
  unsigned int v28; // [rsp+30h] [rbp-D0h] BYREF
  int v29; // [rsp+34h] [rbp-CCh] BYREF
  int v30; // [rsp+38h] [rbp-C8h] BYREF
  int v31; // [rsp+3Ch] [rbp-C4h] BYREF
  __int128 v32; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  int v35; // [rsp+68h] [rbp-98h]
  int v36; // [rsp+6Ch] [rbp-94h]
  ViewOptions v37[14]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v38[4]; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+ACh] [rbp-54h]
  int v40; // [rsp+B0h] [rbp-50h]
  int v41; // [rsp+B4h] [rbp-4Ch]
  __int128 v42; // [rsp+B8h] [rbp-48h]
  __int128 v43; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v44; // [rsp+D8h] [rbp-28h]
  __int128 v45; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v46; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v26 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v46 = 0LL;
  v27 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 48LL))(a4, &v26);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 6273LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v8);
LABEL_40:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
    return v9;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 56LL))(a4, (char *)&v26 + 1);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 6274LL;
    goto LABEL_5;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 64LL))(a4, (char *)&v26 + 2);
  v9 = v11;
  if ( v11 >= 0 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a4 + 72LL))(a4, (char *)&v26 + 3);
    v9 = v13;
    if ( v13 >= 0 )
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 80LL))(a4, &v29);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6277LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 88LL))(a4, &v30);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6278LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a4 + 96LL))(a4, &v31);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6279LL;
        goto LABEL_5;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a4 + 104LL))(a4, &v46);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6280LL;
        goto LABEL_5;
      }
      v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a4 + 112LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v27);
      v8 = v15(a4, &v27);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 6281LL;
        goto LABEL_5;
      }
      v32 = 0LL;
      v33 = 0LL;
      v28 = 0;
      v16 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v27 + 56LL))(v27, &v28);
      v9 = v16;
      if ( v16 >= 0 )
      {
        v34 = v28;
        if ( v28 > (unsigned __int64)((v33 - (__int64)v32) >> 4) )
          std::vector<Windows::Foundation::Rect>::_Reallocate<0>(&v32, &v34);
        for ( i = 0; i < v28; ++i )
        {
          v45 = 0LL;
          v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v27 + 48LL))(v27, i, &v45);
          v20 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1892,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v19);
            std::vector<Geometry::CRect>::_Tidy((__int64 *)&v32);
            v9 = v20;
            goto LABEL_40;
          }
          std::vector<Windows::Foundation::Rect>::emplace_back<Windows::Foundation::Rect &>(&v32, &v45);
        }
        v43 = 0LL;
        v44 = 0LL;
        v38[0] = (_BYTE)v26 != 0;
        v38[1] = BYTE1(v26) != 0;
        v38[2] = BYTE2(v26) != 0;
        v38[3] = HIBYTE(v26) != 0;
        v39 = v29;
        v40 = v30;
        v41 = v31;
        v42 = v46;
        std::vector<Windows::Foundation::Rect>::operator=((__int64 *)&v43, (__int64 *)&v32);
        v21 = ViewOptions::ViewOptions(v37, (const struct ViewOptions *)v38);
        v22 = *a3;
        v23 = a3[1];
        LODWORD(v34) = (int)*a3;
        HIDWORD(v34) = (int)v23;
        v35 = (int)(float)(v22 + a3[2]);
        v36 = (int)(float)(v23 + a3[3]);
        v24 = TouchKeyboardExperienceManager::OnInputAppRequestedShow(a1 - 200, a2, &v34, v21);
        v9 = v24;
        if ( v24 >= 0 )
        {
          std::vector<Geometry::CRect>::_Tidy((__int64 *)&v43);
          std::vector<Geometry::CRect>::_Tidy((__int64 *)&v32);
          v9 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18A1,
            (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
            (const char *)(unsigned int)v24);
          std::vector<Geometry::CRect>::_Tidy((__int64 *)&v43);
          std::vector<Geometry::CRect>::_Tidy((__int64 *)&v32);
        }
        goto LABEL_40;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x188D,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v16);
      if ( (_QWORD)v32 )
      {
        std::_Deallocate<16>(v32, (v33 - v32) & 0xFFFFFFFFFFFFFFF0uLL);
        v32 = 0LL;
        v33 = 0LL;
      }
      v17 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1884,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v13);
      v14 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1883,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
    v12 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  return v9;
}
