/*
 * XREFs of ?UnregisterController@SystemButtonEventControllerManager@@QEAAXPEAVSystemButtonEventController@@@Z @ 0x180071C1C
 * Callers:
 *     ?OnDisconnected@SystemButtonEventController@@MEAAJXZ @ 0x180071BA0 (-OnDisconnected@SystemButtonEventController@@MEAAJXZ.c)
 *     ?OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z @ 0x18015F930 (-OnContinueProcessing@SystemButtonEventController@@MEAAJAEBUSystemButtonEventInfo@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180071CDC (--4-$ComPtr@VSystemButtonEventController@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SystemButtonEventControllerManager::UnregisterController(
        SystemButtonEventControllerManager *this,
        struct SystemButtonEventController *a2)
{
  __int64 v4; // rbx
  char *v5; // rdi
  SystemButtonEventControllerManager *v6; // rcx
  char *v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF
  char *v9; // [rsp+40h] [rbp+18h] BYREF

  v4 = *((_QWORD *)a2 + 7);
  v8 = v4;
  if ( v4 )
    (**(void (__fastcall ***)(__int64))v4)(v4);
  v5 = (char *)*((_QWORD *)a2 + 6);
  v9 = v5;
  if ( v5 )
    (**(void (__fastcall ***)(char *))v5)(v5);
  v6 = (SystemButtonEventControllerManager *)(v4 + 48);
  if ( !v4 )
    v6 = this;
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v6, &v9);
  v7 = v5 + 56;
  if ( !v5 )
    v7 = (char *)this + 8;
  Microsoft::WRL::ComPtr<SystemButtonEventController>::operator=(v7, &v8);
  if ( v5 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
}
