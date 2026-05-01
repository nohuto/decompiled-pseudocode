/*
 * XREFs of ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformation@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18010D9B8
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180035E80 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AddOptionsRelativeToInside(int a1, __int64 a2, __int64 a3, unsigned int *a4, char a5, __int64 *a6)
{
  int v7; // r14d
  int v8; // esi
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  int v11; // edx
  int v12; // ecx
  __int128 v13; // xmm6
  __int128 v14; // xmm8
  __int128 v15; // xmm9
  _QWORD *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rcx
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // rcx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  __int64 v33; // rax
  _QWORD *v34; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rcx
  __int64 v37; // rax
  _QWORD *v38; // rcx
  __int64 v39; // rax
  _QWORD *v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rcx
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v52; // rdx
  __int128 v53; // [rsp+28h] [rbp-79h] BYREF
  __int128 v54; // [rsp+38h] [rbp-69h]
  __int128 v55; // [rsp+48h] [rbp-59h]
  __int64 v56; // [rsp+58h] [rbp-49h]
  __int128 v57; // [rsp+68h] [rbp-39h] BYREF
  __int128 v58; // [rsp+78h] [rbp-29h]
  __int128 v59; // [rsp+88h] [rbp-19h]
  __int64 v60; // [rsp+98h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v7 = (int)*(float *)(a2 + 8);
  v8 = (int)*(float *)(a2 + 12);
  v9 = *a4;
  v10 = a4[1];
  v11 = (int)*(float *)(a3 + 68);
  v12 = (int)*(float *)(a3 + 72);
  v53 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  LODWORD(v53) = a1;
  BYTE8(v53) = a5;
  BYTE9(v53) = a5;
  HIDWORD(v53) = v12;
  *(_QWORD *)&v54 = __PAIR64__(v10, v11);
  LODWORD(v55) = 0;
  *((_QWORD *)&v54 + 1) = v9;
  v13 = v53;
  v57 = v53;
  v14 = v54;
  v15 = v55;
  DWORD1(v57) = 5;
  v16 = (_QWORD *)*a6;
  v17 = *(_QWORD *)*a6;
  v53 = v57;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v17 + 104))(v16, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 58LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 1;
  v20 = (_QWORD *)*a6;
  v21 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v21 + 104))(v20, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 62LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 9;
  v22 = (_QWORD *)*a6;
  v23 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v23 + 104))(v22, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 66LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 4;
  v24 = (_QWORD *)*a6;
  v25 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v25 + 104))(v24, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 70LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 0;
  v26 = (_QWORD *)*a6;
  v27 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v27 + 104))(v26, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 74LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 8;
  v28 = (_QWORD *)*a6;
  v29 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v29 + 104))(v28, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 78LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 6;
  v30 = (_QWORD *)*a6;
  v31 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v31 + 104))(v30, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 82LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 2;
  v32 = (_QWORD *)*a6;
  v33 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v33 + 104))(v32, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 86LL;
    goto LABEL_21;
  }
  v57 = v13;
  DWORD1(v57) = 10;
  v34 = (_QWORD *)*a6;
  v35 = *(_QWORD *)*a6;
  v53 = v57;
  v54 = v14;
  v55 = v15;
  v56 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v35 + 104))(v34, &v53);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 90LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 7;
  HIDWORD(v53) = v8;
  HIDWORD(v54) = v8;
  v36 = (_QWORD *)*a6;
  v37 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v37 + 104))(v36, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 105LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 3;
  HIDWORD(v53) = v8;
  HIDWORD(v54) = v8;
  v38 = (_QWORD *)*a6;
  v39 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v39 + 104))(v38, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 111LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 11;
  HIDWORD(v53) = v8;
  HIDWORD(v54) = v8;
  v40 = (_QWORD *)*a6;
  v41 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v41 + 104))(v40, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 117LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 13;
  LODWORD(v54) = v7;
  v42 = (_QWORD *)*a6;
  v43 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v43 + 104))(v42, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 131LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 3;
  LODWORD(v54) = v7;
  v44 = (_QWORD *)*a6;
  v45 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(_QWORD *, __int128 *))(v45 + 104))(v44, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 136LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v52,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v18);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
    return v19;
  }
  v53 = v13;
  v54 = v14;
  DWORD1(v53) = 14;
  LODWORD(v54) = v7;
  v46 = *a6;
  v47 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v15;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v47 + 104))(v46, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 141LL;
    goto LABEL_21;
  }
  v53 = v13;
  v54 = v14;
  v55 = v15;
  DWORD1(v53) = 15;
  HIDWORD(v53) = v8;
  LODWORD(v54) = v7;
  HIDWORD(v54) = v8;
  LODWORD(v55) = v7;
  v48 = *a6;
  v49 = *(_QWORD *)*a6;
  v57 = v53;
  v58 = v54;
  v59 = v55;
  v60 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64, __int128 *))(v49 + 104))(v48, &v57);
  v19 = v18;
  if ( v18 < 0 )
  {
    v52 = 158LL;
    goto LABEL_21;
  }
  v50 = *a6;
  if ( *a6 )
  {
    *a6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  return 0LL;
}
