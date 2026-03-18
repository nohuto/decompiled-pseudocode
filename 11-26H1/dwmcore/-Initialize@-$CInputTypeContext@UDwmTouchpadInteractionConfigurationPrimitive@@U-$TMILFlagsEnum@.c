/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x1800AAC04
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800AA154 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1800AAD50 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // rax
  unsigned int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  unsigned int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+40h] [rbp-28h]

  *(_BYTE *)(a1 + 148) &= ~0x40u;
  v3 = (__int64 *)(a1 + 88);
  v4 = 0;
  *(_BYTE *)(a1 + 148) |= a3 << 6;
  v6 = *(unsigned int *)(a1 + 112);
  v18 = 0LL;
  v19 = 0;
  v8 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v11 = -2147024362;
    v13 = 183;
    goto LABEL_7;
  }
  if ( v8 > *(_DWORD *)(a1 + 108) )
  {
    v17 = &v18;
    v11 = DynArrayImpl<0>::Grow(a1 + 88, 0xCu, 1, 0, (unsigned __int64 *)&v17);
    if ( v11 >= 0 )
    {
      v4 = v11;
      v14 = *v3;
      v15 = (unsigned __int64)v17;
      v16 = (unsigned int)(12 * *((_DWORD *)v3 + 6));
      *(_QWORD *)(v16 + v14) = *v17;
      *(_DWORD *)(v16 + v14 + 8) = *(_DWORD *)(v15 + 8);
      ++*((_DWORD *)v3 + 6);
      goto LABEL_4;
    }
    v13 = 194;
LABEL_7:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, v13, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1);
    return (unsigned int)v11;
  }
  v9 = *v3;
  v10 = 3 * v6;
  *(_QWORD *)(v9 + 4 * v10) = v18;
  *(_DWORD *)(v9 + 4 * v10 + 8) = v19;
  *((_DWORD *)v3 + 6) = v8;
LABEL_4:
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(a1, a2);
  return v4;
}
