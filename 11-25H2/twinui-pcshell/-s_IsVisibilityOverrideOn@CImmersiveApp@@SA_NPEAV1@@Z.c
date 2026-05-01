/*
 * XREFs of ?s_IsVisibilityOverrideOn@CImmersiveApp@@SA_NPEAV1@@Z @ 0x1801D3580
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x18006BACC (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CImmersiveApp::s_IsVisibilityOverrideOn(struct CImmersiveApp *a1)
{
  unsigned __int64 v2; // rdi
  void (__fastcall *v3)(unsigned __int64, struct IUnknown **); // rbx
  PSRWLOCK v4; // r14
  struct IUnknown *v5; // rdx
  struct IUnknown *v6; // rbx
  PVOID Ptr; // rdi
  bool v8; // zf
  char v9; // bl
  struct IUnknown *v10; // rcx
  struct IUnknown *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v2 = (unsigned __int64)a1 + 112;
  v3 = *(void (__fastcall **)(unsigned __int64, struct IUnknown **))(*((_QWORD *)a1 + 14) + 464LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v12);
  v3(v2, &v12);
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v5 = (struct IUnknown *)(v2 & -(__int64)(a1 != 0LL));
  v6 = v12;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
  if ( v5
    && CReportWindowVisibilityChange::IsOverrideImmuneApplication(
         (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
         v5) )
  {
    v9 = 1;
  }
  else
  {
    if ( Ptr )
    {
      v8 = *((_DWORD *)v4[1].Ptr + (_QWORD)Ptr - 1) == 1;
    }
    else if ( LODWORD(v4[5].Ptr) && SHIsSameObject(v6, (struct IUnknown *)v4[6].Ptr) )
    {
      v8 = LODWORD(v4[5].Ptr) == 1;
    }
    else
    {
      v8 = HIDWORD(v4[5].Ptr) == 1;
    }
    v9 = v8;
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  }
  return v9;
}
