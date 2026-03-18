/*
 * XREFs of ?SimulateDeviceLost@CD3DDevice@@AEAAXXZ @ 0x180298238
 * Callers:
 *     ?CheckForDeviceLost@CD3DDevice@@AEAAXXZ @ 0x1801816E4 (-CheckForDeviceLost@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DDevice::SimulateDeviceLost(CD3DDevice *this)
{
  void (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( rand() >= 32390 )
  {
    v2 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 68);
    v3 = 0LL;
    (**v2)(v2, &GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8, &v3);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 264LL))(v3, 2289696800LL);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v3);
  }
}
