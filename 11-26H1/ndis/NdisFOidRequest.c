/*
 * XREFs of NdisFOidRequest @ 0x14000F320
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x14000E8F0 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     WPP_RECORDER_SF_qDd @ 0x14000EB10 (WPP_RECORDER_SF_qDd.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x14000F6A0 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qql @ 0x140023560 (WPP_RECORDER_SF_qql_ea_140023560.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisFOidRequest(NDIS_HANDLE NdisFilterHandle, PNDIS_OID_REQUEST OidRequest)
{
  int v2; // r8d
  PNDIS_OID_REQUEST v3; // rbx
  NDIS_STATUS v5; // esi
  NDIS_OID Oid; // r14d
  __int64 v7; // rcx
  NDIS_STATUS v8; // eax
  NDIS_OID v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  char v13; // [rsp+30h] [rbp-D8h]
  char v14; // [rsp+30h] [rbp-D8h]
  char v15; // [rsp+30h] [rbp-D8h]
  char v16[8]; // [rsp+38h] [rbp-D0h]
  char v17[4]; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+48h] [rbp-C0h]
  _QWORD v20[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+70h] [rbp-98h]
  __int128 v22; // [rsp+80h] [rbp-88h]
  int *v23; // [rsp+90h] [rbp-78h]
  __int64 v24; // [rsp+98h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-68h]
  __int128 v26; // [rsp+B0h] [rbp-58h]
  __int128 v27; // [rsp+C0h] [rbp-48h]

  v3 = OidRequest;
  v5 = -1073741823;
  if ( OidRequest->Header.Type == 0x96 && OidRequest->Header.Size >= 0xECu )
  {
    if ( OidRequest->Header.Revision )
    {
      Oid = OidRequest->DATA.QUERY_INFORMATION.Oid;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v17 = OidRequest->DATA.QUERY_INFORMATION.Oid;
        v15 = (char)OidRequest;
        LOBYTE(OidRequest) = 4;
        WPP_RECORDER_SF_qql(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          61,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)NdisFilterHandle,
          v15,
          v17[0]);
      }
      if ( (*(_DWORD *)(*((_QWORD *)NdisFilterHandle + 4) + 3688LL) & 0x400) == 0 )
        v3->SupportedRevision = 1;
      if ( *(_QWORD *)(*((_QWORD *)NdisFilterHandle + 2) + 256LL) && Oid - 65798 > 1 && Oid != 65812 )
      {
        if ( v3->RequestType == NdisRequestSetInformation && v3->DATA.QUERY_INFORMATION.Oid == 66058 )
        {
          if ( v3->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
          {
            v11 = *((_QWORD *)NdisFilterHandle + 4);
            v18 = *(_DWORD *)v3->DATA.QUERY_INFORMATION.InformationBuffer;
            v23 = &v18;
            v21 = 0LL;
            v20[0] = 7340440LL;
            v22 = 0LL;
            v20[1] = v11;
            v25 = 0LL;
            DWORD1(v21) = 1073807384;
            v26 = 0LL;
            v24 = 4LL;
            v27 = 0LL;
            v12 = (__int64)*(int *)(*(_QWORD *)(v11 + 3760) + 896LL) << 7;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))((char *)g_MiniportHookDrivers + v12 + 64))(
              *(_QWORD *)((char *)g_MiniportHookDrivers + v12 + 24),
              *(_QWORD *)(v11 + 5288),
              v11,
              v20);
            v5 = 0;
          }
          else
          {
            v5 = -1073676267;
          }
        }
        else
        {
          *(_DWORD *)&v3->NdisReserved[16] |= 0x40u;
          *(_QWORD *)&v3->NdisReserved[32] = NdisFilterHandle;
          v7 = *(_QWORD *)&v3->NdisReserved[96];
          v19 = 0LL;
          if ( !v7 )
            v7 = *(_QWORD *)&v3->NdisReserved[104] - *((_QWORD *)&v19 + 1);
          if ( !v7 )
            EtwActivityIdControl(3u, (LPGUID)&v3->NdisReserved[96]);
          if ( v3->RequestType != NdisRequestSetInformation
            || (*(_DWORD *)&v3->NdisReserved[16] & 0x4000) != 0
            || (v10 = v3->DATA.QUERY_INFORMATION.Oid, v10 != -50265846)
            && (((v10 + 50265845) & 0xFFFFFFF9) != 0 || v10 == -50265839) )
          {
            v8 = ndisQueueOidRequest(
                   v3,
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   0LL);
          }
          else
          {
            v8 = ndisOidPMAddRemove(
                   *((struct _NDIS_MINIPORT_BLOCK **)NdisFilterHandle + 4),
                   (struct _NDIS_FILTER_BLOCK *)NdisFilterHandle,
                   v3);
          }
          v5 = v8;
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v16 = v5;
        WPP_RECORDER_SF_qDd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          v2,
          0x3Eu,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)v3,
          Oid,
          *(_QWORD *)v16);
      }
      return v5;
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = (char)OidRequest;
        LOBYTE(OidRequest) = 2;
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequest,
          11,
          60,
          (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
          (char)NdisFilterHandle,
          v14);
      }
      return -1071448020;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = (char)OidRequest;
      LOBYTE(OidRequest) = 2;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequest,
        11,
        59,
        (struct _GUID *)&WPP_29d650c5fa923da2a1403c5f25a6731c_Traceguids,
        (char)NdisFilterHandle,
        v13);
    }
    return -1073741811;
  }
}
