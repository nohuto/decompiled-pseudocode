/*
 * XREFs of ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180173810
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800831C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawingContext::GetWorldTransform(CDrawingContext *this, struct CMILMatrix *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *((_DWORD *)this + 72);
  if ( v2 )
  {
    v4 = (unsigned int)(v2 - 1);
    v5 = *((_QWORD *)this + 35);
    *(_OWORD *)a2 = *(_OWORD *)(68 * v4 + v5);
    *((_OWORD *)a2 + 1) = *(_OWORD *)(68 * v4 + v5 + 16);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(68 * v4 + v5 + 32);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(68 * v4 + v5 + 48);
    *((_DWORD *)a2 + 16) = *(_DWORD *)(68 * v4 + v5 + 64);
  }
  else
  {
    *(_QWORD *)((char *)a2 + 60) = 1065353216LL;
    *(_QWORD *)a2 = 1065353216LL;
    *((_QWORD *)a2 + 1) = 0LL;
    *((_DWORD *)a2 + 4) = 0;
    *(_QWORD *)((char *)a2 + 20) = 1065353216LL;
    *(_QWORD *)((char *)a2 + 28) = 0LL;
    *((_DWORD *)a2 + 9) = 0;
    *((_QWORD *)a2 + 5) = 1065353216LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_DWORD *)a2 + 14) = 0;
    *((_BYTE *)a2 + 65) &= 0xE9u;
    *((_BYTE *)a2 + 65) |= 0x29u;
    *((_BYTE *)a2 + 64) = -86;
  }
}
