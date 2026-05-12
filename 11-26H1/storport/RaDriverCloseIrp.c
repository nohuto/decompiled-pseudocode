/*
 * XREFs of RaDriverCloseIrp @ 0x1401B2D90
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceCloseIrp @ 0x14002FF68 (NvmeNamespaceCloseIrp.c)
 *     RaidHandleCreateCloseIrp @ 0x14002FF80 (RaidHandleCreateCloseIrp.c)
 *     RaUnitCreateIrp @ 0x140032C30 (RaUnitCreateIrp.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 */

__int64 __fastcall RaDriverCloseIrp(__int64 a1, __int64 a2)
{
  int *v4; // rcx
  int v5; // eax
  int v6; // ecx
  unsigned int CloseIrp; // eax
  unsigned int v8; // esi

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xEu,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = *(int **)(a1 + 64);
  v5 = *v4;
  if ( *v4 == 1094997074 )
  {
    v6 = v4[22];
LABEL_5:
    CloseIrp = RaidHandleCreateCloseIrp(v6, a2);
    goto LABEL_6;
  }
  if ( v5 == 1431193940 )
  {
    CloseIrp = RaUnitCreateIrp((__int64)v4, a2);
    goto LABEL_6;
  }
  if ( v5 == 1314275652 )
  {
    v6 = v4[21];
    goto LABEL_5;
  }
  if ( v5 != 1314278989 )
  {
    v8 = -1073741823;
    goto LABEL_7;
  }
  CloseIrp = NvmeNamespaceCloseIrp((__int64)v4);
LABEL_6:
  v8 = CloseIrp;
LABEL_7:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0xFu,
      (__int64)&WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids,
      a1,
      a2,
      v8);
  }
  return v8;
}
