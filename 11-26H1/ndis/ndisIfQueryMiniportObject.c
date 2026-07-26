/*
 * XREFs of ndisIfQueryMiniportObject @ 0x1401536D0
 * Callers:
 *     ndisIfQueryObject @ 0x140152DB0 (ndisIfQueryObject.c)
 * Callees:
 *     WPP_RECORDER_SF_DqL @ 0x14003E370 (WPP_RECORDER_SF_DqL.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ndisIfGetMiniportStatistics @ 0x140153E80 (ndisIfGetMiniportStatistics.c)
 *     ndisIfQuerySetMiniport @ 0x140154480 (ndisIfQuerySetMiniport.c)
 */

__int64 __fastcall ndisIfQueryMiniportObject(struct _NDIS_MINIPORT_BLOCK *a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v7; // rdi
  unsigned int MiniportStatistics; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_IF_BLOCK *IfBlock; // r13
  __int64 MajorNdisVersion; // r8
  __int32 ifAdminStatus; // eax
  struct _NDIS_MINIPORT_BLOCK *v18; // rcx
  int v19; // [rsp+20h] [rbp-E0h]
  _QWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v21[248]; // [rsp+50h] [rbp-B0h] BYREF

  v7 = 0LL;
  MiniportStatistics = 0;
  memset(&v21[1], 0, 0xF7uLL);
  v20[0] = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, v11, 0xFu, v19);
  memset(&v21[112], 0, 136);
  *(_QWORD *)&v21[104] = &ndisIntReqNsi;
  memset(v21, 0, 104);
  *(_DWORD *)&v21[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v21[168]);
  DriverHandle = a1->DriverHandle;
  IfBlock = a1->IfBlock;
  *(_DWORD *)v21 = 15466902;
  *(_DWORD *)&v21[32] = 0;
  *(_QWORD *)&v21[4] = 2LL;
  *(_QWORD *)&v21[40] = 0LL;
  *(_DWORD *)&v21[48] = 0;
  MajorNdisVersion = DriverHandle->MajorNdisVersion;
  if ( a2 == 66184 )
  {
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    ifAdminStatus = IfBlock->ifAdminStatus;
  }
  else if ( a2 == 66179 )
  {
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    ifAdminStatus = IfBlock->ifOperStatus;
  }
  else
  {
    if ( a2 != 65798 )
    {
      if ( a2 == 66183 )
      {
        if ( *a3 >= 0xD8u )
        {
          *a3 = 216;
          *(_DWORD *)a4 = IfBlock->ifOperStatus;
          *(_DWORD *)(a4 + 4) = IfBlock->ifOperStatusFlags;
          *(_DWORD *)(a4 + 8) = a1->MiniportMediaConnectState;
          *(_DWORD *)(a4 + 12) = a1->MiniportMediaDuplexState;
          *(_QWORD *)(a4 + 24) = a1->MiniportXmitLinkSpeed;
          *(_QWORD *)(a4 + 32) = a1->MiniportRcvLinkSpeed;
          MiniportStatistics = ndisIfGetMiniportStatistics(a1, (unsigned __int8)a4 + 64, 0LL);
          *(_DWORD *)(a4 + 16) = IfBlock->ifMtu;
          *(_BYTE *)(a4 + 20) = IfBlock->ifPromiscuousMode;
          *(_BYTE *)(a4 + 21) = IfBlock->ifDeviceWakeUpEnable;
          *(_QWORD *)(a4 + 40) = IfBlock->ifLastChange;
          *(_QWORD *)(a4 + 48) = IfBlock->ifCounterDiscontinuityTime;
          *(_QWORD *)(a4 + 56) = 0LL;
          *(_DWORD *)(a4 + 208) = IfBlock->CompartmentId;
          *(_DWORD *)(a4 + 212) = IfBlock->SupportedStatistics;
          goto LABEL_15;
        }
      }
      else
      {
        if ( a2 != 131334 )
        {
          if ( a2 <= 0x20106 )
          {
            v12 = 0x140000000uLL;
            switch ( a2 )
            {
              case 0x10280u:
                if ( !*a3 )
                  return 3221291030LL;
                *a3 = 1;
                *(_BYTE *)a4 = IfBlock->ifPromiscuousMode;
                goto LABEL_15;
              case 0x10281u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = IfBlock->ifLastChange;
                goto LABEL_15;
              case 0x10282u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = IfBlock->ifCounterDiscontinuityTime;
                goto LABEL_15;
              case 0x10284u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = a1->MiniportXmitLinkSpeed;
                goto LABEL_15;
              case 0x10285u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = a1->MiniportRcvLinkSpeed;
                goto LABEL_15;
              case 0x10286u:
                if ( *a3 < 8u )
                  return 3221291030LL;
                *a3 = 8;
                *(_QWORD *)a4 = 0LL;
                goto LABEL_15;
              case 0x1028Au:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                ifAdminStatus = a1->MiniportMediaConnectState;
                goto LABEL_14;
              case 0x1028Cu:
                if ( *a3 < 4u )
                  return 3221291030LL;
                *a3 = 4;
                ifAdminStatus = a1->MiniportMediaDuplexState;
                goto LABEL_14;
              default:
                goto LABEL_66;
            }
          }
          v12 = 0x140000000uLL;
          switch ( a2 )
          {
            case 0x20202u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131586;
              *(_DWORD *)&v21[48] = 8;
              MiniportStatistics = ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              if ( !MiniportStatistics )
                v7 = v20[0];
              *(_QWORD *)a4 = v7;
              break;
            case 0x20208u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131592;
              *(_DWORD *)&v21[48] = 8;
              MiniportStatistics = ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              if ( !MiniportStatistics )
                v7 = v20[0];
              *(_QWORD *)a4 = v7;
              break;
            case 0x20219u:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[48] = 8;
              v18 = a1;
              if ( (unsigned __int8)MajorNdisVersion >= 6u )
              {
                *(_DWORD *)&v21[32] = 131609;
                goto LABEL_50;
              }
              *(_DWORD *)&v21[32] = 131591;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 = v20[0];
              v20[0] = 0LL;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131593;
              *(_DWORD *)&v21[48] = 8;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 += v20[0];
              v20[0] = 0LL;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131595;
              *(_DWORD *)&v21[48] = 8;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 += v20[0];
              break;
            case 0x2021Au:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[48] = 8;
              v18 = a1;
              if ( (unsigned __int8)MajorNdisVersion >= 6u )
              {
                *(_DWORD *)&v21[32] = 131610;
                goto LABEL_50;
              }
              *(_DWORD *)&v21[32] = 131585;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 = v20[0];
              v20[0] = 0LL;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131587;
              *(_DWORD *)&v21[48] = 8;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 += v20[0];
              v20[0] = 0LL;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[32] = 131589;
              *(_DWORD *)&v21[48] = 8;
              ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              *(_QWORD *)a4 += v20[0];
              break;
            case 0x2021Bu:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)&v21[40] = v20;
              *(_DWORD *)&v21[48] = 8;
              v18 = a1;
              if ( (unsigned __int8)MajorNdisVersion < 6u )
              {
                *(_DWORD *)&v21[32] = 131332;
                ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
                *(_QWORD *)a4 = v20[0];
                v20[0] = 0LL;
                *(_QWORD *)&v21[40] = v20;
                *(_DWORD *)&v21[32] = 131333;
                *(_DWORD *)&v21[48] = 8;
                ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
                *(_QWORD *)a4 += v20[0];
              }
              else
              {
                *(_DWORD *)&v21[32] = 131611;
LABEL_50:
                ndisIfQuerySetMiniport(v18, (struct _NDIS_OID_REQUEST *)v21, 0LL);
                *(_QWORD *)a4 = v20[0];
              }
              break;
            case 0x2021Cu:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              if ( (unsigned __int8)MajorNdisVersion < 6u )
              {
                *(_QWORD *)a4 = 0LL;
              }
              else
              {
                *(_DWORD *)&v21[32] = 131612;
                *(_QWORD *)&v21[40] = v20;
                *(_DWORD *)&v21[48] = 8;
                MiniportStatistics = ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
                *(_QWORD *)a4 = v20[0];
              }
              break;
            default:
LABEL_66:
              if ( *a3 < 8u )
                return 3221291030LL;
              *a3 = 8;
              *(_QWORD *)a4 = 0LL;
              *(_DWORD *)&v21[32] = a2;
              *(_QWORD *)&v21[40] = a4;
              *(_DWORD *)&v21[48] = 8;
              MiniportStatistics = ndisIfQuerySetMiniport(a1, (struct _NDIS_OID_REQUEST *)v21, 0LL);
              break;
          }
          goto LABEL_15;
        }
        if ( *a3 >= 0x90u )
        {
          *a3 = 144;
          MiniportStatistics = ndisIfGetMiniportStatistics(a1, a4, 0LL);
          goto LABEL_15;
        }
      }
      return 3221291030LL;
    }
    if ( *a3 < 4u )
      return 3221291030LL;
    *a3 = 4;
    ifAdminStatus = IfBlock->ifMtu;
  }
LABEL_14:
  *(_DWORD *)a4 = ifAdminStatus;
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqL(*((_QWORD *)WPP_GLOBAL_Control + 8), v12, MajorNdisVersion, 0x10u, v19);
  return MiniportStatistics;
}
