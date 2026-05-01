/*
 * XREFs of ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804C1B74
 * Callers:
 *     ?v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x1804C2050 (-v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800A00B0 (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804BAC60 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ??1?$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804C1134 (--1-$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V-$CSimpleArraySt.c)
 *     ?Release@?$CTSmartObj@PEAUHMENU__@@V?$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ @ 0x1804C1860 (-Release@-$CTSmartObj@PEAUHMENU__@@V-$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ.c)
 *     ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x1804C1F60 (-_SHPrettyMenu@@YAXPEAUHMENU__@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1806611F4 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180661B18 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::ShowContextMenu(
        SwitchItemThumbnailElement *this,
        const struct ContextMenuArgs *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // r14d
  int v9; // esi
  _DWORD *ScreenLocation; // rcx
  HWND hWnd; // rbx
  int IsThreadRTL; // eax
  unsigned int v13; // esi
  HWND v14; // r8
  unsigned int v15; // edx
  HMENU hMenu; // [rsp+40h] [rbp-9h] BYREF
  int v17[2]; // [rsp+48h] [rbp-1h] BYREF
  int hData[2]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v19; // [rsp+58h] [rbp+Fh]
  __int64 v20; // [rsp+60h] [rbp+17h]
  __int64 v21; // [rsp+68h] [rbp+1Fh]
  _BYTE v22[16]; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 73) + 40LL))(
         *((_QWORD *)this + 73),
         *((_QWORD *)this + 72)) )
  {
    hMenu = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, HMENU *))(**((_QWORD **)this + 73) + 48LL))(
           *((_QWORD *)this + 73),
           *((_QWORD *)this + 72),
           &hMenu);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemthumbnailelement.cpp",
        (const char *)(unsigned int)v4);
      CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&hMenu);
      return v5;
    }
    _SHPrettyMenu(hMenu);
    if ( *(_DWORD *)a2 == -1 )
    {
      ScreenLocation = (_DWORD *)ElementHelpers::GetScreenLocation((__int64)v22, (__int64)this);
      v8 = ScreenLocation[1] + (ScreenLocation[3] - ScreenLocation[1]) / 2;
      v7 = (unsigned int)((ScreenLocation[2] - *ScreenLocation) >> 31);
      LODWORD(v7) = (ScreenLocation[2] - *ScreenLocation) % 2;
      v9 = *ScreenLocation + (ScreenLocation[2] - *ScreenLocation) / 2;
    }
    else
    {
      v8 = *((__int16 *)a2 + 1);
      v9 = *(__int16 *)a2;
    }
    v17[0] = v9;
    v17[1] = v8;
    hWnd = (HWND)(*(__int64 (__fastcall **)(SwitchItemThumbnailElement *, __int64))(*(_QWORD *)this + 328LL))(this, v7);
    *(_QWORD *)hData = 0LL;
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)hMenu, (int)hWnd, (int)v17, 8, hData);
    IsThreadRTL = Mirror_IsThreadRTL();
    v13 = TrackPopupMenu(hMenu, IsThreadRTL != 0 ? 33034 : 258, v9, v8, 0, hWnd, 0LL);
    ImmersiveContextMenuHelper::RemoveOwnerDrawFromMenu(hMenu, (HMENU)hWnd, v14);
    if ( v13 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 73) + 88LL))(
        *((_QWORD *)this + 73),
        *((_QWORD *)this + 72),
        v13);
    CSimplePointerArray<ContextMenuRenderingData,CTContainer_PolicyNewMem,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>::~CSimplePointerArray<ContextMenuRenderingData,CTContainer_PolicyNewMem,CSimpleArrayStandardCompareHelper<ContextMenuRenderingData *>>(
      hData,
      v15);
    CTSmartObj<HMENU__ *,CAutoHandle_Policy<HMENU__ *>>::Release(&hMenu);
  }
  return 0LL;
}
