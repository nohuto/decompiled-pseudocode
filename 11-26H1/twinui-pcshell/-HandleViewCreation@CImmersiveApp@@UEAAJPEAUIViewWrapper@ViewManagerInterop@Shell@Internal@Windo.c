/*
 * XREFs of ?HandleViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x1802FE020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::HandleViewCreation(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax

  v4 = *a1;
  if ( a1[43] )
    return (*(__int64 (**)(void))(v4 + 40))();
  else
    return (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(v4 + 32))(a1, a2, a4);
}
