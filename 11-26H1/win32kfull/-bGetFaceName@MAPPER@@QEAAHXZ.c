/*
 * XREFs of ?bGetFaceName@MAPPER@@QEAAHXZ @ 0x1400CA000
 * Callers:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@@3@Z @ 0x1400C79A0 (-ppfeGetAMatch@@YAPEAVPFE@@AEAUPARAMETERS@MAPPER@@PEAUtagENUMLOGFONTEXDVW@@PEBGKPEAKPEAU_POINTL@.c)
 *     ??0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z @ 0x1400C9A60 (--0MAPPER@@QEAA@AEAUPARAMETERS@0@PEAKPEAU_POINTL@@1PEBUtagENUMLOGFONTEXDVW@@PEBGK@Z.c)
 * Callees:
 *     ?bCalculateWishCell@MAPPER@@AEAAHXZ @ 0x1400CA26C (-bCalculateWishCell@MAPPER@@AEAAHXZ.c)
 *     FindFaceName @ 0x1400CA5C0 (FindFaceName.c)
 *     ?bFindBitmapFont@MAPPER@@QEAAHPEBG@Z @ 0x1400CA61C (-bFindBitmapFont@MAPPER@@QEAAHPEBG@Z.c)
 *     ?bCalcOrientation@MAPPER@@QEAAHXZ @ 0x1400CA7D0 (-bCalcOrientation@MAPPER@@QEAAHXZ.c)
 */

int __fastcall MAPPER::bGetFaceName(MAPPER *this, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  unsigned __int8 v5; // r8
  int v6; // r10d
  __int64 v7; // rax
  int v8; // edx
  char v9; // di
  char v10; // r11
  int v11; // eax
  unsigned int v12; // edi
  _WORD *v13; // rax
  int result; // eax
  int v15; // eax
  __int64 v16; // rcx
  const unsigned __int16 *FaceName; // rsi
  __int64 v18; // rcx

  SessionState = W32GetSessionState(this, a2, a3);
  v5 = *((_BYTE *)this + 276);
  if ( v5 == 1 )
    v5 = *(_BYTE *)(*(_QWORD *)(SessionState + 96) + 19712LL);
  v6 = *((_DWORD *)this + 61);
  v7 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 61) = v6 | 0x20000;
  v8 = v5 | 0x8000;
  v9 = *(_BYTE *)(v7 + 27) & 3;
  if ( v9 != 1 )
    v8 = v5;
  v10 = *(_BYTE *)(v7 + 27) & 0x70;
  if ( v10 == 16 )
  {
    v11 = v8 | 0x4000;
  }
  else
  {
    v11 = v8;
    if ( !v9 && v10 == 48 )
      v11 = v8 | 0x8000;
  }
  v12 = v11 | 0x2000;
  if ( (v6 & 0x2000000) == 0 )
    v12 = v11;
  if ( v5 || (v6 & 0x100) == 0 || (v6 & 4) == 0 && !(unsigned int)MAPPER::bCalculateWishCell(this) )
    goto LABEL_12;
  if ( (*((_DWORD *)this + 61) & 0x80000) == 0 && !(unsigned int)MAPPER::bCalcOrientation(this) )
    goto LABEL_12;
  v15 = *((_DWORD *)this + 44);
  if ( v15 )
  {
    if ( v15 != 2700 && v15 != 900 && v15 != 1800 )
      goto LABEL_12;
  }
  v16 = v12;
  LODWORD(v16) = v12 | 0x1000;
  FaceName = (const unsigned __int16 *)FindFaceName(v16);
  if ( MAPPER::bFindBitmapFont(this, FaceName)
    || (v18 = v12,
        LODWORD(v18) = v12 | 0x800,
        FaceName = (const unsigned __int16 *)FindFaceName(v18),
        (result = MAPPER::bFindBitmapFont(this, FaceName)) != 0) )
  {
    *((_QWORD *)this + 2) = FaceName;
    return 1;
  }
  if ( (*((_DWORD *)this + 61) & 0x100000) == 0 )
  {
LABEL_12:
    v13 = (_WORD *)FindFaceName(v12);
    if ( *v13 || (*((_DWORD *)this + 61) & 0x40000000) == 0 )
      *((_QWORD *)this + 2) = v13;
    return 1;
  }
  return result;
}
