/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x1800AADA4
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800AA154 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18007F840 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD),
        char a3)
{
  __int64 *v3; // r15
  __int64 v5; // rax
  unsigned int v7; // r8d
  int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rdx
  void (__fastcall ***v11)(_QWORD); // rcx
  unsigned int v12; // eax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+40h] [rbp-28h]

  *(_BYTE *)(a1 + 148) &= ~0x40u;
  v3 = (__int64 *)(a1 + 88);
  *(_BYTE *)(a1 + 148) |= a3 << 6;
  v5 = *(unsigned int *)(a1 + 112);
  v18 = 0LL;
  v19 = 0;
  v7 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v8 = -2147024362;
    v12 = 183;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v12, 0LL);
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1);
    return (unsigned int)v8;
  }
  v8 = 0;
  if ( v7 <= *(_DWORD *)(a1 + 108) )
  {
    v9 = *v3;
    v10 = 3 * v5;
    *(_QWORD *)(v9 + 4 * v10) = v18;
    *(_DWORD *)(v9 + 4 * v10 + 8) = v19;
    *((_DWORD *)v3 + 6) = v7;
    goto LABEL_4;
  }
  v17 = &v18;
  v8 = DynArrayImpl<0>::Grow(a1 + 88, 0xCu, 1, 0, (unsigned __int64 *)&v17);
  if ( v8 < 0 )
  {
    v12 = 194;
    goto LABEL_10;
  }
  v14 = *v3;
  v15 = (unsigned __int64)v17;
  v16 = (unsigned int)(12 * *((_DWORD *)v3 + 6));
  *(_QWORD *)(v16 + v14) = *v17;
  *(_DWORD *)(v16 + v14 + 8) = *(_DWORD *)(v15 + 8);
  ++*((_DWORD *)v3 + 6);
LABEL_4:
  if ( *(void (__fastcall ****)(_QWORD))a1 != a2 )
  {
    if ( a2 )
      (**a2)(a2);
    v11 = *(void (__fastcall ****)(_QWORD))a1;
    *(_QWORD *)a1 = a2;
    if ( v11 )
      (*v11)[1](v11);
  }
  return (unsigned int)v8;
}
