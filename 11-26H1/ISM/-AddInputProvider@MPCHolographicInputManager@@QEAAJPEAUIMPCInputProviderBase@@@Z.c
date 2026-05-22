/*
 * XREFs of ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x18001EADC
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001FAFC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x18001E93C (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x18001EC1C (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHolographicInputManager::AddInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char *v4; // rsi
  struct IMPCInputProviderBase **i; // rax
  struct IMPCInputProviderBase *v7; // rbx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  int v10; // ebx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = (char *)this + 3304;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 413);
        i != *((struct IMPCInputProviderBase ***)this + 414);
        ++i )
  {
    if ( *i == a2 )
      return 2147942487LL;
  }
  v7 = a2;
  v11[0] = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v8 = (_QWORD *)*((_QWORD *)v4 + 1);
  if ( v8 == *((_QWORD **)v4 + 2) )
  {
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v4,
      v8,
      v11);
    v7 = (struct IMPCInputProviderBase *)v11[0];
  }
  else
  {
    *v8 = 0LL;
    if ( v8 != v11 )
    {
      *v8 = a2;
      v7 = 0LL;
    }
    *((_QWORD *)v4 + 1) += 8LL;
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = (_QWORD *)*((_QWORD *)this + 450);
  if ( v9 == *((_QWORD **)this + 451)
    || (v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 48LL))(*v9),
        v10 == (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2))
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 272LL))(**((_QWORD **)this + 450)) )
  {
    MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  }
  if ( *((_QWORD *)this + 422) )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 296LL))(a2);
  return 0LL;
}
