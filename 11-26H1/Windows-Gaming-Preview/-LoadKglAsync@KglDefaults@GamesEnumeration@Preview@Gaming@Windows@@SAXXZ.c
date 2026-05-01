/*
 * XREFs of ?LoadKglAsync@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@SAXXZ @ 0x18003B3A8
 * Callers:
 *     ?RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJXZ @ 0x180021678 (-RuntimeClassInitialize@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000222C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180002250 (--2@YAPEAX_K@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E904 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglAsync(void)
{
  RTL_SRWLOCK *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  volatile signed __int32 *v3; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v5; // rbx
  signed int LastError; // eax
  _DWORD *v7; // [rsp+30h] [rbp+8h]

  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
  if ( !Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance )
  {
    v0 = (RTL_SRWLOCK *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v0 )
      goto LABEL_15;
    v0->Ptr = &Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`vftable';
    v0[1].Ptr = 0LL;
    InitializeSRWLock(v0 + 2);
    EventW = CreateEventW(0LL, 1, 0, L"KglReady");
    v2 = hEvent;
    if ( EventW != hEvent )
    {
      if ( hEvent
        && !((unsigned __int8 (__fastcall *)(void *))*Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent)(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_readyEvent) )
      {
        LastError = GetLastError();
        if ( LastError > 0 )
          LastError = (unsigned __int16)LastError | 0x80070000;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
        JUMPOUT(0x18003B592LL);
      }
      v2 = EventW;
      hEvent = EventW;
    }
    if ( v2 )
    {
      v7 = operator new(0x18uLL);
      *(_OWORD *)v7 = 0LL;
      v7[2] = 1;
      v7[3] = 1;
      *(_QWORD *)v7 = &std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`vftable';
      *((_QWORD *)v7 + 2) = v0;
      Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v0;
      v3 = (volatile signed __int32 *)*(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance + 1);
      *(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_instance + 1) = (Windows::Gaming::Preview::GamesEnumeration::KglDefaults *)v7;
      if ( v3 )
      {
        if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
          if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
    }
  }
  if ( !Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread )
  {
    ThreadpoolWork = CreateThreadpoolWork(
                       Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKglThreadProc,
                       0LL,
                       0LL);
    v5 = ThreadpoolWork;
    if ( ThreadpoolWork )
    {
      SubmitThreadpoolWork(ThreadpoolWork);
      Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_loadKglThread = v5;
    }
  }
LABEL_15:
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::KglDefaults::_initializeLock);
}
