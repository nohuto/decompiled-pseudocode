/*
 * XREFs of ?ndisOidPostPMAddWOLPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140070C90
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1400217D0 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14006EF40 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x140070440 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1400B5D7C (-ndisEnablePMParamForPattern@@YAXPEAU_NDIS_PM_WOL_PATTERN@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B6190 (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisOidPostPMAddWOLPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  PVOID *v5; // rdi
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  PVOID *v12; // rdi
  void *v13; // rcx
  void *v14; // rcx
  void *OidContext; // rcx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( (*(_DWORD *)(v1 + 88) & 0xC0000) == 0 )
  {
    if ( *((_DWORD *)a1 + 10) )
    {
      v12 = *(PVOID **)(v1 + 144);
      if ( v12 )
      {
        ExFreePoolWithTag(v12[3], 0);
        *(_DWORD *)(v1 + 32) = *(_DWORD *)v12;
        *(_QWORD *)(v1 + 40) = v12[1];
        *(_DWORD *)(v1 + 48) = *((_DWORD *)v12 + 4);
        ExFreePoolWithTag(v12, 0);
        *(_QWORD *)(v1 + 144) = 0LL;
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v13 = *(void **)(v1 + 160);
        if ( v13 )
          ExFreePoolWithTag(v13, 0);
      }
      if ( *((_QWORD *)a1 + 1) )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v14 = *(void **)(v1 + 160);
          if ( v14 )
            ExFreePoolWithTag(v14, 0);
        }
      }
      if ( *(_QWORD *)a1 )
      {
        OidContext = v4->OidContext;
        v4->OidContext = 0LL;
        if ( OidContext )
          ExFreePoolWithTag(OidContext, 0);
        if ( *(_DWORD *)(v1 + 48) >= 0x98u )
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = 0;
      }
    }
    else
    {
      if ( v4 )
      {
        if ( v4->MajorNdisVersion > 6u || v4->MajorNdisVersion == 6 && v4->MinorNdisVersion >= 0x14u )
        {
          ndisMiniportPostAddWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          if ( ndisGetOidSourceHandle((struct _NDIS_OID_REQUEST *)v1) == &ndisIntReqWmi )
          {
            ndisEnablePMParamForPattern(*(struct _NDIS_PM_WOL_PATTERN **)(v1 + 40), &v4->PMWmiParameters);
            ndisGetCombinedPMConfig(v4, &v4->PMCurrentParameters);
          }
        }
        else
        {
          ndisMiniportPostAddWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          v5 = *(PVOID **)(v1 + 144);
          ExFreePoolWithTag(v5[3], 0);
          *(_DWORD *)(v1 + 32) = *(_DWORD *)v5;
          *(_QWORD *)(v1 + 40) = v5[1];
          *(_DWORD *)(v1 + 48) = *((_DWORD *)v5 + 4);
          ExFreePoolWithTag(v5, 0);
          v6 = *(_DWORD *)(v1 + 152);
          *(_QWORD *)(v1 + 144) = 0LL;
          *(_DWORD *)(*(_QWORD *)(v1 + 40) + 148LL) = v6;
        }
      }
      if ( *((_QWORD *)a1 + 3) )
      {
        v7 = *(_QWORD *)(v1 + 40);
        v8 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v8 + 196) = *(_DWORD *)(v7 + 148);
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(v7 + 148);
        *(_QWORD *)v8 = *(_QWORD *)(v3 + 504);
        *(_QWORD *)(v3 + 504) = v8;
      }
      v9 = *((_QWORD *)a1 + 1);
      if ( v9 )
      {
        if ( (*(_DWORD *)(v1 + 88) & 0x4000) == 0 )
        {
          v10 = *(_QWORD *)(v1 + 40);
          v11 = *(_QWORD *)(v1 + 160);
          *(_DWORD *)(v11 + 196) = *(_DWORD *)(v10 + 148);
          *(_DWORD *)(v11 + 40) = *(_DWORD *)(v10 + 148);
          *(_QWORD *)v11 = *(_QWORD *)(v9 + 712);
          *(_QWORD *)(v9 + 712) = v11;
        }
      }
    }
  }
}
