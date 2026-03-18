/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N@Z @ 0x18001F980
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z @ 0x18012DBA4 (-AddDirtyRegion@CGdiSpriteBitmap@@AEAAXAEAVCRegion@@_N@Z.c)
 * Callees:
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18001FD44 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?AddAdditionalDirtyRect@CVisual@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1800211E0 (-AddAdditionalDirtyRect@CVisual@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ @ 0x1801C6784 (-ResetEffectiveGdiSpriteClip@CWindowNode@@AEAAXXZ.c)
 */

void __fastcall CWindowNode::NotifyDirtySurface(CWindowNode *this, int **a2, char a3)
{
  int *v5; // rdi
  float v6; // xmm8_4
  float v7; // xmm9_4
  int v8; // eax
  __int64 v9; // r12
  int *v10; // rdi
  char *v11; // r12
  int v12; // esi
  int *v13; // r14
  int *v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  int *v19; // r15
  int v20; // r10d
  int v21; // edx
  int v22; // r9d
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  __int64 v31; // rax
  __int64 v32; // [rsp+20h] [rbp-98h] BYREF
  __int64 v33; // [rsp+28h] [rbp-90h]
  char *v34; // [rsp+C0h] [rbp+8h]

  if ( *((_BYTE *)this + 745) )
  {
    *((_BYTE *)this + 896) &= ~2u;
  }
  else if ( (!*((_BYTE *)this + 744) || !a3) && (*((_BYTE *)this + 96) & 4) == 0 )
  {
    v5 = *a2;
    v6 = (float)*((int *)this + 180);
    v7 = (float)*((int *)this + 181);
    v8 = **a2;
    if ( v8 )
    {
      v9 = v5[4];
      v10 = v5 + 3;
      v11 = (char *)v10 + v9;
      v12 = 0;
      v13 = &v10[2 * v8 - 2];
      v14 = v10 + 2;
      v15 = ((__int64)v10 + v10[3] - (_QWORD)v11 + 8) >> 3;
      if ( (int)v15 <= 0 )
      {
        v12 = 1;
        while ( 1 )
        {
          v10 = v14;
          v16 = v14[3];
          v11 = (char *)v14 + v14[1];
          v14 += 2;
          LODWORD(v15) = ((__int64)v14 + v16 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v10 >= v13 )
            goto LABEL_9;
        }
        v12 = 0;
      }
    }
    else
    {
      v11 = v34;
      v13 = 0LL;
      v12 = (int)v34;
      v10 = 0LL;
      LODWORD(v15) = (_DWORD)v34;
    }
LABEL_9:
    while ( v10 < v13 )
    {
      v17 = *((unsigned int *)this + 176);
      v18 = *v10;
      v19 = v10 + 2;
      v20 = v10[2];
      v21 = *((_DWORD *)this + 177);
      v22 = *(_DWORD *)&v11[8 * v12 + 4];
      v23 = (float)(v17 + *(_DWORD *)&v11[8 * v12]);
      if ( v23 <= -3.4028235e38 )
        v24 = FLOAT_N3_4028235e38;
      else
        v24 = v23 - 0.5;
      *(float *)&v32 = v24;
      v25 = (float)(v18 + v21);
      if ( v25 <= -3.4028235e38 )
      {
        HIDWORD(v32) = -8388609;
        v26 = FLOAT_N3_4028235e38;
      }
      else
      {
        v26 = v25 - 0.5;
        *((float *)&v32 + 1) = v26;
      }
      v27 = (float)(v22 + v17);
      if ( v27 >= 3.4028235e38 )
      {
        LODWORD(v33) = 2139095039;
        v28 = FLOAT_3_4028235e38;
      }
      else
      {
        v28 = v27 + 0.5;
        *(float *)&v33 = v28;
      }
      v29 = (float)(v20 + v21);
      if ( v29 >= 3.4028235e38 )
      {
        HIDWORD(v33) = 2139095039;
        v30 = FLOAT_3_4028235e38;
      }
      else
      {
        v30 = v29 + 0.5;
        *((float *)&v33 + 1) = v30;
      }
      if ( v24 < 0.0 )
      {
        LODWORD(v32) = 0;
        v24 = 0.0;
      }
      if ( v26 < 0.0 )
      {
        HIDWORD(v32) = 0;
        v26 = 0.0;
      }
      if ( v28 > v6 )
      {
        *(float *)&v33 = v6;
        v28 = v6;
      }
      if ( v30 > v7 )
      {
        *((float *)&v33 + 1) = v7;
        v30 = v7;
      }
      if ( v28 <= v24 || v30 <= v26 )
      {
        v33 = 0LL;
        v32 = 0LL;
      }
      else
      {
        LOBYTE(v17) = 1;
        CVisual::AddAdditionalDirtyRect(this, &v32, v17);
      }
      if ( ++v12 >= (int)v15 )
      {
        while ( 1 )
        {
          v10 = v19;
          v31 = v19[3];
          v11 = (char *)v19 + v19[1];
          v19 += 2;
          LODWORD(v15) = ((__int64)v19 + v31 - (__int64)v11) >> 3;
          if ( (_DWORD)v15 )
            break;
          if ( v10 >= v13 )
            goto LABEL_9;
        }
        v12 = 0;
      }
    }
  }
  if ( !CWindowNode::ProcessReadyGdiSpriteBitmaps(this) )
  {
    if ( *((_BYTE *)this + 745) )
    {
      CVisual::PropagateFlags(this, 8LL);
    }
    else if ( *((_BYTE *)this + 744) && a3 )
    {
      CWindowNode::ResetEffectiveGdiSpriteClip(this);
    }
  }
}
