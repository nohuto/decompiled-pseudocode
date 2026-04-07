/*
 * XREFs of ?UpdateStyle@CTopLevelWindow@@AEAA_NXZ @ 0x18001F1A0
 * Callers:
 *     ?UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z @ 0x180016500 (-UpdateMarginsAndStyle@CTopLevelWindow@@AEAAJ_N00PEA_N11@Z.c)
 * Callees:
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001F2B4 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ @ 0x18001F4A0 (-UpdateColorizationColor@CTopLevelWindow@@AEAAJXZ.c)
 */

char __fastcall CTopLevelWindow::UpdateStyle(CTopLevelWindow *this)
{
  char v2; // di
  int CurrentStyle; // eax
  float *v4; // rcx
  char result; // al
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm2_4

  v2 = 0;
  CurrentStyle = CTopLevelWindow::GetCurrentStyle(*((_QWORD *)this + 87), 0LL);
  if ( CurrentStyle != *((_DWORD *)this + 142) )
  {
    *((_DWORD *)this + 142) = CurrentStyle;
    v2 = 1;
  }
  if ( (int)CTopLevelWindow::UpdateColorizationColor(this) < 0 )
    return v2;
  v4 = (float *)*((_QWORD *)this + 70);
  if ( !v4
    || (*(_BYTE *)(*((_QWORD *)this + 87) + 736LL) & 8) == 0
    || !*((_DWORD *)this + 147) && !*((_DWORD *)this + 149) && !*((_DWORD *)this + 148) && !*((_DWORD *)this + 150) )
  {
    return v2;
  }
  v6 = v4[8];
  v7 = v6 * v4[4];
  v8 = v6 * v4[5];
  v9 = v6 * v4[6];
  if ( v7 == *((float *)this + 169)
    && v8 == *((float *)this + 170)
    && v9 == *((float *)this + 171)
    && 1.0 == *((float *)this + 172) )
  {
    return v2;
  }
  *((float *)this + 169) = v7;
  result = 1;
  *((float *)this + 170) = v8;
  *((float *)this + 171) = v9;
  *((_DWORD *)this + 172) = 1065353216;
  return result;
}
