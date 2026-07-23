/*
 * XREFs of PopPlNotifyDeviceDState @ 0x1403BD6EC
 * Callers:
 *     PopPepDeviceDState @ 0x1403BD1C4 (PopPepDeviceDState.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     _tlgCreate1Sz_char @ 0x140453678 (_tlgCreate1Sz_char.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlCalculateDevicePowerDraw @ 0x140615364 (PopPlCalculateDevicePowerDraw.c)
 *     PopPlPublishSystemPowerChange @ 0x140615730 (PopPlPublishSystemPowerChange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopPlNotifyDeviceDState(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // r13
  bool v8; // cc
  __int64 v9; // r12
  int v10; // ebx
  int v11; // eax
  unsigned int v12; // r15d
  const char *v13; // rdx
  int v14; // r10d
  int v15; // r11d
  const char *v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // ecx
  int v20; // r8d
  int v21; // r11d
  int v22; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+28h] [rbp-D8h]
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v29[9]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v30[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v31[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v32[16]; // [rsp+C0h] [rbp-40h] BYREF
  int *v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+D8h] [rbp-28h]
  int *v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int *v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]
  int *v39; // [rsp+100h] [rbp+0h]
  __int64 v40; // [rsp+108h] [rbp+8h]

  v4 = *(_QWORD *)(a1 + 1224);
  v24 = a3;
  if ( v4 )
  {
    v8 = a3 < a2;
    if ( a3 > a2 )
    {
      if ( !a4 )
        return;
      v8 = a3 < a2;
    }
    if ( !v8 || !a4 )
    {
      v9 = *(_QWORD *)(v4 + 16);
      *(_BYTE *)(v9 + 24) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 16));
      v10 = *(_DWORD *)(v4 + 32);
      v11 = PopPlCalculateDevicePowerDraw(a1, &v24, 0LL, 0LL);
      *(_DWORD *)(v4 + 32) = v11;
      v12 = v11 - v10;
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v29[4] = (__int64)&v24;
        v13 = "Beginning";
        LOWORD(v24) = 1;
        v29[6] = (__int64)v30;
        v29[8] = *(_QWORD *)(a1 + 224);
        v30[0] = *(unsigned __int16 *)(a1 + 216);
        if ( a4 )
          v13 = "Completed";
        v29[5] = 2LL;
        v29[7] = 2LL;
        v30[1] = 0;
        tlgCreate1Sz_char(v31, v13);
        if ( a3 )
        {
          if ( a3 == v15 )
          {
            v16 = "PowerDeviceD0";
          }
          else if ( a3 == v14 )
          {
            v16 = "PowerDeviceD1";
          }
          else if ( a3 == 3 )
          {
            v16 = "PowerDeviceD2";
          }
          else if ( a3 == v15 + 3 )
          {
            v16 = "PowerDeviceD3";
          }
          else
          {
            v16 = "PowerDeviceMaximum";
            if ( a3 != 5 )
              v16 = "<unknown>";
          }
        }
        else
        {
          v16 = "PowerDeviceUnspecified";
        }
        tlgCreate1Sz_char(v32, v16);
        v34 = v17;
        v33 = (int *)&v25;
        v26 = *(_DWORD *)(v4 + 32);
        v35 = &v26;
        v37 = (int *)&v27;
        v18 = *(_QWORD *)(v4 + 16);
        v36 = v17;
        v38 = v17;
        v25 = v12;
        v27 = v12;
        v19 = *(_DWORD *)(v18 + 28);
        v39 = &v28;
        v28 = v12 + v19;
        v40 = v17;
        tlgWriteEx_EtwWriteEx((int)&dword_140E07560, (int)&dword_140051484, v20, v21, v22, v23, 0xBu, (__int64)v29);
      }
      PopPlPublishSystemPowerChange(v9, v12);
      KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 16), *(_BYTE *)(v9 + 24));
    }
  }
}
