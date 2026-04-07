/*
 * XREFs of ?UpdateClientArea@CWindowIconic@@AEAAJXZ @ 0x18004C0D8
 * Callers:
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18007C9A4 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180013488 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x1800135C4 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Show@CIconicSprite@@QEAAJ_N@Z @ 0x18004C224 (-Show@CIconicSprite@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowIconic::UpdateClientArea(CWindowIconic *this, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // r8
  bool v6; // di
  int v7; // edx
  int v8; // ecx
  LONG v9; // esi
  LONG v10; // ebp
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  CVisual *v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // rdx
  CVisual *v20; // rcx
  struct tagSIZE v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  unsigned int v24; // ebx
  struct tagSIZE v26; // [rsp+40h] [rbp+8h] BYREF

  v4 = (_DWORD *)*((_QWORD *)this + 10);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( v4[57] - v4[55] >= 0 )
    v7 = v4[57] - v4[55];
  v11 = v7 - v4[68] - v4[67];
  if ( v11 >= 0 )
    v9 = v11;
  v12 = v4[58] - v4[56];
  v26.cx = v9;
  if ( v12 >= 0 )
    v8 = v12;
  v13 = v8 - v4[70] - v4[69];
  if ( v13 >= 0 )
    v10 = v13;
  v14 = (CVisual *)*((_QWORD *)this + 13);
  v26.cy = v10;
  CVisual::SetSize(v14, &v26, (__int64)v4, a4);
  v16 = *((_DWORD *)this + 4);
  if ( v16 && (v17 = v16 - 1) != 0 )
  {
    if ( v17 != 1 )
      goto LABEL_17;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 12), 0LL, v15);
    v19 = 0LL;
  }
  else
  {
    v20 = (CVisual *)*((_QWORD *)this + 12);
    v21.cx = 0;
    v6 = 1;
    v26 = 0LL;
    v22 = *((_QWORD *)v20 + 29);
    if ( v22 )
    {
      v21 = *(struct tagSIZE *)(v22 + 128);
      v26 = v21;
    }
    CVisual::SetInsetFromParentLeft(v20, (unsigned int)((v9 - v21.cx) / 2), v22);
    v19 = (unsigned int)((v10 - v26.cy) / 2);
  }
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 12), v19, v18);
LABEL_17:
  v23 = CIconicSprite::Show(*((CIconicSprite **)this + 13), v6);
  v24 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v23, 0x155u, 0LL);
  return v24;
}
