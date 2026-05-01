/*
 * XREFs of ?WaitForRefs@CThreadRefHost@@QEAAXXZ @ 0x1801FB9A8
 * Callers:
 *     ??_GCThreadRefHost@@UEAAPEAXI@Z @ 0x1801FB960 (--_GCThreadRefHost@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CThreadRefHost::WaitForRefs(CThreadRefHost *this)
{
  __int64 v2; // rcx
  struct tagMSG Msg; // [rsp+20h] [rbp-38h] BYREF

  SHSetThreadRef(0LL);
  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  while ( *((_DWORD *)this + 2) )
  {
    memset(&Msg, 0, sizeof(Msg));
    if ( GetMessageW(&Msg, 0LL, 0, 0) )
    {
      TranslateMessage(&Msg);
      DispatchMessageW(&Msg);
    }
  }
}
