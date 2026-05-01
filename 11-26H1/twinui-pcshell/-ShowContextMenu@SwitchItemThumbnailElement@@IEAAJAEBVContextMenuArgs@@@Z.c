/*
 * XREFs of ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x1804D3B34
 * Callers:
 *     ?v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z @ 0x1804D4010 (-v_ContextMenu@SwitchItemThumbnailElement@@MEAAXAEBVContextMenuArgs@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x1800822EC (Mirror_IsThreadRTL.c)
 *     ?GetScreenLocation@ElementHelpers@@YA?AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z @ 0x1804CCB08 (-GetScreenLocation@ElementHelpers@@YA-AUCRect@Geometry@@PEAUIMultitaskingViewElement@@@Z.c)
 *     ??1?$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@QEAA@XZ @ 0x1804D30C4 (--1-$CSimplePointerArray@UContextMenuRenderingData@@VCTContainer_PolicyNewMem@@V-$CSimpleArraySt.c)
 *     ?Release@?$CTSmartObj@PEAUHMENU__@@V?$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ @ 0x1804D3810 (-Release@-$CTSmartObj@PEAUHMENU__@@V-$CAutoHandle_Policy@PEAUHMENU__@@@@@@QEAAXXZ.c)
 *     ?_SHPrettyMenu@@YAXPEAUHMENU__@@@Z @ 0x1804D3F20 (-_SHPrettyMenu@@YAXPEAUHMENU__@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180687288 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180687B60 (-RemoveOwnerDrawFromMenu@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SwitchItemThumbnailElement::ShowContextMenu(
        SwitchItemThumbnailElement *this,
        const struct ContextMenuArgs *a2)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v7; // rdx
  int v8; // esi
  int v9; // r14d
  _DWORD *ScreenLocation; // rcx
  HWND hWnd; // rbx
  int IsThreadRTL; // eax
  unsigned int v13; // esi
  HWND v14; // r8
  unsigned int v15; // edx
  HMENU hMenu; // [rsp+40h] [rbp-40h] BYREF
  int v17[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD hData[4]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

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
      ScreenLocation = (_DWORD *)ElementHelpers::GetScreenLocation((__int64)v19, (__int64)this);
      v8 = *ScreenLocation + (ScreenLocation[2] - *ScreenLocation) / 2;
      v7 = (unsigned int)((ScreenLocation[3] - ScreenLocation[1]) >> 31);
      LODWORD(v7) = (ScreenLocation[3] - ScreenLocation[1]) % 2;
      v9 = ScreenLocation[1] + (ScreenLocation[3] - ScreenLocation[1]) / 2;
    }
    else
    {
      v8 = *(__int16 *)a2;
      v9 = *((__int16 *)a2 + 1);
    }
    v17[0] = v8;
    v17[1] = v9;
    hWnd = (HWND)(*(__int64 (__fastcall **)(SwitchItemThumbnailElement *, __int64))(*(_QWORD *)this + 328LL))(this, v7);
    memset(hData, 0, sizeof(hData));
    ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((int)hMenu, (int)hWnd, (int)v17, 8, hData);
    IsThreadRTL = Mirror_IsThreadRTL();
    v13 = TrackPopupMenu(hMenu, IsThreadRTL != 0 ? 33034 : 258, v8, v9, 0, hWnd, 0LL);
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
