/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VWindowingEnvironmentManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180092990
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180092A30 (--$MakeAndInitialize@VWindowingEnvironmentManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::SimpleClassFactory<WindowingEnvironmentManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<WindowingEnvironmentManager,IUnknown,>(&v8);
    if ( v6 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v8)(v8, a3, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return (unsigned int)v6;
}
