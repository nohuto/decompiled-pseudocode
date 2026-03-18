/*
 * XREFs of KasanInitSystem @ 0x140CC7D20
 * Callers:
 *     KiSystemStartup @ 0x140BE9640 (KiSystemStartup.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     MiInitializeKasan @ 0x140CF35B0 (MiInitializeKasan.c)
 * Callees:
 *     EtwWriteEx @ 0x140212F70 (EtwWriteEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KasanDriverLoadImageInternal @ 0x140523630 (KasanDriverLoadImageInternal.c)
 *     KasanTrackAddressNoInline @ 0x140532270 (KasanTrackAddressNoInline.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     KasaniSendTelemetryDriver @ 0x1405DDA90 (KasaniSendTelemetryDriver.c)
 *     KcsanInitSystem @ 0x1405E3070 (KcsanInitSystem.c)
 *     ExDisableAllLookasideLists @ 0x1406CEB14 (ExDisableAllLookasideLists.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void __fastcall KasanInitSystem(__int64 a1, int a2)
{
  int v3; // edx
  KIRQL v4; // al
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rax
  char v11; // dl
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  int v16; // eax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  int ImageInternal; // eax
  _DWORD v20[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v21; // [rsp+48h] [rbp-70h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-58h] BYREF
  char *v24; // [rsp+70h] [rbp-48h]
  int v25; // [rsp+78h] [rbp-40h]
  int v26; // [rsp+7Ch] [rbp-3Ch]
  __int64 *v27; // [rsp+80h] [rbp-38h]
  __int64 v28; // [rsp+88h] [rbp-30h]
  _DWORD *v29; // [rsp+90h] [rbp-28h]
  __int64 v30; // [rsp+98h] [rbp-20h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  if ( a2 )
  {
    if ( a2 == 1 )
    {
      ExDisableAllLookasideLists();
      KasaniValidationEnabled = 1;
      *(PBOOLEAN *)((char *)&KdDebuggerEnabled + 7) = 0LL;
      v13 = *(_DWORD *)(a1 + 160);
      v14 = (unsigned int)(8 * v13 + 0x8000);
      v15 = *(_QWORD *)(a1 + 128) - (unsigned int)(2 * v13 + 0x2000);
      if ( byte_140FC7BE8 )
      {
        v16 = KasanTrackAddressNoInline(v15, v14, 0);
        if ( v16 < 0 )
          KeBugCheckEx(0x1F1u, 4uLL, 5uLL, v16, 0LL);
      }
      qword_140FBE300 = KasaniShadow - 0x1FFFF00000000000LL;
    }
    else
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E06F10, 0LL, 0LL);
      v3 = 0;
      if ( KcsaniEnabled )
        v3 = 2;
      if ( (unsigned int)dword_140E06F10 > 5
        && (qword_140E06F20 & 0x400000000000LL) != 0
        && (qword_140E06F28 & 0x400000000000LL) == qword_140E06F28 )
      {
        v20[0] = v3;
        v27 = &v21;
        EventDescriptor.Keyword = 0x400000000000LL;
        v29 = v20;
        *(_DWORD *)&EventDescriptor.Level = 5;
        UserData.Ptr = (ULONGLONG)off_140E06F18;
        v21 = 0x2000000LL;
        v28 = 8LL;
        v30 = 4LL;
        *(_DWORD *)&EventDescriptor.Id = 184549376;
        UserData.Size = *(unsigned __int16 *)off_140E06F18;
        v24 = &byte_140048767;
        UserData.Reserved = 2;
        v25 = 34;
        v26 = 1;
        v20[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwWriteEx(qword_140E06F30, &EventDescriptor, 0LL, 0, 0LL, 0LL, 4u, &UserData);
      }
      v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&KdDebuggerEnabled + 7));
      v5 = (unsigned __int64)KasanDriverUnloadInfos;
      v6 = v4;
      if ( KasanDriverUnloadInfos )
      {
        while ( 1 )
        {
LABEL_10:
          while ( 1 )
          {
            KasaniSendTelemetryDriver(*(_QWORD *)(v5 + 24));
            if ( !*(_QWORD *)v5 )
              break;
            v7 = (_QWORD *)(v5 ^ *(_QWORD *)v5);
            v5 = *(_QWORD *)v5;
            if ( (qword_140E66290 & 1) != 0 )
              v5 = (unsigned __int64)v7;
          }
          v8 = *(_QWORD *)(v5 + 8);
          if ( !v8 )
            break;
          v9 = (_QWORD *)(v5 ^ v8);
          v5 = *(_QWORD *)(v5 + 8);
          if ( (qword_140E66290 & 1) != 0 )
            v5 = (unsigned __int64)v9;
        }
        v10 = v5;
        v11 = qword_140E66290 & 1;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v11 )
          {
            if ( !v10 )
              break;
            v10 ^= v5;
          }
          if ( !v10 )
            break;
          v12 = *(_QWORD *)(v10 + 8);
          if ( v11 )
          {
            if ( !v12 )
              goto LABEL_28;
            v12 ^= v10;
          }
          if ( v12 && v12 != v5 )
          {
            v5 = v12;
            goto LABEL_10;
          }
LABEL_28:
          v5 = v10;
        }
      }
      byte_140FC7BE9 = 1;
      if ( (BYTE6(PerfGlobalGroupMask[0]) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        _InterlockedAnd64((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)((char *)&KdDebuggerEnabled + 7), retaddr);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
      __writecr8(v6);
      if ( KcsaniEnabled )
        KcsanInitSystem(2);
    }
  }
  else
  {
    qword_140FBE300 = (__int64)&KasaniBootShadow
                    - ((*(_QWORD *)(a1 + 128) - (unsigned __int64)(unsigned int)(2 * *(_DWORD *)(a1 + 160) + 0x2000)) >> 3);
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 3856LL) & 1) != 0 )
    {
      v17 = *(_QWORD **)(a1 + 16);
      v18 = (_QWORD *)(a1 + 16);
      for ( byte_140FC7BE8 = 1; v17 != v18; v17 = (_QWORD *)*v17 )
      {
        ImageInternal = KasanDriverLoadImageInternal((__int64)v17, 1);
        if ( ImageInternal < 0 )
          KeBugCheckEx(0x1F1u, 5uLL, 7uLL, (ULONG_PTR)v17, ImageInternal);
      }
      KcsaniEnabled = 0;
    }
    else
    {
      byte_140FC7BE8 = 0;
    }
  }
}
