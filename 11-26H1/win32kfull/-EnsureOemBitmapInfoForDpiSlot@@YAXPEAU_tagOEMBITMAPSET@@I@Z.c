/*
 * XREFs of ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAU_tagOEMBITMAPSET@@I@Z @ 0x140124AC0
 * Callers:
 *     GetOemBitmapInfoForDpi @ 0x140124A34 (GetOemBitmapInfoForDpi.c)
 *     ?CreateDPIBitmapStrip@@YAHI@Z @ 0x140125A40 (-CreateDPIBitmapStrip@@YAHI@Z.c)
 * Callees:
 *     ?ArrangeFrameControls@@YAFHHPEAU_tagOEMBITMAPSET@@@Z @ 0x1401D1598 (-ArrangeFrameControls@@YAFHHPEAU_tagOEMBITMAPSET@@@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z @ 0x1401F1534 (-UpdateFrameControlMetricsSize@@YAFPEAU_tagOEMBITMAPSET@@I@Z.c)
 */

void __fastcall EnsureOemBitmapInfoForDpiSlot(struct _tagOEMBITMAPSET *a1, unsigned int a2)
{
  __int16 v2; // bp
  int updated; // r13d
  int v5; // esi
  char *v6; // rax
  unsigned int v7; // r10d
  __int16 v8; // r12
  __int16 v9; // bx
  __int16 *v10; // r11
  __int64 v11; // r14
  int v12; // r15d
  __int16 v13; // ax
  int v14; // edx
  int v15; // r8d
  __int16 v16; // r9
  __int16 v17; // ax
  int v18; // edi
  int v19; // r8d
  int v21; // [rsp+70h] [rbp+18h]
  char *v22; // [rsp+78h] [rbp+20h]

  v2 = 0;
  v21 = 1;
  if ( !*((_DWORD *)a1 + 2) || !*((_DWORD *)a1 + 3) )
  {
    updated = UpdateFrameControlMetricsSize(a1, a2);
    v5 = 0x7FFFFFFF;
    v6 = (char *)a1 + 22;
    v7 = 1;
    v22 = (char *)a1 + 22;
    do
    {
      v8 = 0;
      v9 = 0;
      v10 = (__int16 *)v6;
      v11 = 93LL;
      do
      {
        v12 = *(v10 - 1);
        if ( *(v10 - 1) )
        {
          v13 = 0;
          v14 = updated * v7;
          v15 = v12 + v9;
          v16 = 0;
          if ( v15 <= (int)(updated * v7) )
            v13 = v9;
          if ( v15 <= v14 )
            v16 = v8;
          v9 = v12 + v13;
          v17 = v8 + v2;
          v8 = *v10;
          if ( v15 <= v14 )
            v17 = v2;
          v2 = v17;
          if ( v16 >= *v10 )
            v8 = v16;
        }
        v10 += 4;
        --v11;
      }
      while ( v11 );
      v6 = v22;
      v18 = v7;
      v19 = v7 * (__int16)(v8 + v2);
      v2 = 0;
      if ( v5 <= v19 )
        v18 = v21;
      ++v7;
      v21 = v18;
      if ( v5 <= v19 )
        v19 = v5;
      v5 = v19;
    }
    while ( v7 <= 5 );
    *((_DWORD *)a1 + 2) = updated * v18;
    *((_DWORD *)a1 + 3) = ArrangeFrameControls(updated * v18, 1, a1);
  }
}
