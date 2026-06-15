/*
 * XREFs of ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x180012890
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180012F0C (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180012FDC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180016D50 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180017BC0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x180018350 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180019060 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180019EA0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001A8D8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180028504 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800B31FC (memcpy_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSessionManager::GetCurrentSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        void **a7,
        unsigned __int16 **a8)
{
  struct IAudioProcess *v9; // r14
  void **v11; // r12
  __int64 v12; // rbx
  const unsigned __int16 *v13; // rdx
  int v14; // edi
  signed int v15; // r15d
  int v16; // r13d
  char *v17; // r9
  __int64 v18; // rax
  struct IAudioProcess *v19; // rcx
  __int64 v20; // rsi
  _WORD *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  _WORD *v25; // rax
  unsigned int v26; // eax
  CAudioSessionManager *v27; // r15
  struct CAudioSession *v28; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  const void *v32; // r12
  __int64 v33; // rdi
  _DWORD *v34; // r9
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r14
  __int64 (__fastcall *v40)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **); // rdi
  unsigned int v41; // eax
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // rax
  const void *v45; // r12
  __int64 v46; // rdi
  char *v47; // rdx
  __int64 v48; // rsi
  char *v49; // rdx
  unsigned __int64 v50; // r13
  unsigned __int64 v51; // r14
  int v52; // eax
  __int64 v53; // rcx
  struct CAudioSession *v55; // [rsp+48h] [rbp-A1h] BYREF
  __int64 v56; // [rsp+50h] [rbp-99h] BYREF
  struct IAudioProcess *v57; // [rsp+58h] [rbp-91h]
  unsigned __int16 **v58; // [rsp+60h] [rbp-89h]
  void *v59; // [rsp+68h] [rbp-81h] BYREF
  const struct _GUID *v60; // [rsp+70h] [rbp-79h]
  CAudioSessionManager *v61; // [rsp+78h] [rbp-71h]
  void **v62; // [rsp+80h] [rbp-69h]
  char v63[8]; // [rsp+90h] [rbp-59h] BYREF
  void *v64; // [rsp+98h] [rbp-51h] BYREF
  void *v65; // [rsp+A0h] [rbp-49h] BYREF
  GUID v66; // [rsp+A8h] [rbp-41h]
  int v67; // [rsp+C0h] [rbp-29h]
  int v68; // [rsp+C8h] [rbp-21h]
  int v69; // [rsp+CCh] [rbp-1Dh]
  int v70; // [rsp+D0h] [rbp-19h]

  v60 = a3;
  v9 = a2;
  v57 = a2;
  v61 = this;
  v62 = a7;
  v11 = (void **)a8;
  v58 = a8;
  v12 = ((__int64 (__fastcall *)(void ***))ATL::g_strmgr[3])(&ATL::g_strmgr) + 24;
  v56 = v12;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v63);
  v55 = 0LL;
  v59 = 0LL;
  *a8 = 0LL;
  v13 = (const unsigned __int16 *)((char *)this + 240);
  if ( *((_QWORD *)this + 33) > 7uLL )
    v13 = *(const unsigned __int16 **)v13;
  v14 = CAudioEndpointId::Initialize((CAudioEndpointId *)v63, v13);
  v15 = -2147024809;
  if ( v14 < 0 )
    goto LABEL_4;
  v16 = a6;
  if ( a6 )
  {
    if ( !a3 )
      goto LABEL_47;
    v30 = *(_QWORD *)&a3->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v30 = *(_QWORD *)a3->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v30 )
    {
LABEL_47:
      v14 = -2147024809;
      goto LABEL_48;
    }
  }
  else if ( !a3 )
  {
    v66 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_51;
  }
  v66 = *a3;
  if ( !a6 )
  {
LABEL_51:
    v31 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 72LL))(v9);
    v32 = (const void *)v31;
    if ( !v31 )
      goto LABEL_70;
    v33 = -1LL;
    do
      ++v33;
    while ( *(_WORD *)(v31 + 2 * v33) );
    if ( !(_DWORD)v33 )
    {
LABEL_70:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v65);
      goto LABEL_76;
    }
    v34 = v65;
    v35 = *((unsigned int *)v65 - 4);
    v36 = (v31 - (__int64)v65) >> 1;
    v37 = *((_DWORD *)v65 - 3) - v33;
    v38 = v37 | (unsigned int)(1 - *((_DWORD *)v65 - 2));
    if ( (v37 | (1 - *((_DWORD *)v65 - 2))) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v65, (unsigned int)v33);
      v34 = v65;
    }
    v39 = 2LL * (int)v33;
    if ( v36 <= v35 )
    {
      v47 = (char *)v34 + 2 * v36;
      if ( !v39 )
      {
LABEL_73:
        if ( (int)v33 < 0 || (int)v33 > *(v34 - 3) )
          goto LABEL_67;
        *(v34 - 4) = v33;
        *(_WORD *)((char *)v65 + v39) = 0;
        v9 = v57;
        v16 = a6;
LABEL_76:
        v44 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 80LL))(v9);
        v45 = (const void *)v44;
        if ( !v44 )
          goto LABEL_80;
        v46 = -1LL;
        do
          ++v46;
        while ( *(_WORD *)(v44 + 2 * v46) );
        if ( !(_DWORD)v46 )
        {
LABEL_80:
          ATL::CSimpleStringT<unsigned short,0>::Empty(&v64);
          goto LABEL_10;
        }
        v17 = (char *)v64;
        v50 = *((unsigned int *)v64 - 4);
        v51 = (v44 - (__int64)v64) >> 1;
        v52 = *((_DWORD *)v64 - 3) - v46;
        v53 = v52 | (unsigned int)(1 - *((_DWORD *)v64 - 2));
        if ( (v52 | (1 - *((_DWORD *)v64 - 2))) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v64, (unsigned int)v46);
          v17 = (char *)v64;
        }
        v48 = 2LL * (int)v46;
        if ( v51 <= v50 )
        {
          v49 = &v17[2 * v51];
          if ( !v48 )
            goto LABEL_7;
          if ( v17 && v49 )
          {
            memmove_0(v17, v49, 2LL * (int)v46);
            goto LABEL_6;
          }
        }
        else
        {
          if ( !v48 )
            goto LABEL_7;
          if ( v17 )
          {
            memcpy_0(v17, v45, 2LL * (int)v46);
            goto LABEL_6;
          }
        }
        *(_DWORD *)_o__errno(v53) = 22;
        invalid_parameter_noinfo();
LABEL_6:
        v17 = (char *)v64;
LABEL_7:
        if ( (int)v46 >= 0 && (int)v46 <= *((_DWORD *)v17 - 3) )
        {
          *((_DWORD *)v17 - 4) = v46;
          *((_WORD *)v64 + (int)v46) = 0;
          v9 = v57;
          v16 = a6;
LABEL_10:
          v11 = (void **)v58;
          goto LABEL_11;
        }
LABEL_67:
        ATL::AtlThrowImpl(-2147024809);
      }
      if ( v34 && v47 )
      {
        memmove_0(v34, v47, 2LL * (int)v33);
        goto LABEL_72;
      }
    }
    else
    {
      if ( !v39 )
        goto LABEL_73;
      if ( v34 )
      {
        memcpy_0(v34, v32, 2LL * (int)v33);
LABEL_72:
        v34 = v65;
        goto LABEL_73;
      }
    }
    *(_DWORD *)_o__errno(v38) = 22;
    invalid_parameter_noinfo();
    goto LABEL_72;
  }
LABEL_11:
  v67 = v16;
  v14 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v64);
  if ( v14 < 0 )
LABEL_48:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v14);
  if ( v14 < 0 )
    goto LABEL_4;
  v70 = v16;
  v18 = *(_QWORD *)v9;
  v19 = v9;
  if ( v16 )
  {
    v68 = 0;
  }
  else
  {
    v68 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v18 + 40))(v9);
    v18 = *(_QWORD *)v9;
    v19 = v9;
  }
  v69 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v18 + 48))(v19);
  v14 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v63);
  if ( v14 < 0 )
  {
LABEL_4:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v14);
    v16 = a6;
  }
  if ( v14 < 0 )
    goto LABEL_31;
  v14 = CAudioSessionInstanceId::ToString(v63, &v56);
  v12 = v56;
  if ( v14 < 0 )
    goto LABEL_31;
  v20 = (unsigned int)(*(_DWORD *)(v56 - 16) + 1);
  if ( (unsigned __int64)(2 * v20) > 0x40000 )
  {
    *v11 = 0LL;
    goto LABEL_98;
  }
  v21 = operator new[](2 * v20, (const struct std::nothrow_t *)&std::nothrow);
  *v11 = v21;
  if ( !v21 )
  {
LABEL_98:
    v14 = -2147024882;
    goto LABEL_31;
  }
  v23 = 2147483646LL;
  if ( (unsigned __int64)(v20 - 1) > 0x7FFFFFFE )
  {
    v14 = -2147024809;
    if ( v20 )
    {
      *v21 = 0;
      goto LABEL_41;
    }
  }
  else
  {
    v24 = v12 - (_QWORD)v21;
    do
    {
      if ( !v23 )
        break;
      v22 = *(unsigned __int16 *)((char *)v21 + v24);
      if ( !(_WORD)v22 )
        break;
      *v21++ = v22;
      --v23;
      --v20;
    }
    while ( v20 );
    v25 = v21 - 1;
    if ( v20 )
      v25 = v21;
    *v25 = 0;
    v15 = v20 == 0 ? 0x8007007A : 0;
  }
  v14 = v15;
  if ( v15 < 0 )
  {
LABEL_41:
    operator delete(*v11);
    *v11 = 0LL;
LABEL_31:
    v28 = v55;
    goto LABEL_32;
  }
  if ( v16 )
  {
    v43 = *(_QWORD *)&v60->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
    if ( *(_QWORD *)&v60->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
      v43 = *(_QWORD *)v60->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
    if ( !v43 )
      a4 |= 4u;
  }
  v26 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _WORD *, __int64, _QWORD))(*(_QWORD *)v9 + 40LL))(
          v9,
          v21,
          v22,
          0LL);
  v27 = v61;
  v14 = CAudioSessionManager::CreateAudioSession(v61, v9, (struct CAudioSessionInstanceId *)v63, a4, a5, v26, &v55);
  if ( v14 < 0 )
    goto LABEL_31;
  v40 = **(__int64 (__fastcall ***)(CAudioSessionManager *, _QWORD, __int64, struct CAudioSession *, void **))v27;
  v41 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v9 + 40LL))(v9);
  v28 = v55;
  LOBYTE(v42) = 1;
  v14 = v40(v27, v41, v42, v55, &v59);
  if ( v14 >= 0 )
  {
    *v62 = v59;
    goto LABEL_34;
  }
LABEL_32:
  if ( *v11 )
  {
    operator delete(*v11);
    *v11 = 0LL;
  }
LABEL_34:
  if ( v28 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v14 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x570u, v14);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v63);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v12 - 24) + 8LL))(*(_QWORD *)(v12 - 24));
  return (unsigned int)v14;
}
