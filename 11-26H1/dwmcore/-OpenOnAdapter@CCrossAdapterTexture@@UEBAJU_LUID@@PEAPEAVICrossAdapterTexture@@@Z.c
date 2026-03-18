/*
 * XREFs of ?OpenOnAdapter@CCrossAdapterTexture@@UEBAJU_LUID@@PEAPEAVICrossAdapterTexture@@@Z @ 0x1802B8290
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F36F0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800F6FC0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180132948 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ??1?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180134858 (--1-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z @ 0x1802B840C (-OpenShared@CCrossAdapterTexture@@SAJPEAVCD3DDevice@@PEAXIPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCrossAdapterTexture::OpenOnAdapter(
        CCrossAdapterTexture *this,
        struct _LUID a2,
        struct ICrossAdapterTexture **a3)
{
  int Device; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, _QWORD, void **); // rbx
  int v10; // eax
  unsigned int v11; // r8d
  int v12; // eax
  __int64 v13; // rdx
  struct CD3DDevice *v15[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void *v17; // [rsp+70h] [rbp+30h] BYREF
  struct CCrossAdapterTexture *v18; // [rsp+78h] [rbp+38h] BYREF

  *a3 = 0LL;
  v15[0] = 0LL;
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((__int64 *)v15);
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, a2, v15);
  v7 = Device;
  if ( Device >= 0 )
  {
    v8 = *((_QWORD *)this + 11);
    v17 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void **))(*(_QWORD *)v8 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &v17,
      0LL);
    v10 = v9(v8, 0LL, 0x10000000LL, 0LL, &v17);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v11 = *((_DWORD *)this + 17);
      v18 = 0LL;
      v12 = CCrossAdapterTexture::OpenShared(v15[0], v17, v11, &v18);
      v7 = v12;
      if ( v12 >= 0 )
      {
        v12 = (**(__int64 (__fastcall ***)(struct CCrossAdapterTexture *, GUID *, struct ICrossAdapterTexture **))v18)(
                v18,
                &GUID_4c1b8ee2_ec14_4e60_a35c_b2ea6a182b0b,
                a3);
        v7 = v12;
        if ( v12 >= 0 )
        {
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
          wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
          v7 = 0;
          goto LABEL_12;
        }
        v13 = 455LL;
      }
      else
      {
        v13 = 453LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
        (const char *)(unsigned int)v12);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
        (const char *)(unsigned int)v10);
    }
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v17);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B7,
      (int)"onecoreuap\\windows\\DWM\\dwmcore\\hw\\DeviceTexture.h",
      (const char *)(unsigned int)Device);
  }
LABEL_12:
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::~com_ptr_t<CD3DDevice,wil::err_returncode_policy>(v15);
  return v7;
}
