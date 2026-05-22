/*
 * XREFs of ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18005ECC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA?AV?$ComPtr@UIDelegateInformationProvider@@@WRL@Microsoft@@XZ @ 0x18005EFAC (--$GetAttachedObject@UIDelegateInformationProvider@@@InputSite@@QEAA-AV-$ComPtr@UIDelegateInform.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DWMFocusedInputTarget::GetDelegateSourceProcessId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  (*(void (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, &v6);
  v3 = v6;
  if ( !v6 )
    goto LABEL_2;
  InputSite::GetAttachedObject<IDelegateInformationProvider>(v6, &v7);
  if ( !v7 )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v7);
    v3 = v6;
LABEL_2:
    *a2 = 0;
    goto LABEL_3;
  }
  *a2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 48LL))(v7);
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v3 = v6;
LABEL_3:
  if ( v3 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
