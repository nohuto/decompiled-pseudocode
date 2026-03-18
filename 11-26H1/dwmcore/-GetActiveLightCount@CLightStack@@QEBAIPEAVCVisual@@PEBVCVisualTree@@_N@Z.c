/*
 * XREFs of ?GetActiveLightCount@CLightStack@@QEBAIPEAVCVisual@@PEBVCVisualTree@@_N@Z @ 0x1800AB6E8
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A1720 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetActiveLightCount@CDrawingContext@@QEBAIXZ @ 0x180236754 (-GetActiveLightCount@CDrawingContext@@QEBAIXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800AD250 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV?$DynArrayIANoCtor@PEAVCLight@@$02$0A@@@PEA_N@Z @ 0x180214D08 (-GetDestLightsArray@CLightStack@@QEBAJPEAVCVisual@@PEBVCVisualTree@@_N2AEAV-$DynArrayIANoCtor@PE.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

__int64 __fastcall CLightStack::GetActiveLightCount(
        CLightStack *this,
        struct CVisual *a2,
        const struct CVisualTree *a3,
        int a4)
{
  unsigned int v4; // ebx
  _QWORD v6[2]; // [rsp+40h] [rbp-48h] BYREF
  int v7; // [rsp+50h] [rbp-38h]
  __int64 v8; // [rsp+54h] [rbp-34h]
  _BYTE v9[24]; // [rsp+60h] [rbp-28h] BYREF

  v6[0] = v9;
  v6[1] = v9;
  v7 = 3;
  v8 = 3LL;
  CLightStack::GetDestLightsArray((_DWORD)this, (_DWORD)a2, (_DWORD)a3, a4, a4, (__int64)v6, 0LL);
  v4 = HIDWORD(v8);
  DynArrayImpl<1>::~DynArrayImpl<1>(v6);
  return v4;
}
