/*
 * XREFs of ?ndisOidPreEnumeratePorts@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400BDEF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z @ 0x1400AA9B8 (-ndisEnumeratePorts@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT_ARRAY@@KPEAI2@Z.c)
 */

char __fastcall ndisOidPreEnumeratePorts(struct _NDIS_MINIPORT_BLOCK **a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rbp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  char v4; // bl
  int v5; // eax
  int v6; // eax
  char v8[4]; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v3 = a1[4];
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Eu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      v3);
  if ( *a1 )
  {
    v5 = *((_DWORD *)&v3->Header + 1);
    if ( !v5 || v5 == 2 )
      v6 = ndisEnumeratePorts(
             v1,
             (struct _NDIS_PORT_ARRAY *)v3->Reserved4.Buffer,
             v3->PcwDatapathEventMask,
             (unsigned int *)&v3->Reserved28 + 1,
             (unsigned int *)&v3->OpenQueue);
    else
      v6 = -1073676265;
    *((_DWORD *)a1 + 10) = v6;
    v4 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = *((_DWORD *)a1 + 10);
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0x9Fu,
      (struct _GUID *)&WPP_40f420ec2e343311b7b49d00b668bf14_Traceguids,
      (char)v1,
      (char)v3,
      *(_DWORD *)v8);
  }
  return v4;
}
