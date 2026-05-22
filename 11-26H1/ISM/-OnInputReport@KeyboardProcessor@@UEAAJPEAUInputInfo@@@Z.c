/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800129A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1800120B0 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ?GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z @ 0x1800123F8 (-GetTargetingInfo@KeyboardProcessor@@AEAAJPEAPEAVInputContext@@PEAPEAUIInputTarget@@@Z.c)
 *     _lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator() @ 0x180012F7C (_lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_--operator().c)
 *     ??1TargetingInfo@KeyboardProcessor@@QEAA@XZ @ 0x180013168 (--1TargetingInfo@KeyboardProcessor@@QEAA@XZ.c)
 *     ??0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z @ 0x1800131C8 (--0TargetingInfo@KeyboardProcessor@@QEAA@AEBU01@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546FC (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@?$vector@UTargetingInfo@KeyboardProcessor@@V?$allocator@UTargetingInfo@KeyboardProcessor@@@std@@@std@@AEAAPEAUTargetingInfo@KeyboardProcessor@@QEAU23@AEAU23@@Z @ 0x18008753C (--$_Emplace_reallocate@AEAUTargetingInfo@KeyboardProcessor@@@-$vector@UTargetingInfo@KeyboardPro.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _invalid_parameter_noinfo @ 0x18009AAB2 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18009CC62 (memcpy_0.c)
 *     _lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_ @ 0x18019B64C (_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_--_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *Src)
{
  struct InputContext *v2; // rsi
  unsigned __int16 v4; // di
  __int16 v5; // cx
  __int16 v6; // r15
  char v7; // r13
  _OWORD *v8; // rax
  int v9; // ebx
  _OWORD *v10; // rcx
  __int64 *v11; // rbx
  __int64 *i; // r12
  KeyboardProcessor::TargetingInfo *v13; // rax
  __int16 v14; // si
  __int16 v15; // di
  struct IInputTarget *v16; // rbx
  struct IInputTarget *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  struct IInputTarget *v20; // rcx
  unsigned int v22; // ebx
  int updated; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // edi
  __int64 v27; // rdx
  int v28; // eax
  struct IInputTarget *v29; // rcx
  int TargetingInfo; // eax
  struct InputContext *v31; // rcx
  int v32; // [rsp+20h] [rbp-E0h]
  struct IInputTarget *v33; // [rsp+28h] [rbp-D8h] BYREF
  struct InputContext *v34; // [rsp+30h] [rbp-D0h] BYREF
  struct InputInfo *v35; // [rsp+38h] [rbp-C8h] BYREF
  RTL_SRWLOCK *v36; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v37[24]; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v38[92]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v39; // [rsp+1D0h] [rbp+D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]

  v2 = Src;
  v34 = Src;
  v4 = 0;
  v35 = Src;
  v5 = *((_WORD *)Src + 47);
  v6 = v5 & 0x20;
  v7 = (v5 & 1) == 0;
  LOBYTE(v32) = v7;
  if ( (*(_BYTE *)Src & 4) == 0 )
  {
    v22 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFE,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)0x80070057LL,
      v32);
    return v22;
  }
  if ( (v5 & 0x20) == 0 && (v5 & 0x40) == 0 )
  {
    v4 = *((_WORD *)Src + 29) | 0xE000;
    if ( (v5 & 2) == 0 )
      v4 = *((_WORD *)Src + 29);
    if ( (v5 & 4) != 0 )
      v4 |= 0xE100u;
  }
  AcquireSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
  v36 = &KeyboardProcessor::s_keyStateSnapshotLock;
  v8 = (_OWORD *)((char *)v2 + 96);
  v9 = 128;
  v10 = &KeyboardProcessor::s_keyStateSnapshot;
  if ( v2 == (struct InputContext *)-96LL )
  {
    memset_0(&KeyboardProcessor::s_keyStateSnapshot, 0, 0x100uLL);
    *(_DWORD *)_o__errno() = 22;
    invalid_parameter_noinfo();
  }
  else
  {
    v27 = 2LL;
    do
    {
      *v10 = *v8;
      v10[1] = v8[1];
      v10[2] = v8[2];
      v10[3] = v8[3];
      v10[4] = v8[4];
      v10[5] = v8[5];
      v10[6] = v8[6];
      v10 += 8;
      *(v10 - 1) = v8[7];
      v8 += 8;
      --v27;
    }
    while ( v27 );
  }
  switch ( v4 )
  {
    case 0x1Du:
      v9 = 1;
      goto LABEL_40;
    case 0x2Au:
      v9 = 2;
      goto LABEL_40;
    case 0x36u:
      v9 = 32;
      goto LABEL_40;
    case 0x38u:
      v9 = 4;
      goto LABEL_40;
    case 0xE01Du:
      v9 = 16;
      goto LABEL_40;
    case 0xE038u:
      v9 = 64;
      goto LABEL_40;
    case 0xE05Bu:
      v9 = 8;
      goto LABEL_40;
    case 0xE05Cu:
LABEL_40:
      if ( !v7 || (v9 & *((_DWORD *)this + 14)) == 0 )
      {
        updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), v9, v7);
        v19 = updated;
        if ( updated < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x133,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
            (const char *)(unsigned int)updated,
            v32);
LABEL_36:
          ReleaseSRWLockExclusive(&KeyboardProcessor::s_keyStateSnapshotLock);
          return v19;
        }
        v28 = *((_DWORD *)this + 14);
        if ( v7 )
          *((_DWORD *)this + 14) = v9 | v28;
        else
          *((_DWORD *)this + 14) = v28 & ~v9;
      }
      break;
  }
  v33 = 0LL;
  if ( v6 )
  {
    v34 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
    TargetingInfo = KeyboardProcessor::GetTargetingInfo(this, &v34, &v33);
    v22 = TargetingInfo;
    if ( TargetingInfo >= 0 )
    {
      v31 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(struct InputContext *))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_31;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14B,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)TargetingInfo,
      v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v34);
  }
  else
  {
    lambda_c6db7401cba5f9fe705df5cb0dba3b7a_::_lambda_c6db7401cba5f9fe705df5cb0dba3b7a_(v37, &v35, this);
    if ( !v7 )
    {
      v11 = (__int64 *)*((_QWORD *)this + 8);
      for ( i = (__int64 *)*((_QWORD *)this + 9); v11 != i; v11 += 48 )
      {
        v13 = (KeyboardProcessor::TargetingInfo *)KeyboardProcessor::TargetingInfo::TargetingInfo(
                                                    (KeyboardProcessor::TargetingInfo *)v38,
                                                    (const struct KeyboardProcessor::TargetingInfo *)v11);
        v14 = *((_WORD *)v34 + 30);
        v15 = *((_WORD *)v13 + 30);
        KeyboardProcessor::TargetingInfo::~TargetingInfo(v13);
        if ( v14 == v15 )
          break;
      }
      goto LABEL_22;
    }
    lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v37);
    v38[90] = 0;
    memset_0(v38, 0, sizeof(v38));
    v38[0] = 4;
    v38[6] = 368;
    v39 = 0LL;
    v24 = *((_DWORD *)v2 + 6);
    if ( v24 )
    {
      if ( v24 > 0x180 )
      {
        memset_0(v38, 0, 0x180uLL);
        *(_DWORD *)_o__errno() = 34;
        invalid_parameter_noinfo();
      }
      else
      {
        memcpy_0(v38, v2, v24);
      }
    }
    v11 = (__int64 *)*((_QWORD *)this + 9);
    if ( v11 == *((__int64 **)this + 10) )
    {
      v11 = (__int64 *)std::vector<KeyboardProcessor::TargetingInfo>::_Emplace_reallocate<KeyboardProcessor::TargetingInfo &>(
                         (char *)this + 64,
                         *((_QWORD *)this + 9),
                         v38);
    }
    else
    {
      KeyboardProcessor::TargetingInfo::TargetingInfo(
        *((KeyboardProcessor::TargetingInfo **)this + 9),
        (const struct KeyboardProcessor::TargetingInfo *)v38);
      *((_QWORD *)this + 9) += 384LL;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11 + 47);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v11 + 46);
    v25 = KeyboardProcessor::GetTargetingInfo(this, (struct InputContext **)v11 + 46, (struct IInputTarget **)v11 + 47);
    v26 = v25;
    if ( v25 >= 0 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39 + 1);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
