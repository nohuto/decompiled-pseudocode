/*
 * XREFs of ndisPublishSleepStudyNapsCustomData @ 0x1401390DC
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x14016BB90 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ndisSleepStudyGetNameFromReasonCode @ 0x1400913EC (ndisSleepStudyGetNameFromReasonCode.c)
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x140091730 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x140166190 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

unsigned int *__fastcall ndisPublishSleepStudyNapsCustomData(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  unsigned __int16 v7; // ax
  unsigned __int64 v8; // r12
  __int64 v9; // r11
  unsigned int *result; // rax
  int v13; // r8d
  unsigned int v14; // r14d
  unsigned int *v15; // rbx
  __int64 v16; // r15
  char v17; // al
  __int64 v18; // rcx
  __int64 v19; // rdx
  int v20; // [rsp+60h] [rbp-61h]
  __int64 v21; // [rsp+68h] [rbp-59h]
  __int128 v23; // [rsp+80h] [rbp-41h] BYREF
  struct _GUID v24; // [rsp+90h] [rbp-31h] BYREF
  struct _GUID v25; // [rsp+A0h] [rbp-21h] BYREF

  v7 = *(_WORD *)(a1 + 4056);
  v8 = 0LL;
  v9 = a3;
  v24 = GUID_CS_BLOCKER_GEN;
  v24.Data3 = v7;
  v25 = GUID_CS_BLOCKER_GEN;
  v25.Data3 = v7;
  result = (unsigned int *)(a6 + 4);
  v13 = 1;
  v14 = 1;
  v21 = a4;
  v20 = 1;
  do
  {
    v15 = result;
    v16 = 49LL;
    do
    {
      if ( *v15 )
      {
        if ( v14 == 1 )
        {
          v8 += *(_QWORD *)(v15 + 1);
        }
        else
        {
          v23 = 0LL;
          if ( v13 )
          {
            v17 = *a7;
            ++*(_DWORD *)a7;
            v25.Data4[0] = v17 | 0x80;
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
              McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                a1,
                a2,
                (const GUID *)(a1 + 4008),
                a2,
                v9,
                *(_DWORD *)(a4 + 8),
                *(_QWORD *)a4,
                (__int64)&v25,
                0,
                a2);
            ndisPublishSleepStudyCustomData(a2, &v25, L"Total Time (ms)", v8);
            v20 = 0;
          }
          ndisSleepStudyGetNameFromReasonCode(*v15, &v23);
          LOBYTE(v19) = *a7;
          ++*(_DWORD *)a7;
          LOBYTE(v19) = v19 | 0x80;
          v24.Data4[0] = v19;
          if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
              v18,
              v19,
              (const GUID *)(a1 + 4008),
              a2,
              (__int64)&v25,
              SDWORD2(v23),
              v23,
              (__int64)&v24,
              0,
              a2);
          ndisPublishSleepStudyCustomData(a2, &v24, L"Reason", *v15);
          ndisPublishSleepStudyCustomData(a2, &v24, L"WakeCount", *((unsigned __int16 *)v15 - 2));
          ndisPublishSleepStudyCustomData(a2, &v24, L"BusyCount", *((unsigned __int16 *)v15 - 1));
          ndisPublishSleepStudyCustomData(a2, &v24, L"Total Time (ms)", *(_QWORD *)(v15 + 1));
          v13 = v20;
          a4 = v21;
          v9 = a3;
        }
      }
      v15 += 4;
      --v16;
    }
    while ( v16 );
    result = (unsigned int *)(a6 + 4);
    ++v14;
  }
  while ( v14 <= 2 );
  return result;
}
