/*
 * XREFs of ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18017CD7C
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x18017F654 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800292A0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x1801798F4 (-OnPointerCrossedClientBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z @ 0x18017997C (-OnPointerCrossedOverrideBounds@ControllerNavigationManager@@QEAAXUtagPOINT@@@Z.c)
 *     ?AdjustPointToBounds@ControllerProcessor@@CA?AUtagPOINT@@U2@PEAUtagRECT@@@Z @ 0x18017CCF0 (-AdjustPointToBounds@ControllerProcessor@@CA-AUtagPOINT@@U2@PEAUtagRECT@@@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x18017E4C4 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z @ 0x18017ECA8 (-MapPointByVisualIdentifier@ControllerProcessor@@AEAAXPEAU_LUID@@0PEAUtagPOINT@@1@Z.c)
 *     ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x18017FBDC (-SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z.c)
 *     ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x18017FCB8 (-SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ControllerProcessor::ApplyNavigationDelta(ControllerProcessor *this)
{
  float v1; // xmm3_4
  __int32 v3; // xmm1_4
  float v4; // xmm2_4
  __int64 v5; // rdx
  int v6; // r14d
  int v7; // ebx
  char v8; // al
  int v9; // eax
  int v10; // eax
  __int64 v11; // rax
  unsigned int v12; // edi
  LONG y; // r15d
  struct tagPOINT v14; // rbx
  bool v15; // r15
  bool v16; // di
  ControllerNavigationManager *ControllerNavigationManager; // rax
  __int64 v18; // r8
  const char *v19; // r9
  int v20; // eax
  int v21; // eax
  ControllerNavigationManager *v22; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  int v25; // [rsp+70h] [rbp+40h] BYREF
  struct tagPOINT v26; // [rsp+78h] [rbp+48h] BYREF
  struct tagPOINT v27; // [rsp+80h] [rbp+50h] BYREF

  v1 = *((float *)this + 92);
  COERCE_FLOAT(v3 = _mm_load_si128((const __m128i *)&_xmm).m128i_i32[0]);
  if ( COERCE_FLOAT(LODWORD(v1) & v3) >= 1.0 || COERCE_FLOAT(*((_DWORD *)this + 93) & v3) >= 1.0 )
  {
    v4 = *((float *)this + 93);
    LOBYTE(v25) = 0;
    v5 = *((unsigned int *)this + 710);
    v6 = 1;
    v7 = (int)v1;
    v26.y = (int)v4;
    v26.x = (int)v1;
    *((float *)this + 93) = v4 - (float)(int)v4;
    *((float *)this + 92) = v1 - (float)(int)v1;
    if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 939) + 104LL))(
           *((_QWORD *)this + 939),
           v5,
           1LL) >= 0 )
    {
      v8 = v25;
    }
    else
    {
      v8 = 0;
      LOBYTE(v25) = 0;
    }
    if ( v8 )
    {
      v9 = ControllerProcessor::SendPointerDelta(this, v26);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x6F7,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v9,
          (int)&v25);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 961) + 96LL))(*((_QWORD *)this + 961));
        if ( v10 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x6FB,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v10,
            (int)&v25);
      }
    }
    else
    {
      v11 = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this);
      *((_QWORD *)this + 45) = v11;
      v12 = v7 + v11;
      v26.y += *((_DWORD *)this + 91);
      y = v26.y;
      v26.x = v7 + v11;
      v27 = ControllerProcessor::AdjustPointToBounds(v26, (struct tagRECT *)((char *)this + 312));
      v14 = v27;
      v15 = v27 != __PAIR64__(y, v12);
      v16 = v27.x == *((_DWORD *)this + 78)
         || v27.x == *((_DWORD *)this + 80) - 1
         || v27.y == *((_DWORD *)this + 79)
         || v27.y == *((_DWORD *)this + 81) - 1;
      if ( *((_QWORD *)this + 45) == v27 )
        v6 = 0;
      if ( *((_BYTE *)this + 400) && v6 && PtInRect((const RECT *)this + 24, v27) )
      {
        ControllerNavigationManager = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedOverrideBounds(ControllerNavigationManager, v14, v18, v19);
      }
      v20 = ControllerProcessor::SetPointerPosition(this, v14, v15);
      if ( v20 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x723,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v20,
          (int)&v25);
      if ( (*((_BYTE *)this + 328) & 0x20) == 0 )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 961) + 80LL))(
                *((_QWORD *)this + 961),
                *((_QWORD *)this + 963),
                *((_QWORD *)this + 964));
        if ( v21 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x72E,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v21,
            (int)&v25);
      }
      if ( v16 && v6 && (*((_BYTE *)this + 328) & 0x10) != 0 )
      {
        v26 = 0LL;
        ControllerProcessor::MapPointByVisualIdentifier(
          (ControllerProcessor *)((char *)this + 336),
          0LL,
          (struct _LUID *)(((unsigned __int64)this + 336) & -(__int64)(*((_QWORD *)this + 42) != 0LL)),
          &v27,
          &v26);
        v22 = ISMStatics::GetControllerNavigationManager();
        ControllerNavigationManager::OnPointerCrossedClientBounds(v22, v26);
      }
    }
  }
  return 0LL;
}
