/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VCImmersiveShellBuilder@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E5CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801E5D8C (--$MakeAndInitialize@VCImmersiveShellBuilder@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::SimpleClassFactory<CImmersiveShellBuilder,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v10 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<CImmersiveShellBuilder,IUnknown,>(&v10);
    if ( v6 >= 0 )
    {
      v7 = v10;
      v8 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v10)(v10, a3, a4);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      return v8;
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v6;
}
