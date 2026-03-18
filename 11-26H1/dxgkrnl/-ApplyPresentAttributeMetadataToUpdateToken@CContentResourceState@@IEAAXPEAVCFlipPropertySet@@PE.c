/*
 * XREFs of ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x140019B5C
 * Callers:
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x14001ACD0 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     <none>
 */

void __fastcall CContentResourceState::ApplyPresentAttributeMetadataToUpdateToken(
        CContentResourceState *this,
        struct CFlipPropertySet *a2,
        struct CFlipContentToken *a3)
{
  _OWORD *v4; // r9
  unsigned int i; // r10d
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int j; // r10d
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // rax

  if ( a2 )
  {
    v4 = (_OWORD *)*((_QWORD *)a2 + 3);
    for ( i = 0; i < *((_DWORD *)a2 + 3); ++i )
    {
      v6 = *((_QWORD *)a2 + 2);
      v7 = 32LL * i;
      v8 = *(_QWORD *)(v7 + v6) - *(_QWORD *)&GUID_9fc1b1de_f2fa_4c86_9eb0_b1039224a5ae.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)(v7 + v6 + 8) - *(_QWORD *)GUID_9fc1b1de_f2fa_4c86_9eb0_b1039224a5ae.Data4;
      if ( !v8 && *(_DWORD *)(v7 + v6 + 16) == 16 )
      {
        if ( v4 )
          *(_OWORD *)((char *)a3 + 136) = *v4;
        break;
      }
      v4 = (_OWORD *)((char *)v4 + *(unsigned int *)(v7 + v6 + 16));
    }
  }
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 24);
    for ( j = 0; j < *(_DWORD *)(v9 + 12); ++j )
    {
      v12 = *(_QWORD *)(v9 + 16);
      v13 = 32LL * j;
      v14 = *(_QWORD *)(v13 + v12) - *(_QWORD *)&GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data1;
      if ( !v14 )
        v14 = *(_QWORD *)(v13 + v12 + 8) - *(_QWORD *)GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data4;
      if ( !v14 && *(_DWORD *)(v13 + v12 + 16) == 72 )
      {
        if ( v10 )
        {
          *(_OWORD *)((char *)a3 + 152) = *(_OWORD *)v10;
          *(_OWORD *)((char *)a3 + 168) = *(_OWORD *)(v10 + 16);
          *(_OWORD *)((char *)a3 + 184) = *(_OWORD *)(v10 + 32);
          *(_OWORD *)((char *)a3 + 200) = *(_OWORD *)(v10 + 48);
          *((_QWORD *)a3 + 27) = *(_QWORD *)(v10 + 64);
        }
        return;
      }
      v10 += *(unsigned int *)(v13 + v12 + 16);
    }
  }
}
