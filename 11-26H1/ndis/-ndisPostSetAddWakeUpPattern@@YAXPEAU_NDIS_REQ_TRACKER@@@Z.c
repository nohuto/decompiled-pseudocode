/*
 * XREFs of ?ndisPostSetAddWakeUpPattern@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400B7530
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14006EF40 (-ndisMiniportPostAddWOLPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400B6190 (-ndisMiniportPostAddWakeUpPattern@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

void __fastcall ndisPostSetAddWakeUpPattern(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  struct _NDIS_MINIPORT_BLOCK *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  void *v7; // rbx
  __int64 v8; // rcx
  void *v9; // rcx
  void *OidContext; // rcx
  PVOID *v11; // rbx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v5 = *((_QWORD *)a1 + 2);
  if ( (*(_DWORD *)(v1 + 88) & 0xC0000) == 0 )
  {
    if ( !*((_DWORD *)a1 + 10) )
    {
      if ( v4 )
      {
        if ( v4->MajorNdisVersion <= 6u && (v4->MajorNdisVersion != 6 || v4->MinorNdisVersion < 0x14u) )
        {
          ndisMiniportPostAddWakeUpPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
          goto LABEL_14;
        }
        ndisMiniportPostAddWOLPattern(v4, (struct _NDIS_OID_REQUEST *)v1);
      }
      else
      {
        if ( !v5 )
          goto LABEL_14;
        v6 = *(_QWORD *)(v5 + 16);
        if ( *(_BYTE *)(v6 + 100) <= 6u && (*(_BYTE *)(v6 + 100) != 6 || *(_BYTE *)(v6 + 101) < 0x14u) )
          goto LABEL_14;
      }
      v7 = *(void **)(v1 + 144);
      *(_DWORD *)(v1 + 152) = *(_DWORD *)(*((_QWORD *)v7 + 3) + 148LL);
      ExFreePoolWithTag(*((PVOID *)v7 + 3), 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v7;
      *(_QWORD *)(v1 + 40) = *((_QWORD *)v7 + 1);
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v7 + 4);
      ExFreePoolWithTag(v7, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
LABEL_14:
      if ( *((_QWORD *)a1 + 3) )
      {
        v8 = *(_QWORD *)(v1 + 160);
        *(_DWORD *)(v8 + 40) = *(_DWORD *)(v1 + 152);
        *(_QWORD *)v8 = *(_QWORD *)(v3 + 496);
        *(_QWORD *)(v3 + 496) = v8;
      }
      return;
    }
    if ( v3 )
    {
      v9 = *(void **)(v1 + 160);
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
    if ( *(_QWORD *)a1 )
    {
      OidContext = v4->OidContext;
      v4->OidContext = 0LL;
      if ( OidContext )
        ExFreePoolWithTag(OidContext, 0);
    }
    v11 = *(PVOID **)(v1 + 144);
    if ( v11 )
    {
      ExFreePoolWithTag(v11[3], 0);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)v11;
      *(_QWORD *)(v1 + 40) = v11[1];
      *(_DWORD *)(v1 + 48) = *((_DWORD *)v11 + 4);
      ExFreePoolWithTag(v11, 0);
      *(_QWORD *)(v1 + 144) = 0LL;
    }
    *(_DWORD *)(v1 + 152) = 0;
  }
}
