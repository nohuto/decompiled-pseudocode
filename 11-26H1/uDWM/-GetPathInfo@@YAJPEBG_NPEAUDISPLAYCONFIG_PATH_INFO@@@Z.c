/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180055D84
 * Callers:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180055CD4 (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800164E0 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180030CA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall GetPathInfo(
        const unsigned __int16 *a1,
        const struct std::nothrow_t *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3)
{
  DISPLAYCONFIG_PATH_INFO *v4; // rbx
  DISPLAYCONFIG_MODE_INFO *v5; // rdi
  int DisplayConfigBufferSizes; // eax
  bool v8; // sf
  unsigned __int128 v9; // rax
  unsigned __int128 v10; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  int v12; // r14d
  LONG DeviceInfo; // eax
  signed int v14; // esi
  const unsigned __int16 *v15; // rax
  int v16; // ecx
  int v17; // r9d
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-49h] BYREF
  UINT32 numModeInfoArrayElements[3]; // [rsp+3Ch] [rbp-45h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+48h] [rbp-39h] BYREF
  char v22; // [rsp+5Ch] [rbp-25h] BYREF

  numPathArrayElements = 0;
  v4 = 0LL;
  numModeInfoArrayElements[0] = 0;
  v5 = 0LL;
  do
  {
    if ( v4 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v4, a2);
      v4 = 0LL;
    }
    if ( v5 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v5, a2);
      v5 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
    v8 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
    {
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
      v8 = DisplayConfigBufferSizes < 0;
    }
    if ( v8 )
      break;
    v9 = numPathArrayElements * (unsigned __int128)0x48uLL;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      *(_QWORD *)&v9 = -1LL;
    v4 = (DISPLAYCONFIG_PATH_INFO *)operator new[](v9, *((const struct std::nothrow_t **)&v9 + 1));
    if ( !v4 )
      goto LABEL_28;
    v10 = numModeInfoArrayElements[0] * (unsigned __int128)0x40uLL;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      *(_QWORD *)&v10 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](v10, *((const struct std::nothrow_t **)&v10 + 1));
    v5 = modeInfoArray;
    if ( !modeInfoArray )
      goto LABEL_28;
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 v4,
                                 numModeInfoArrayElements,
                                 modeInfoArray,
                                 0LL);
    if ( DisplayConfigBufferSizes > 0 )
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  }
  while ( DisplayConfigBufferSizes == -2147024774 );
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_28;
  v12 = 0;
  if ( !numPathArrayElements )
    goto LABEL_28;
  while ( 1 )
  {
    memset_0(&requestPacket, 0, 0x54uLL);
    requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
    requestPacket.size = 84;
    requestPacket.adapterId = v4[v12].sourceInfo.adapterId;
    requestPacket.id = v4[v12].sourceInfo.id;
    DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
    v14 = DeviceInfo;
    if ( DeviceInfo > 0 )
      v14 = (unsigned __int16)DeviceInfo | 0x80070000;
    if ( v14 >= 0 )
    {
      v15 = a1;
      do
      {
        v16 = *(const unsigned __int16 *)((char *)v15 + &v22 - (char *)a1);
        v17 = *v15 - v16;
        if ( v17 )
          break;
        ++v15;
      }
      while ( v16 );
      if ( !v17 )
        break;
    }
    if ( ++v12 >= numPathArrayElements )
      goto LABEL_28;
  }
  if ( v12 == -1 )
  {
LABEL_28:
    v14 = -2147024809;
    goto LABEL_29;
  }
  *(_OWORD *)&a3->sourceInfo.adapterId.LowPart = *(_OWORD *)&v4[v12].sourceInfo.adapterId.LowPart;
  *(_OWORD *)&a3->sourceInfo.statusFlags = *(_OWORD *)&v4[v12].sourceInfo.statusFlags;
  *(_OWORD *)&a3->targetInfo.modeInfoIdx = *(_OWORD *)&v4[v12].targetInfo.modeInfoIdx;
  *(_OWORD *)&a3->targetInfo.refreshRate.Numerator = *(_OWORD *)&v4[v12].targetInfo.refreshRate.Numerator;
  *(_QWORD *)&a3->targetInfo.statusFlags = *(_QWORD *)&v4[v12].targetInfo.statusFlags;
LABEL_29:
  if ( v4 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v4, a2);
  if ( v5 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v5, a2);
  return (unsigned int)v14;
}
