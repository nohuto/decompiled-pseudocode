/*
 * XREFs of ?ndisOidPostMaxLookahead@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400643B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 */

void __fastcall ndisOidPostMaxLookahead(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  int v4; // eax

  v1 = *((_QWORD *)a1 + 4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x2Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      *(_QWORD *)a1,
      v1);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 )
  {
    v4 = *(_DWORD *)(v1 + 4);
    if ( !v4 || v4 == 2 )
    {
      *((_DWORD *)a1 + 10) = 0;
      if ( *(_DWORD *)(v1 + 48) < 4u )
      {
        *(_DWORD *)(v1 + 56) = 4;
        *((_DWORD *)a1 + 10) = -1073676268;
      }
      else
      {
        *(_DWORD *)(v3 + 596) = **(_DWORD **)(v1 + 40);
        *(_DWORD *)(v1 + 52) = 4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x30u,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      *(_QWORD *)a1,
      v1);
}
