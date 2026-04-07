/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180020E50
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800208B0 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetEnabled@CButton@@QEAAX_N@Z @ 0x180022978 (-SetEnabled@CButton@@QEAAX_N@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x18005D110 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::EnsureNonClientAreaButton(__int64 a1, int a2)
{
  __int64 v2; // r8
  struct CVisual *v3; // rdx
  unsigned int v4; // ebx
  __int64 v6; // rsi
  struct CVisual **v7; // r14
  __int64 result; // rax

  v2 = a2;
  v3 = *(struct CVisual **)(a1 + 472 + 8LL * a2);
  v4 = 0;
  v6 = 3 * v2;
  v7 = (struct CVisual **)(a1 + 472 + 8 * v2);
  if ( (dword_1800F4ED0[3 * v2] & *(_DWORD *)(a1 + 568)) != 0 )
  {
    if ( !v3 )
    {
      v4 = CButton::Create((struct CButton **)(a1 + 472 + 8 * v2));
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xA5Du, 0LL);
        return v4;
      }
      v4 = CContainerVisual::AddChild(*(CContainerVisual **)(a1 + 248), *v7);
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xA5Fu, 0LL);
        return v4;
      }
      *((_DWORD *)*v7 + 30) = dword_1800F4ED0[v6 + 2];
    }
    CButton::SetEnabled(*v7, (dword_1800F4ED0[v6 + 1] & *(_DWORD *)(a1 + 568)) != 0);
    return v4;
  }
  if ( !v3 )
    return v4;
  result = CContainerVisual::RemoveChild(*(CContainerVisual **)(a1 + 248), v3);
  v4 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0xA6Au, 0LL);
    return v4;
  }
  if ( *v7 )
  {
    CBaseObject::Release(*v7);
    *v7 = 0LL;
    return v4;
  }
  return result;
}
