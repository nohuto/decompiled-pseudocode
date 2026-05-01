/*
 * XREFs of ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180026390
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x18002670C (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationManager::PerformModeBasedCallouts(
        CApplicationManager *this,
        const struct MODE_TRANSITION_INFORMATION *a2)
{
  unsigned __int64 v4; // r15
  __int128 *v5; // r13
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // esi
  int v8; // ebx
  bool v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // ecx
  __int64 v13; // rdi
  int (__fastcall *v14)(__int64, _QWORD, SID *, GUID *, __int64 *); // rbx
  __int64 v15; // rcx
  int v16; // ebx
  int v17; // [rsp+28h] [rbp-E0h]
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  APTTYPE pAptType; // [rsp+40h] [rbp-C8h] BYREF
  int v20; // [rsp+44h] [rbp-C4h] BYREF
  APTTYPEQUALIFIER pAptQualifier[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B8h]
  const struct MODE_TRANSITION_INFORMATION *v23; // [rsp+58h] [rbp-B0h]
  _QWORD v24[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v25; // [rsp+78h] [rbp-90h]
  int v26; // [rsp+7Ch] [rbp-8Ch]
  int v27; // [rsp+80h] [rbp-88h]
  __int64 v28; // [rsp+88h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-78h]
  __int128 *v30; // [rsp+98h] [rbp-70h]
  bool v31; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v32; // [rsp+A8h] [rbp-60h]
  HRESULT v33; // [rsp+B0h] [rbp-58h]
  __int128 v34; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v35[80]; // [rsp+C8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v23 = a2;
  v4 = ((unsigned __int64)this + 152) & -(__int64)(this != (CApplicationManager *)240);
  v32 = v4;
  v5 = 0LL;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v4 + 0x2C)) || *(_DWORD *)(v4 + 40) == -3 )
    goto LABEL_14;
  CurrentThreadId = 0;
  pAptType = APTTYPE_STA;
  pAptQualifier[0] = APTTYPEQUALIFIER_NONE;
  ApartmentType = CoGetApartmentType(&pAptType, pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( pAptType == APTTYPE_STA )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( pAptType == APTTYPE_MTA )
    goto LABEL_10;
  if ( pAptType != APTTYPE_NA )
  {
    if ( pAptType == APTTYPE_MAINSTA )
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
    (unsigned int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType,
    v17);
LABEL_15:
  v33 = ApartmentType;
  v8 = *((_DWORD *)a2 + 4);
  if ( (v8 != 1 && *((_DWORD *)a2 + 4) != 8 || v8 == 1 || *((_QWORD *)this + 34)) && *((_QWORD *)this + 39) )
  {
    v9 = 0;
    v22 = 0LL;
    v34 = 0LL;
    memset_0(v35, 0, sizeof(v35));
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
        v18 = 0LL;
        v16 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int128 *))(**((_QWORD **)this + 34) + 328LL))(
                *((_QWORD *)this + 34),
                &v18,
                &v34);
        (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 34) + 344LL))(*((_QWORD *)this + 34), v35);
        v5 = &v34;
        if ( v16 < 0 )
          v5 = 0LL;
        goto LABEL_21;
      }
      v9 = 1;
      v18 = 0LL;
      v13 = *((_QWORD *)this + 40);
      v14 = *(int (__fastcall **)(__int64, _QWORD, SID *, GUID *, __int64 *))(*(_QWORD *)v13 + 88LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
      if ( v14(
             v13,
             *((_QWORD *)this + 31),
             &SID_PerMonitorDesktopVisibilityService,
             &GUID_2af0421a_a7bc_4b7e_be85_7e17c0ffee84,
             &v18) >= 0 )
      {
        v20 = 0;
        if ( (*(int (__fastcall **)(__int64, _QWORD, int *))(*(_QWORD *)v18 + 24LL))(v18, 0LL, &v20) >= 0 )
          v9 = v20 != 0;
      }
      v15 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v10 = v22;
LABEL_21:
    v11 = *((_QWORD *)this + 31);
    v12 = *((_DWORD *)this + 66);
    *(_OWORD *)&v24[1] = *(_OWORD *)v23;
    v25 = *((_DWORD *)v23 + 4);
    v26 = v12;
    v27 = 0;
    v28 = v10;
    v29 = v11;
    v30 = v5;
    v31 = v9;
    *((_BYTE *)this + 240) = (*(int (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 39) + 40LL))(
                               *((_QWORD *)this + 39),
                               &v24[1]) >= 0;
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
}
