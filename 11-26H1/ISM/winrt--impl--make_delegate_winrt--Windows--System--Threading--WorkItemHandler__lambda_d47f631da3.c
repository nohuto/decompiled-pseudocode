/*
 * XREFs of winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800DDA78
 * Callers:
 *     ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DE564 (-PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x1800A5FA8 (--0implements_delegate_base@impl@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  _QWORD *result; // rax
  char *v7; // [rsp+40h] [rbp+8h]

  v7 = (char *)operator new(0x70uLL);
  winrt::impl::implements_delegate_base::implements_delegate_base((winrt::impl::implements_delegate_base *)(v7 + 8));
  v4 = *a2;
  *a2 = 0LL;
  *(_QWORD *)(v5 + 16) = v4;
  *(_DWORD *)(v5 + 24) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(v5 + 28) = *((_DWORD *)a2 + 3);
  *(_OWORD *)(v5 + 32) = *((_OWORD *)a2 + 1);
  *(_OWORD *)(v5 + 48) = *((_OWORD *)a2 + 2);
  *(_OWORD *)(v5 + 64) = *((_OWORD *)a2 + 3);
  *(_OWORD *)(v5 + 80) = *((_OWORD *)a2 + 4);
  *(_QWORD *)(v5 + 96) = a2[10];
  *(_QWORD *)(v5 + 104) = a2[11];
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = off_1801E7A30;
  result = a1;
  *a1 = v5;
  return result;
}
