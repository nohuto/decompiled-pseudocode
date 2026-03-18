/*
 * XREFs of ACPIDevicePowerDetermineSupportedDeviceStates @ 0x1400CDEFC
 * Callers:
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x14004104C (ACPISystemPowerUpdateDeviceCapabilities.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x14001C060 (AMLIIsNamedChildPresent.c)
 *     WPP_RECORDER_SF_qss @ 0x14003C56C (WPP_RECORDER_SF_qss.c)
 */

__int64 __fastcall ACPIDevicePowerDetermineSupportedDeviceStates(ULONG_PTR BugCheckParameter2, _DWORD *a2, int *a3)
{
  int v3; // esi
  int v4; // edi
  unsigned __int8 v5; // cf
  int v9; // ebp
  int *v10; // r14
  int v11; // ebp
  int *v12; // r14
  char v13; // al
  __int64 v14; // r8
  const char *v15; // rax
  const char *v16; // rdx
  __int64 v17; // r8
  const char *v18; // rax
  const char *v19; // rdx
  __int64 v20; // r8
  const char *v21; // rax
  const char *v22; // rdx
  _BYTE v24[16]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v25[16]; // [rsp+50h] [rbp-28h] BYREF

  v3 = 0;
  qmemcpy(v24, "_PR0_PR1_PR2", 12);
  v4 = 0;
  v5 = _bittest64((const signed __int64 *)(BugCheckParameter2 + 8), 0x33u);
  qmemcpy(v25, "_PS0_PS1_PS2_PS3", sizeof(v25));
  *a2 = 0;
  *a3 = 0;
  if ( v5 )
  {
    v4 = 18;
LABEL_35:
    *a2 = v3;
    *a3 = v4;
    return 0LL;
  }
  v9 = 1;
  v10 = (int *)v25;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v10) )
      v4 |= 1 << v9;
    ++v9;
    ++v10;
  }
  while ( v9 <= 4 );
  v11 = 1;
  v12 = (int *)v24;
  do
  {
    if ( AMLIIsNamedChildPresent(*(__int64 **)(BugCheckParameter2 + 760), *v12) )
      v3 |= (1 << v11) | 0x10;
    ++v11;
    ++v12;
  }
  while ( v11 <= 3 );
  v13 = v3 | v4;
  if ( v3 | v4 )
  {
    if ( (v13 & 2) == 0 )
    {
      v14 = *(_QWORD *)(BugCheckParameter2 + 8);
      v15 = byte_140075A82;
      v16 = byte_140075A82;
      if ( (v14 & 0x200000000000LL) != 0 )
      {
        v15 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v14 & 0x400000000000LL) != 0 )
          v16 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x25u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v15,
          v16);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, (-(__int64)(v3 != 0) & 0xFFFFFFFFFFFF0000uLL) + 810766431, 0LL);
    }
    if ( (v13 & 0x10) == 0 )
    {
      v17 = *(_QWORD *)(BugCheckParameter2 + 8);
      v18 = byte_140075A82;
      v19 = byte_140075A82;
      if ( (v17 & 0x200000000000LL) != 0 )
      {
        v18 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v17 & 0x400000000000LL) != 0 )
          v19 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x26u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v18,
          v19);
      KeBugCheckEx(0xA5u, 0xDuLL, BugCheckParameter2, 0x3353505FuLL, 0LL);
    }
    if ( v3 && v4 && v3 != v4 )
    {
      v20 = *(_QWORD *)(BugCheckParameter2 + 8);
      v21 = byte_140075A82;
      v22 = byte_140075A82;
      if ( (v20 & 0x200000000000LL) != 0 )
      {
        v21 = *(const char **)(BugCheckParameter2 + 608);
        if ( (v20 & 0x400000000000LL) != 0 )
          v22 = *(const char **)(BugCheckParameter2 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xAu,
          0x27u,
          (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
          BugCheckParameter2,
          v21,
          v22);
      v3 &= v4;
      v4 &= v3;
    }
    goto LABEL_35;
  }
  return 0LL;
}
