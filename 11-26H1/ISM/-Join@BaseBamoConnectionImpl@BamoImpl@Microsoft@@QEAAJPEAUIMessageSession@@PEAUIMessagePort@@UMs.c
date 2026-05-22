/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800458EC
 * Callers:
 *     ?JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG@Z @ 0x180045614 (-JoinConversationAsServer@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMess.c)
 *     ?JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScopeID@@PEBG@Z @ 0x180045888 (-JoinConversationAsClient@BaseBamoConnection@Bamo@Microsoft@@QEAAJPEAUIMessageSession@@UMsgScope.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x18002A260 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180036FD0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     StringLengthWorkerW @ 0x180045D18 (StringLengthWorkerW.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180045D60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x180045DD4 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??1?$RefPtr@UICoreUIClient@@@@QEAA@XZ @ 0x180046140 (--1-$RefPtr@UICoreUIClient@@@@QEAA@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        size_t a2,
        __int64 a3,
        _OWORD *a4,
        const wchar_t *psz,
        char a6)
{
  HRESULT v10; // eax
  size_t v11; // rcx
  unsigned __int64 v12; // rdi
  Microsoft::BamoImpl::BamoImplObject *v13; // r15
  int v14; // eax
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // r10
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  int v22; // eax
  const struct std::nothrow_t *v23; // rdx
  int ConversationHost; // eax
  __int64 (__fastcall *v26)(size_t, __int64); // rbx
  int v27; // eax
  int v28; // eax
  size_t v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  const struct std::nothrow_t *v34; // rdx
  int v35; // [rsp+20h] [rbp-89h]
  unsigned __int16 *v36; // [rsp+20h] [rbp-89h]
  size_t pcchLength; // [rsp+60h] [rbp-49h] BYREF
  int v38; // [rsp+68h] [rbp-41h]
  Microsoft::BamoImpl::BamoImplObject *v39[2]; // [rsp+70h] [rbp-39h] BYREF
  __int128 v40; // [rsp+80h] [rbp-29h] BYREF
  unsigned __int16 v41[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  pcchLength = 0LL;
  *(_QWORD *)v41 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v41[4] = *(_DWORD *)L"O";
  if ( psz )
  {
    v10 = StringLengthWorkerW(psz, a2, &pcchLength);
    if ( v10 >= 0 )
    {
      v11 = pcchLength;
      goto LABEL_6;
    }
  }
  else
  {
    v10 = -2147024809;
  }
  v11 = 0LL;
LABEL_6:
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x17E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v10,
      v35);
  v12 = v11 + 6;
  v13 = (Microsoft::BamoImpl::BamoImplObject *)operator new[](saturated_mul(v11 + 6, 2uLL));
  v39[1] = v13;
  v14 = StringCchCopyW((unsigned __int16 *)v13, v12, psz);
  if ( v14 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x184,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v14,
      v35);
  v15 = StringCchCatW((unsigned __int16 *)v13, v12, v41);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x185,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v15,
      v35);
  Microsoft::BamoImpl::InternalLock::InternalLock(v39, *(struct Microsoft::BamoImpl::ConnectionIndirector **)(a1 + 96));
  if ( *(_QWORD *)(a1 + 64) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x196,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v16);
  if ( *(_BYTE *)(a1 + 218) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x19E,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      v16);
  v38 = 0;
  v17 = *(_QWORD *)a2;
  if ( a6 )
  {
    pcchLength = 0LL;
    *(_OWORD *)v41 = *a4;
    v36 = v41;
    v18 = (*(__int64 (__fastcall **)(size_t, Microsoft::BamoImpl::BamoImplObject *, const wchar_t *, __int64))(v17 + 296))(
            a2,
            v13,
            psz,
            a3);
    v19 = v18;
    if ( v18 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B4,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)v41);
      wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&pcchLength);
LABEL_22:
      Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)v39, v20, v21);
      operator delete(v13, v23);
      return v19;
    }
  }
  else
  {
    *(_QWORD *)v41 = 0LL;
    pcchLength = 0LL;
    v40 = *a4;
    LODWORD(v36) = 3;
    v22 = (*(__int64 (__fastcall **)(size_t, Microsoft::BamoImpl::BamoImplObject *, const wchar_t *, __int128 *))(v17 + 336))(
            a2,
            v13,
            psz,
            &v40);
    v19 = v22;
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1CA,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v22,
        3);
      if ( pcchLength )
        (*(void (__fastcall **)(size_t))(*(_QWORD *)pcchLength + 16LL))(pcchLength);
      goto LABEL_22;
    }
  }
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(a1 + 80);
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(a1 + 72);
  ConversationHost = CoreUICallCreateConversationHost(a2, pcchLength, a1 + 72, a1 + 80);
  if ( ConversationHost < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1DD,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)ConversationHost,
      (int)v36);
  v26 = *(__int64 (__fastcall **)(size_t, __int64))(*(_QWORD *)a2 + 40LL);
  RefPtr<ICoreUIClient>::~RefPtr<ICoreUIClient>(a1 + 56);
  v27 = v26(a2, a1 + 56);
  if ( v27 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E4,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v27,
      (int)v36);
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 56) + 80LL))(*(_QWORD *)(a1 + 56), a1 + 24);
  if ( v28 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x1E6,
      (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
      (const char *)(unsigned int)v28,
      (int)v36);
  *(_DWORD *)(a1 + 28) = v38;
  v29 = pcchLength;
  pcchLength = 0LL;
  v30 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v29;
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  v31 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 48) = a2;
  (*(void (__fastcall **)(size_t))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( pcchLength )
    (*(void (__fastcall **)(size_t))(*(_QWORD *)pcchLength + 16LL))(pcchLength);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)v39, v32, v33);
  operator delete(v13, v34);
  return 0LL;
}
