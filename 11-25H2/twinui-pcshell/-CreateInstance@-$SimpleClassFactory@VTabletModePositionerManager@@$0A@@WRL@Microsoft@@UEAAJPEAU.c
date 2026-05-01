/*
 * XREFs of ?CreateInstance@?$SimpleClassFactory@VTabletModePositionerManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1801DFBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801DFC68 (--$MakeAndInitialize@VTabletModePositionerManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::SimpleClassFactory<TabletModePositionerManager,0>::CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD *); // rcx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, _QWORD *); // rcx
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v10 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<TabletModePositionerManager,IUnknown,>(&v10);
    if ( v6 >= 0 )
    {
      v6 = (**v10)(v10, a3, a4);
      v9 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v9)[2])(v9);
      }
    }
    else
    {
      v7 = v10;
      if ( v10 )
      {
        v10 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD *)))(*v7)[2])(v7);
      }
    }
  }
  return (unsigned int)v6;
}
