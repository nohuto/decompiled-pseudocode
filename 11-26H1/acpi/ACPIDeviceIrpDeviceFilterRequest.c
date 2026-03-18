/*
 * XREFs of ACPIDeviceIrpDeviceFilterRequest @ 0x140025310
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x140024BD8 (ACPIInternalDecrementIrpReferenceCount.c)
 *     ACPIDeviceInitializePowerRequest @ 0x140025FA4 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x140026A88 (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceFilterRequest(
        ULONG_PTR a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, _QWORD))
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  char v7; // r8
  __int64 v8; // rbx
  unsigned int v9; // r15d
  int v10; // ebp
  const char *v11; // rcx
  const char *v12; // rdx
  int v13; // esi
  int v14; // eax
  __int64 v16; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(a2 + 184);
  v7 = 0;
  v8 = DeviceExtension;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = byte_140075A82;
  v12 = byte_140075A82;
  if ( DeviceExtension )
  {
    v16 = *(_QWORD *)(DeviceExtension + 8);
    v7 = v8;
    if ( (v16 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v8 + 608);
      if ( (v16 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v8 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v12,
      10,
      30,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      a2,
      v9 - 1,
      v7,
      (__int64)v11,
      (__int64)v12);
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  v13 = *(_DWORD *)(a2 + 48);
  if ( v13 < 0 )
  {
    ACPIInternalDecrementIrpReferenceCount(v8);
    return (unsigned int)v13;
  }
  else if ( v9 != 1 && _bittest64((const signed __int64 *)(v8 + 1008), 0x24u) )
  {
    if ( a3 )
      a3(v8, a2, (unsigned int)v13);
    return 3221225494LL;
  }
  else
  {
    if ( (unsigned int)(v10 - 4) <= 1 || (v14 = 0, v10 == 6) )
      v14 = 1;
    return ACPIDeviceInitializePowerRequest(v8, v9, 0LL, a3, a2, v10, 0, 8 * v14);
  }
}
