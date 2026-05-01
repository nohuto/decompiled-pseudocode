/*
 * XREFs of ??$CreateClassFactory@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180325560
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCFullScreenManager@@$0A@@12@@Z @ 0x1803257F8 (--$MakeAndInitialize@V-$SimpleClassFactory@VCFullScreenManager@@$0A@@WRL@Microsoft@@V123@$$V@Det.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v9; // rbx
  __int64 (__fastcall ***v10)(_QWORD, __int64, __int64); // rcx
  int v11; // eax
  unsigned int v12; // edi
  _DWORD *v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>,Microsoft::WRL::SimpleClassFactory<CFullScreenManager,0>,>(&v13);
  if ( v7 >= 0 )
  {
    v9 = v13;
    v10 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64))v13;
    v13[5] = *a1;
    v11 = (**v10)(v10, a3, a4);
    v12 = v11;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v11 < 0 )
      {
        v9[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v9 = 0LL;
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
    return v12;
  }
  else
  {
    if ( v13 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
    return (unsigned int)v7;
  }
}
