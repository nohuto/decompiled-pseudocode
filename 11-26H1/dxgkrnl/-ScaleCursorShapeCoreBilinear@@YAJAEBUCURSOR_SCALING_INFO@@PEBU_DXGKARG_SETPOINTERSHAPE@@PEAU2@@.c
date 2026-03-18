/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x140336CE0
 * Callers:
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Value; // edx
  struct _DXGKARG_SETPOINTERSHAPE *v5; // rdi
  const struct CURSOR_SCALING_INFO *v6; // rsi
  int v7; // ecx
  int v8; // r8d
  int v9; // edx
  int v10; // r10d
  float v11; // xmm4_4
  float v12; // xmm9_4
  int v13; // r9d
  float v14; // xmm6_4
  int v15; // r13d
  float v16; // xmm6_4
  float v17; // xmm7_4
  __int64 v18; // r10
  float v19; // xmm3_4
  int v20; // r11d
  UINT Pitch; // edi
  unsigned int *v22; // r8
  float v23; // xmm3_4
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  unsigned int v27; // edi
  int v28; // r11d
  unsigned int v29; // r8d
  int v30; // edx
  int v31; // ebp
  int v32; // esi
  int v33; // r10d
  int v34; // eax
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // ecx
  UINT v38; // eax
  unsigned int v39; // ecx
  int v41; // r8d
  unsigned int v42; // [rsp+50h] [rbp-C8h]
  unsigned int v43; // [rsp+54h] [rbp-C4h]
  int v44; // [rsp+64h] [rbp-B4h]
  bool v45; // [rsp+68h] [rbp-B0h]
  bool v46; // [rsp+6Ch] [rbp-ACh]
  int v47; // [rsp+70h] [rbp-A8h]
  __int64 v48; // [rsp+78h] [rbp-A0h]
  unsigned int v49; // [rsp+80h] [rbp-98h]
  int v50; // [rsp+88h] [rbp-90h]
  unsigned int v52; // [rsp+128h] [rbp+10h]
  unsigned int v54; // [rsp+138h] [rbp+20h]

  Value = a2->Flags.Value;
  v5 = a3;
  v6 = a1;
  if ( (Value & 6) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 741;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pOrigCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Value = a2->Flags.Value;
  }
  if ( (v5->Flags.Value & 2) == 0 && (Value & 4) == 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 742;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pNewCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      742LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)v6 + 4);
  v8 = *((_DWORD *)v6 + 5);
  v9 = 0;
  v49 = v7;
  v46 = (a2->Flags.Value & 4) != 0;
  v10 = 4 * v7;
  v50 = v8;
  v45 = (v5->Flags.Value & 4) != 0;
  v47 = 4 * v7;
  v44 = 0;
  v11 = (float)(int)a2->Width / (float)v7;
  v12 = (float)(int)a2->Height / (float)v8;
  if ( v8 )
  {
    do
    {
      v13 = 0;
      if ( v7 )
      {
        v14 = (float)v9 * v12;
        v48 = (unsigned int)(v10 * v9);
        v15 = (int)v14;
        v16 = v14 - (float)(int)v14;
        v17 = 1.0 - v16;
        do
        {
          v18 = 0LL;
          v19 = (float)v13 * v11;
          v20 = (int)v19;
          if ( (int)v19 != a2->Width - 1 )
            v18 = 1LL;
          if ( v15 == a2->Height - 1 )
            Pitch = 0;
          else
            Pitch = a2->Pitch;
          v22 = (unsigned int *)((char *)a2->pPixels + (unsigned int)(4 * v20) + (unsigned __int64)(a2->Pitch * v15));
          v23 = v19 - (float)v20;
          v24 = *v22;
          v52 = v22[v18];
          v54 = *(unsigned int *)((char *)v22 + Pitch);
          v42 = *(unsigned int *)((char *)&v22[v18] + Pitch);
          v43 = *v22 >> 8;
          v25 = HIBYTE(*v22);
          v26 = HIBYTE(v52);
          v27 = HIBYTE(v54);
          v28 = (int)(float)((float)(v17 * v23) * 256.0);
          v29 = HIBYTE(v42);
          v30 = (int)(float)((float)(v17 * (float)(1.0 - v23)) * 256.0);
          v31 = (int)(float)((float)(v16 * v23) * 256.0);
          v32 = (int)(float)((float)(v16 * (float)(1.0 - v23)) * 256.0);
          v33 = ((_WORD)v30 * BYTE1(v24) + (_WORD)v28 * BYTE1(v52) + (_WORD)v32 * BYTE1(v54) + (_WORD)v31 * BYTE1(v42)) & 0xFF00 | (unsigned __int8)((unsigned __int16)(v30 * (unsigned __int8)v24 + v28 * (unsigned __int8)v52 + v32 * (unsigned __int8)v54 + v31 * (unsigned __int8)v42) >> 8) | ((v30 * BYTE2(v24) + v28 * BYTE2(v52) + v32 * BYTE2(v54) + v31 * BYTE2(v42)) << 8) & 0xFF0000;
          if ( v45 )
          {
            v35 = v33 | ((((_WORD)v30 * HIBYTE(v24)
                         + (_WORD)v28 * HIBYTE(v52)
                         + (_WORD)v32 * HIBYTE(v54)
                         + (_WORD)v31 * HIBYTE(v42)) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( _byteswap_ulong(
                   (((_WORD)v30 * HIBYTE(v24)
                   + (_WORD)v28 * HIBYTE(v52)
                   + (_WORD)v32 * HIBYTE(v54)
                   + (_WORD)v31 * HIBYTE(v42)) & 0x8000) != 0
                 ? 0xFF000000
                 : 0) )
            {
              v41 = (unsigned __int8)-((((v42 >> 8) & v42 | (v54 >> 8) & v54 | (v52 >> 8) & v52 | v43 & v24) & 0xFFFF0000) != 0);
              v35 = v41 & 0xFF00FFFF | ((((_WORD)v30 * HIBYTE(v24)
                                        + (_WORD)v28 * HIBYTE(v52)
                                        + (_WORD)v32 * HIBYTE(v54)
                                        + (_WORD)v31 * HIBYTE(v42)) & 0x8000) != 0
                                      ? 0xFF000000
                                      : 0) | (v41 << 8) & 0xFF00FFFF | _byteswap_ulong(v41 << 8);
            }
          }
          else
          {
            if ( v46 )
              v34 = v28 * (255 - v26) + v30 * (255 - v25) + v31 * (255 - v29) + v32 * (255 - v27);
            else
              v34 = v26 * v28 + v25 * v30 + v31 * v29 + v32 * v27;
            v35 = v33 | (v34 << 16) & 0xFF000000;
          }
          v5 = a3;
          v36 = v48 + (unsigned int)(4 * v13++);
          *(_DWORD *)((char *)a3->pPixels + v36) = v35;
          v7 = v49;
        }
        while ( v13 < v49 );
        v9 = v44;
        v8 = v50;
        v10 = v47;
      }
      v44 = ++v9;
    }
    while ( v9 < (unsigned int)v8 );
    v6 = a1;
  }
  v5->VidPnSourceId = a2->VidPnSourceId;
  v5->Width = v7;
  v37 = *((_DWORD *)v6 + 2);
  v5->Height = v8;
  v5->Pitch = v10;
  v38 = (v37 + *(_DWORD *)v6 * a2->XHot - 1) / v37;
  v39 = *((_DWORD *)v6 + 3);
  v5->XHot = v38;
  v5->YHot = (v39 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v39;
  return 0LL;
}
