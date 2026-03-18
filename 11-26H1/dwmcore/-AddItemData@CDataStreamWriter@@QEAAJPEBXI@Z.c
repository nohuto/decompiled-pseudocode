/*
 * XREFs of ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180118D68
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1801174E0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180119470 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801E3290 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180232A40 (-CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233A50 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233B50 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1802215B4 (memcpy_0.c)
 */

__int64 __fastcall CDataStreamWriter::AddItemData(CDataStreamWriter *this, const void *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ecx
  __int64 v10; // r12
  int v11; // eax
  int v12; // ebp
  unsigned int v13; // eax
  int v14; // r14d
  unsigned int v15; // eax

  v3 = 0;
  v4 = a3;
  if ( a3 )
  {
    if ( !*((_QWORD *)this + 6) && !*((_DWORD *)this + 14)
      || (v7 = *((_QWORD *)this + 4), v8 = *(unsigned int *)(v7 + 20), *(_DWORD *)(v7 + 16) - (int)v8 < (unsigned int)v4) )
    {
      v3 = -2147418113;
      v15 = 209;
      v12 = -2147418113;
      v14 = -2147418113;
      goto LABEL_10;
    }
    v9 = v8 + v4;
    v10 = v7 + v8;
    v11 = -1;
    v3 = -2147024362;
    if ( (int)v8 + (int)v4 >= (unsigned int)v8 )
      v11 = v8 + v4;
    v12 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
    *(_DWORD *)(v7 + 20) = v11;
    if ( v9 < (unsigned int)v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x247u, 0LL);
      v3 = v12;
      v14 = v12;
      if ( v12 < 0 )
        goto LABEL_9;
    }
    else
    {
      v13 = *((_DWORD *)this + 11);
      if ( v13 + (unsigned int)v4 < v13 )
      {
        *((_DWORD *)this + 11) = -1;
        v14 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024362, 0x248u, 0LL);
        v12 = -2147024362;
LABEL_9:
        v15 = 216;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v15, 0LL);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0xB2u, 0LL);
        return v3;
      }
      *((_DWORD *)this + 11) = v13 + v4;
      v3 = 0;
    }
    *((_DWORD *)this + 14) += v4;
    memcpy_0((void *)(v10 + 24), a2, v4);
  }
  return v3;
}
