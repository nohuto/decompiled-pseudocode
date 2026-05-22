/*
 * XREFs of ?OutputIoctlAsync@PnpDevice@@QEAAJK_KPEAXPEAU_OVERLAPPED@@@Z @ 0x1800E6180
 * Callers:
 *     ?OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z @ 0x1800E60C4 (-OutputIoctl@PnpDevice@@QEAAJK_KPEAXPEA_K@Z.c)
 * Callees:
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800898D8 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 */

signed int __fastcall PnpDevice::OutputIoctlAsync(
        PnpDevice *this,
        __int64 a2,
        __int64 a3,
        void *a4,
        struct _OVERLAPPED *a5)
{
  void *v5; // rax
  LPOVERLAPPED lpOverlapped; // rdx
  LPVOID lpOutBuffer; // r9
  signed int result; // eax

  *(_OWORD *)&a5->Internal = 0LL;
  a5->Pointer = 0LL;
  v5 = (void *)std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 40);
  if ( DeviceIoControl(v5, 0xB01A0u, 0LL, 0, lpOutBuffer, 4u, 0LL, lpOverlapped) )
    return 0;
  result = GetLastError();
  if ( !result || result == 997 )
    return 0;
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
