/*
 * XREFs of CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9___ @ 0x180527464
 * Callers:
 *     ?CancelPlacement@WindowArrangementView@@UEAAJXZ @ 0x1805288C0 (-CancelPlacement@WindowArrangementView@@UEAAJXZ.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9__&_ @ 0x18052757C (Microsoft--WRL--Details--Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc.c)
 *     ?InternalRelease@?$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ @ 0x18052A1F4 (-InternalRelease@-$ComPtr@VWindowArrangementView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDCompBatchAnimationCallback_CreateInstance__lambda_83894a20d7676cc7370719a196cbc3a9_(
        __int64 a1,
        _QWORD *a2)
{
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned int v5; // edi
  __int64 (__fastcall ***v7)(_QWORD, GUID *, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Details::Make_CDCompBatchAnimationCallback__lambda_83894a20d7676cc7370719a196cbc3a9_____lambda_83894a20d7676cc7370719a196cbc3a9____(
    &v7,
    a1);
  v4 = v7;
  if ( v7 )
    v5 = (**v7)(v7, &GUID_53204493_9170_4f30_be0e_211392a4618e, a2);
  else
    v5 = -2147024882;
  if ( v4 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  Microsoft::WRL::ComPtr<WindowArrangementView>::InternalRelease(a1);
  return v5;
}
