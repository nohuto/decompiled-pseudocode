/*
 * XREFs of ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801B7510
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18004274C (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z @ 0x1801B7030 (-ButtonEvent@RawButtonProcessor@InputETW@@SAXKKK@Z.c)
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801B7230 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RawButtonProcessor::OnInput(
        RawButtonProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  bool v4; // zf
  __int64 v6; // rax
  unsigned int v7; // ecx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-24h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  int v18; // [rsp+44h] [rbp-14h]

  v4 = *(_BYTE *)a2 >= 0;
  v18 = 0;
  if ( v4 )
  {
    *((_DWORD *)a4 + 2) = 0;
  }
  else
  {
    *((_DWORD *)a4 + 2) = 3;
    v6 = *((unsigned int *)a2 + 16);
    if ( *((_BYTE *)a2 + 68) )
    {
      if ( *((_BYTE *)this + v6 + 48) )
      {
        v7 = 2;
      }
      else
      {
        v7 = 1;
        *((_BYTE *)this + v6 + 48) = 1;
      }
    }
    else
    {
      v7 = 0;
      if ( *((_BYTE *)this + v6 + 48) )
      {
        *((_BYTE *)this + v6 + 48) = 0;
        v7 = 4;
      }
    }
    v14 = *((_DWORD *)a2 + 16);
    v16 = *((_QWORD *)a2 + 4);
    v8 = *((_DWORD *)a2 + 2);
    v9 = *((_QWORD *)this + 5);
    v15 = v7;
    v10 = *((_QWORD *)this + 3);
    v17 = v8;
    if ( (*(int (__fastcall **)(__int64, __int64, __int64, unsigned int *, int))(*(_QWORD *)v10 + 176LL))(
           v10,
           v9,
           4LL,
           &v14,
           24) < 0 )
    {
      wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        (wil::details **)this + 4,
        *((wil::details **)this + 4),
        v11);
      RawButtonProcessor::FindRemoteEndpoint(this);
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, unsigned int *, int))(**((_QWORD **)this + 3) + 176LL))(
             *((_QWORD *)this + 3),
             *((_QWORD *)this + 5),
             4LL,
             &v14,
             24) < 0 )
        wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
          (wil::details **)this + 4,
          *((wil::details **)this + 4),
          v12);
    }
    InputETW::RawButtonProcessor::ButtonEvent(v14, v15, *((_DWORD *)this + 90));
  }
  return 0LL;
}
