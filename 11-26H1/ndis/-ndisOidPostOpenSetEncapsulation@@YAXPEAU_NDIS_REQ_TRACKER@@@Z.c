/*
 * XREFs of ?ndisOidPostOpenSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD928
 * Callers:
 *     ?ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BD800 (-ndisOidPostOffloadEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall ndisOidPostOpenSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)a1 + 4);
  v3 = *((_QWORD *)a1 + 3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xACu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      *(_QWORD *)(v3 + 16),
      v1,
      v3);
  v4 = *(_QWORD *)(v3 + 696);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 64) )
    {
      if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v1 + 52) == *(_DWORD *)(v1 + 48) )
        *(_DWORD *)(v1 + 52) = *(_DWORD *)(v4 + 80);
      *(_DWORD *)(v1 + 32) = *(_DWORD *)(v4 + 64);
      v5 = *(_QWORD *)(v4 + 72);
      *(_DWORD *)(v4 + 64) = 0;
      *(_QWORD *)(v1 + 40) = v5;
      LODWORD(v5) = *(_DWORD *)(v4 + 80);
      *(_QWORD *)(v4 + 72) = 0LL;
      *(_DWORD *)(v1 + 48) = v5;
      *(_DWORD *)(v4 + 80) = 0;
    }
    if ( !*((_DWORD *)a1 + 10) )
    {
      v6 = *(_QWORD *)(v1 + 40);
      *(_OWORD *)v4 = *(_OWORD *)v6;
      *(_QWORD *)(v4 + 16) = *(_QWORD *)(v6 + 16);
      *(_DWORD *)(v4 + 24) = *(_DWORD *)(v6 + 24);
      *(_BYTE *)(v4 + 28) = 1;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xADu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      v3,
      v1);
}
