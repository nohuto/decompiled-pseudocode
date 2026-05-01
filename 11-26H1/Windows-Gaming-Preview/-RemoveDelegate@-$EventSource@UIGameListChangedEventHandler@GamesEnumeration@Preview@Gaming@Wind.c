/*
 * XREFs of ?RemoveDelegate@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@IEAAJPEAUIUnknown@@@Z @ 0x180020FB0
 * Callers:
 *     ??$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_56908091a02afdced2314238e386ad81_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x1800172D4 (--$InvokeDelegates@V_lambda_56908091a02afdced2314238e386ad81_@@UIGameListChangedEventHandler@Gam.c)
 *     ?remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180023AE0 (-remove_GameAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEvent.c)
 *     ?remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180023B30 (-remove_GameRemoved@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 *     ?remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x180023B80 (-remove_GameUpdated@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@UEAAJUEve.c)
 * Callees:
 *     ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@$$QEA_K@Z @ 0x180017534 (--$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@_K@Details@WRL@Microsoft@@YA.c)
 *     ?AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z @ 0x18001BF34 (-AddTail@EventTargetArray@Details@WRL@Microsoft@@QEAAXPEAUIUnknown@@PEAX@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020C40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::RemoveDelegate(
        RTL_SRWLOCK *a1,
        struct IUnknown *a2)
{
  RTL_SRWLOCK *v2; // rsi
  volatile signed __int32 *v5; // rdi
  _QWORD *Ptr; // rax
  struct IUnknown **v7; // rcx
  Microsoft::WRL::Details::EventTargetArray *v8; // rbx
  bool v9; // bp
  __int64 v10; // r12
  __int64 v11; // r12
  int v12; // ebx
  struct IUnknown **v14; // r15
  void **v15; // rsi
  volatile signed __int32 *v16; // rcx
  Microsoft::WRL::Details::EventTargetArray *v17; // rax
  char v18; // [rsp+20h] [rbp-48h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF

  v2 = a1 + 2;
  v5 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (struct IUnknown **)Ptr[2];
  v8 = 0LL;
  v9 = 0;
  v10 = Ptr[3] - (_QWORD)v7;
  v19 = 0LL;
  v11 = (v10 >> 3) - 1;
  v20 = v11;
  if ( !v11 )
  {
    v9 = *v7 == a2;
    goto LABEL_21;
  }
  v12 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64>(
          &v19,
          (unsigned __int64 *)&v20);
  if ( v12 >= 0 )
  {
    v8 = v19;
    v14 = (struct IUnknown **)*((_QWORD *)a1->Ptr + 2);
    if ( v14 == *((struct IUnknown ***)a1->Ptr + 3) )
    {
LABEL_28:
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v8);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v5 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
      return 0LL;
    }
    v15 = (void **)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v9 || a2 != *v14 )
      {
        if ( !v11 )
          break;
        Microsoft::WRL::Details::EventTargetArray::AddTail(v8, *v14, *v15++);
        --v11;
      }
      else
      {
        v9 = 1;
      }
      ++v14;
    }
    while ( v14 != *((struct IUnknown ***)a1->Ptr + 3) );
    v2 = a1 + 2;
LABEL_21:
    if ( v9 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      if ( &v18 != (char *)a1 )
      {
        v5 = (volatile signed __int32 *)a1->Ptr;
        a1->Ptr = 0LL;
      }
      v16 = (volatile signed __int32 *)a1->Ptr;
      v17 = v8;
      v8 = 0LL;
      a1->Ptr = v17;
      if ( v16 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v16);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
    }
    goto LABEL_28;
  }
  if ( v19 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v19);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v12;
}
