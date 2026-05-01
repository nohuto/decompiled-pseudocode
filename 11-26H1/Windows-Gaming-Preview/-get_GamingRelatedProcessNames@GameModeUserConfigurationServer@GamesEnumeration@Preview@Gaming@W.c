/*
 * XREFs of ?get_GamingRelatedProcessNames@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x18003A4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021F0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002294 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008DD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeserializeRelatedProcessArray@@YAJQEAGKAEAV?$ComPtr@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x1800143E8 (-DeserializeRelatedProcessArray@@YAJQEAGKAEAV-$ComPtr@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualit.c)
 *     ?Make@?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@SAJPEAPEAV12345@@Z @ 0x180016278 (-Make@-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@F.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::get_GamingRelatedProcessNames(
        __int64 a1,
        _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // r14
  __int64 v6; // r15
  int v7; // eax
  unsigned int v8; // edi
  int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // rax
  void *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  const struct std::nothrow_t *v16; // rdx
  const struct std::nothrow_t *v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v22)(_QWORD, GUID *, _QWORD); // rdi
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // rcx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 v27; // rcx
  __int64 (__fastcall ***v28)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v29)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v30)(_QWORD, GUID *, __int64 *); // rdi
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  unsigned int v35; // [rsp+70h] [rbp+40h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, _QWORD); // [rsp+80h] [rbp+50h] BYREF
  __int64 v37; // [rsp+88h] [rbp+58h] BYREF

  v37 = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 104);
  if ( *(_QWORD *)(a1 + 104) )
    goto LABEL_37;
  v36 = 0LL;
  v6 = *(_QWORD *)(a1 + 112);
  v35 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned int *))(*(_QWORD *)v6 + 80LL))(v6, 5LL, 0LL, &v35);
  v8 = v7;
  if ( (_WORD)v7 == 2 )
  {
    if ( v36 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD)))(*v36)[2])(v36);
    v9 = Windows::Foundation::Collections::Internal::Vector<HSTRING__ *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<HSTRING__ *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<HSTRING__ *>>::Make(&v36);
    v8 = v9;
    if ( v9 < 0 )
    {
      v10 = (unsigned int)v9;
      v11 = 551LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v10);
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
        (const char *)v8);
      v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
      if ( v36 )
      {
        v36 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v18)[2])(v18);
      }
      if ( v4 )
        LeaveCriticalSection(v4);
      v19 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      return v8;
    }
    goto LABEL_25;
  }
  if ( v7 < 0 )
  {
    v10 = (unsigned int)v7;
    v11 = 556LL;
    goto LABEL_11;
  }
  v12 = operator new[](v35 + 2LL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    v10 = 2147942414LL;
    v11 = 561LL;
    goto LABEL_11;
  }
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, void *, unsigned int *))(*(_QWORD *)v6 + 80LL))(v6, 5LL, v12, &v35);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 563LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    operator delete(v13, v17);
    goto LABEL_17;
  }
  v14 = DeserializeRelatedProcessArray((const WCHAR *)v13, v35, &v36);
  v8 = v14;
  if ( v14 < 0 )
  {
    v15 = 564LL;
    goto LABEL_16;
  }
  operator delete(v13, v16);
LABEL_25:
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
  v22 = **v36;
  v23 = *v5;
  if ( *v5 )
  {
    *v5 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v23)[2])(v23);
  }
  v24 = v22(v21, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, v5);
  v25 = v24;
  if ( v24 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v24);
    v26 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
    if ( v36 )
    {
      v36 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v26)[2])(v26);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    v27 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v25;
  }
  v28 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v36;
  if ( v36 )
  {
    v36 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v28)[2])(v28);
  }
LABEL_37:
  v29 = *v5;
  v30 = ***v5;
  v31 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
  v32 = v30(v29, &GUID_98b9acc1_4b56_532e_ac73_03d5291cca90, &v37);
  v25 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeuserconfiguration.cpp",
      (const char *)(unsigned int)v32);
    if ( v4 )
      LeaveCriticalSection(v4);
    v33 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
    }
    return v25;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  *a2 = v37;
  return 0LL;
}
