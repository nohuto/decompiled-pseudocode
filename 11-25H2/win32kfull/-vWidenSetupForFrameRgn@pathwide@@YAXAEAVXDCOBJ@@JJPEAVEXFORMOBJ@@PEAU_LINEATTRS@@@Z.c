/*
 * XREFs of ?vWidenSetupForFrameRgn@pathwide@@YAXAEAVXDCOBJ@@JJPEAVEXFORMOBJ@@PEAU_LINEATTRS@@@Z @ 0x1400E417C
 * Callers:
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::vWidenSetupForFrameRgn(
        pathwide *this,
        struct XDCOBJ *a2,
        int a3,
        EXFORMOBJ *a4,
        struct EXFORMOBJ *a5)
{
  int v5; // eax
  int v6; // r10d
  int v7; // ebx
  int v8; // eax
  float v9; // xmm2_4
  __int64 v10; // rax
  float *v11; // rcx
  float *v12; // rax

  *(_DWORD *)a5 = 65537;
  *(_QWORD *)((char *)a5 + 4) = 2LL;
  v5 = a3;
  *((_DWORD *)a5 + 4) = *(_DWORD *)(*(_QWORD *)this + 224LL);
  v6 = 2 * (_DWORD)a2;
  *((_QWORD *)a5 + 3) = 0LL;
  *((_DWORD *)a5 + 5) = 0;
  v7 = 2 * a3;
  if ( 2 * (int)a2 >= 2 * a3 )
    v5 = (int)a2;
  v8 = 2 * v5;
  if ( v6 >= v7 )
    LODWORD(a2) = a3;
  *((float *)a5 + 3) = (float)v8;
  v9 = (float)(2 * (int)a2);
  if ( (float)v8 != 0.0 )
    v9 = v9 / (float)v8;
  v10 = *(_QWORD *)this;
  v11 = *(float **)a4;
  *(_OWORD *)v11 = *(_OWORD *)(v10 + 320);
  *((_OWORD *)v11 + 1) = *(_OWORD *)(v10 + 336);
  v11[8] = *(float *)(v10 + 352);
  v12 = *(float **)a4;
  if ( v6 < v7 )
  {
    *v12 = v9 * *v12;
    *(float *)(*(_QWORD *)a4 + 4LL) = v9 * *(float *)(*(_QWORD *)a4 + 4LL);
  }
  else
  {
    v12[2] = v9 * v12[2];
    *(float *)(*(_QWORD *)a4 + 12LL) = v9 * *(float *)(*(_QWORD *)a4 + 12LL);
  }
  EXFORMOBJ::vComputeAccelFlags(a4, 8u);
}
