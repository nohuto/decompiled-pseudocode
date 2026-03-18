/*
 * XREFs of UsbhGetLanguageIdString @ 0x14002D494
 * Callers:
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhSyncSendCommandToDevice @ 0x14002DA80 (UsbhSyncSendCommandToDevice.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003E4F0 (WPP_RECORDER_SF_dD.c)
 */

__int64 __fastcall UsbhGetLanguageIdString(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *Pool2; // rbx
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rcx
  signed __int32 v20; // eax
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int16 v24; // ax
  int v25; // eax
  unsigned int v26; // r8d
  int v27; // eax
  int v28; // r15d
  PDEVICE_OBJECT v30; // rcx
  int v31; // r9d
  int v32; // esi
  PDEVICE_OBJECT v33; // rcx
  int v34; // r9d
  _WORD *v35; // rdi
  unsigned __int64 v36; // rax
  _WORD *v37; // rsi
  unsigned __int8 *v38; // rdx
  unsigned __int64 i; // rcx
  __int64 v40; // [rsp+50h] [rbp-20h]
  _BYTE v41[6]; // [rsp+58h] [rbp-18h] BYREF
  __int16 v42; // [rsp+5Eh] [rbp-12h]
  _DWORD *v43; // [rsp+60h] [rbp-10h]
  unsigned __int16 v44; // [rsp+B8h] [rbp+48h] BYREF

  HIDWORD(v40) = 0;
  v43 = PdoExt(a2);
  if ( !*((_BYTE *)v43 + 1415) )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v30 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v31 = 23;
LABEL_57:
    WPP_RECORDER_SF_(v30->DeviceExtension, 0, 1, v31, (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids);
    return 3221225659LL;
  }
  Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1112885333LL);
  if ( !Pool2 )
    return 3221225626LL;
  v44 = 255;
  FdoExt(a1);
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        LODWORD(v40) = 827609959;
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 827609959;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = 255LL;
        *(_QWORD *)(v11 + v10 + 24) = 0LL;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        LODWORD(v40) = 844387175;
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 844387175;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = a2;
        *(_QWORD *)(v16 + v15 + 24) = 0LL;
      }
    }
  }
  *(_WORD *)v41 = 1664;
  *(_DWORD *)&v41[2] = 768;
  v42 = 255;
  v17 = UsbhSyncSendCommandToDevice(a1, a2, (unsigned int)v41, (_DWORD)Pool2, (__int64)&v44);
  v18 = v17;
  *(_DWORD *)v41 = v17;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        LODWORD(v40) = 861164391;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 880), 0xFFFFFFFF);
        v21 = *(_DWORD *)(v19 + 884);
        v22 = *(_QWORD *)(v19 + 888);
        v23 = 32LL * ((v20 - 1) & v21);
        *(_DWORD *)(v23 + v22) = 861164391;
        *(_QWORD *)(v23 + v22 + 16) = v44;
        *(_QWORD *)(v23 + v22 + 8) = 0LL;
        *(_QWORD *)(v23 + v22 + 24) = v18;
      }
    }
  }
  if ( (v18 & 0xC0000000) == 0xC0000000 )
  {
    v32 = 0;
LABEL_54:
    UsbhException(a1, *((_WORD *)v43 + 714), 63, Pool2, v44, *(int *)v41, v32, usbfile_idstring_c, 2024, 0, v40);
    ExFreePoolWithTag(Pool2, 0);
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 3221225659LL;
    v30 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return 3221225659LL;
    v31 = 24;
    goto LABEL_57;
  }
  v24 = *Pool2;
  if ( v24 > v44 )
  {
    v32 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    v33 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_54;
    v34 = 10;
LABEL_39:
    WPP_RECORDER_SF_(v33->DeviceExtension, 0, 1, v34, (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids);
    goto LABEL_54;
  }
  if ( (unsigned __int8)v24 <= 2u )
  {
    v32 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    v33 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_54;
    v34 = 11;
    goto LABEL_39;
  }
  if ( Pool2[1] != 3 )
  {
    v32 = -1072693246;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_54;
    v33 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_54;
    v34 = 12;
    goto LABEL_39;
  }
  v25 = v24 & 1;
  if ( v25 )
  {
    v32 = -1072693247;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_e1fde88e9ac33323a903575de9e6ca97_Traceguids,
        v25);
    goto LABEL_54;
  }
  v26 = (*Pool2 >> 1) - 1;
  if ( *Pool2 >> 1 == 1 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225659LL;
  }
  v35 = Pool2;
  v36 = 2LL * v26;
  v37 = Pool2 + 2;
  v38 = &Pool2[v36];
  for ( i = v36 >> 1; i; --i )
    *v35++ = *v37++;
  v27 = v44;
  *(_WORD *)v38 = 0;
  *(_DWORD *)(a3 + 4) = v27;
  *(_QWORD *)(a3 + 8) = Pool2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
      v26);
  v28 = 0;
  while ( *(_WORD *)Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v38,
          v26,
          26,
          (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
          v28++,
          *(_WORD *)Pool2);
    }
    Pool2 += 2;
  }
  return 0LL;
}
