/*
 * XREFs of ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180012C20
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800126A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x180007D54 (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CButton@@SAJPEAPEAV1@@Z @ 0x180011E64 (-Create@CButton@@SAJPEAPEAV1@@Z.c)
 *     ?SetEnabled@CButton@@QEAAX_N@Z @ 0x180012D68 (-SetEnabled@CButton@@QEAAX_N@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
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
  v3 = *(struct CVisual **)(a1 + 488 + 8LL * a2);
  v4 = 0;
  v6 = 3 * v2;
  v7 = (struct CVisual **)(a1 + 488 + 8 * v2);
  if ( (dword_1800F97B8[3 * v2] & *(_DWORD *)(a1 + 584)) != 0 )
  {
    if ( !v3 )
    {
      v4 = CButton::Create((struct CButton **)(a1 + 488 + 8 * v2));
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xAE2u, 0LL);
        return v4;
      }
      v4 = CContainerVisual::AddChild(*(CContainerVisual **)(a1 + 264), *v7);
      if ( (v4 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0xAE4u, 0LL);
        return v4;
      }
      *((_DWORD *)*v7 + 32) = dword_1800F97B8[v6 + 2];
    }
    CButton::SetEnabled(*v7, (dword_1800F97B8[v6 + 1] & *(_DWORD *)(a1 + 584)) != 0);
    return v4;
  }
  if ( !v3 )
    return v4;
  result = CContainerVisual::RemoveChild(*(CContainerVisual **)(a1 + 264), v3);
  v4 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0xAEFu, 0LL);
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
