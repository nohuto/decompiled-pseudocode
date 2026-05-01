/*
 * XREFs of ?Navigate@UwpWindowWrapperBase@@UEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801935F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800243B0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapperBase::Navigate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // esi
  HRESULT ApartmentType; // eax
  unsigned int v4; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  int v7; // edi
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  APTTYPE pAptType; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  int v14; // [rsp+70h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+78h] [rbp+20h] BYREF

  v13 = a2;
  *(_QWORD *)&v10 = &v13;
  *((_QWORD *)&v10 + 1) = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  pAptType = APTTYPE_STA;
  pAptQualifier = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  try
  {
    if ( ApartmentType < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
      v4 = 0;
    else
      v4 = 4;
    v14 = 0;
    v5 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(v5);
      *((_OWORD *)v6 + 1) = v10;
      *v6 = &off_1806F43C0;
      v6[4] = &v14;
    }
    else
    {
      v6 = 0LL;
    }
    v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
    if ( v7 >= 0 )
      v7 = v14;
    result = (unsigned int)v7;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x368,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
                           v8);
  }
  return result;
}
