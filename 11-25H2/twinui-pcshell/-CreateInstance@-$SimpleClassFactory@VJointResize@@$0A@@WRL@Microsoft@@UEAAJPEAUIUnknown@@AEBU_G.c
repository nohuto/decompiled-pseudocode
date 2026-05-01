/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VJointResize@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801C3770
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801C3818 (--$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::SimpleClassFactory<JointResize,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v9 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<JointResize,IUnknown,>(&v9);
    if ( v6 >= 0 )
    {
      v6 = (**v9)(v9, a3, a4);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v9);
    }
    else
    {
      v8 = (__int64)v9;
      if ( v9 )
      {
        v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  return (unsigned int)v6;
}
