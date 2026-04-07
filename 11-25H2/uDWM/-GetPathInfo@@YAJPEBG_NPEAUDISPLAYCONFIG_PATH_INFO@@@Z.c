/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180075A44
 * Callers:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180075994 (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 * Callees:
 *     ??3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z @ 0x18000BC90 (--3CDisplayBlackCurtainAnimatedVisual@@KAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009B730 (memset_0.c)
 */

__int64 __fastcall GetPathInfo(
        const unsigned __int16 *a1,
        const struct std::nothrow_t *a2,
        struct DISPLAYCONFIG_PATH_INFO *a3)
{
  DISPLAYCONFIG_PATH_INFO *v3; // rbx
  DISPLAYCONFIG_MODE_INFO *v4; // rdi
  LONG DisplayConfigBufferSizes; // eax
  bool v7; // sf
  unsigned __int128 v8; // rax
  DISPLAYCONFIG_PATH_INFO *v9; // rsi
  unsigned __int128 v10; // rax
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  DISPLAYCONFIG_MODE_INFO *v12; // r12
  int v13; // eax
  signed int v14; // r14d
  signed int v16; // r15d
  LONG DeviceInfo; // eax
  const unsigned __int16 *v18; // rax
  int v19; // ecx
  UINT32 numPathArrayElements; // [rsp+38h] [rbp-49h] BYREF
  UINT32 numModeInfoArrayElements; // [rsp+3Ch] [rbp-45h] BYREF
  const unsigned __int16 *v22; // [rsp+40h] [rbp-41h]
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v24[76]; // [rsp+5Ch] [rbp-25h] BYREF

  v22 = a1;
  numPathArrayElements = 0;
  v3 = 0LL;
  numModeInfoArrayElements = 0;
  v4 = 0LL;
  do
  {
    if ( v3 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
      v3 = 0LL;
    }
    if ( v4 )
    {
      CDisplayBlackCurtainAnimatedVisual::operator delete(v4, a2);
      v4 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, &numModeInfoArrayElements);
    v7 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
      v7 = 1;
    if ( v7 )
      goto LABEL_19;
    v8 = numPathArrayElements * (unsigned __int128)0x48uLL;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      *(_QWORD *)&v8 = -1LL;
    v3 = (DISPLAYCONFIG_PATH_INFO *)operator new[](v8, *((const struct std::nothrow_t **)&v8 + 1));
    v9 = v3;
    if ( !v3 )
      goto LABEL_19;
    v10 = numModeInfoArrayElements * (unsigned __int128)0x40uLL;
    if ( !is_mul_ok(numModeInfoArrayElements, 0x40uLL) )
      *(_QWORD *)&v10 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)operator new[](v10, *((const struct std::nothrow_t **)&v10 + 1));
    v4 = modeInfoArray;
    v12 = modeInfoArray;
    if ( !modeInfoArray )
      goto LABEL_19;
    v13 = QueryDisplayConfig(2u, &numPathArrayElements, v3, &numModeInfoArrayElements, modeInfoArray, 0LL);
    if ( v13 > 0 )
      v13 = (unsigned __int16)v13 | 0x80070000;
  }
  while ( v13 == -2147024774 );
  if ( v13 < 0 )
    goto LABEL_19;
  v16 = 0;
  if ( !numPathArrayElements )
    goto LABEL_19;
  while ( 1 )
  {
    memset_0(&requestPacket, 0, 0x54uLL);
    requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
    requestPacket.size = 84;
    requestPacket.adapterId = v9[v16].sourceInfo.adapterId;
    requestPacket.id = v9[v16].sourceInfo.id;
    DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
    v14 = DeviceInfo;
    if ( DeviceInfo > 0 )
      v14 = (unsigned __int16)DeviceInfo | 0x80070000;
    if ( v14 >= 0 )
    {
      v18 = v22;
      do
      {
        a2 = (const struct std::nothrow_t *)*(const unsigned __int16 *)((char *)v18 + v24 - (_BYTE *)v22);
        v19 = *v18 - (_DWORD)a2;
        if ( v19 )
          break;
        ++v18;
      }
      while ( (_DWORD)a2 );
      if ( !v19 )
        break;
    }
    ++v16;
    v3 = v9;
    v4 = v12;
    if ( v16 >= numPathArrayElements )
      goto LABEL_19;
  }
  v3 = v9;
  v4 = v12;
  if ( v16 == -1 )
  {
LABEL_19:
    v14 = -2147024809;
    goto LABEL_20;
  }
  *(_OWORD *)&a3->sourceInfo.adapterId.LowPart = *(_OWORD *)&v9[v16].sourceInfo.adapterId.LowPart;
  *(_OWORD *)&a3->sourceInfo.statusFlags = *(_OWORD *)&v9[v16].sourceInfo.statusFlags;
  *(_OWORD *)&a3->targetInfo.modeInfoIdx = *(_OWORD *)&v9[v16].targetInfo.modeInfoIdx;
  *(_OWORD *)&a3->targetInfo.refreshRate.Numerator = *(_OWORD *)&v9[v16].targetInfo.refreshRate.Numerator;
  *(_QWORD *)&a3->targetInfo.statusFlags = *(_QWORD *)&v9[v16].targetInfo.statusFlags;
LABEL_20:
  if ( v3 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v3, a2);
  if ( v4 )
    CDisplayBlackCurtainAnimatedVisual::operator delete(v4, a2);
  return (unsigned int)v14;
}
