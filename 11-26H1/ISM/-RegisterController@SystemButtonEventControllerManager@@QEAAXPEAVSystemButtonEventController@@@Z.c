/*
 * XREFs of ?RegisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180071B08
 * Callers:
 *     ?OnConnected@SystemButtonEventController@@MEAAJXZ @ 0x180096EF0 (-OnConnected@SystemButtonEventController@@MEAAJXZ.c)
 * Callees:
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180071CDC (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventController@@@Z @ 0x1800987FC (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@PEAVSystemButtonEventContr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemButtonEventControllerManager::RegisterController(
        SystemButtonEventControllerManager *this,
        struct SystemButtonEventController *a2)
{
  _QWORD *v4; // rdi
  struct SystemButtonEventController *v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_QWORD *)this )
  {
    v5 = a2;
    if ( a2 )
      (**(void (__fastcall ***)(struct SystemButtonEventController *))a2)(a2);
    v4 = (_QWORD *)((char *)this + 8);
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(*v4 + 48LL, &v5);
    Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=((char *)a2 + 56, v4);
    if ( a2 )
      (*(void (__fastcall **)(struct SystemButtonEventController *))(*(_QWORD *)a2 + 8LL))(a2);
  }
  else
  {
    ((void (*)(void))Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=)();
    v4 = (_QWORD *)((char *)this + 8);
  }
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v4, a2);
}
