/*
 * XREFs of ?CreateIsGameManager@@YAJPEAPEAUIIsGameManager@@@Z @ 0x18017DC34
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800C53F0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z @ 0x18017DCAC (--$MakeAndInitialize@VIsGameManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIsGameManager@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreateIsGameManager(struct IIsGameManager **a1)
{
  int IsGame; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IIsGameManager *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  IsGame = Microsoft::WRL::Details::MakeAndInitialize<IsGameManager,IsGameManager,>(&v6);
  v3 = IsGame;
  if ( IsGame >= 0 )
  {
    *a1 = v6;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB8,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)IsGame);
    if ( v6 )
      (*(void (__fastcall **)(struct IIsGameManager *))(*(_QWORD *)v6 + 16LL))(v6);
    return v3;
  }
}
