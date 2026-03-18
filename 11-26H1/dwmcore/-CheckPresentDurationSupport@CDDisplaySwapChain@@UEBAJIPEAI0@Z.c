/*
 * XREFs of ?CheckPresentDurationSupport@CDDisplaySwapChain@@UEBAJIPEAI0@Z @ 0x18029A790
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBA_NIPEAI0@Z @ 0x1801BA41C (-CheckVRRPresentDurationSupport@COverlaySwapChain@@IEBA_NIPEAI0@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckPresentDurationSupport(
        CDDisplaySwapChain *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+38h] [rbp-40h] BYREF

  v8 = 0;
  if ( !COverlaySwapChain::CheckVRRPresentDurationSupport((CDDisplaySwapChain *)((char *)this - 24), a2, a3, a4) )
  {
    v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 50);
    v12 = 0LL;
    (**v9)(v9, &GUID_ad768f1a_85a1_5430_b58b_1e4ebc1b748f, &v12);
    v13 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v12 + 48LL))(v12, a2, &v13);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x83u, 0LL);
    }
    else
    {
      *a3 = v13;
      *a4 = DWORD2(v13);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v12);
  }
  return v8;
}
