/*
 * XREFs of UsbhAcquireResetLock @ 0x140037B70
 * Callers:
 *     UsbhDispatch_HardResetEvent @ 0x140037850 (UsbhDispatch_HardResetEvent.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall UsbhAcquireResetLock(__int64 a1, __int64 a2, int a3)
{
  _DWORD *v5; // rdi
  __int64 result; // rax
  int v7; // edx
  __int64 v8; // rdx

  v5 = FdoExt(a1);
  KeWaitForSingleObject(v5 + 704, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 72) = a3;
  *(_DWORD *)(a2 + 64) = 2018792274;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  result = (unsigned int)v5[702];
  *(_DWORD *)(a2 + 68) = result;
  v7 = v5[230];
  *((_QWORD *)v5 + 165) = a2;
  v8 = ((_BYTE)v7 + 1) & 7;
  v5[230] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)v5 + v8 + 924) = a3;
  *(_DWORD *)((char *)v5 + v8 + 928) = v5[702];
  return result;
}
