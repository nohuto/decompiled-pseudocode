/*
 * XREFs of ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x140225234
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14018A228 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1401A34FC (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x14021A490 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x14021AB34 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 * Callees:
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x1401930EC (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 *     GetUserHandedness @ 0x140193BEC (GetUserHandedness.c)
 */

void __fastcall DelayZoneTelemetry::UpdateDelayZoneStateInfo(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  DelayZoneTelemetry *v8; // rsi
  __int64 v9; // r11
  int v10; // eax
  __int64 v11; // rdi
  int v12; // eax

  v5 = *(_DWORD *)(a1 + 8);
  v8 = (DelayZoneTelemetry *)a1;
  v9 = v5 % 0xD5;
  if ( a4 == 4 && (a1 = 6LL * (((int)v9 - 1) % 0xD5u), *((_DWORD *)v8 + 12 * (((int)v9 - 1) % 0xD5u) + 524) == 3) )
  {
    v10 = v5 - 1;
    if ( !v5 )
      v10 = 0;
    *((_DWORD *)v8 + 2) = v10;
  }
  else
  {
    v11 = 6 * v9;
    *((_DWORD *)v8 + 12 * v9 + 516) = -1;
    *((_DWORD *)v8 + 2 * v11 + 517) = *a5;
    *((_DWORD *)v8 + 2 * v11 + 518) = a5[1];
    *((_DWORD *)v8 + 2 * v11 + 519) = (unsigned int)GetUserHandedness(a1);
    v12 = a5[2];
    *((_DWORD *)v8 + 2 * v11 + 523) = 0;
    *((_DWORD *)v8 + 2 * v11 + 525) = v12;
    *((_DWORD *)v8 + 2 * v11 + 526) = a5[3];
    *((_QWORD *)v8 + v11 + 260) = 2LL;
    *((_DWORD *)v8 + 2 * v11 + 522) = a2;
    *((_DWORD *)v8 + 2 * v11 + 524) = a4;
    *((_DWORD *)v8 + 2 * v11 + 527) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ++*((_DWORD *)v8 + 2);
    if ( a4 != 3 )
      DelayZoneTelemetry::UploadTelemetryData(v8, 0);
  }
}
