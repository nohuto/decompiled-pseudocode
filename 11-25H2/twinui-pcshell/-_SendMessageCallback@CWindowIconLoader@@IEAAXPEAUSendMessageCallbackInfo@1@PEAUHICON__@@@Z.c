/*
 * XREFs of ?_SendMessageCallback@CWindowIconLoader@@IEAAXPEAUSendMessageCallbackInfo@1@PEAUHICON__@@@Z @ 0x1800F0E0C
 * Callers:
 *     ?_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z @ 0x1800F0DE0 (-_SendMessageCallback@CWindowIconLoader@@KAXPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z @ 0x1800F16D4 (-_LoadAsyncIcon@CWindowIconLoader@@IEAAXH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowIconLoader::_SendMessageCallback(
        CWindowIconLoader *this,
        struct CWindowIconLoader::SendMessageCallbackInfo *a2,
        HICON a3)
{
  int v3; // r9d
  int v4; // ebx
  int v6; // edi
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0;
  if ( !a3 )
  {
    if ( v3 )
    {
      if ( v3 != 1 )
        return;
    }
    else
    {
      v4 = 2;
    }
    CWindowIconLoader::_LoadAsyncIcon(this, v4);
    return;
  }
  v6 = 1;
  if ( v3 )
  {
    v7 = v3 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v6 = 4;
    }
    else
    {
      v6 = 6;
    }
  }
  else
  {
    v6 = 5;
  }
  if ( v6 > *((_DWORD *)this + 10) )
  {
    v8 = *((_QWORD *)this + 4);
    v11 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, HICON, char *, __int64 *))(*(_QWORD *)v8 + 48LL))(
           v8,
           a3,
           (char *)this + 44,
           &v11);
    if ( v9 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3), v11);
      *((_DWORD *)this + 10) = v6;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\windowiconloader.cpp",
        (const char *)(unsigned int)v9);
    }
  }
}
