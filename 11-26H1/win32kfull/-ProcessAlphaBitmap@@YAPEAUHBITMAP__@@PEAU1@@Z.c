/*
 * XREFs of ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x140015AE0
 * Callers:
 *     ?_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z @ 0x140029AD0 (-_SetCursorIconDataEx@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@KI@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x140014058 (GreExtGetObjectW.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ @ 0x14001678C (--0-$UnexpectedThreadTerminationHandler@VOPTAPIDCOBJ@@@@QEAA@XZ.c)
 *     ?GrepCreateDIBitmap@@YA?AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x1400167D4 (-GrepCreateDIBitmap@@YA-AVSURFREF@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14006AB10 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ?GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400B4DDC (-GrepGetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400B5850 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessAlphaBitmap(Gre::Base *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 UserSessionState; // rax
  Gre::Base *v5; // rcx
  __int64 v6; // rdi
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // r12d
  Gre::Base *v15; // rcx
  __int64 v16; // r14
  unsigned int v17; // esi
  struct Gre::Base::SESSION_GLOBALS *v18; // rax
  int DIBits; // eax
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r10
  __int64 v29; // r11
  unsigned int v30; // r8d
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int128 v33; // [rsp+80h] [rbp-80h] BYREF
  __int128 v34; // [rsp+90h] [rbp-70h]
  _QWORD v35[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v36; // [rsp+B8h] [rbp-48h]
  __int64 v37[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v38; // [rsp+D8h] [rbp-28h]
  __int64 v39; // [rsp+E0h] [rbp-20h] BYREF
  int v40; // [rsp+E8h] [rbp-18h]
  struct Gre::Base::SESSION_GLOBALS *v41; // [rsp+F0h] [rbp-10h]
  __int64 v42; // [rsp+F8h] [rbp-8h]
  char v43[32]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v44[32]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v45; // [rsp+140h] [rbp+40h]
  __int16 v46; // [rsp+148h] [rbp+48h]
  __int64 v47; // [rsp+150h] [rbp+50h] BYREF
  int v48; // [rsp+158h] [rbp+58h]
  struct Gre::Base::SESSION_GLOBALS *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  char v51[32]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v52[32]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v53; // [rsp+1B0h] [rbp+B0h]
  __int16 v54; // [rsp+1B8h] [rbp+B8h]
  _BYTE v55[32]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 *v56; // [rsp+1E0h] [rbp+E0h]
  int v57; // [rsp+1E8h] [rbp+E8h] BYREF
  __int64 v58; // [rsp+1ECh] [rbp+ECh]
  __int64 v59; // [rsp+1F4h] [rbp+F4h]
  __int128 v60; // [rsp+1FCh] [rbp+FCh]
  __int64 v61; // [rsp+20Ch] [rbp+10Ch]

  if ( a1 )
  {
    v33 = 0LL;
    v34 = 0LL;
    if ( (unsigned int)GreExtGetObjectW(a1, 32, &v33) )
    {
      if ( (_DWORD)v34 == 2097153 )
      {
        v3 = 0LL;
        v58 = *(_QWORD *)((char *)&v33 + 4);
        v61 = 0LL;
        v31 = 0LL;
        v60 = 0LL;
        v57 = 40;
        v59 = 2097153LL;
        UserSessionState = W32GetUserSessionState(v2, v1);
        memset(v35, 0, sizeof(v35));
        v5 = *(Gre::Base **)(UserSessionState + 56968);
        v36 = 0;
        v6 = *((_QWORD *)v5 + 7);
        v7 = Gre::Base::Globals(v5);
        v42 = 0LL;
        v41 = v7;
        v39 = 0LL;
        v40 = 0;
        UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v43);
        UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v44);
        v45 = v6;
        v46 = 1;
        GrepCreateDIBitmap(v55, &v39, 0LL, v35, &v57, 0, 44, 0LL, 0, 0LL, 0, 0LL, &v31);
        if ( v56 )
        {
          HmgIncrementShareReferenceCount(v41);
          v8 = *v56;
          v32 = *v56;
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
          v9 = v39;
          if ( !(_BYTE)v46 )
            v9 = 0LL;
          v39 = v9;
          PopThreadGuardedObject(v44);
          DCOBJ::~DCOBJ((DCOBJ *)&v39);
          if ( !v8 )
            return v8;
          v12 = v31;
          v58 = *(_QWORD *)((char *)&v33 + 4);
          v60 = 0LL;
          v61 = 0LL;
          v57 = 40;
          v59 = 2097153LL;
          v13 = W32GetUserSessionState(v11, v10);
          v14 = v57;
          v15 = *(Gre::Base **)(v13 + 56968);
          v37[0] = v12;
          v16 = *((_QWORD *)v15 + 7);
          v17 = HIDWORD(v58) * (((32 * (int)v58) >> 3) & 0xFFFFFFFC);
          v37[2] = 0LL;
          v38 = 0;
          v37[1] = v17;
          v18 = Gre::Base::Globals(v15);
          v50 = 0LL;
          v49 = v18;
          v47 = 0LL;
          v48 = 0;
          UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v51);
          UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>(v52);
          v53 = v16;
          v54 = 1;
          DIBits = GrepGetDIBits((OPTAPIDCOBJ *)&v47, (__int64)v37, &v57, 0, v17, v14);
          v20 = v47;
          v21 = DIBits;
          if ( !(_BYTE)v54 )
            v20 = 0LL;
          v47 = v20;
          PopThreadGuardedObject(v52);
          DCOBJ::~DCOBJ((DCOBJ *)&v47);
          v23 = v32;
          v24 = v32;
          if ( v21 )
          {
            v27 = 0;
            v22 = (unsigned int)(v58 * HIDWORD(v58));
            v28 = v31;
            while ( v27 < (unsigned int)v22 )
            {
              if ( *(_BYTE *)(v31 + 4LL * v27 + 3) )
              {
                v8 = v23;
                if ( (_DWORD)v22 )
                {
                  v29 = (unsigned int)v22;
                  while ( 1 )
                  {
                    v30 = *(_DWORD *)(v3 + v28);
                    v3 += 4LL;
                    *(_BYTE *)(v3 + v28 - 2) = HIBYTE(v30) * BYTE2(v30) / 0xFFu;
                    *(_BYTE *)(v3 + v31 - 3) = HIBYTE(v30) * BYTE1(v30) / 0xFFu;
                    v22 = HIBYTE(v30) * (unsigned __int8)v30 / 0xFFu;
                    *(_BYTE *)(v3 + v31 - 4) = v22;
                    if ( !--v29 )
                      break;
                    v28 = v31;
                  }
                }
                LOBYTE(v22) = 5;
                GreDecrementObjectReferenceCount(v24, v22);
                return v8;
              }
              ++v27;
              v23 = v32;
            }
          }
          LOBYTE(v22) = 5;
          GreDereferenceObject(v32, v22, 0LL);
        }
        else
        {
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v55);
          v26 = v39;
          if ( !(_BYTE)v46 )
            v26 = 0LL;
          v39 = v26;
          PopThreadGuardedObject(v44);
          DCOBJ::~DCOBJ((DCOBJ *)&v39);
        }
        return 0LL;
      }
    }
  }
  return 0LL;
}
