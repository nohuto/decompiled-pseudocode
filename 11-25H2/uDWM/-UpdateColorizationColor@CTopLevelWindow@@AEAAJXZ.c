/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18000E520
 * Callers:
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18000C5C4 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18000E200 (-UpdateStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x18003F870 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??0CBaseObject@@QEAA@XZ @ 0x1800088E4 (--0CBaseObject@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x18000E864 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x18000E8A0 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18000E950 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?SetClearColor@CGlassColorizationResources@@QEAAXXZ @ 0x18000F508 (-SetClearColor@CGlassColorizationResources@@QEAAXXZ.c)
 *     ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x180071B58 (-SetColor@CGlassColorizationResources@@QEAAXK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CGlassColorizationResources **this)
{
  unsigned int v2; // r14d
  CTopLevelWindow *v3; // rcx
  const struct std::nothrow_t *v4; // rdx
  CGlassColorizationResources *v5; // rcx
  unsigned int v6; // ebx
  bool v7; // si
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 result; // rax
  unsigned int v14; // ebx
  CGlassColorizationResources *v15; // rcx
  CGlassColorizationResources *v16; // rcx
  CGlassColorizationResources *v17; // rcx
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  CBaseObject *v19; // [rsp+68h] [rbp+10h]

  v2 = 0;
  CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v18);
  CTopLevelWindow::ChooseWindowFrame(v3, *((_DWORD *)v3 + 146), 1);
  if ( !this[71] )
  {
    v19 = (CBaseObject *)operator new[](0x28uLL, v4);
    if ( !v19 )
    {
      this[71] = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x884u, 0LL);
      return 2147942414LL;
    }
    CBaseObject::CBaseObject(v19);
    *(_QWORD *)v17 = &CGlassColorizationResources::`vftable';
    this[71] = v17;
    if ( !v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x884u, 0LL);
      return 2147942414LL;
    }
  }
  if ( !this[72] )
  {
    v19 = (CBaseObject *)operator new[](0x28uLL, v4);
    if ( v19 )
    {
      CBaseObject::CBaseObject(v19);
      *(_QWORD *)v16 = &CGlassColorizationResources::`vftable';
      this[72] = v16;
      if ( v16 )
        goto LABEL_3;
    }
    else
    {
      this[72] = 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x889u, 0LL);
    return 2147942414LL;
  }
LABEL_3:
  v5 = this[89];
  v6 = v18;
  if ( (*((_BYTE *)v5 + 676) & 0x40) != 0 )
    v6 = v18 | 0x10;
  v7 = !*((_DWORD *)v5 + 24) && !*((_DWORD *)v5 + 26) && !*((_DWORD *)v5 + 25) && !*((_DWORD *)v5 + 27);
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 508)
    || (unsigned int)IsWindowArranged(*((_QWORD *)v5 + 5))
    || ((_BYTE)this[73] & 0x20) != 0
    || !v7
    || (v6 & 1) != 0 )
  {
    LOBYTE(v5) = 1;
    if ( !v7 && (*((_BYTE *)this[89] + 676) & 0x40) == 0 && (v6 & 0x80u) == 0 )
      v6 |= 8u;
  }
  else
  {
    LOBYTE(v5) = 0;
  }
  v8 = *((_DWORD *)this[89] + 47);
  if ( v8 )
  {
    v15 = this[71];
    if ( v8 == 1 )
      CGlassColorizationResources::SetClearColor(v15);
    else
      CGlassColorizationResources::SetColor(v15, v8);
  }
  else
  {
    v9 = CDesktopManager::SetGlassColorizationColorResource(v5, this[71], v6);
    v2 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x8A5u, 0LL);
      return v2;
    }
  }
  v10 = *((unsigned int *)this[89] + 48);
  if ( (unsigned int)v10 >= 2 )
  {
    CGlassColorizationResources::SetColor(this[72], v10);
    return v2;
  }
  else
  {
    v11 = v6 & 0xFFFFFFE7 | 8;
    v12 = v11;
    LODWORD(v12) = v11 | 0x100;
    if ( (_DWORD)v10 != 1 )
      v12 = v11;
    result = CDesktopManager::SetGlassColorizationColorResource(v10, this[72], v12);
    v14 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x8BAu, 0LL);
      return v14;
    }
  }
  return result;
}
