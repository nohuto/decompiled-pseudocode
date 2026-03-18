/*
 * XREFs of RIMApplyTransforms @ 0x1400786DC
 * Callers:
 *     rimPopulateContactFrameData @ 0x140076D40 (rimPopulateContactFrameData.c)
 * Callees:
 *     RIMTransformCoordinates @ 0x140076844 (RIMTransformCoordinates.c)
 *     RIMSetContactBoundary @ 0x140076BE4 (RIMSetContactBoundary.c)
 *     RIMApplyDisplayOrientationToPointerProps @ 0x14007902C (RIMApplyDisplayOrientationToPointerProps.c)
 *     RIMTransformPhysicalPointToScreen @ 0x140079180 (RIMTransformPhysicalPointToScreen.c)
 *     ApiSetTransformForInputMagnification @ 0x140079250 (ApiSetTransformForInputMagnification.c)
 *     RIMTransformPointerDevicePointToPhysical @ 0x1400792B4 (RIMTransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall RIMApplyTransforms(__int64 a1, int a2, __int64 a3, _QWORD *a4, _DWORD *a5)
{
  int v5; // r14d
  bool v10; // zf
  _DWORD *v11; // r13
  __int64 v13; // rax
  int v14; // ecx
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v5 = 0;
  if ( (*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 1 )
  {
    v15 = 0;
    RIMTransformCoordinates(a1, a2, (int *)(a3 + 4), a4, &v15);
    v10 = (*(_DWORD *)(a1 + 368) & 0x200) == 0;
    v11 = a5;
    *a5 = v15;
    if ( v10 )
    {
      *(_QWORD *)(a3 + 12) = *(_QWORD *)(a3 + 4);
    }
    else
    {
      RIMTransformCoordinates(a1, a2, (int *)(a3 + 12), a4, &v15);
      *v11 = v15;
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 24) - 1) <= 4 )
      RIMApplyDisplayOrientationToPointerProps(*(unsigned int *)(a1 + 224), a3 + 56);
  }
  RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a3 + 4), a3 + 120);
  if ( (*(_DWORD *)(a1 + 368) & 8) != 0 && *(_DWORD *)(a1 + 364) == 1 )
  {
    v13 = *(_QWORD *)(a1 + 160);
    *(_DWORD *)(a3 + 4) += v13;
    *(_DWORD *)(a3 + 8) += HIDWORD(v13);
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
    if ( ((*(_DWORD *)(a1 + 224) - 2) & 0xFFFFFFFD) == 0
      && ((*(_DWORD *)(a1 + 368) & 8) == 0 || *(_DWORD *)(a1 + 364) != 1) )
    {
      v14 = *(_DWORD *)(a3 + 24);
      *(_DWORD *)(a3 + 24) = *(_DWORD *)(a3 + 28);
      *(_DWORD *)(a3 + 28) = v14;
    }
    RIMSetContactBoundary(a1, (_DWORD *)(a3 + 184), *(_QWORD *)(a3 + 12), *(_DWORD *)(a3 + 24), *(_DWORD *)(a3 + 28));
    *(_OWORD *)(a3 + 168) = *(_OWORD *)(a3 + 184);
  }
  return (unsigned int)v5;
}
