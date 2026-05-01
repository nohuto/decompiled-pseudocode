/*
 * XREFs of ?HandleMonitorMove@CClassicWindowManager@@UEAA_NPEAUHWND__@@PEAUIImmersiveMonitor@@@Z @ 0x1800497E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180049DB8 (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13
bool __fastcall CClassicWindowManager::HandleMonitorMove(
        CClassicWindowManager *this,
        HWND a2,
        struct IImmersiveMonitor *a3)
{
  HWND v3; // r15
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r14
  DWORD CurrentThreadId; // ebx
  HRESULT ApartmentType; // edi
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  int v11; // r15d
  __int64 v12; // rcx
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  bool v15; // bl
  __int64 v16; // rcx
  _QWORD v18[4]; // [rsp+20h] [rbp-38h] BYREF
  HRESULT v19; // [rsp+40h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+40h]
  __int64 pAptType; // [rsp+A0h] [rbp+48h] BYREF
  HWND v22; // [rsp+A8h] [rbp+50h]
  struct IImmersiveMonitor *v23; // [rsp+B0h] [rbp+58h]
  __int64 pAptQualifier; // [rsp+B8h] [rbp+60h] BYREF

  v23 = a3;
  v22 = a2;
  v3 = a2;
  v5 = ((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72);
  v18[3] = v5;
  v6 = 0LL;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v5 + 0x2C)) || *(_DWORD *)(v5 + 40) == -3 )
    goto LABEL_14;
  CurrentThreadId = 0;
  LODWORD(pAptType) = 0;
  LODWORD(pAptQualifier) = 0;
  ApartmentType = CoGetApartmentType((APTTYPE *)&pAptType, (APTTYPEQUALIFIER *)&pAptQualifier);
  if ( ApartmentType < 0 )
    goto LABEL_9;
  if ( !(_DWORD)pAptType )
  {
LABEL_8:
    CurrentThreadId = GetCurrentThreadId();
    goto LABEL_10;
  }
  if ( (_DWORD)pAptType == 1 )
    goto LABEL_10;
  if ( (_DWORD)pAptType != 2 )
  {
    if ( (_DWORD)pAptType == 3 )
      goto LABEL_8;
LABEL_9:
    if ( ApartmentType < 0 )
      goto LABEL_12;
    goto LABEL_10;
  }
  CurrentThreadId = -1;
LABEL_10:
  if ( CurrentThreadId != *(_DWORD *)(v5 + 40) )
    ApartmentType = -2147417842;
LABEL_12:
  if ( ApartmentType >= 0 )
  {
LABEL_14:
    ApartmentType = !TryEnterCriticalSection((LPCRITICAL_SECTION)v5) ? 0x8001010E : 0;
    goto LABEL_15;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0xC8,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
    (const char *)(unsigned int)ApartmentType);
LABEL_15:
  v19 = ApartmentType;
  v18[0] = 0LL;
  pAptQualifier = 0LL;
  v9 = 0LL;
  while ( v6 < *((_QWORD *)this + 16) )
  {
    v18[1] = 0LL;
    v10 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v6);
    v18[2] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    pAptType = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v10)(
           v10,
           &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
           &pAptType) >= 0
      && (*(unsigned __int8 (__fastcall **)(__int64, HWND))(*(_QWORD *)pAptType + 192LL))(pAptType, v3) )
    {
      v11 = 0;
    }
    else
    {
      v11 = -1;
    }
    v12 = pAptType;
    if ( pAptType )
    {
      pAptType = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( !v11 )
    {
      v9 = v6;
      v13 = 0;
      goto LABEL_28;
    }
    ++v6;
    v3 = v22;
  }
  v13 = -2147319765;
LABEL_28:
  if ( v13 >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(*((_QWORD *)this + 15) + 8 * v9);
    v13 = (**v14)(v14, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, v18);
    if ( v13 >= 0 )
      (*(void (__fastcall **)(_QWORD, struct IImmersiveMonitor *))(*(_QWORD *)v18[0] + 88LL))(v18[0], v23);
  }
  v15 = v13 >= 0;
  v16 = v18[0];
  if ( v18[0] )
  {
    v18[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( ApartmentType >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v5);
  return v15;
}
