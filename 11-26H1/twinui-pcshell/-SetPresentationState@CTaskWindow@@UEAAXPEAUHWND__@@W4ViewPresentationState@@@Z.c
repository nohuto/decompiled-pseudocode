/*
 * XREFs of ?SetPresentationState@CTaskWindow@@UEAAXPEAUHWND__@@W4ViewPresentationState@@@Z @ 0x180021990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x180021ADC (-IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z.c)
 *     ??$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z @ 0x180021B1C (--$SetPresentationState@III@CAppManagerTelemetry@@SAX$$QEAI00@Z.c)
 *     WPP_SF_Ld @ 0x18002324C (WPP_SF_Ld.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CTaskWindow::SetPresentationState(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int8 v6; // cl
  int v7; // eax
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // r8
  unsigned __int64 v17; // rdx
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+70h] [rbp+30h] BYREF
  int v21; // [rsp+80h] [rbp+40h] BYREF
  int v22; // [rsp+88h] [rbp+48h] BYREF

  v6 = WPP_GLOBAL_Control;
  if ( (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 1) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_Ld(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      14LL,
      &WPP_b9ee9f95e0a33febf9f86956a7a64e04_Traceguids,
      *(unsigned int *)(a1 + 136),
      a3);
  }
  LOBYTE(v7) = CAppManagerTelemetry::IsEnabled(v6, a2);
  if ( (_BYTE)v7 )
  {
    v21 = a2;
    v20 = a3;
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
    LOBYTE(v7) = CAppManagerTelemetry::SetPresentationState<unsigned int,unsigned int,unsigned int>(&v22, &v20, &v21);
  }
  *(_DWORD *)(a1 + 136) = a3;
  v19[0] = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 48);
  if ( v8 )
  {
    v9 = **v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
    v7 = v9(v8, &GUID_3b422c7e_2c2b_4e2c_81e3_49920376ed20, v19);
    if ( v7 >= 0 )
    {
      v11 = *(_DWORD *)(a1 + 136);
      if ( !v11 || (v12 = v11 - 1) == 0 || (v13 = v12 - 1) == 0 )
      {
        v16 = 0LL;
        v17 = 0LL;
        goto LABEL_21;
      }
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( !v15 )
        {
          v16 = 1LL;
          goto LABEL_18;
        }
        if ( v15 != 1 )
          goto LABEL_6;
      }
      v16 = 0LL;
LABEL_18:
      v17 = a2;
LABEL_21:
      LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)v19[0] + 24LL))(
                     v19[0],
                     v17,
                     v16);
    }
  }
LABEL_6:
  v10 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    LOBYTE(v7) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v7;
}
