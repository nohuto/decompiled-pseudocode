/*
 * XREFs of ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0
 * Callers:
 *     ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F1A0 (-UpdateStyle@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18007EA04 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@M@Z @ 0x18001F7F0 (-SetGlassColorizationColorResource@CDesktopManager@@QEAAJPEAVCGlassColorizationResources@@U-$TMI.c)
 *     ?ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z @ 0x1800201E0 (-ChooseWindowFrame@CTopLevelWindow@@AEBAPEAUWindowFrame@1@I_N@Z.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180020300 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEBA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?SetClearColor@CGlassColorizationResources@@QEAAXXZ @ 0x180020554 (-SetClearColor@CGlassColorizationResources@@QEAAXXZ.c)
 *     ?SetColor@CGlassColorizationResources@@QEAAXK@Z @ 0x18002056C (-SetColor@CGlassColorizationResources@@QEAAXK@Z.c)
 *     ??0CBaseObject@@QEAA@XZ @ 0x180021380 (--0CBaseObject@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateColorizationColor(CGlassColorizationResources **this)
{
  unsigned int v2; // r14d
  CTopLevelWindow *v3; // rcx
  CGlassColorizationResources *v4; // rcx
  unsigned int v5; // ebx
  bool v6; // si
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 result; // rax
  unsigned int v12; // ebx
  CGlassColorizationResources *v13; // rcx
  CGlassColorizationResources *v14; // rcx
  CGlassColorizationResources *v15; // rcx
  unsigned int v16; // [rsp+60h] [rbp+8h] BYREF
  CBaseObject *v17; // [rsp+68h] [rbp+10h]

  v2 = 0;
  CTopLevelWindow::GetCurrentDefaultColorizationFlags(this, &v16);
  CTopLevelWindow::ChooseWindowFrame(v3, *((_DWORD *)v3 + 142), 1);
  if ( !this[69] )
  {
    v17 = (CBaseObject *)operator new(0x28uLL);
    if ( !v17 )
    {
      this[69] = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x809u, 0LL);
      return 2147942414LL;
    }
    CBaseObject::CBaseObject(v17);
    *(_QWORD *)v14 = &CGlassColorizationResources::`vftable';
    this[69] = v14;
    if ( !v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x809u, 0LL);
      return 2147942414LL;
    }
  }
  if ( !this[70] )
  {
    v17 = (CBaseObject *)operator new(0x28uLL);
    if ( v17 )
    {
      CBaseObject::CBaseObject(v17);
      *(_QWORD *)v15 = &CGlassColorizationResources::`vftable';
      this[70] = v15;
      if ( v15 )
        goto LABEL_3;
    }
    else
    {
      this[70] = 0LL;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x80Eu, 0LL);
    return 2147942414LL;
  }
LABEL_3:
  v4 = this[87];
  v5 = v16;
  if ( (*((_BYTE *)v4 + 740) & 0x40) != 0 )
    v5 = v16 | 0x10;
  v6 = !*((_DWORD *)v4 + 24) && !*((_DWORD *)v4 + 26) && !*((_DWORD *)v4 + 25) && !*((_DWORD *)v4 + 27);
  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 516)
    || (unsigned int)IsWindowArranged(*((_QWORD *)v4 + 5))
    || ((_BYTE)this[71] & 0x20) != 0
    || !v6
    || (v5 & 1) != 0 )
  {
    LOBYTE(v4) = 1;
    if ( !v6 && (*((_BYTE *)this[87] + 740) & 0x40) == 0 && (v5 & 0x80u) == 0 )
      v5 |= 8u;
  }
  else
  {
    LOBYTE(v4) = 0;
  }
  v7 = *((_DWORD *)this[87] + 47);
  if ( v7 )
  {
    v13 = this[69];
    if ( v7 == 1 )
      CGlassColorizationResources::SetClearColor(v13);
    else
      CGlassColorizationResources::SetColor(v13, v7);
  }
  else
  {
    v8 = CDesktopManager::SetGlassColorizationColorResource(v4, this[69], v5);
    v2 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x82Au, 0LL);
      return v2;
    }
  }
  v9 = *((unsigned int *)this[87] + 48);
  if ( (unsigned int)v9 > 1 )
  {
    CGlassColorizationResources::SetColor(this[70], v9);
    return v2;
  }
  else
  {
    v10 = v5 & 0xFFFFFFE7 | 8;
    if ( (_DWORD)v9 == 1 )
      v10 |= 0x100u;
    result = CDesktopManager::SetGlassColorizationColorResource(v9, this[70], v10);
    v12 = result;
    if ( (int)result < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, result, 0x83Fu, 0LL);
      return v12;
    }
  }
  return result;
}
