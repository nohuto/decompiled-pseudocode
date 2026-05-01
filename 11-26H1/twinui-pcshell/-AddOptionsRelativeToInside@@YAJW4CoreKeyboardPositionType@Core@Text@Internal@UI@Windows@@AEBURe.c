/*
 * XREFs of ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@AEBURect@Foundation@6@AEBUMonitorInformationSnapshot@KeyboardHosting@@AEBUKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x18048737C
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x180250A00 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AddOptionsRelativeToInside(int a1, __int64 a2, __int64 a3, _DWORD *a4, char a5, __int64 *a6)
{
  int v6; // r14d
  int v7; // esi
  int v8; // eax
  __int64 *v9; // rcx
  __int128 v10; // xmm6
  __int64 v11; // rax
  __int128 v12; // xmm8
  __int64 (__fastcall *v13)(__int64 *, _OWORD *); // rax
  __int128 v14; // xmm9
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64 *, _OWORD *); // rax
  __int64 *v21; // rcx
  __int64 v22; // rax
  __int64 (__fastcall *v23)(__int64 *, _OWORD *); // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64 *, _OWORD *); // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  __int64 (__fastcall *v29)(__int64 *, _OWORD *); // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 (__fastcall *v32)(__int64 *, _OWORD *); // rax
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 (__fastcall *v35)(__int64 *, _OWORD *); // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 (__fastcall *v38)(__int64 *, _OWORD *); // rax
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 (__fastcall *v41)(__int64 *, _OWORD *); // rax
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 (__fastcall *v44)(__int64 *, __int128 *); // rax
  __int64 *v45; // rcx
  __int64 v46; // rax
  __int64 (__fastcall *v47)(__int64 *, __int128 *); // rax
  __int64 *v48; // rcx
  __int64 v49; // rax
  __int64 (__fastcall *v50)(__int64 *, __int128 *); // rax
  __int64 *v51; // rcx
  __int64 v52; // rax
  __int64 (__fastcall *v53)(__int64 *, __int128 *); // rax
  __int64 *v54; // rcx
  __int64 v55; // rax
  __int64 (__fastcall *v56)(__int64 *, __int128 *); // rax
  __int64 *v57; // rcx
  __int64 v58; // rax
  __int64 (__fastcall *v59)(__int64 *, __int128 *); // rax
  __int64 *v60; // rcx
  __int64 v61; // rax
  __int64 (__fastcall *v62)(__int64 *, __int128 *); // rax
  _OWORD v64[3]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v65; // [rsp+58h] [rbp-49h]
  __int128 v66; // [rsp+68h] [rbp-39h] BYREF
  __m256i v67; // [rsp+78h] [rbp-29h]
  __int64 v68; // [rsp+98h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+4Fh]

  v6 = (int)*(float *)(a2 + 8);
  v7 = (int)*(float *)(a2 + 12);
  v65 = 0LL;
  memset(v64, 0, sizeof(v64));
  BYTE8(v64[0]) = a5;
  BYTE9(v64[0]) = a5;
  v8 = (int)*(float *)(a3 + 72);
  LODWORD(v64[0]) = a1;
  v9 = (__int64 *)*a6;
  HIDWORD(v64[0]) = v8;
  v10 = v64[0];
  LODWORD(v64[1]) = (int)*(float *)(a3 + 68);
  DWORD2(v64[1]) = *a4;
  DWORD1(v64[1]) = a4[1];
  v11 = *v9;
  *(_QWORD *)((char *)&v64[1] + 12) = 0LL;
  v12 = v64[1];
  v13 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v11 + 104);
  v14 = v64[2];
  v66 = v64[0];
  DWORD1(v66) = 5;
  v64[0] = v66;
  v65 = 0LL;
  v15 = v13(v9, v64);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = (__int64 *)*a6;
    v66 = v10;
    DWORD1(v66) = 1;
    v19 = *v18;
    v64[1] = v12;
    v64[0] = v66;
    v64[2] = v14;
    v20 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v19 + 104);
    v65 = 0LL;
    v15 = v20(v18, v64);
    v16 = v15;
    if ( v15 >= 0 )
    {
      v21 = (__int64 *)*a6;
      v66 = v10;
      DWORD1(v66) = 9;
      v22 = *v21;
      v64[1] = v12;
      v64[0] = v66;
      v64[2] = v14;
      v23 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v22 + 104);
      v65 = 0LL;
      v15 = v23(v21, v64);
      v16 = v15;
      if ( v15 >= 0 )
      {
        v24 = (__int64 *)*a6;
        v66 = v10;
        DWORD1(v66) = 4;
        v25 = *v24;
        v64[1] = v12;
        v64[0] = v66;
        v64[2] = v14;
        v26 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v25 + 104);
        v65 = 0LL;
        v15 = v26(v24, v64);
        v16 = v15;
        if ( v15 >= 0 )
        {
          v27 = (__int64 *)*a6;
          v66 = v10;
          DWORD1(v66) = 0;
          v28 = *v27;
          v64[1] = v12;
          v64[0] = v66;
          v64[2] = v14;
          v29 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v28 + 104);
          v65 = 0LL;
          v15 = v29(v27, v64);
          v16 = v15;
          if ( v15 >= 0 )
          {
            v30 = (__int64 *)*a6;
            v66 = v10;
            DWORD1(v66) = 8;
            v31 = *v30;
            v64[1] = v12;
            v64[0] = v66;
            v64[2] = v14;
            v32 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v31 + 104);
            v65 = 0LL;
            v15 = v32(v30, v64);
            v16 = v15;
            if ( v15 >= 0 )
            {
              v33 = (__int64 *)*a6;
              v66 = v10;
              DWORD1(v66) = 6;
              v34 = *v33;
              v64[1] = v12;
              v64[0] = v66;
              v64[2] = v14;
              v35 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v34 + 104);
              v65 = 0LL;
              v15 = v35(v33, v64);
              v16 = v15;
              if ( v15 >= 0 )
              {
                v36 = (__int64 *)*a6;
                v66 = v10;
                DWORD1(v66) = 2;
                v37 = *v36;
                v64[1] = v12;
                v64[0] = v66;
                v64[2] = v14;
                v38 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v37 + 104);
                v65 = 0LL;
                v15 = v38(v36, v64);
                v16 = v15;
                if ( v15 >= 0 )
                {
                  v39 = (__int64 *)*a6;
                  v66 = v10;
                  DWORD1(v66) = 10;
                  v40 = *v39;
                  v64[1] = v12;
                  v64[0] = v66;
                  v64[2] = v14;
                  v41 = *(__int64 (__fastcall **)(__int64 *, _OWORD *))(v40 + 104);
                  v65 = 0LL;
                  v15 = v41(v39, v64);
                  v16 = v15;
                  if ( v15 >= 0 )
                  {
                    v42 = (__int64 *)*a6;
                    v64[0] = v10;
                    DWORD1(v64[0]) = 7;
                    v64[1] = v12;
                    v43 = *v42;
                    HIDWORD(v64[0]) = v7;
                    HIDWORD(v64[1]) = v7;
                    v44 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v43 + 104);
                    v66 = v64[0];
                    *(_OWORD *)v67.m256i_i8 = v64[1];
                    *(_OWORD *)&v67.m256i_u64[2] = v14;
                    v68 = 0LL;
                    v15 = v44(v42, &v66);
                    v16 = v15;
                    if ( v15 >= 0 )
                    {
                      v45 = (__int64 *)*a6;
                      v64[0] = v10;
                      DWORD1(v64[0]) = 3;
                      v64[1] = v12;
                      v46 = *v45;
                      HIDWORD(v64[0]) = v7;
                      HIDWORD(v64[1]) = v7;
                      v47 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v46 + 104);
                      v66 = v64[0];
                      *(_OWORD *)v67.m256i_i8 = v64[1];
                      *(_OWORD *)&v67.m256i_u64[2] = v14;
                      v68 = 0LL;
                      v15 = v47(v45, &v66);
                      v16 = v15;
                      if ( v15 >= 0 )
                      {
                        v48 = (__int64 *)*a6;
                        v64[0] = v10;
                        DWORD1(v64[0]) = 11;
                        v64[1] = v12;
                        v49 = *v48;
                        HIDWORD(v64[0]) = v7;
                        HIDWORD(v64[1]) = v7;
                        v50 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v49 + 104);
                        v66 = v64[0];
                        *(_OWORD *)v67.m256i_i8 = v64[1];
                        *(_OWORD *)&v67.m256i_u64[2] = v14;
                        v68 = 0LL;
                        v15 = v50(v48, &v66);
                        v16 = v15;
                        if ( v15 >= 0 )
                        {
                          v51 = (__int64 *)*a6;
                          v64[0] = v10;
                          DWORD1(v64[0]) = 13;
                          v52 = *v51;
                          v64[1] = v12;
                          LODWORD(v64[1]) = v6;
                          v53 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v52 + 104);
                          v66 = v64[0];
                          *(_OWORD *)v67.m256i_i8 = v64[1];
                          *(_OWORD *)&v67.m256i_u64[2] = v14;
                          v68 = 0LL;
                          v15 = v53(v51, &v66);
                          v16 = v15;
                          if ( v15 >= 0 )
                          {
                            v54 = (__int64 *)*a6;
                            v64[0] = v10;
                            DWORD1(v64[0]) = 3;
                            v55 = *v54;
                            v64[1] = v12;
                            LODWORD(v64[1]) = v6;
                            v56 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v55 + 104);
                            v66 = v64[0];
                            *(_OWORD *)v67.m256i_i8 = v64[1];
                            *(_OWORD *)&v67.m256i_u64[2] = v14;
                            v68 = 0LL;
                            v15 = v56(v54, &v66);
                            v16 = v15;
                            if ( v15 >= 0 )
                            {
                              v57 = (__int64 *)*a6;
                              v64[0] = v10;
                              DWORD1(v64[0]) = 14;
                              v58 = *v57;
                              v64[1] = v12;
                              LODWORD(v64[1]) = v6;
                              v59 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v58 + 104);
                              v66 = v64[0];
                              *(_OWORD *)v67.m256i_i8 = v64[1];
                              *(_OWORD *)&v67.m256i_u64[2] = v14;
                              v68 = 0LL;
                              v15 = v59(v57, &v66);
                              v16 = v15;
                              if ( v15 >= 0 )
                              {
                                v60 = (__int64 *)*a6;
                                v64[0] = v10;
                                DWORD1(v64[0]) = 15;
                                v64[1] = v12;
                                v61 = *v60;
                                v64[2] = v14;
                                HIDWORD(v64[0]) = v7;
                                v62 = *(__int64 (__fastcall **)(__int64 *, __int128 *))(v61 + 104);
                                LODWORD(v64[1]) = v6;
                                v66 = v64[0];
                                *(_QWORD *)((char *)&v64[1] + 12) = __PAIR64__(v6, v7);
                                v67 = *(__m256i *)&v64[1];
                                v68 = 0LL;
                                v15 = v62(v60, &v66);
                                v16 = v15;
                                if ( v15 >= 0 )
                                {
                                  v16 = 0;
                                  goto LABEL_35;
                                }
                                v17 = 305LL;
                              }
                              else
                              {
                                v17 = 288LL;
                              }
                            }
                            else
                            {
                              v17 = 283LL;
                            }
                          }
                          else
                          {
                            v17 = 278LL;
                          }
                        }
                        else
                        {
                          v17 = 264LL;
                        }
                      }
                      else
                      {
                        v17 = 258LL;
                      }
                    }
                    else
                    {
                      v17 = 252LL;
                    }
                  }
                  else
                  {
                    v17 = 237LL;
                  }
                }
                else
                {
                  v17 = 233LL;
                }
              }
              else
              {
                v17 = 229LL;
              }
            }
            else
            {
              v17 = 225LL;
            }
          }
          else
          {
            v17 = 221LL;
          }
        }
        else
        {
          v17 = 217LL;
        }
      }
      else
      {
        v17 = 213LL;
      }
    }
    else
    {
      v17 = 209LL;
    }
  }
  else
  {
    v17 = 205LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
    (const char *)(unsigned int)v15);
LABEL_35:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a6);
  return v16;
}
