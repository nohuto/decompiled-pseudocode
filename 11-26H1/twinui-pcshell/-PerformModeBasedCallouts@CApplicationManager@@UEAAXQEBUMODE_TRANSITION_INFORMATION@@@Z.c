/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180049A40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *a2)
{
  const struct MODE_TRANSITION_INFORMATION *v2; // rdi
  unsigned __int64 v4; // r15
  __int128 *v5; // r13
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // esi
  int v8; // ebx
  bool v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, _QWORD, SID *, GUID *, APTTYPEQUALIFIER *); // rbx
  __int64 v13; // rcx
  APTTYPE pAptType[2]; // [rsp+38h] [rbp-D0h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h]
  _QWORD v17[3]; // [rsp+50h] [rbp-B8h] BYREF
  int v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+6Ch] [rbp-9Ch]
  __int64 v20; // [rsp+70h] [rbp-98h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int128 *v23; // [rsp+88h] [rbp-80h]
  bool v24; // [rsp+90h] [rbp-78h]
  unsigned __int64 v25; // [rsp+98h] [rbp-70h]
  HRESULT v26; // [rsp+A0h] [rbp-68h]
  __int128 v27; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v28[80]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  v2 = a2;
  v17[0] = a2;
  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v25 = v4;
  v5 = 0LL;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v4 + 0x2C)) || *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_14;
  CurrentThreadId = 0;
  pAptType[0] = APTTYPE_STA;
  pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(pAptType, pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType[0] == APTTYPE_STA )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( pAptType[0] == APTTYPE_MTA )
    goto LABEL_10;
  if ( pAptType[0] != APTTYPE_NA )
  {
    if ( pAptType[0] == APTTYPE_MAINSTA )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  CurrentThreadId = -1;
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v4 + 40) )
    ApartmentType = -2147417842;
LABEL_12:
  if ( ApartmentType >= 0 )
  {
LABEL_14:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v4) ? 0x8001010E : 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_15:
  v26 = ApartmentType;
  v8 = *((_DWORD *)v2 + 4);
  if ( (v8 != 1 && *((_DWORD *)v2 + 4) != 8 || v8 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v9 = 0;
    v16 = 0LL;
    v27 = 0LL;
    memset_0(v28, 0, sizeof(v28));
    if ( v8 == 1 || v8 == 8 )
    {
      if ( v8 != 1 )
      {
        if ( ((*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 280LL))(*((_QWORD *)this + 34)) & 4) != 0 )
        {
          v9 = 1;
          v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 34) + 384LL))(*((_QWORD *)this + 34));
        }
        else
        {
          v10 = 0LL;
        }
        *(_QWORD *)pAptQualifier = 0LL;
        v5 = &v27;
        if ( (*(int (__fastcall **)(_QWORD, APTTYPEQUALIFIER *, __int128 *))(**((_QWORD **)this + 34) + 328LL))(
               *((_QWORD *)this + 34),
               pAptQualifier,
               &v27) < 0 )
          v5 = 0LL;
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v28);
        goto LABEL_21;
      }
      v9 = 1;
      *(_QWORD *)pAptQualifier = 0LL;
      v11 = *((_QWORD *)this + 40);
      v12 = *(int (__fastcall **)(__int64, _QWORD, SID *, GUID *, APTTYPEQUALIFIER *))(*(_QWORD *)v11 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)pAptQualifier);
      if ( v12(
             v11,
             *((_QWORD *)this + 31),
             &SID_PerMonitorDesktopVisibilityService,
             &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
             pAptQualifier) >= 0 )
      {
        pAptType[0] = APTTYPE_STA;
        if ( (*(int (__fastcall **)(_QWORD, _QWORD, APTTYPE *))(**(_QWORD **)pAptQualifier + 24LL))(
               *(_QWORD *)pAptQualifier,
               0LL,
               pAptType) >= 0 )
          v9 = pAptType[0] != APTTYPE_STA;
      }
      v13 = *(_QWORD *)pAptQualifier;
      if ( *(_QWORD *)pAptQualifier )
      {
        *(_QWORD *)pAptQualifier = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v2 = (const struct MODE_TRANSITION_INFORMATION *)v17[0];
    }
    v10 = v16;
LABEL_21:
    *(_OWORD *)&v17[1] = *(_OWORD *)v2;
    v18 = *((_DWORD *)v2 + 4);
    v19 = *((_DWORD *)this + 66);
    LODWORD(v20) = 0;
    v21 = v10;
    v22 = *((_QWORD *)this + 31);
    v23 = v5;
    v24 = v9;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v17[1]) >= 0;
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
