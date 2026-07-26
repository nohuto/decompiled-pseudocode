/*
 * XREFs of ndisQueryGuidData @ 0x14000C100
 * Callers:
 *     ?ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_INSTANCE@@KPEAK@Z @ 0x14000B530 (-ndisWmiQuerySingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAUtagWNODE_SINGLE_IN.c)
 *     ?ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_DATA@@KPEAK@Z @ 0x140019210 (-ndisWmiQueryAllData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@PEAU_GUID@@PEAUtagWNODE_ALL_D.c)
 * Callees:
 *     ?ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14000C5A0 (-ndisIsRssEnabledForMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qqL @ 0x14000D540 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x14000D630 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x140047900 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     ?ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILITIES@@@Z @ 0x140079410 (-ndisWmiQueryPMActiveCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WMI_PM_ACTIVE_CAPABILI.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 *     ?ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@@@Z @ 0x140143564 (-ndisNDKWmiGetAdapterCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_WMI_NDK_CAPABILITIES@.c)
 *     ?ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14016A9B0 (-ndisNDKCheckIfEnabledOnMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisQueryGuidData(
        struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *a1,
        unsigned int a2,
        __int64 a3,
        struct _NDIS_GUID *a4,
        struct _NDIS_CO_VC_PTR_BLOCK *a5,
        struct _GUID *a6,
        struct _NDIS_MINIPORT_BLOCK *a7)
{
  char v8; // r15
  size_t v10; // rsi
  struct _NDIS_GUID *v11; // rdi
  unsigned int Flags; // eax
  NTSTATUS v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int16 v23; // ax
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *p_Size; // r12
  __int64 v29; // rax
  struct _NDIS_MINIPORT_BLOCK *v30; // rcx
  unsigned int SetMiniport; // eax
  unsigned int v32; // r15d
  bool v33; // zf
  unsigned int v34; // eax
  wchar_t *Buffer; // rdx
  size_t Length; // r8
  struct _NDIS_GUID *v37; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-B0h] BYREF
  struct _NDIS_CO_VC_PTR_BLOCK *v39; // [rsp+60h] [rbp-A0h]
  __int128 v40; // [rsp+68h] [rbp-98h]
  _STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v42[248]; // [rsp+90h] [rbp-70h] BYREF

  v8 = (char)a7;
  v10 = a2;
  v39 = a5;
  v11 = a4;
  v37 = a4;
  memset(v42, 0, sizeof(v42));
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      18,
      30,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a3,
      (char)a7);
  }
  if ( !(_DWORD)v10 )
  {
    v13 = 0;
    goto LABEL_31;
  }
  memset(a1, 0, v10);
  if ( !v11 )
  {
    ndisWmiGetGuid(&v37, (struct _NDIS_MINIPORT_BLOCK *)a3, a6, 0);
    v11 = v37;
    if ( !v37 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          a2,
          18,
          31,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          a3);
      }
      v13 = -1073741811;
      goto LABEL_31;
    }
  }
  Flags = v11->Flags;
  if ( (Flags & 0x20000000) != 0 )
  {
    v13 = 0;
    v14 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTER.Data1 )
      v14 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTER.Data4;
    if ( !v14 )
    {
      *(_WORD *)&a1->Header.Type = *(_WORD *)(a3 + 3808);
      memmove(&a1->Header.Size, *(const void **)(a3 + 3816), *(unsigned __int16 *)(a3 + 3808));
      goto LABEL_31;
    }
    v15 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data1 )
      v15 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_ADAPTERS_EX.Data4;
    if ( !v15 )
    {
      *((_QWORD *)&v40 + 1) = *(_QWORD *)(a3 + 4024);
      DWORD1(v40) = *(_DWORD *)(a3 + 4056);
      v23 = *(_WORD *)(a3 + 3808);
      LODWORD(v40) = 1573124;
      *(_OWORD *)&a1->Header.Type = v40;
      LOWORD(a1->PMARPOffload) = v23;
      memmove((char *)&a1->PMARPOffload + 2, *(const void **)(a3 + 3816), *(unsigned __int16 *)(a3 + 3808));
      goto LABEL_31;
    }
    v16 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
      v16 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
    if ( v16 )
    {
      v17 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
      if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
        v17 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
      if ( v17 )
      {
        v18 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
        if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
          v18 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
        if ( v18 )
        {
          v19 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1;
          if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ADMIN_CONFIG.Data1 )
            v19 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ADMIN_CONFIG.Data4;
          if ( v19 )
          {
            v20 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1;
            if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data1 )
              v20 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_PM_ACTIVE_CAPABILITIES.Data4;
            if ( v20 )
            {
              v21 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1;
              if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_RSS_ENABLED.Data1 )
                v21 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_RSS_ENABLED.Data4;
              if ( v21 )
              {
                v24 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1;
                if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_STATE.Data1 )
                  v24 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_STATE.Data4;
                if ( v24 )
                {
                  v27 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1;
                  if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_NDK_CAPABILITIES.Data1 )
                    v27 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_NDK_CAPABILITIES.Data4;
                  if ( v27 )
                  {
                    if ( !a5 )
                      goto LABEL_72;
                    v29 = *(_QWORD *)&v11->Guid.Data1 - *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1;
                    if ( *(_QWORD *)&v11->Guid.Data1 == *(_QWORD *)&GUID_NDIS_ENUMERATE_VC.Data1 )
                      v29 = *(_QWORD *)v11->Guid.Data4 - *(_QWORD *)GUID_NDIS_ENUMERATE_VC.Data4;
                    if ( v29 )
LABEL_72:
                      v13 = -1073741811;
                  }
                  else
                  {
                    ndisNDKWmiGetAdapterCapabilities(
                      (struct _NDIS_MINIPORT_BLOCK *)a3,
                      v10,
                      (struct _NDIS_WMI_NDK_CAPABILITIES *)a1);
                  }
                }
                else
                {
                  a1->Header.Type = ndisNDKCheckIfEnabledOnMiniport((struct _NDIS_MINIPORT_BLOCK *)a3);
                }
              }
              else
              {
                a1->Header.Type = ndisIsRssEnabledForMiniport((struct _NDIS_MINIPORT_BLOCK *)a3);
              }
            }
            else
            {
              ndisWmiQueryPMActiveCapabilities((struct _NDIS_MINIPORT_BLOCK *)a3, a1);
            }
          }
          else
          {
            a1->Header = (NDIS_OBJECT_HEADER)1835392;
            a1->WakeOnPattern = *(_DWORD *)(a3 + 3912) & 3;
            a1->WakeOnMagicPacket = (*(_DWORD *)(a3 + 3912) >> 2) & 3;
            a1->DeviceSleepOnDisconnect = (*(_DWORD *)(a3 + 3912) >> 4) & 3;
            a1->PMARPOffload = (*(_DWORD *)(a3 + 3912) >> 6) & 3;
            a1->PMNSOffload = (*(_DWORD *)(a3 + 3912) >> 8) & 3;
            a1->PMWiFiRekeyOffload = (*(_DWORD *)(a3 + 3912) >> 10) & 3;
          }
          goto LABEL_31;
        }
        if ( (*(_DWORD *)(a3 + 124) & 0x4000001) == 0x4000001 )
        {
          v26 = *(_DWORD *)(a3 + 1040);
          if ( v26 == 2 || (unsigned int)(v26 - 3) <= 1 )
          {
            a1->Header.Type = BYTE1(*(_DWORD *)(a3 + 3864)) & 1;
            goto LABEL_31;
          }
        }
      }
      else
      {
        v25 = *(_DWORD *)(a3 + 124);
        if ( (v25 & 0x4000001) == 0x4000001 && !*(_QWORD *)(a3 + 4456) )
        {
          a1->Header.Type = (v25 & 0x40) != 0;
          goto LABEL_31;
        }
      }
    }
    else if ( (*(_DWORD *)(a3 + 124) & 0x8001) == 1 && !*(_QWORD *)(a3 + 4456) )
    {
      a1->Header.Type = (*(_DWORD *)(a3 + 3864) & 8) == 0;
      goto LABEL_31;
    }
LABEL_36:
    v13 = -1073741808;
    goto LABEL_31;
  }
  if ( (Flags & 0x80u) != 0 )
  {
    v13 = 0;
    goto LABEL_31;
  }
  if ( (Flags & 1) == 0 )
    goto LABEL_36;
  if ( (Flags & 0x10) == 0 )
  {
    if ( (Flags & 4) != 0 )
    {
      LODWORD(v10) = ((unsigned int)(v10 - 2) >> 1) + 1;
    }
    else
    {
      if ( (Flags & 8) == 0 )
      {
        p_Size = a1;
        goto LABEL_79;
      }
      LODWORD(v10) = v10 - 2;
    }
    p_Size = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->Header.Size;
    goto LABEL_79;
  }
  LODWORD(v10) = v10 - 4;
  p_Size = (struct _NDIS_WMI_PM_ACTIVE_CAPABILITIES *)&a1->WakeOnPattern;
LABEL_79:
  memset(&v42[112], 0, 136);
  *(_QWORD *)&v42[104] = &ndisIntReqWmi;
  memset(v42, 0, 104);
  *(_DWORD *)&v42[88] = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8)) | 8;
  EtwActivityIdControl(3u, (LPGUID)&v42[168]);
  v13 = 0;
  *(_DWORD *)v42 = 15466902;
  *(_DWORD *)&v42[32] = v11->Oid;
  *(_QWORD *)&v42[4] = 2LL;
  *(_QWORD *)&v42[40] = p_Size;
  *(_DWORD *)&v42[48] = v10;
  if ( v39 || (v30 = a7) == 0LL )
    v30 = (struct _NDIS_MINIPORT_BLOCK *)a3;
  SetMiniport = ndisQuerySetMiniport(v30, v39, (struct _NDIS_OID_REQUEST *)v42, 0, 0LL);
  v32 = SetMiniport;
  if ( SetMiniport )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        18,
        32,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a7,
        SetMiniport);
    }
    if ( (v11->Flags & 0x200) != 0 )
    {
      if ( (v32 & 0xC0010000) == 0xC0010000 )
        v32 = (unsigned __int16)v32 | 0xC0230000;
      goto LABEL_88;
    }
    if ( v32 == 259
      || v32 == -2147483643
      || (v13 = -1073741823, v32 == -1073741823)
      || v32 == -1073741670
      || v32 == -1073741637 )
    {
LABEL_88:
      v13 = v32;
      v8 = (char)a7;
      goto LABEL_31;
    }
    if ( v32 == -1073676266 )
    {
      v8 = (char)a7;
      v13 = -1073741789;
    }
    else if ( v32 == -1073676268 )
    {
      v8 = (char)a7;
      v13 = -1073741306;
    }
    else
    {
      v33 = v32 == -1073676267;
      v8 = (char)a7;
      if ( v33 )
        v13 = -1073741811;
    }
  }
  else
  {
    v34 = v11->Flags;
    if ( (v34 & 0x10) != 0 )
    {
      a2 = (unsigned int)v10 % v11->Size;
      a1->Header = (NDIS_OBJECT_HEADER)((unsigned int)v10 / v11->Size);
    }
    else if ( (v34 & 8) != 0 )
    {
      *(_WORD *)&a1->Header.Type = v10;
    }
    else if ( (v34 & 4) != 0 )
    {
      RtlInitAnsiString(&DestinationString, (PCSZ)p_Size);
      v13 = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( v13 >= 0 )
      {
        Buffer = UnicodeString.Buffer;
        Length = UnicodeString.Length;
        *(_WORD *)&a1->Header.Type = UnicodeString.Length;
        memmove(p_Size, Buffer, Length);
        RtlFreeUnicodeString(&UnicodeString);
      }
    }
    v8 = (char)a7;
  }
LABEL_31:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      18,
      33,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      a3,
      v8,
      v13);
  }
  return (unsigned int)v13;
}
