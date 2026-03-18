/*
 * XREFs of ACPIWakeEnableDisableAsyncCallBack @ 0x140033570
 * Callers:
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     ACPIWakeEnableDisableAsync @ 0x140032F20 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x140022260 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x140033494 (ACPIWakeEnableDisablePciDevice.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x140033570 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     WPP_RECORDER_SF_LsLLqss @ 0x14006B308 (WPP_RECORDER_SF_LsLLqss.c)
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

void __fastcall ACPIWakeEnableDisableAsyncCallBack(__int64 *a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  const char *v5; // rbp
  __int64 v6; // rdi
  int v8; // r13d
  __int64 v9; // r14
  const char *v10; // r11
  const char *v11; // r10
  __int64 v12; // rax
  KIRQL v13; // al
  _QWORD *v14; // rdx
  KIRQL v15; // r8
  void **v16; // rcx
  __int64 v17; // r14
  __int64 v18; // r12
  char v19; // r14
  const char *v20; // r11
  const char *v21; // r10
  __int64 v22; // rax
  int v23; // r9d
  int v24; // r8d
  char v25; // cl
  const char *v26; // rax
  int v27; // eax
  char v28; // cl
  unsigned int v29; // eax
  _QWORD *v30; // rcx
  unsigned int v31; // ebx
  const char *v32; // rdx
  __int64 v33; // rax
  int v34; // [rsp+20h] [rbp-A8h]
  __int64 v35; // [rsp+40h] [rbp-88h]
  _OWORD v36[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v37; // [rsp+80h] [rbp-48h]
  KIRQL v40; // [rsp+E8h] [rbp+20h]

  v4 = a4[2];
  v5 = byte_140075A82;
  LOBYTE(v6) = 0;
  v8 = a2;
  LOBYTE(v9) = 0;
  v10 = byte_140075A82;
  v11 = byte_140075A82;
  if ( v4 )
  {
    v12 = *(_QWORD *)(v4 + 8);
    v9 = a4[2];
    if ( (v12 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(v4 + 608);
      if ( (v12 & 0x400000000000LL) != 0 )
        v11 = *(const char **)(v4 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      17,
      20,
      (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
      v8,
      v9,
      (__int64)v10,
      (__int64)v11);
  }
  v13 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v14 = (_QWORD *)*a4;
  v15 = v13;
  v40 = v13;
  if ( *(_QWORD **)(*a4 + 8LL) != a4 || (v16 = (void **)a4[1], *v16 != a4) )
    __fastfail(3u);
  *v16 = v14;
  v14[1] = v16;
  if ( v8 < 0 )
  {
    v19 = 0;
    v20 = byte_140075A82;
    v21 = byte_140075A82;
    if ( v4 )
    {
      v22 = *(_QWORD *)(v4 + 8);
      v19 = v4;
      if ( (v22 & 0x200000000000LL) != 0 )
      {
        v20 = *(const char **)(v4 + 608);
        if ( (v22 & 0x400000000000LL) != 0 )
          v21 = *(const char **)(v4 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v23 = *(_DWORD *)(v4 + 552);
      v24 = *((_DWORD *)a4 + 7);
      LOBYTE(v14) = *((_BYTE *)a4 + 24);
      v25 = v23 - v24;
      if ( !(_BYTE)v14 )
        v25 = v23 + v24;
      v26 = "-";
      if ( !(_BYTE)v14 )
        v26 = "+";
      WPP_RECORDER_SF_LsLLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v14,
        v24,
        v23,
        v34,
        v23,
        (__int64)v26,
        v24,
        v25,
        v19,
        (__int64)v20,
        (__int64)v21);
      v15 = v40;
    }
    v27 = *((_DWORD *)a4 + 7);
    if ( *((_BYTE *)a4 + 24) )
      *(_DWORD *)(v4 + 552) -= v27;
    else
      *(_DWORD *)(v4 + 552) += v27;
  }
  v17 = 0LL;
  v18 = *(_QWORD *)(v4 + 560);
  if ( v18 != v4 + 560 )
    v17 = *(_QWORD *)(v4 + 560);
  KeReleaseSpinLock(&AcpiPowerLock, v15);
  if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) && *((_BYTE *)a4 + 24) == 1 )
    ACPIWakeEnableDisablePciDevice(v4, 1);
  ((void (__fastcall *)(__int64 *, _QWORD, __int64, _QWORD))a4[4])(a1, (unsigned int)v8, a3, a4[5]);
  ExFreeToNPagedLookasideList(&XswContextLookAsideList, a4);
  if ( v18 != v4 + 560 )
  {
    v28 = *(_BYTE *)(v17 + 24);
    v37 = 0LL;
    v36[0] = 0LL;
    WORD1(v36[0]) = 1;
    v36[1] = v28 != 0;
    if ( _bittest64((const signed __int64 *)(v4 + 8), 0x3Bu) && !v28 )
      ACPIWakeEnableDisablePciDevice(v4, 0);
    v29 = AMLIAsyncEvalObject(a1, 0LL, 1, (__int64)v36, ACPIWakeEnableDisableAsyncCallBack, v17);
    v30 = *(_QWORD **)(v17 + 16);
    v31 = v29;
    v32 = byte_140075A82;
    if ( v30 )
    {
      v33 = v30[1];
      v6 = *(_QWORD *)(v17 + 16);
      if ( (v33 & 0x200000000000LL) != 0 )
      {
        v5 = (const char *)v30[76];
        if ( (v33 & 0x400000000000LL) != 0 )
          v32 = (const char *)v30[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v35 = (__int64)v32;
      LOBYTE(v32) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v32,
        17,
        22,
        (__int64)&WPP_fa9b6c7d64e739de3126558f72f3a6ad_Traceguids,
        v31,
        v6,
        (__int64)v5,
        v35);
    }
    if ( v31 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(a1, v31, 0LL, v17);
  }
}
