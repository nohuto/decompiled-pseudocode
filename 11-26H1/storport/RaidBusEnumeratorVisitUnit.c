/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x140009CE4
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x14006BF20 (RaidAdapterTargetedRescan.c)
 *     RaidUpdateUnitIdentityWorkRoutine @ 0x1400AA530 (RaidUpdateUnitIdentityWorkRoutine.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorGetUnit @ 0x14000C0F0 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140015330 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x140033D50 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidRemoveTrailingBlanks @ 0x14003C21C (RaidRemoveTrailingBlanks.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1400518A4 (RaidBusEnumeratorProcessBusUnit.c)
 *     WPP_SF_d @ 0x14005C17C (WPP_SF_d.c)
 *     WPP_SF_DDD @ 0x14006F394 (WPP_SF_DDD.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 *a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 Pool; // rax
  int v14; // r8d
  unsigned int v15; // r8d
  char v16; // cl
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // eax
  __int64 v28; // rax
  unsigned int v29; // ecx
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r8
  unsigned int v33; // eax
  char v34; // [rsp+28h] [rbp-D8h]
  char v35; // [rsp+28h] [rbp-D8h]
  char v36; // [rsp+28h] [rbp-D8h]
  _BYTE v37[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v38; // [rsp+38h] [rbp-C8h]
  _BYTE *v39; // [rsp+50h] [rbp-B0h]
  __int16 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+90h] [rbp-70h] BYREF
  __int128 v43; // [rsp+98h] [rbp-68h]
  _OWORD v44[6]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+118h] [rbp+18h]
  _QWORD *v47; // [rsp+120h] [rbp+20h]

  memset_0(v37, 0, 0x60uLL);
  result = RaidBusEnumeratorGetUnit(a1, a2, v37);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    v34 = v37[6];
    WPP_SF_DDD(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids,
      v37[4],
      v37[5]);
  }
  v5 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumInquiryCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v37,
         36,
         v34);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xEu)
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_099b8bfd8da73aea6330dc948200d181_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 < 0 )
    goto LABEL_65;
  v6 = RaidBusEnumeratorGenericInquiry(
         (unsigned int)&RaidEnumSupportedPagesCallback,
         (_DWORD)a1,
         a2,
         (unsigned int)v37,
         255,
         v35);
  v5 = v6;
  if ( v6 != -1073741801 && v6 != -1073741670 )
  {
    if ( (v37[0] & 1) == 0
      || (v7 = RaidBusEnumeratorGenericInquiry(
                 (unsigned int)&RaidEnumDeviceIdCallback,
                 (_DWORD)a1,
                 a2,
                 (unsigned int)v37,
                 255,
                 v36),
          v5 = v7,
          v7 != -1073741801)
      && v7 != -1073741670 )
    {
      if ( (v37[0] & 2) == 0
        || (v8 = RaidBusEnumeratorGenericInquiry(
                   (unsigned int)&RaidEnumSerialNumber,
                   (_DWORD)a1,
                   a2,
                   (unsigned int)v37,
                   255,
                   v36),
            v5 = v8,
            v8 != -1073741801)
        && v8 != -1073741670 )
      {
        if ( !DisableIEEE1667 && ((*v39 & 0x1F) == 0 || (*v39 & 0x1F) == 0x14) )
        {
          v9 = (unsigned __int8)v39[4];
          if ( (unsigned __int8)v9 >= 0x37u )
          {
            v10 = v9 + 5;
            if ( (unsigned __int64)(v9 + 5) > 0xFF )
              v10 = 255;
            RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumInquiry1667Callback,
              (_DWORD)a1,
              a2,
              (unsigned int)v37,
              v10,
              v36);
          }
        }
        if ( (v37[0] & 4) != 0 )
        {
          RaidBusEnumeratorGenericInquiry(
            (unsigned int)&RaidEnumAtaInformation,
            (_DWORD)a1,
            a2,
            (unsigned int)v37,
            572,
            v36);
LABEL_36:
          v16 = *v39 & 0x1F;
          if ( v16 == 20 )
          {
            v40 |= 2u;
          }
          else if ( !v16 && (v37[0] & 0x18) == 0x18 )
          {
            RaidBusEnumeratorGenericInquiry(
              (unsigned int)&RaidEnumBlockDeviceCharacteristics,
              (_DWORD)a1,
              a2,
              (unsigned int)v37,
              64,
              v36);
          }
          if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( v38 )
            {
              if ( NvmeIceList != &NvmeIceList )
              {
                if ( (unsigned __int8)RaidIsUnitControlSupported(v38, 16LL) )
                {
                  v17 = *a1;
                  v42 = 24LL;
                  v43 = (unsigned __int64)(v38 + 12);
                  v5 = RaCallMiniportUnitControl(v17 + 376, 16LL, &v42);
                  if ( v5 >= 0 )
                  {
                    v18 = *((_QWORD *)&v43 + 1);
                    v38[451] = *((_QWORD *)&v43 + 1);
                    if ( v18 )
                    {
                      v19 = *(_QWORD *)(v18 + 104);
                      if ( v19 )
                      {
                        v20 = v38[1];
                        if ( v20 )
                        {
                          v21 = *(unsigned __int8 *)(v19 + 5);
                          if ( v21 > *(_DWORD *)(v20 + 152) )
                            *(_DWORD *)(v20 + 152) = v21;
                          v22 = *(unsigned __int8 *)(*(_QWORD *)(v18 + 104) + 5LL);
                          v23 = v38[3];
                          if ( v22 > *(_DWORD *)(v23 + 432) )
                            *(_DWORD *)(v23 + 432) = v22;
                        }
                      }
                      v24 = *(_QWORD *)(v18 + 104);
                      if ( v24 )
                      {
                        v25 = *(_DWORD *)(v24 + 8);
                        if ( v25 )
                        {
                          v26 = v38[3];
                          v27 = *(_DWORD *)(v26 + 408);
                          if ( v27 >= v25 )
                            v27 = v25;
                          *(_DWORD *)(v26 + 408) = v27;
                        }
                      }
                      v28 = *(_QWORD *)(v18 + 104);
                      if ( v28 )
                      {
                        v29 = *(unsigned __int16 *)(v28 + 6);
                        if ( (_WORD)v29 )
                        {
                          v30 = v38[3];
                          v31 = *(_DWORD *)(v30 + 588);
                          if ( v31 >= v29 )
                            v31 = v29;
                          *(_DWORD *)(v30 + 588) = v31;
                          v32 = v38[3];
                          v33 = *(_DWORD *)(v32 + 592);
                          if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)(v18 + 104) + 6LL) )
                            v33 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 104) + 6LL);
                          *(_DWORD *)(v32 + 592) = v33;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_65:
          RaidBusEnumeratorProcessBusUnit(a1, v37);
          goto LABEL_66;
        }
        if ( !v38 || !(unsigned __int8)RaidIsUnitControlSupported(v38, 11LL) )
          goto LABEL_36;
        memset_0((char *)v44 + 8, 0, 0x68uLL);
        v11 = *a1 + 376;
        v47 = v38 + 12;
        *(_QWORD *)&v44[0] = 0x7800000002LL;
        v5 = RaCallMiniportUnitControl(v11, 11LL, v44);
        if ( v5 < 0 )
        {
          v12 = *a1 + 376;
          *(_QWORD *)&v44[0] = 0x6C00000001LL;
          v5 = RaCallMiniportUnitControl(v12, 11LL, v44);
          if ( v5 < 0 )
          {
            v5 = 0;
            goto LABEL_36;
          }
        }
        Pool = RaidAllocatePool(64LL, 108LL, 842096978LL, *(_QWORD *)(*a1 + 8));
        v41 = Pool;
        if ( Pool )
        {
          *(_OWORD *)Pool = v44[0];
          *(_OWORD *)(Pool + 16) = v44[1];
          *(_OWORD *)(Pool + 32) = v44[2];
          *(_OWORD *)(Pool + 48) = v44[3];
          *(_OWORD *)(Pool + 64) = v44[4];
          *(_OWORD *)(Pool + 80) = v44[5];
          *(_QWORD *)(Pool + 96) = v45;
          *(_DWORD *)(Pool + 104) = v46;
          RaidRemoveTrailingBlanks(v41 + 8, 17LL);
          RaidRemoveTrailingBlanks(v41 + 25, (unsigned int)(v14 + 48));
          RaidRemoveTrailingBlanks(v41 + 90, v15);
          goto LABEL_36;
        }
        v5 = -1073741801;
      }
    }
  }
LABEL_66:
  RaidBusEnumeratorReleaseUnit(a1, v37);
  if ( v5 != -1073741801 && v5 != -1073741670 )
    return 0;
  return (unsigned int)v5;
}
