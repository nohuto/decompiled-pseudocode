/*
 * XREFs of ?ExcludeWindowFromCapture@AccessibilityExperienceManager@@AEAA_NXZ @ 0x18047BC34
 * Callers:
 *     ?_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ @ 0x18047D0FC (-_CreateModalExperienceAsync@AccessibilityExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall AccessibilityExperienceManager::ExcludeWindowFromCapture(AccessibilityExperienceManager *this)
{
  char v1; // di
  __int64 v2; // rax
  __int64 v3; // rsi
  int (__fastcall *v4)(__int64, __int64 *); // rbx
  char v5; // si
  int v6; // ebx
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-30h] BYREF
  __int64 v10; // [rsp+30h] [rbp-20h]
  __int128 v11; // [rsp+38h] [rbp-18h]
  __int64 v12; // [rsp+48h] [rbp-8h]
  int v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+78h] [rbp+28h] BYREF
  __int64 v15; // [rsp+80h] [rbp+30h] BYREF

  v1 = 0;
  v14 = 0LL;
  v2 = 0LL;
  v15 = 0LL;
  v3 = *((_QWORD *)this + 47);
  if ( v3 )
  {
    v4 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 32LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
    if ( v4(v3, &v14) < 0 || (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 24LL))(v14, &v15) < 0 )
      goto LABEL_9;
    v2 = v15;
  }
  v5 = 1;
  v13 = 1;
  *(_QWORD *)&v9 = 25LL;
  *((_QWORD *)&v9 + 1) = &v13;
  v10 = 4LL;
  v6 = SetWindowCompositionAttribute(v2, &v9);
  *(_QWORD *)&v11 = 24LL;
  *((_QWORD *)&v11 + 1) = &v13;
  v12 = 4LL;
  v9 = v11;
  v10 = 4LL;
  v7 = SetWindowCompositionAttribute(v15, &v9);
  if ( !v6 || !v7 )
    v5 = 0;
  v1 = v5;
LABEL_9:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  return v1;
}