LABEL_22:
      if ( v11 != *((__int64 **)this + 9) )
      {
        v16 = (struct IInputTarget *)v11[47];
        if ( v33 != v16 )
        {
          if ( v16 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v16 + 8LL))(v16);
          v17 = v33;
          v33 = v16;
          if ( v17 )
            (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v17 + 16LL))(v17);
        }
        if ( !v7 )
          lambda_ebc29ddd5dd0a3c27fbc9fad58cec528_::operator()(v37);
      }
      v2 = v34;
LABEL_31:
      if ( v33
        && (v18 = (*(__int64 (__fastcall **)(struct IInputTarget *, struct InputContext *))(*(_QWORD *)v33 + 24LL))(
                    v33,
                    v2),
            v19 = v18,
            v18 < 0) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17E,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
          (const char *)(unsigned int)v18,
          v32);
        v29 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v29 + 16LL))(v29);
        }
      }
      else
      {
        v20 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(struct IInputTarget *))(*(_QWORD *)v20 + 16LL))(v20);
        }
        v19 = 0;
      }
      goto LABEL_36;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x167,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
      (const char *)(unsigned int)v25,
      v32);
    KeyboardProcessor::TargetingInfo::~TargetingInfo((KeyboardProcessor::TargetingInfo *)v38);
    v22 = v26;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v36);
  return v22;
}
