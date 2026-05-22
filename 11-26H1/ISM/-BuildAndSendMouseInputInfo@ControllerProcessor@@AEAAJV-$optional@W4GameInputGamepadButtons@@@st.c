/*
 * XREFs of ?BuildAndSendMouseInputInfo@ControllerProcessor@@AEAAJV?$optional@W4GameInputGamepadButtons@@@std@@0@Z @ 0x18017D30C
 * Callers:
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x18017F5A0 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ @ 0x18017F888 (-SendGameControllerAsPointerMappings@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x18017D514 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x18017FAF0 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix@@@details@wil@@QEAA_NXZ @ 0x180181664 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_Me.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendMouseInputInfo(ControllerProcessor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  int v4; // ebx
  unsigned __int16 v6; // bp
  unsigned int v7; // r9d
  _DWORD *v8; // r8
  int v9; // r10d
  _DWORD *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rdx
  _WORD *v13; // rdx
  unsigned int v14; // r15d
  _DWORD *v15; // r14
  int v16; // ecx
  int v17; // eax
  int v18; // r9d
  _DWORD *v19; // rax
  unsigned int v20; // ecx
  __int64 v21; // rdx
  _WORD *v22; // rdx
  int v23; // eax
  int v25[136]; // [rsp+20h] [rbp-268h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+0h]
  char v27; // [rsp+29Ch] [rbp+14h]
  char v28; // [rsp+2A4h] [rbp+1Ch]

  v28 = BYTE4(a3);
  v27 = BYTE4(a2);
  v3 = a3;
  v4 = a2;
  v6 = 0;
  if ( !*((_BYTE *)this + 276) )
  {
    v14 = 0;
    v15 = &unk_18020B9C4;
    while ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Input_DesktopNavigationGamepad_MenuFix>::GetImpl'::`2'::impl) )
    {
      v16 = v4;
      if ( !v27 )
        v16 = *((_DWORD *)this + 61);
      if ( !v28 )
        goto LABEL_20;
      v17 = v3;
LABEL_21:
      v18 = v17 & *(v15 - 1);
      if ( (v18 != 0) != ((v16 & *(v15 - 1)) != 0) )
      {
        v19 = &unk_18020B9D0;
        v20 = 0;
        v21 = 0LL;
        while ( *v15 != *v19 )
        {
          ++v20;
          ++v21;
          v19 += 3;
          if ( v20 >= 5 )
            goto LABEL_29;
        }
        *((_DWORD *)this + v21 + 1881) = v18 != 0;
        v22 = &unk_18020B9D8;
        if ( !v18 )
          v22 = &unk_18020B9D4;
        v6 |= v22[6 * v20];
      }
LABEL_29:
      ++v14;
      v15 += 2;
      if ( v14 >= 2 )
        goto LABEL_30;
    }
    v16 = *((_DWORD *)this + 61);
LABEL_20:
    v17 = *((_DWORD *)this + 45);
    goto LABEL_21;
  }
  v7 = 0;
  v8 = &unk_18020BA14;
  do
  {
    v9 = *((_DWORD *)this + 52) & *(v8 - 1);
    if ( (v9 != 0) != ((*(v8 - 1) & *((_DWORD *)this + 68)) != 0) )
    {
      v10 = &unk_18020B9D0;
      v11 = 0;
      v12 = 0LL;
      while ( *v8 != *v10 )
      {
        ++v11;
        ++v12;
        v10 += 3;
        if ( v11 >= 5 )
          goto LABEL_11;
      }
      *((_DWORD *)this + v12 + 1881) = v9 != 0;
      v13 = &unk_18020B9D8;
      if ( !v9 )
        v13 = &unk_18020B9D4;
      v6 |= v13[6 * v11];
    }
LABEL_11:
    ++v7;
    v8 += 2;
  }
  while ( v7 < 2 );
LABEL_30:
  if ( v6 )
  {
    ControllerProcessor::BuildMouseInputInfo(this, v25, v6);
    v23 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v25);
    if ( v23 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x50A,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v23,
        v25[0]);
  }
  return 0LL;
}
