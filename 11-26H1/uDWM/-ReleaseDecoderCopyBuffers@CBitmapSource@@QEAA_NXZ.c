/*
 * XREFs of ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ @ 0x18009AD70
 * Callers:
 *     ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C (-EnsureImages@CTopLevelWindow@@SAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050208 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall CBitmapSource::ReleaseDecoderCopyBuffers(CBitmapSource *this)
{
  bool v1; // bl
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v3 = 0LL;
  if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5))(
         *((_QWORD *)this + 5),
         &IID_IWICDecoderBitmapSource,
         &v3) >= 0 )
    v1 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3) == 0;
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v3);
  return v1;
}
