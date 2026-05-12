/*
 * XREFs of RaUnitSurpriseRemovalIrp @ 0x14018EB54
 * Callers:
 *     RaUnitPnpIrp @ 0x14003FBDC (RaUnitPnpIrp.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x14001A534 (RaidIsUnitControlSupported.c)
 *     McTemplateK0zqjuuujsssztt_EtwWriteTransfer @ 0x140026F44 (McTemplateK0zqjuuujsssztt_EtwWriteTransfer.c)
 *     RaCallMiniportUnitControl @ 0x14004528C (RaCallMiniportUnitControl.c)
 *     StorpLogPerUnitStatistics @ 0x140046F34 (StorpLogPerUnitStatistics.c)
 *     RaUnitWaitForRemoveLock @ 0x14004B798 (RaUnitWaitForRemoveLock.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x14007ECF0 (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitCancelPendingRequests @ 0x1400A6F5C (RaidUnitCancelPendingRequests.c)
 *     RaidUnitConvertToZombieUnit @ 0x1400A70D4 (RaidUnitConvertToZombieUnit.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1400AA334 (RaidUnitUnRegisterInterfaces.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RaUnitSurpriseRemovalIrp(__int64 a1, __int64 a2)
{
  int v2; // esi
  __int32 v5; // eax
  void (__fastcall *v6)(_QWORD, __int64 *); // r8
  __int64 v7; // rcx
  char v8; // dl
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  const wchar_t *v12; // r10
  unsigned __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  bool v16; // zf
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  const EVENT_DESCRIPTOR *v20; // rdx
  __int64 v21; // rdx
  _BYTE *v22; // r9
  unsigned __int8 v23; // di
  char v24; // r10
  char v25; // bl
  char v26; // r11
  char v27; // r14
  char *v28; // r14
  unsigned int v29; // r13d
  unsigned __int64 v30; // r12
  __int64 v31; // r8
  int v32; // ecx
  char v33; // r12
  char v34; // cl
  char v35; // al
  char v36; // r8
  char *v37; // r11
  unsigned int v38; // eax
  __int64 v40; // [rsp+20h] [rbp-69h]
  __int64 v41; // [rsp+28h] [rbp-61h]
  __int64 v42; // [rsp+30h] [rbp-59h]
  __int64 v43; // [rsp+38h] [rbp-51h]
  __int64 v44; // [rsp+40h] [rbp-49h]
  __int64 v45; // [rsp+48h] [rbp-41h]
  char v46; // [rsp+80h] [rbp-9h]
  char v47; // [rsp+81h] [rbp-8h]
  __int32 v48; // [rsp+84h] [rbp-5h]
  unsigned int v49; // [rsp+84h] [rbp-5h]
  __int64 v50; // [rsp+88h] [rbp-1h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+7h] BYREF
  GUID v52; // [rsp+98h] [rbp+Fh] BYREF

  v2 = 0;
  v50 = 0LL;
  Interval.QuadPart = 0LL;
  v5 = _InterlockedExchange((volatile __int32 *)(a1 + 56), 5);
  v6 = *(void (__fastcall **)(_QWORD, __int64 *))(a1 + 3528);
  v48 = v5;
  if ( v6 )
  {
    v7 = *(_QWORD *)(a1 + 24);
    LODWORD(v50) = 8;
    v8 = *(_BYTE *)(v7 + 56);
    *(_WORD *)((char *)&v50 + 5) = *(_WORD *)(a1 + 104);
    HIBYTE(v50) = *(_BYTE *)(a1 + 106);
    BYTE4(v50) = v8;
    v6(0LL, &v50);
    v5 = v48;
    *(_QWORD *)(a1 + 3528) = 0LL;
  }
  if ( (unsigned int)(v5 - 6) > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  RaidUnitCancelPendingRequests((_QWORD *)a1);
  if ( RaidIsUnitControlSupported(a1, 10) )
  {
    v9 = *(_QWORD *)(a1 + 24);
    v52 = 0LL;
    LOWORD(v52.Data1) = 1;
    HIWORD(v52.Data1) = *(_WORD *)(v9 + 56);
    *(_WORD *)v52.Data4 = *(_WORD *)(a1 + 104);
    v52.Data4[2] = *(_BYTE *)(a1 + 106);
    *(_DWORD *)&v52.Data2 = 4;
    if ( *(_DWORD *)v9 == 1094997074 )
    {
      v10 = v9 + 376;
    }
    else if ( *(_DWORD *)v9 == 1314275652 )
    {
      v10 = v9 + 168;
    }
    else
    {
      v10 = 0LL;
    }
    RaCallMiniportUnitControl(v10);
  }
  if ( (byte_140173445 & 8) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 24);
    v12 = (const wchar_t *)&unk_140153274;
    if ( *(_QWORD *)(v11 + 5144) )
      v12 = *(const wchar_t **)(v11 + 5144);
    McTemplateK0zqjuuujsssztt_EtwWriteTransfer(
      a1 + 177,
      a1 + 168,
      a1 + 2104,
      *(const wchar_t **)(v11 + 4784),
      *(_DWORD *)(v11 + 56),
      v11 + 5128,
      *(_BYTE *)(a1 + 104),
      *(_BYTE *)(a1 + 105),
      *(_BYTE *)(a1 + 106),
      a1 + 2104,
      (const char *)(a1 + 168),
      (const char *)(a1 + 177),
      (const char *)(a1 + 242),
      v12,
      (*(_BYTE *)(a1 + 506) & 0x40) != 0,
      *(_BYTE *)(a1 + 506) >> 7);
  }
  StorpLogPerUnitStatistics(a1, 52);
  v13 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
  v14 = *(_DWORD *)(v13 + *(_QWORD *)(a1 + 40));
  while ( (v14 & 1) == 0 )
  {
    v15 = v14;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + *(_QWORD *)(a1 + 40)), v14 - 2, v14);
    if ( v15 == v14 )
      goto LABEL_22;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF) == 1 )
    KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
LABEL_22:
  if ( (*(_DWORD *)(a1 + 512) & 0x80u) == 0 )
  {
    RaUnitWaitForRemoveLock(a1);
  }
  else
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  RaUnitDeregisterFromIdleDetection(a1);
  RaidUnitConvertToZombieUnit(a1);
  v16 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = 0;
  if ( !v16 )
  {
    v52 = 0LL;
    IoGetActivityIdIrp(a2, &v52);
    v18 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v18 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_91;
      v20 = &EventNonReadWriteRequestComplete;
      goto LABEL_90;
    }
    if ( *(_BYTE *)v18 != 15 )
    {
      if ( *(_BYTE *)v18 != 27 )
        goto LABEL_91;
      if ( *(_BYTE *)(v18 + 1) == 7 && !*(_DWORD *)(v18 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v19 = *(int **)(a2 + 56);
          if ( v19 )
            v2 = *v19;
          LODWORD(v41) = *(_DWORD *)(a2 + 48);
          LODWORD(v40) = v2;
          McTemplateK0pqd_EtwWriteTransfer(v17, v18, &v52, a2, v40, v41);
        }
        goto LABEL_91;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_91;
      v20 = &EventPnpRequestComplete;
LABEL_90:
      LODWORD(v40) = *(_DWORD *)(a2 + 48);
      McTemplateK0pd_EtwWriteTransfer(v17, v20, &v52, a2, v40);
      goto LABEL_91;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_91;
    v21 = *(_QWORD *)(v18 + 8);
    v22 = 0LL;
    v46 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( *(_BYTE *)(v21 + 2) != 40 )
    {
      v34 = *(_BYTE *)(v21 + 72);
      v22 = *(_BYTE **)(v21 + 32);
      v23 = *(_BYTE *)(v21 + 11);
      v33 = *(_BYTE *)(v21 + 4);
      if ( *(_BYTE *)(v21 + 2) )
        goto LABEL_91;
LABEL_65:
      LOBYTE(v17) = v34 - 8;
      if ( (v17 & 0x5D) != 0 )
        goto LABEL_91;
      if ( *(_BYTE *)(v21 + 3) == 1 || !v22 || !v23 )
        goto LABEL_84;
      v35 = *v22 & 0x7F;
      if ( v35 == 114 || v35 == 115 )
      {
        v17 = (unsigned __int64)&v22[v23];
        v36 = 0;
        if ( (unsigned __int64)(v22 + 8) > v17 )
          goto LABEL_82;
        v25 = v22[2];
        v24 = v22[1] & 0xF;
        v26 = v22[3];
      }
      else
      {
        v17 = (unsigned __int64)&v22[v23];
        v36 = 0;
        if ( (unsigned __int64)(v22 + 8) > v17 )
          goto LABEL_82;
        v37 = v22 + 13;
        v24 = v22[2] & 0xF;
        v38 = v23;
        if ( (unsigned int)(unsigned __int8)v22[7] + 8 <= v23 )
          v38 = (unsigned __int8)v22[7] + 8;
        v17 = (unsigned __int64)&v22[v38];
        if ( (unsigned __int64)v37 <= v17 )
          v25 = v22[12];
        if ( (unsigned __int64)(v22 + 14) > v17 )
          v26 = 0;
        else
          v26 = *v37;
      }
      v36 = 1;
LABEL_82:
      if ( v36 )
        v27 = 1;
LABEL_84:
      if ( byte_140173441 < 0 )
      {
        if ( !v27 )
        {
          v26 = 0;
          v25 = 0;
          v24 = 0;
        }
        LOBYTE(v45) = v26;
        LOBYTE(v44) = v25;
        LOBYTE(v43) = v24;
        LOBYTE(v42) = v33;
        LOBYTE(v41) = *(_BYTE *)(v21 + 3);
        LODWORD(v40) = *(_DWORD *)(a2 + 48);
        McTemplateK0pduuuuup_EtwWriteTransfer(v17, v21, &v52, a2, v40, v41, v42, v43, v44, v45, a2);
      }
      goto LABEL_91;
    }
    v28 = 0LL;
    v47 = 0;
    if ( !*(_DWORD *)(v21 + 20) )
    {
      v29 = 0;
      v49 = *(_DWORD *)(v21 + 56);
      if ( v49 )
      {
        do
        {
          v17 = *(unsigned int *)(v21 + 4LL * v29 + 120);
          if ( (unsigned int)v17 >= 0x80 )
          {
            v30 = *(unsigned int *)(v21 + 16);
            if ( (unsigned int)v17 < (unsigned int)v30 )
            {
              v31 = (unsigned int)v17;
              v32 = *(_DWORD *)(v17 + v21) - 64;
              if ( v32 )
              {
                v17 = (unsigned int)(v32 - 1);
                if ( (_DWORD)v17 )
                {
                  if ( (_DWORD)v17 == 1 )
                  {
                    v17 = v31 + 40;
                    if ( v31 + 40 <= v30 )
                    {
                      if ( *(_DWORD *)(v31 + v21 + 12) )
                        v28 = (char *)(v31 + v21 + 32);
                      v22 = *(_BYTE **)(v31 + v21 + 24);
LABEL_50:
                      v33 = *(_BYTE *)(v31 + v21 + 8);
                      v23 = *(_BYTE *)(v31 + v21 + 9);
                      goto LABEL_59;
                    }
                  }
                }
                else
                {
                  v17 = v31 + 56;
                  if ( v31 + 56 <= v30 )
                  {
                    v47 = 1;
                    if ( *(_BYTE *)(v31 + v21 + 10) )
                      v28 = (char *)(v31 + v21 + 24);
                    v22 = *(_BYTE **)(v31 + v21 + 16);
                    v23 = *(_BYTE *)(v31 + v21 + 9);
                    v46 = *(_BYTE *)(v31 + v21 + 8);
                  }
                }
              }
              else
              {
                v17 = v31 + 40;
                if ( v31 + 40 <= v30 )
                {
                  if ( *(_BYTE *)(v31 + v21 + 10) )
                    v28 = (char *)(v31 + v21 + 24);
                  v22 = *(_BYTE **)(v31 + v21 + 16);
                  goto LABEL_50;
                }
              }
              if ( v47 )
                break;
            }
          }
          ++v29;
        }
        while ( v29 < v49 );
        v33 = v46;
LABEL_59:
        if ( v28 )
        {
          v34 = *v28;
          v27 = 0;
          goto LABEL_65;
        }
      }
    }
  }
LABEL_91:
  IofCompleteRequest((PIRP)a2, 0);
  return 0LL;
}
