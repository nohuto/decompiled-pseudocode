/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18043D0CC
 * Callers:
 *     _lambda_7ab3d9c0db1bfade5feb6f215ef467d5_::operator() @ 0x180439A10 (_lambda_7ab3d9c0db1bfade5feb6f215ef467d5_--operator().c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18043E628 (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18043F194 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x18044107C (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall WindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  char v4; // al
  char v5; // cl
  UINT uFlags; // r10d

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 488)
    && *(_DWORD *)(a1 + 296)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1);
    v5 = a2 & 0xFD;
    if ( v4 )
      v5 = a2;
    uFlags = 2 * ((v5 & 1) == 0) + 17428;
    if ( (v5 & 2) == 0 )
      uFlags |= 1u;
    if ( SetWindowPos(
           (HWND)*(int *)(a1 + 296),
           0LL,
           (int)*(float *)(a1 + 472),
           (int)*(float *)(a1 + 476),
           (int)*(float *)(a1 + 480),
           (int)*(float *)(a1 + 484),
           uFlags) )
    {
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 360), (int)*(float *)(a1 + 480), (int)*(float *)(a1 + 484));
    }
  }
}
