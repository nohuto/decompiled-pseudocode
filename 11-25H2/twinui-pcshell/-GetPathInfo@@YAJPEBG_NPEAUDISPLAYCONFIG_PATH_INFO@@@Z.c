/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180186494
 * Callers:
 *     ?GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x180186010 (-GetTargetDeviceName@WindowingEnvironmentConfig@@AEAAJPEAUHMONITOR__@@PEAUDISPLAYCONFIG_TARGET_D.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D2628 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D5A88 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall GetPathInfo(
        const unsigned __int16 *a1,
        const struct std::nothrow_t *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3)
{
  UINT32 v3; // r14d
  DISPLAYCONFIG_PATH_INFO *v4; // rbx
  DISPLAYCONFIG_MODE_INFO *v5; // rdi
  int v6; // r15d
  LONG DisplayConfigBufferSizes; // eax
  bool v8; // sf
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  int v12; // eax
  const unsigned __int16 *v13; // r13
  LONG DeviceInfo; // eax
  signed int v15; // esi
  unsigned __int16 *v16; // rax
  int v17; // ecx
  struct DISPLAYCONFIG_PATH_INFO *v18; // r13
  DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY outputTechnology; // eax
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-59h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-55h] BYREF
  const unsigned __int16 *v23; // [rsp+40h] [rbp-51h]
  struct DISPLAYCONFIG_PATH_INFO *v24; // [rsp+48h] [rbp-49h]
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+58h] [rbp-39h] BYREF
  _BYTE v26[76]; // [rsp+6Ch] [rbp-25h] BYREF

  v3 = 0;
  v24 = a3;
  numPathArrayElements = 0;
  v4 = 0LL;
  numModeInfoArrayElements = 0;
  v5 = 0LL;
  v6 = -1;
  v23 = a1;
  while ( 1 )
  {
    if ( v4 )
    {
      operator delete(v4, a2);
      v4 = 0LL;
    }
    if ( v5 )
    {
      operator delete(v5, a2);
      v5 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
    v8 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
      v8 = 1;
    if ( v8 )
      break;
    v9 = 72LL * numPathArrayElements;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      v9 = -1LL;
    v4 = (DISPLAYCONFIG_PATH_INFO *)operator new[](v9, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v4 )
      break;
    v10 = (unsigned __int64)numModeInfoArrayElements << 6;
    if ( !is_mul_ok(numModeInfoArrayElements, 0x40uLL) )
      v10 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](v10, (const struct std::nothrow_t *)&std::nothrow);
    v5 = modeInfoArray;
    if ( !modeInfoArray )
      break;
    v12 = QueryDisplayConfig(2u, &numPathArrayElements, v4, &numModeInfoArrayElements, modeInfoArray, 0LL);
    if ( v12 > 0 )
      v12 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 != -2147024774 )
    {
      if ( v12 >= 0 && numPathArrayElements )
      {
        v13 = v23;
        do
        {
          memset_0(&requestPacket, 0, 0x54uLL);
          requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
          requestPacket.size = 84;
          requestPacket.adapterId = v4[v3].sourceInfo.adapterId;
          requestPacket.id = v4[v3].sourceInfo.id;
          DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
          v15 = DeviceInfo;
          if ( DeviceInfo > 0 )
            v15 = (unsigned __int16)DeviceInfo | 0x80070000;
          if ( v15 >= 0 )
          {
            v16 = (unsigned __int16 *)v13;
            do
            {
              a2 = (const struct std::nothrow_t *)*(unsigned __int16 *)((char *)v16 + v26 - (_BYTE *)v13);
              v17 = *v16 - (_DWORD)a2;
              if ( v17 )
                break;
              ++v16;
            }
            while ( (_DWORD)a2 );
            if ( !v17 )
            {
              if ( v6 == -1
                || (outputTechnology = v4[v3].targetInfo.outputTechnology, outputTechnology == 0x80000000)
                || outputTechnology == DISPLAYCONFIG_OUTPUT_TECHNOLOGY_DISPLAYPORT_EMBEDDED
                || outputTechnology == DISPLAYCONFIG_OUTPUT_TECHNOLOGY_UDI_EMBEDDED )
              {
                v6 = v3;
              }
            }
          }
          ++v3;
        }
        while ( v3 < numPathArrayElements );
        v18 = v24;
        if ( v6 != -1 )
        {
          *(_OWORD *)&v24->sourceInfo.adapterId.LowPart = *(_OWORD *)&v4[v6].sourceInfo.adapterId.LowPart;
          *(_OWORD *)&v18->sourceInfo.statusFlags = *(_OWORD *)&v4[v6].sourceInfo.statusFlags;
          *(_OWORD *)&v18->targetInfo.modeInfoIdx = *(_OWORD *)&v4[v6].targetInfo.modeInfoIdx;
          *(_OWORD *)&v18->targetInfo.refreshRate.Numerator = *(_OWORD *)&v4[v6].targetInfo.refreshRate.Numerator;
          *(_QWORD *)&v18->targetInfo.statusFlags = *(_QWORD *)&v4[v6].targetInfo.statusFlags;
          goto LABEL_31;
        }
      }
      break;
    }
  }
  v15 = -2147024809;
LABEL_31:
  if ( v4 )
    operator delete(v4, a2);
  if ( v5 )
    operator delete(v5, a2);
  return (unsigned int)v15;
}
