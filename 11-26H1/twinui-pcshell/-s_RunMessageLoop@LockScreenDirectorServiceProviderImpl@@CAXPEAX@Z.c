/*
 * XREFs of ?s_RunMessageLoop@LockScreenDirectorServiceProviderImpl@@CAXPEAX@Z @ 0x180144930
 * Callers:
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1802001F0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 *     ?s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z @ 0x180241460 (-s_RunDirectorThread@LockScreenDirectorServiceProviderImpl@@CAKPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LockScreenDirectorServiceProviderImpl::s_RunMessageLoop(void *a1)
{
  DWORD v1; // eax
  DWORD v2; // eax
  MSG Msg; // [rsp+30h] [rbp-38h] BYREF
  HANDLE pHandles; // [rsp+70h] [rbp+8h] BYREF

  pHandles = a1;
  while ( 1 )
  {
    v1 = MsgWaitForMultipleObjectsEx(1u, &pHandles, 0xFFFFFFFF, 0x1CFFu, 6u);
    if ( !v1 )
      break;
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 != 191 )
        return;
    }
    else
    {
      memset(&Msg, 0, sizeof(Msg));
      while ( PeekMessageW(&Msg, 0LL, 0, 0, 1u) )
      {
        TranslateMessage(&Msg);
        DispatchMessageW(&Msg);
      }
    }
  }
}
