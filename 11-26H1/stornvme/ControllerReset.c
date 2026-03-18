/*
 * XREFs of ControllerReset @ 0x140007840
 * Callers:
 *     NVMeControllerPowerUp @ 0x1400075D0 (NVMeControllerPowerUp.c)
 *     NVMeHwFindAdapter @ 0x140012650 (NVMeHwFindAdapter.c)
 *     NVMeControllerReset @ 0x1400175BC (NVMeControllerReset.c)
 *     NVMeControllerPanicResetActionWorkItem @ 0x140024790 (NVMeControllerPanicResetActionWorkItem.c)
 * Callees:
 *     CheckDpcWatchdogTimerExpireSoon @ 0x140006AC0 (CheckDpcWatchdogTimerExpireSoon.c)
 *     NVMeIsDeviceGone @ 0x140006B90 (NVMeIsDeviceGone.c)
 *     FillControllerRuntimeLog @ 0x1400124C4 (FillControllerRuntimeLog.c)
 *     SendNVMeEventNotification @ 0x1400306EC (SendNVMeEventNotification.c)
 *     __security_check_cookie @ 0x140032530 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerReset(__int64 a1, char a2)
{
  __int64 v2; // rbx
  unsigned int v3; // esi
  char v4; // r12
  char v5; // r15
  unsigned int v6; // kr00_4
  char v7; // r13
  unsigned int v8; // ebp
  int v9; // ebx
  __int64 v11; // rax
  int v12; // eax
  unsigned int i; // r14d
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  const wchar_t *v18; // rdx
  int v19; // eax
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r9
  signed __int32 v26[10]; // [rsp+0h] [rbp-118h] BYREF
  const wchar_t *v27; // [rsp+28h] [rbp-F0h]
  int v28; // [rsp+30h] [rbp-E8h]
  _OWORD *v29; // [rsp+38h] [rbp-E0h]
  int v30; // [rsp+40h] [rbp-D8h]
  __int64 *v31; // [rsp+48h] [rbp-D0h]
  int *v32; // [rsp+50h] [rbp-C8h]
  char v33; // [rsp+60h] [rbp-B8h]
  int v34; // [rsp+64h] [rbp-B4h] BYREF
  __int64 v35; // [rsp+68h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+70h] [rbp-A8h] BYREF
  _OWORD v37[5]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v38; // [rsp+D0h] [rbp-48h]

  v2 = *(_QWORD *)(a1 + 176);
  memset(v37, 0, sizeof(v37));
  v3 = 0;
  v35 = 0LL;
  v4 = 0;
  v33 = a2;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 204);
  v7 = 0;
  v38 = 0LL;
  v8 = v6 / 0xA;
  v9 = *(_DWORD *)(v2 + 20);
  v11 = *(_QWORD *)(a1 + 176);
  v36 = 0LL;
  v12 = *(_DWORD *)(v11 + 28);
  if ( (v9 & 1) != 0 && (v12 & 1) == 0 )
  {
    for ( i = 0; i < v8; ++i )
    {
      if ( (v12 & 1) != 0 )
        goto LABEL_18;
      if ( NVMeIsDeviceGone(a1) )
      {
        v4 = 1;
        goto LABEL_10;
      }
      if ( CheckDpcWatchdogTimerExpireSoon(v14, 0, v15, v16) )
      {
LABEL_24:
        v5 = 1;
        goto LABEL_10;
      }
      StorPortExtendedFunction(81LL, a1, 10000LL, v17);
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    }
    if ( (v12 & 1) == 0 && i == v8 )
      goto LABEL_28;
  }
LABEL_18:
  *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) = v9 & 0xFFFFFFFE;
  _InterlockedOr(v26, 0);
  while ( 1 )
  {
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( v3 >= v8 )
      break;
    if ( (v21 & 1) == 0 )
      goto LABEL_29;
    if ( NVMeIsDeviceGone(a1) )
    {
      v4 = 1;
      goto LABEL_29;
    }
    if ( CheckDpcWatchdogTimerExpireSoon(v22, 0, v23, v24) )
      goto LABEL_24;
    StorPortExtendedFunction(81LL, a1, 10000LL, v25);
    ++v3;
  }
  if ( (v21 & 1) != 0 && v3 == v8 )
LABEL_28:
    v7 = 1;
LABEL_29:
  if ( v7 || v4 )
  {
LABEL_10:
    ++*(_DWORD *)(a1 + 4148);
    if ( v33 )
    {
      FillControllerRuntimeLog(a1, v37);
      LODWORD(v35) = *(_DWORD *)(a1 + 24);
      v18 = L"Controller Reset failed due to surprise remove";
      v19 = *(_DWORD *)(a1 + 28);
      HIDWORD(v35) = v19;
      if ( !v4 )
        v18 = L"Controller Reset failed";
      v34 = -1056964606;
      v32 = &v34;
      v31 = &v35;
      v30 = 8;
      v29 = v37;
      v28 = 88;
      v27 = v18;
      v26[8] = (unsigned __int16)v19;
      StorPortNotification(4109LL, a1, 0LL);
      *(_QWORD *)&v36 = v36 | 0x400;
      SendNVMeEventNotification(a1, &v36, 0LL, 0LL);
    }
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4004));
      return 3238002700LL;
    }
    else
    {
      result = 3238002689LL;
      if ( v4 )
        return 3238002697LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 4144);
    return 0LL;
  }
  return result;
}
