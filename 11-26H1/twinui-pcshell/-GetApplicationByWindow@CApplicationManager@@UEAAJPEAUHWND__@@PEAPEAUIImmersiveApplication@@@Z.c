/*
 * XREFs of ?GetApplicationByWindow@CApplicationManager@@UEAAJPEAUHWND__@@PEAPEAUIImmersiveApplication@@@Z @ 0x180160400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CApplicationManager::GetApplicationByWindow(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplication **a3)
{
  RTL_SRWLOCK *v5; // rdi
  unsigned __int64 v6; // r12
  unsigned __int64 i; // rsi
  __int64 v8; // rbx
  int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  int v13; // ebx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD); // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, struct IImmersiveApplication **); // rcx
  HWND v17; // [rsp+38h] [rbp-20h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]
  char v19; // [rsp+48h] [rbp-10h]
  _QWORD *v20; // [rsp+A0h] [rbp+48h] BYREF
  HWND v21; // [rsp+A8h] [rbp+50h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, struct IImmersiveApplication **); // [rsp+B0h] [rbp+58h] BYREF
  PSRWLOCK v23; // [rsp+B8h] [rbp+60h]

  v21 = a2;
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  v23 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  *a3 = 0LL;
  v22 = 0LL;
  v6 = 0LL;
  for ( i = 0LL; i < *((_QWORD *)this + 59); ++i )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 58) + 8 * i);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v9 = -1;
    v20 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v8)(v8, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v20) >= 0 )
    {
      v10 = *v20;
      v17 = v21;
      v18 = 0LL;
      v19 = 0;
      v9 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, __int64))(v10 + 296))(v20, &v17, 2LL) != 0) - 1;
      v11 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
    v12 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    if ( !v9 )
    {
      v6 = i;
      v13 = 0;
      goto LABEL_13;
    }
  }
  v13 = -2147319765;
LABEL_13:
  if ( v13 >= 0 )
  {
    v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD))(*((_QWORD *)this + 58) + 8 * v6);
    v13 = (**v14)(v14, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
    if ( v13 >= 0 )
      v13 = (**v22)(v22, &GUID_8b14e88b_5663_4caf_b196_c31479262831, a3);
  }
  v15 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, struct IImmersiveApplication **)))(*v15)[2])(v15);
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return (unsigned int)v13;
}
