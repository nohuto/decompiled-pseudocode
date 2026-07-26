/*
 * XREFs of ndisWmiRegister @ 0x140018C20
 * Callers:
 *     ndisWMIDispatch @ 0x140017150 (ndisWMIDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140017020 (WPP_RECORDER_SF_qL.c)
 *     ndisQuerySupportedGuidToOidList @ 0x140083C30 (ndisQuerySupportedGuidToOidList.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisWmiRegister(
        struct _NDIS_MINIPORT_BLOCK *a1,
        __int64 a2,
        int *a3,
        unsigned int a4,
        unsigned int *a5)
{
  unsigned int v5; // edi
  int v7; // r14d
  const void **v8; // r15
  __int64 v9; // rbp
  int cCustomGuidMap; // edx
  int v14; // r8d
  unsigned int v15; // r13d
  unsigned int v16; // ebp
  unsigned int v17; // eax
  int v18; // edx
  bool v19; // cf
  int *v20; // r12
  int *v21; // rdx
  _NDIS_GUID *pNdisGuidMap; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _GUID v27; // xmm0
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _UNICODE_STRING *p_ServiceRegPath; // rax
  _GUID *v31; // rbx
  unsigned int v32; // ecx
  _NDIS_GUID *i; // rdx
  _GUID Guid; // xmm0
  char *v35; // rbx
  char *v36; // rcx
  int v38; // [rsp+90h] [rbp+28h]

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      18,
      21,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1);
  }
  *a5 = 0;
  if ( v9 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a2,
        18,
        24,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    v5 = -1073741811;
  }
  else if ( a1->pNdisGuidMap || !(unsigned int)ndisQuerySupportedGuidToOidList(a1) )
  {
    cCustomGuidMap = a1->cCustomGuidMap;
    if ( (_WORD)cCustomGuidMap )
    {
      DriverHandle = a1->DriverHandle;
      v14 = a1->cCustomGuidMap;
      NdisDriverInfo = DriverHandle->NdisDriverInfo;
      p_ServiceRegPath = &DriverHandle->ServiceRegPath;
      v8 = (const void **)&NdisDriverInfo->ServiceRegPath;
      if ( !NdisDriverInfo )
        v8 = (const void **)p_ServiceRegPath;
      v7 = 32 * cCustomGuidMap + 58 + *(unsigned __int16 *)v8;
    }
    else
    {
      v14 = 0;
    }
    v15 = a1->cNdisGuidMap - v14;
    v16 = (v7 + 7) & 0xFFFFFFF8;
    v38 = 32 * v15 + 24;
    v17 = v16 + v38;
    if ( v16 + v38 >= v16 )
    {
      v19 = a4 < v17;
      v20 = a3;
      if ( v19 )
      {
        *a3 = v17;
        v5 = -1073741789;
        *a5 = 4;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v5;
        LOBYTE(cCustomGuidMap) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          cCustomGuidMap,
          18,
          23,
          (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
          (char)a1);
      }
      else
      {
        *a5 = v17;
        memset(a3, 0, v17);
        if ( v16 && v8 )
        {
          *a3 = v7;
          v31 = (_GUID *)(a3 + 6);
          a3[1] = v16;
          v32 = 0;
          a3[4] = a1->cCustomGuidMap;
          for ( i = a1->pCustomGuidMap; v32 < a1->cCustomGuidMap; v31 += 2 )
          {
            Guid = i->Guid;
            ++v32;
            ++i;
            *v31 = Guid;
          }
          a3[2] = (_DWORD)v31 - (_DWORD)a3;
          LOWORD(v31->Data1) = *(_WORD *)v8;
          v35 = (char *)&v31->Data1 + 2;
          memmove(v35, v8[1], *(unsigned __int16 *)v8);
          v36 = &v35[*(unsigned __int16 *)v8];
          a3[3] = (_DWORD)v35 + *(unsigned __int16 *)v8 - (_DWORD)a3;
          *(_WORD *)v36 = 30;
          *(_OWORD *)(v36 + 2) = *(_OWORD *)L"NdisMofResource";
          *(_QWORD *)(v36 + 18) = *(_QWORD *)L"esource";
          *(_DWORD *)(v36 + 26) = *(_DWORD *)L"rce";
          *((_WORD *)v36 + 15) = aNdismofresourc[14];
          v20 = (int *)((char *)a3 + (unsigned int)a3[1]);
        }
        v21 = v20 + 6;
        *v20 = v38;
        v20[1] = 0;
        v20[4] = v15;
        pNdisGuidMap = a1->pNdisGuidMap;
        if ( v15 )
        {
          v23 = v15;
          do
          {
            v24 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1;
            if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_ENABLE.Data1 )
              v24 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_ENABLE.Data4;
            if ( !v24 )
              goto LABEL_34;
            v25 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1;
            if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_POWER_DEVICE_WAKE_ENABLE.Data1 )
              v25 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_POWER_DEVICE_WAKE_ENABLE.Data4;
            if ( !v25 )
              goto LABEL_34;
            v26 = *(_QWORD *)&pNdisGuidMap->Guid.Data1 - *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1;
            if ( *(_QWORD *)&pNdisGuidMap->Guid.Data1 == *(_QWORD *)&GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data1 )
              v26 = *(_QWORD *)pNdisGuidMap->Guid.Data4 - *(_QWORD *)GUID_NDIS_WAKE_ON_MAGIC_PACKET_ONLY.Data4;
            if ( !v26 )
            {
LABEL_34:
              *((_QWORD *)v21 + 3) = a1->PhysicalDeviceObject;
              v21[4] = 32;
              v21[5] = 1;
            }
            v27 = pNdisGuidMap->Guid;
            ++pNdisGuidMap;
            *(_GUID *)v21 = v27;
            v21 += 8;
            --v23;
          }
          while ( v23 );
        }
        *((_QWORD *)v20 + 1) = 0LL;
      }
    }
    else
    {
      v5 = -1073741823;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v18,
        18,
        22,
        (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
        (char)a1);
    }
    v5 = -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x19u,
      (struct _GUID *)&WPP_016ec685c1db3aefc7ddcf22ff746e69_Traceguids,
      (char)a1,
      v5);
  return v5;
}
