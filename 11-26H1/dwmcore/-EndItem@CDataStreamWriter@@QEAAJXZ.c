/*
 * XREFs of ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180118950
 * Callers:
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z @ 0x1801174E0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@IHH@Z.c)
 *     ?AsyncFlush@CChannel@@UEAAJII@Z @ 0x180118210 (-AsyncFlush@CChannel@@UEAAJII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180119470 (-VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z @ 0x1801E3290 (-AnimationUpdatePrimitives@CChannel@@UEAAJIPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180232A40 (-CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z.c)
 *     ?Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233A50 (-Transform3DGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 *     ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233B50 (-TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDataStreamWriter::EndItem(CDataStreamWriter *this)
{
  unsigned int *v1; // rax
  unsigned int v3; // ecx
  unsigned int v4; // r9d
  unsigned int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  unsigned int v9; // edx
  int v10; // edi
  unsigned int v11; // eax
  __int64 result; // rax
  unsigned int v13; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (unsigned int *)((char *)this + 56);
  if ( !*((_QWORD *)this + 6) && !*v1 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v3 = *v1;
  v4 = (*v1 + 3) & 0xFFFFFFFC;
  if ( v4 >= *v1 )
  {
    *v1 = v4;
    v5 = v4 - v3;
    v6 = -1;
    v7 = *((_QWORD *)this + 4);
    v8 = *(_DWORD *)(v7 + 20);
    v9 = v8 + v5;
    if ( v8 + v5 >= v8 )
      v6 = v8 + v5;
    v10 = v9 < v8 ? 0x80070216 : 0;
    *(_DWORD *)(v7 + 20) = v6;
    if ( v9 < v8 )
    {
      v13 = 583;
    }
    else
    {
      v11 = *((_DWORD *)this + 11);
      if ( v11 + v5 >= v11 )
      {
        *((_DWORD *)this + 11) = v11 + v5;
        goto LABEL_8;
      }
      *((_DWORD *)this + 11) = -1;
      v10 = -2147024362;
      v13 = 584;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v13, 0LL);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x108,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
LABEL_8:
    **((_DWORD **)this + 6) = *((_DWORD *)this + 14);
    result = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 14) = 0;
    return result;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x103,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\datastreamwriter.cpp",
    (const char *)0x80070216LL);
  return 2147942934LL;
}
