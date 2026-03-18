/*
 * XREFs of ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x1401C607C
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x14008C0E0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x140026954 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x140129FB4 (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 *     ?GreCreateKMutex@@YA_KXZ @ 0x1401A0434 (-GreCreateKMutex@@YA_KXZ.c)
 */

char __fastcall W32PIDLOCK::bInit(W32PIDLOCK *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = Win32AllocPoolImpl(64LL, 0x48uLL, 0x6C323357u);
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
  {
    *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = GreCreateKMutex();
    v3 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)(v3 + 64) )
    {
      KeInitializeSemaphore((PRKSEMAPHORE)v3, 0, 0x7FFFFFFF);
      KeInitializeSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 5) + 32LL), 0, 0x7FFFFFFF);
      return 1;
    }
    W32PIDLOCK::vCleanUp(this);
  }
  return 0;
}
