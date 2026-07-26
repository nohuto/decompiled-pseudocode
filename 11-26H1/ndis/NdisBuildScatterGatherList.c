/*
 * XREFs of NdisBuildScatterGatherList @ 0x1400CAE90
 * Callers:
 *     <none>
 * Callees:
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003EA40 (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x140044040 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x14004B4C0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x14004B510 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisBuildScatterGatherList(
        NDIS_HANDLE NdisHandle,
        PNDIS_SCATTER_GATHER_LIST_PARAMETERS SGListParameters)
{
  struct _NDIS_MINIPORT_BLOCK *v3; // r11
  NDIS_STATUS v4; // r10d
  __int64 v5; // r11
  __int16 v6; // di
  __int64 v7; // rbp
  _MDL *Mdl; // r8
  char *v9; // rsi
  _SCATTER_GATHER_LIST *ScatterGatherListBuffer; // r9
  int v11; // eax
  char v13[8]; // [rsp+60h] [rbp-28h] BYREF
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]

  v3 = (struct _NDIS_MINIPORT_BLOCK *)NdisHandle;
  if ( !NdisHandle )
    return -1073741811;
  if ( *(_BYTE *)NdisHandle != 18 )
  {
    if ( *(_BYTE *)NdisHandle == 17 )
      goto LABEL_5;
    return -1073741811;
  }
  v3 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisHandle + 2);
LABEL_5:
  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT((NDIS_PCW_CONTEXT *)v13, v3);
  if ( (v14 & 0x400) != 0 )
    ndisPcwAddEvent((struct NDIS_PCW_CONTEXT *)v13, 10LL, 1LL);
  v6 = v15;
  if ( (v15 & 0x400) != 0 )
  {
    ndisPcwStartCycleCounter((struct NDIS_PCW_CONTEXT *)v13, 0xAu);
    v6 = v15;
  }
  v7 = *(_QWORD *)(v5 + 504);
  if ( v7 )
  {
    Mdl = SGListParameters->Mdl;
    if ( Mdl )
    {
      v9 = (char *)Mdl->StartVa + Mdl->ByteOffset;
      ScatterGatherListBuffer = SGListParameters->ScatterGatherListBuffer;
      if ( ScatterGatherListBuffer )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _MDL *, char *, unsigned int, void (__fastcall *)(_DEVICE_OBJECT *, void *, _SCATTER_GATHER_LIST *, void *), void *, _BYTE, _SCATTER_GATHER_LIST *, unsigned int))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL) + 112LL))(
               *(_QWORD *)(v7 + 40),
               *(_QWORD *)(v5 + 3824),
               Mdl,
               v9,
               SGListParameters->Length,
               SGListParameters->ProcessSGListHandler,
               SGListParameters->Context,
               SGListParameters->Flags & 1,
               ScatterGatherListBuffer,
               SGListParameters->ScatterGatherListBufferSize);
        if ( v4 == -1073741789 )
        {
          v11 = (*(__int64 (__fastcall **)(_QWORD, _MDL *, char *, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL)
                                                                                                  + 104LL))(
                  *(_QWORD *)(v7 + 40),
                  SGListParameters->Mdl,
                  v9,
                  SGListParameters->Length,
                  &SGListParameters->ScatterGatherListBufferSizeNeeded,
                  0LL);
          v4 = -1073676266;
          if ( v11 < 0 )
            v4 = -1073741670;
        }
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  else
  {
    SGListParameters->ProcessSGListHandler(
      *(_DEVICE_OBJECT **)(v5 + 3824),
      0LL,
      SGListParameters->ScatterGatherListBuffer,
      SGListParameters->Context);
    v4 = 0;
  }
  if ( (v6 & 0x400) != 0 )
    ndisPcwEndCycleCounter((struct NDIS_PCW_CONTEXT *)v13, 0xAu, 23LL);
  return v4;
}
