/*
 * XREFs of RIMApplyTransforms @ 0x1400F6F1C
 * Callers:
 *     rimPopulateContactFrameData @ 0x1400F5058 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMIsTouchPointerDevice @ 0x1400F7194 (RIMIsTouchPointerDevice.c)
 *     RIMTransformCoordinates @ 0x1400F8820 (RIMTransformCoordinates.c)
 *     RIMTransformPhysicalPointToScreen @ 0x1400F8BB8 (RIMTransformPhysicalPointToScreen.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400F8C30 (RIMTransformPointerDevicePointToPhysical.c)
 *     RIMApplyDisplayOrientationToPointerProps @ 0x1400F8E84 (RIMApplyDisplayOrientationToPointerProps.c)
 *     RIMSetContactBoundary @ 0x1400F90EC (RIMSetContactBoundary.c)
 *     ApiSetTransformForInputMagnification @ 0x1401B5CBC (ApiSetTransformForInputMagnification.c)
 */

__int64 __fastcall RIMApplyTransforms(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  int v5; // r14d
  bool v10; // zf
  _DWORD *v11; // r13
  int v12; // ecx
  __int64 v14; // rax
  int v15; // ecx
  int v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 1 )
  {
    v16 = 0;
    RIMTransformCoordinates(a1, a2, a3 + 4, a4, (__int64)&v16);
    v10 = (*(_DWORD *)(a1 + 368) & 0x200) == 0;
    v11 = a5;
    *a5 = v16;
    if ( v10 )
    {
      *(_QWORD *)(a3 + 12) = *(_QWORD *)(a3 + 4);
    }
    else
    {
      RIMTransformCoordinates(a1, a2, a3 + 12, a4, (__int64)&v16);
      *v11 = v16;
    }
    if ( (unsigned int)RIMIsTouchPointerDevice(a1) || *(_DWORD *)(a1 + 24) == 5 )
      RIMApplyDisplayOrientationToPointerProps(*(unsigned int *)(a1 + 224), a3 + 56);
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a3 + 4), a3 + 120);
  if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
  {
    v14 = *(_QWORD *)(a1 + 160);
    *(_DWORD *)(a3 + 4) += v14;
    *(_DWORD *)(a3 + 8) += HIDWORD(v14);
    *(_QWORD *)(a3 + 112) = *(_QWORD *)(a3 + 4);
    ApiSetTransformForInputMagnification(a1, a3 + 120);
    *(_QWORD *)(a3 + 12) = *(_QWORD *)(a3 + 4);
  }
  else
  {
    v5 = RIMTransformPhysicalPointToScreen(a1, a3 + 120, a3 + 112);
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  if ( *(_DWORD *)(a3 + 20) )
  {
    v12 = *(_DWORD *)(a1 + 224);
    if ( (v12 == 2 || v12 == 4) && ((*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 1) )
    {
      v15 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 28);
      *(_DWORD *)(a3 + 28) = v15;
    }
    RIMSetContactBoundary(a1, a3 + 184, *(_QWORD *)(a3 + 12), *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28));
    *(_OWORD *)(a3 + 168) = *(_OWORD *)(a3 + 184);
  }
  return (unsigned int)v5;
}
