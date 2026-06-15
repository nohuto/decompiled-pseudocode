/*
 * XREFs of ?InitializeAudioThreadpool@@YAJXZ @ 0x1801240A4
 * Callers:
 *     ?MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z @ 0x180152F9C (-MyServiceInitialization@@YAKPEAUSERVICE_STATUS_HANDLE__@@KPEAPEBG@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x180123FF4 (-Initialize@CAudioThreadPool@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 InitializeAudioThreadpool(void)
{
  int v0; // edi
  struct CAudioThreadPool *v1; // rax
  struct CAudioThreadPool *v2; // rbx

  v0 = 0;
  if ( !ThreadPool )
  {
    v1 = (struct CAudioThreadPool *)operator new(0x60uLL);
    v2 = v1;
    if ( v1 )
    {
      *((_QWORD *)v1 + 10) = 0LL;
      *(_QWORD *)v1 = &CAudioThreadPool::`vftable';
      *((_DWORD *)v1 + 2) = 3;
      *((_QWORD *)v1 + 2) = 0LL;
      *((_QWORD *)v1 + 3) = 0LL;
      *((_QWORD *)v1 + 4) = 0LL;
      *((_QWORD *)v1 + 5) = 0LL;
      *((_QWORD *)v1 + 6) = 0LL;
      *((_QWORD *)v1 + 7) = 0LL;
      *((_DWORD *)v1 + 16) = 0;
      *((_DWORD *)v1 + 17) = 1;
      *((_DWORD *)v1 + 18) = 72;
      v0 = CAudioThreadPool::Initialize(v1);
      if ( v0 < 0 )
        (**(void (__fastcall ***)(struct CAudioThreadPool *, __int64))v2)(v2, 1LL);
      else
        ThreadPool = v2;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v0;
}
