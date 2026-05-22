/*
 * XREFs of ??0_Mutex_base@std@@QEAA@H@Z @ 0x18007C6C0
 * Callers:
 *     ?Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800DCBC0 (-Create@DockDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

std::_Mutex_base *__fastcall std::_Mutex_base::_Mutex_base(std::_Mutex_base *this, int a2)
{
  std::_Mutex_base *result; // rax

  *((_DWORD *)this + 1) = 0;
  *(_OWORD *)((char *)this + 24) = 0LL;
  *(_OWORD *)((char *)this + 40) = 0LL;
  *(_OWORD *)((char *)this + 56) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 19) = 0;
  result = this;
  *((_DWORD *)this + 18) = -1;
  *(_DWORD *)this = a2 | 2;
  return result;
}
