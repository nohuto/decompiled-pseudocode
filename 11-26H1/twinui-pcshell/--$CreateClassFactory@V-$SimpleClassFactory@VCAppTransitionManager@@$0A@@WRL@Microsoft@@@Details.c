/*
 * XREFs of ??$CreateClassFactory@V?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180183A40
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCAppTransitionManager@@$0A@@12@@Z @ 0x180183B0C (--$MakeAndInitialize@V-$SimpleClassFactory@VCAppTransitionManager@@$0A@@WRL@Microsoft@@V123@$$V@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64); // rcx
  int v10; // eax
  unsigned int v11; // edi
  _DWORD *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>,Microsoft::WRL::SimpleClassFactory<CAppTransitionManager,0>,>(&v13);
  if ( v7 < 0 )
  {
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    return (unsigned int)v7;
  }
  else
  {
    v8 = v13;
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))v13;
    v13[5] = *a1;
    v10 = (**v9)(v9, a3, a4);
    v11 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
      {
        v8[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v8 = 0LL;
      }
    }
    if ( v8 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
    return v11;
  }
}
