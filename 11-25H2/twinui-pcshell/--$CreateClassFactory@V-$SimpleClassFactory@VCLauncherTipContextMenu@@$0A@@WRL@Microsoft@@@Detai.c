/*
 * XREFs of ??$CreateClassFactory@V?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1805DA680
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@12@@Z @ 0x18022B100 (--$MakeAndInitialize@V-$SimpleClassFactory@VCLauncherTipContextMenu@@$0A@@WRL@Microsoft@@V123@$$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<Microsoft::WRL::SimpleClassFactory<CLauncherTipContextMenu,0>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  _DWORD *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::SimpleClassFactory<CLauncherTipContextMenu,0>,Microsoft::WRL::SimpleClassFactory<CLauncherTipContextMenu,0>,>(v12);
  if ( v7 >= 0 )
  {
    v9 = (_DWORD *)v12[0];
    *(_DWORD *)(v12[0] + 20) = *a1;
    v10 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v9)(v9, a3, a4);
    v11 = v10;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v10 < 0 )
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
    return v11;
  }
  else
  {
    if ( v12[0] )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
    return (unsigned int)v7;
  }
}
