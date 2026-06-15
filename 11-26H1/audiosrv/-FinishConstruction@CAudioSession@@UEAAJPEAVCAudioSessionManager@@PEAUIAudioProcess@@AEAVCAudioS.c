/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x180027B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018490 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x18001A94C (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180025A18 (--$_Emplace_reallocate@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x180028134 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x1800281C4 (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AF174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800B0154 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800B314E (_invalid_parameter_noinfo.c)
 *     memcmp_0 @ 0x1800B31F0 (memcmp_0.c)
 *     memmove_0 @ 0x1801626F8 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=2
int __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct CAudioSessionManager *a2,
        struct IAudioProcess *a3,
        struct CAudioSessionInstanceId *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _GUID *Buf1)
{
  CAudioSession *v11; // r15
  _QWORD *v12; // r14
  _QWORD *v13; // rdx
  char *v14; // rcx
  int v15; // eax
  int v16; // r14d
  int v17; // eax
  unsigned int v18; // r12d
  bool v19; // zf
  struct _GUID *v20; // r14
  unsigned int v21; // eax
  HRESULT v22; // eax
  HRESULT v23; // r14d
  int v24; // eax
  int v25; // r14d
  int v26; // eax
  int v27; // esi
  const char *v28; // r9
  int result; // eax
  unsigned int v30; // eax
  _OWORD *v31; // rcx
  char *v32; // rdx
  _OWORD *v33; // rcx
  char *v34; // rdx
  char *v35; // r13
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  char *v38; // r13
  __int64 v39; // rax
  unsigned __int64 v40; // r15
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char *v43; // [rsp+88h] [rbp+10h] BYREF
  struct IAudioProcess *v44; // [rsp+90h] [rbp+18h]

  v44 = a3;
  try
  {
    v11 = this;
    *((_QWORD *)this + 53) = a2;
    v12 = (_QWORD *)((char *)this + 704);
    v43 = (char *)a3;
    if ( a3 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = (_QWORD *)v12[1];
    if ( v13 == (_QWORD *)v12[2] )
    {
      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>(
        v12,
        (__int64)v13,
        (__int64 *)&v43);
      v14 = v43;
    }
    else
    {
      v14 = 0LL;
      *v13 = a3;
      v12[1] += 8LL;
    }
    if ( v14 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v14 + 16LL))(v14);
    *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 96LL))(a3) != 0;
    v15 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)this + 584), a4);
    v16 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A5,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v15);
      return v16;
    }
    v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 40LL))(a3);
    *((_QWORD *)this + 108) = *((_QWORD *)this + 82);
    *((_DWORD *)this + 218) = v17;
    v18 = a5;
    v19 = (a5 & 1) == 0;
    *((_BYTE *)this + 231) = a5 & 1;
    if ( !v19 )
      *((_DWORD *)this + 60) = 2000;
    if ( (v18 & 4) == 0 )
    {
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 248);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 256);
LABEL_13:
      *((_DWORD *)this + 102) = (v18 >> 5) & 1;
      *((_DWORD *)this + 58) = a6;
      *((_DWORD *)this + 59) = v18;
      *((_DWORD *)this + 51) = a7;
      v20 = Buf1;
      if ( !memcmp_0(Buf1, &GUID_00000000_0000_0000_0000_000000000000, 0x10uLL) )
      {
        v30 = UuidCreate((UUID *)((char *)v11 + 212));
        if ( v30 )
          return wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0x7D5,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                   (const char *)v30,
                   (unsigned int)this);
      }
      else
      {
        *(struct _GUID *)((char *)v11 + 212) = *v20;
        *((_BYTE *)this + 228) = 1;
      }
      v21 = UuidCreate((UUID *)((char *)this + 264));
      if ( v21 )
        return wil::details::in1diag3::Return_Win32(
                 retaddr,
                 (void *)0x7DE,
                 (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                 (const char *)v21,
                 (unsigned int)this);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      *((_DWORD *)this + 194) = 1065353216;
      if ( this != (CAudioSession *)-736LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
      v22 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)this + 52);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E5,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v22);
        return v23;
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 176LL))(this, v18);
        v25 = v24;
        if ( v24 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x7E7,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (const char *)(unsigned int)v24);
          return v25;
        }
        else
        {
          v26 = (*(__int64 (__fastcall **)(struct IAudioProcess *, _QWORD))(*(_QWORD *)a3 + 24LL))(
                  a3,
                  ((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64));
          v27 = v26;
          if ( v26 >= 0 )
          {
            CAudioSession::StartInactiveTimer(this);
            return 0;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x7EA,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
              (const char *)(unsigned int)v26);
            return v27;
          }
        }
      }
    }
    v35 = (char *)this + 248;
    v36 = *((_QWORD *)this + 31);
    LODWORD(v43) = *(_DWORD *)(v36 - 16);
    v37 = ((__int64)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202" - v36) >> 1;
    if ( ((*(_DWORD *)(v36 - 12) - 40) | (1 - *(_DWORD *)(v36 - 8))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 31, 40);
    v31 = *(_OWORD **)v35;
    if ( v37 <= (unsigned int)v43 )
    {
      v32 = (char *)v31 + 2 * v37;
      if ( !v31 || !v32 )
        goto LABEL_31;
      memmove_0(v31, v32, 0x50uLL);
    }
    else
    {
      if ( !v31 )
      {
LABEL_31:
        *(_DWORD *)_o__errno(v31) = 22;
        invalid_parameter_noinfo();
        goto LABEL_32;
      }
      *v31 = *(_OWORD *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202";
      v31[1] = *(_OWORD *)L"Root%\\System32\\AudioSrv.Dll,-202";
      v31[2] = *(_OWORD *)L"stem32\\AudioSrv.Dll,-202";
      v31[3] = *(_OWORD *)L"udioSrv.Dll,-202";
      v31[4] = *(_OWORD *)L"Dll,-202";
    }
LABEL_32:
    if ( *(int *)(*(_QWORD *)v35 - 12LL) < 40 )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*(_QWORD *)v35 - 16LL) = 40;
    *(_WORD *)(*(_QWORD *)v35 + 80LL) = 0;
    v38 = (char *)this + 256;
    v39 = *((_QWORD *)this + 32);
    LODWORD(v43) = *(_DWORD *)(v39 - 16);
    v40 = ((__int64)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203" - v39) >> 1;
    if ( ((*(_DWORD *)(v39 - 12) - 40) | (1 - *(_DWORD *)(v39 - 8))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)this + 32, 40);
    v33 = *(_OWORD **)v38;
    if ( v40 <= (unsigned int)v43 )
    {
      v34 = (char *)v33 + 2 * v40;
      if ( v33 && v34 )
      {
        memmove_0(v33, v34, 0x50uLL);
        goto LABEL_42;
      }
    }
    else if ( v33 )
    {
      *v33 = *(_OWORD *)L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203";
      v33[1] = *(_OWORD *)L"Root%\\System32\\AudioSrv.Dll,-203";
      v33[2] = *(_OWORD *)L"stem32\\AudioSrv.Dll,-203";
      v33[3] = *(_OWORD *)L"udioSrv.Dll,-203";
      v33[4] = *(_OWORD *)L"Dll,-203";
      goto LABEL_42;
    }
    *(_DWORD *)_o__errno(v33) = 22;
    invalid_parameter_noinfo();
LABEL_42:
    if ( *(int *)(*(_QWORD *)v38 - 12LL) < 40 )
      ATL::AtlThrowImpl(-2147024809);
    *(_DWORD *)(*(_QWORD *)v38 - 16LL) = 40;
    *(_WORD *)(*(_QWORD *)v38 + 80LL) = 0;
    *((_BYTE *)this + 230) = 1;
    *((_DWORD *)this + 60) = 5000;
    v11 = this;
    goto LABEL_13;
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Return_CaughtException(
             retaddr,
             (void *)0x7F3,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             v28);
  }
  return result;
}
