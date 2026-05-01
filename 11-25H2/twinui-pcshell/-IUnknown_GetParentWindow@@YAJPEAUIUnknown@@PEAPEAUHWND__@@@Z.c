/*
 * XREFs of ?IUnknown_GetParentWindow@@YAJPEAUIUnknown@@PEAPEAUHWND__@@@Z @ 0x18010B330
 * Callers:
 *     ?RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@@Z @ 0x18010B0A4 (-RuntimeClassInitialize@CDelayedTileActivation@@QEAAJPEBG00PEAUIUnknown@@W4ACTIVATEOPTIONSINTERN.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IUnknown_GetParentWindow(struct IUnknown *a1, HWND *a2)
{
  IUnknown *v3; // rbx
  HRESULT Window; // edi
  IUnknown *v5; // rsi
  IUnknown *punk; // [rsp+30h] [rbp+8h] BYREF

  punk = a1;
  v3 = 0LL;
  do
  {
    Window = IUnknown_GetWindow(a1, a2);
    if ( Window >= 0 || IUnknown_GetSite(punk, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk) < 0 )
    {
      a1 = punk;
    }
    else
    {
      a1 = punk;
      v5 = punk;
      if ( v3 )
      {
        ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
        a1 = punk;
      }
      v3 = v5;
    }
  }
  while ( a1 && Window < 0 );
  if ( v3 )
    ((void (__fastcall *)(IUnknown *))v3->lpVtbl->Release)(v3);
  return (unsigned int)Window;
}
