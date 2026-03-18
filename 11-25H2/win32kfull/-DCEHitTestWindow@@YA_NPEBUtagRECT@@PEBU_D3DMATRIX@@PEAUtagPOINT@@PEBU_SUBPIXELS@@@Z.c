/*
 * XREFs of ?DCEHitTestWindow@@YA_NPEBUtagRECT@@PEBU_D3DMATRIX@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x140154B88
 * Callers:
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14002D590 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x140044C70 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1401549DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     EditionQueryInertiaWorker @ 0x1402B0180 (EditionQueryInertiaWorker.c)
 * Callees:
 *     BuildVertexList @ 0x140154D58 (BuildVertexList.c)
 *     ?DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z @ 0x140154FBC (-DCEInverseTransform@@YA_NPEBUtagRECT@@PEBU_D3DVERTEX@@PEBU_SUBPIXELS@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

char __fastcall DCEHitTestWindow(
        const struct tagRECT *a1,
        const struct _D3DMATRIX *a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4)
{
  char v6; // bl
  float x; // xmm6_4
  float y; // xmm8_4
  unsigned int v10; // r8d
  char v11; // al
  const struct _D3DVERTEX *v12; // rdx
  float v13; // xmm1_4
  int v14; // ecx
  __int64 v15; // r9
  __int64 v16; // r11
  __int64 v17; // rsi
  __int64 v18; // r10
  int v19; // edi
  __int64 v20; // r10
  __int64 v22; // r9
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm2_4
  float v26; // xmm4_4
  _OWORD v27[12]; // [rsp+30h] [rbp-138h] BYREF

  v6 = 0;
  x = (float)a3->x;
  y = (float)a3->y;
  BuildVertexList(v27, a1, a2);
  v10 = 0;
  while ( 2 )
  {
    if ( v10 >= 2 )
      return v6;
    v11 = 0;
    v12 = (const struct _D3DVERTEX *)&v27[6 * v10];
    v13 = v12->y;
    if ( v13 == v12[1].y && v13 == y && x >= v12->x && v12[1].x >= x )
      return DCEInverseTransform(a1, v12, a4, a3);
    v14 = -1;
    v15 = 0LL;
    v16 = 3LL;
    if ( (float)(v13 - y) >= 0.0 )
      v14 = 1;
    do
    {
      v17 = v15 + 1;
      v18 = 0LL;
      if ( v15 + 1 < 3 )
        v18 = v15 + 1;
      v19 = -1;
      v20 = v18;
      if ( (float)(v12[v20].y - y) >= 0.0 )
        v19 = 1;
      if ( v14 != v19 )
      {
        v22 = v15;
        v23 = v12[v20].x - x;
        v24 = v12[v22].x - x;
        if ( v24 <= 0.0 )
        {
          if ( v23 <= 0.0 )
            goto LABEL_22;
        }
        else if ( v23 > 0.0 )
        {
LABEL_21:
          ++v11;
LABEL_22:
          v14 = v19;
          goto LABEL_12;
        }
        v25 = v12[v22].y;
        v26 = v12[v20].y - v25;
        if ( COERCE_FLOAT(LODWORD(v26) & _xmm) <= 0.00000011920929
          || (float)(v24 - (float)((float)((float)(v25 - y) * (float)(v12[v20].x - v12[v22].x)) / v26)) <= 0.0 )
        {
          goto LABEL_22;
        }
        goto LABEL_21;
      }
LABEL_12:
      v15 = v17;
      --v16;
    }
    while ( v16 );
    if ( (v11 & 1) == 0 )
    {
      ++v10;
      continue;
    }
    return DCEInverseTransform(a1, v12, a4, a3);
  }
}
