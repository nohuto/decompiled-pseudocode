/*
 * XREFs of ?bInit@W32PIDLOCK@@QEAA_NXZ @ 0x14015664C
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z @ 0x140026360 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHH@Z.c)
 * Callees:
 *     ?Win32AllocPoolImpl@@YAPEAX_K0K@Z @ 0x1400A7D44 (-Win32AllocPoolImpl@@YAPEAX_K0K@Z.c)
 *     ?vCleanUp@W32PIDLOCK@@QEAAXXZ @ 0x14015672C (-vCleanUp@W32PIDLOCK@@QEAAXXZ.c)
 */

char __fastcall W32PIDLOCK::bInit(W32PIDLOCK *this)
{
  __int64 v2; // rax
  struct _KMUTANT *v3; // rax
  struct _KMUTANT *v4; // rdi
  __int64 v5; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  v2 = Win32AllocPoolImpl(64LL, 0x48uLL, 0x6C323357u);
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
  {
    v3 = (struct _KMUTANT *)Win32AllocPoolImpl(64LL, 0x38uLL, 0x6D736647u);
    v4 = v3;
    if ( v3 )
      KeInitializeMutex(v3, 0);
    *(_QWORD *)(*((_QWORD *)this + 5) + 64LL) = v4;
    v5 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)(v5 + 64) )
    {
      KeInitializeSemaphore((PRKSEMAPHORE)v5, 0, 0x7FFFFFFF);
      KeInitializeSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 5) + 32LL), 0, 0x7FFFFFFF);
      return 1;
    }
    W32PIDLOCK::vCleanUp(this);
  }
  return 0;
}
