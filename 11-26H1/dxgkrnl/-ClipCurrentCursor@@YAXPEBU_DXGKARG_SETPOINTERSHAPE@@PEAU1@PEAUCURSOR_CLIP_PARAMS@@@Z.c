/*
 * XREFs of ?ClipCurrentCursor@@YAXPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@PEAUCURSOR_CLIP_PARAMS@@@Z @ 0x1403C073C
 * Callers:
 *     ?SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1402C7ED4 (-SetPointerPositionForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEAVSESSION_VIEW@@PEBU_DXGKARG_SETPO.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N55@Z @ 0x1402CC94C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall ClipCurrentCursor(
        const struct _DXGKARG_SETPOINTERSHAPE *a1,
        struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct CURSOR_CLIP_PARAMS *a3)
{
  struct CURSOR_CLIP_PARAMS *v3; // rbx
  const struct _DXGKARG_SETPOINTERSHAPE *v5; // rsi
  UINT Height; // r8d
  UINT v7; // edi
  int v8; // ebp
  UINT Pitch; // r9d
  UINT *p_Width; // rdx
  int v11; // ebp
  __int64 v12; // r9
  unsigned int v13; // eax
  _BYTE *v14; // rsi
  _BYTE *v15; // rdi
  char v16; // r15
  __int64 v17; // rbp
  char v18; // r13
  __int64 v19; // rbx
  size_t v20; // r12
  const void *v21; // rax
  void *v22; // r14
  __int64 v23; // r9
  char *pPixels; // r14
  unsigned int v25; // eax
  _BYTE *v26; // r15
  char *v27; // r14
  __int64 v28; // r11
  __int64 v29; // r10
  char v30; // cl
  char v31; // si
  size_t v32; // r12
  const void *v33; // rax
  char *v34; // rbp
  UINT v35; // edi
  __int64 v36; // r9
  unsigned int v37; // eax
  _BYTE *v38; // rsi
  _BYTE *v39; // rdi
  char v40; // r15
  __int64 v41; // rbp
  char v42; // r13
  __int64 v43; // rbx
  size_t v44; // r12
  const void *v45; // rax
  void *v46; // r14
  unsigned int v47; // r9d
  unsigned int v48; // r9d
  unsigned int v49; // r9d
  _BYTE *v50; // r10
  _BYTE *v51; // r11
  char v52; // si
  char *v53; // rbp
  _BYTE *v54; // r10
  _BYTE *v55; // r11
  UINT v56; // ecx
  __int64 v57; // [rsp+58h] [rbp-60h]
  __int64 v58; // [rsp+60h] [rbp-58h]
  _BYTE *v60; // [rsp+C0h] [rbp+8h]
  _BYTE *v61; // [rsp+C0h] [rbp+8h]
  _BYTE *v64; // [rsp+D0h] [rbp+18h]
  int v65; // [rsp+D8h] [rbp+20h]
  char v66; // [rsp+D8h] [rbp+20h]
  _BYTE *v67; // [rsp+D8h] [rbp+20h]

  v3 = a3;
  a2->Flags.Value = a1->Flags.Value;
  a2->Width = a1->Width;
  v5 = a1;
  Height = a1->Height;
  v7 = 0;
  v8 = *((_DWORD *)v3 + 5);
  a2->Height = Height;
  Pitch = a1->Pitch;
  a2->Pitch = Pitch;
  a2->XHot = a1->XHot;
  a2->YHot = a1->YHot;
  p_Width = &a1->Width;
  if ( (v8 & 1) != 0 )
    v7 = a1->Pitch * (a1->Height - *((_DWORD *)v3 + 1));
  v11 = v8 & 4;
  if ( v11 )
  {
    v56 = a1->Width - *(_DWORD *)v3;
    if ( (v5->Flags.Value & 1) != 0 )
      v7 += v56 >> 3;
    else
      v7 += 4 * v56;
  }
  v65 = *((_DWORD *)v3 + 3);
  if ( (v5->Flags.Value & 1) != 0 )
  {
    memset((void *)a2->pPixels, 255, Pitch * Height);
    if ( v65 )
    {
      if ( v11 )
        v48 = *(_DWORD *)v3 + 8 * v5->Pitch - v5->Width;
      else
        v48 = *(_DWORD *)v3;
      v23 = v48 >> 3;
    }
    else
    {
      if ( *((_BYTE *)v3 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)v3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v23 = (unsigned int)(4 * *(_DWORD *)v3);
    }
    pPixels = (char *)a2->pPixels;
    v25 = *((_DWORD *)v3 + 1);
    v26 = (char *)v5->pPixels + v7;
    v27 = &pPixels[v7];
    if ( v25 )
    {
      v28 = v25;
      v29 = *((unsigned int *)v3 + 2);
      v66 = *((_BYTE *)v3 + 16);
      v30 = *((_BYTE *)v3 + 17);
      v58 = v29;
      v57 = *((unsigned int *)v3 + 1);
      if ( (_DWORD)v23 )
      {
        v31 = *((_BYTE *)v3 + 17);
        v32 = (unsigned int)v23;
        do
        {
          v33 = v26;
          v34 = v27;
          v64 = v26;
          if ( v66 )
          {
            v34 = v27 + 1;
            v33 = v26 + 1;
            v64 = v26 + 1;
            *v27 = ((1 << v66) - 1) & *v26 | *v27 & ~((1 << v66) - 1);
          }
          memmove(v34, v33, v32);
          if ( v31 )
            v34[v32] = v34[v32] & ((1 << (8 - v31)) - 1) | ~((1 << (8 - v31)) - 1) & v64[v32];
          v27 += v58;
          v26 += v58;
          --v57;
        }
        while ( v57 );
      }
      else
      {
        v52 = *((_BYTE *)v3 + 16);
        do
        {
          v67 = v26;
          v53 = v27;
          if ( v52 )
          {
            v53 = v27 + 1;
            v67 = v26 + 1;
            *v27 = ((1 << v52) - 1) & *v26 | *v27 & ~((1 << v52) - 1);
          }
          if ( v30 )
            v53[v23] = v53[v23] & ((1 << (8 - v30)) - 1) | ~((1 << (8 - v30)) - 1) & v67[v23];
          v27 += v29;
          v26 += v29;
          --v28;
        }
        while ( v28 );
        v3 = a3;
      }
      v5 = a1;
    }
    v35 = a2->Height * a2->Pitch + v7;
    if ( *((_DWORD *)v3 + 3) )
    {
      if ( (*((_DWORD *)v3 + 5) & 4) != 0 )
        v49 = *(_DWORD *)v3 + 8 * v5->Pitch - v5->Width;
      else
        v49 = *(_DWORD *)v3;
      v36 = v49 >> 3;
    }
    else
    {
      if ( *((_BYTE *)v3 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)v3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v36 = (unsigned int)(4 * *(_DWORD *)v3);
    }
    v37 = *((_DWORD *)v3 + 1);
    v38 = (char *)v5->pPixels + v35;
    v39 = (char *)a2->pPixels + v35;
    if ( v37 )
    {
      v40 = *((_BYTE *)v3 + 16);
      v41 = v37;
      v42 = *((_BYTE *)v3 + 17);
      v43 = *((unsigned int *)v3 + 2);
      if ( (_DWORD)v36 )
      {
        v44 = (unsigned int)v36;
        do
        {
          v45 = v38;
          v46 = v39;
          v61 = v38;
          if ( v40 )
          {
            v46 = v39 + 1;
            v45 = v38 + 1;
            v61 = v38 + 1;
            *v39 = ((1 << v40) - 1) & *v38 | *v39 & ~((1 << v40) - 1);
          }
          memmove(v46, v45, v44);
          if ( v42 )
            *((_BYTE *)v46 + v44) = ((1 << (8 - v42)) - 1) & *((_BYTE *)v46 + v44) | ~((1 << (8 - v42)) - 1) & v61[v44];
          v39 += v43;
          v38 += v43;
          --v41;
        }
        while ( v41 );
      }
      else
      {
        do
        {
          v54 = v39;
          v55 = v38;
          if ( v40 )
          {
            v54 = v39 + 1;
            v55 = v38 + 1;
            *v39 = ((1 << v40) - 1) & *v38 | *v39 & ~((1 << v40) - 1);
          }
          if ( v42 )
            v54[v36] = ((1 << (8 - v42)) - 1) & v54[v36] | ~((1 << (8 - v42)) - 1) & v55[v36];
          v39 += v43;
          v38 += v43;
          --v41;
        }
        while ( v41 );
      }
    }
  }
  else
  {
    if ( *((_DWORD *)v3 + 3) )
    {
      if ( v11 )
        v47 = *(_DWORD *)v3 + 8 * v5->Pitch - *p_Width;
      else
        v47 = *(_DWORD *)v3;
      v12 = v47 >> 3;
    }
    else
    {
      if ( *((_BYTE *)v3 + 16) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 143;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsLeftMono == 0",
          143LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_BYTE *)v3 + 17) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pClipParams->ExtraPixelsRightMono == 0",
          144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v12 = (unsigned int)(4 * *(_DWORD *)v3);
    }
    v13 = *((_DWORD *)v3 + 1);
    v14 = (char *)v5->pPixels + v7;
    v15 = (char *)a2->pPixels + v7;
    if ( v13 )
    {
      v16 = *((_BYTE *)v3 + 16);
      v17 = v13;
      v18 = *((_BYTE *)v3 + 17);
      v19 = *((unsigned int *)v3 + 2);
      if ( (_DWORD)v12 )
      {
        v20 = (unsigned int)v12;
        do
        {
          v21 = v14;
          v22 = v15;
          v60 = v14;
          if ( v16 )
          {
            v22 = v15 + 1;
            v21 = v14 + 1;
            v60 = v14 + 1;
            *v15 = ((1 << v16) - 1) & *v14 | *v15 & ~((1 << v16) - 1);
          }
          memmove(v22, v21, v20);
          if ( v18 )
            *((_BYTE *)v22 + v20) = ((1 << (8 - v18)) - 1) & *((_BYTE *)v22 + v20) | ~((1 << (8 - v18)) - 1) & v60[v20];
          v15 += v19;
          v14 += v19;
          --v17;
        }
        while ( v17 );
      }
      else
      {
        do
        {
          v50 = v15;
          v51 = v14;
          if ( v16 )
          {
            v50 = v15 + 1;
            v51 = v14 + 1;
            *v15 = ((1 << v16) - 1) & *v14 | *v15 & ~((1 << v16) - 1);
          }
          if ( v18 )
            v50[v12] = ((1 << (8 - v18)) - 1) & v50[v12] | ~((1 << (8 - v18)) - 1) & v51[v12];
          v15 += v19;
          v14 += v19;
          --v17;
        }
        while ( v17 );
      }
    }
  }
}
