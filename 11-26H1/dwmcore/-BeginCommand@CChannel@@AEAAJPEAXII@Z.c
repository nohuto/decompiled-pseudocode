/*
 * XREFs of ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1801174E0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180119470 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801E3290 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180232A40 (-CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233A50 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233B50 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180118A8C (-BeginItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180118BB8 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x180118C8C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CChannel::BeginCommand(CChannel *this, void *a2, unsigned int a3, int a4)
{
  size_t v4; // r14
  unsigned int v6; // esi
  CDataStreamWriter **v7; // r15
  CDataStreamWriter *v8; // rdi
  unsigned int v9; // eax
  int v10; // ebx
  unsigned int v11; // esi
  _DWORD *v12; // rcx
  CDataStreamWriter *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // rbp
  int v18; // eax
  int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // eax
  int v23; // edi
  int v24; // esi
  unsigned int v25; // eax
  unsigned int v26; // ebp
  int v27; // eax
  __int64 v28; // rdx
  CDataStreamWriter *i; // rcx
  unsigned int v30; // edx
  unsigned int v31; // eax
  CDataStreamWriter **v32; // rax
  CDataStreamWriter **v33; // rdx
  unsigned int v34; // eax
  int v35; // r9d
  CDataStreamWriter *v36; // rdx
  CDataStreamWriter **v37; // rax
  int v38; // eax
  int NewBlock; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a3;
  v6 = a3 + a4;
  if ( a3 + a4 < a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8E,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    return 2147942934LL;
  }
  v7 = (CDataStreamWriter **)((char *)this + 176);
  if ( *((_QWORD *)this + 22)
    || (v27 = CCommandBatch::Create((unsigned int)this, (struct CCommandBatch **)this + 22), v23 = v27, v27 >= 0) )
  {
    v8 = *v7;
    v9 = v6 + 4;
    v10 = -2147024362;
    if ( v6 + 4 < v6 )
    {
      v23 = -2147024362;
      v24 = -2147024362;
      v25 = 378;
    }
    else
    {
      v11 = (v6 + 7) & 0xFFFFFFFC;
      if ( v11 < v9 )
      {
        v34 = 402;
LABEL_40:
        v24 = -2147024362;
        v23 = -2147024362;
        v35 = -2147024362;
      }
      else
      {
        v12 = (_DWORD *)*((_QWORD *)v8 + 4);
        if ( v12 )
        {
          if ( v12[4] - v12[5] >= v11 )
            goto LABEL_7;
          if ( !v12[5] )
          {
            operator delete(v12);
            *((_QWORD *)v8 + 4) = 0LL;
          }
        }
        for ( i = (CDataStreamWriter *)*((_QWORD *)v8 + 2);
              i != (CDataStreamWriter *)((char *)v8 + 16);
              i = *(CDataStreamWriter **)i )
        {
          v30 = *((_DWORD *)i + 4);
          if ( v30 >= v11 )
          {
            v31 = *((_DWORD *)v8 + 10);
            if ( v31 + v30 < v31 )
            {
              *((_DWORD *)v8 + 10) = -1;
              v34 = 437;
              goto LABEL_40;
            }
            *((_DWORD *)v8 + 10) = v31 + v30;
            v32 = (CDataStreamWriter **)*((_QWORD *)v8 + 4);
            if ( v32 )
            {
              v33 = (CDataStreamWriter **)*((_QWORD *)v8 + 1);
              if ( *v33 != v8 )
                goto LABEL_38;
              *v32 = v8;
              v32[1] = (CDataStreamWriter *)v33;
              *v33 = (CDataStreamWriter *)v32;
              *((_QWORD *)v8 + 1) = v32;
            }
            v36 = *(CDataStreamWriter **)i;
            if ( *(CDataStreamWriter **)(*(_QWORD *)i + 8LL) != i
              || (v37 = (CDataStreamWriter **)*((_QWORD *)i + 1), *v37 != i) )
            {
LABEL_38:
              __fastfail(3u);
            }
            *v37 = v36;
            *((_QWORD *)v36 + 1) = v37;
            *((_DWORD *)i + 5) = 0;
            *((_QWORD *)v8 + 4) = i;
            goto LABEL_7;
          }
        }
        v38 = 0x4000;
        if ( *((_DWORD *)v8 + 10) < 0x4000u )
          v38 = *((_DWORD *)v8 + 10);
        if ( v38 + v11 < v11 )
        {
          v34 = 501;
          goto LABEL_40;
        }
        NewBlock = CDataStreamWriter::AllocateNewBlock(v8, v38 + v11);
        v24 = NewBlock;
        v23 = NewBlock;
        if ( NewBlock >= 0 )
          goto LABEL_7;
        v35 = NewBlock;
        v34 = 503;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, v34, 0LL);
      v25 = 380;
    }
    v26 = v23;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, v25, 0LL);
    if ( v23 < 0 )
    {
      v28 = 247LL;
      goto LABEL_29;
    }
LABEL_7:
    CDataStreamWriter::BeginItem(*v7);
    v13 = *v7;
    if ( !(_DWORD)v4 )
      return 0LL;
    if ( !*((_QWORD *)v13 + 6) && !*((_DWORD *)v13 + 14)
      || (v14 = *((_QWORD *)v13 + 4),
          v15 = *(unsigned int *)(v14 + 20),
          *(_DWORD *)(v14 + 16) - (int)v15 < (unsigned int)v4) )
    {
      v10 = -2147418113;
      v21 = 209;
      v19 = -2147418113;
      goto LABEL_16;
    }
    v16 = v15 + v4;
    v17 = v14 + v15;
    v18 = -1;
    if ( (int)v15 + (int)v4 >= (unsigned int)v15 )
      v18 = v15 + v4;
    v19 = v16 < (unsigned int)v15 ? 0x80070216 : 0;
    *(_DWORD *)(v14 + 20) = v18;
    if ( v16 < (unsigned int)v15 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x247u, 0LL);
      v10 = v19;
      if ( v19 < 0 )
        goto LABEL_15;
    }
    else
    {
      v20 = *((_DWORD *)v13 + 11);
      if ( v20 + (unsigned int)v4 < v20 )
      {
        *((_DWORD *)v13 + 11) = -1;
        v19 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
LABEL_15:
        v21 = 216;
LABEL_16:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v21, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0xB2u, 0LL);
        return 0LL;
      }
      *((_DWORD *)v13 + 11) = v20 + v4;
    }
    *((_DWORD *)v13 + 14) += v4;
    memcpy_0((void *)(v17 + 24), a2, v4);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x109,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v27);
  v28 = 241LL;
  v26 = v23;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)v26);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8F,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v23);
  return (unsigned int)v23;
}
