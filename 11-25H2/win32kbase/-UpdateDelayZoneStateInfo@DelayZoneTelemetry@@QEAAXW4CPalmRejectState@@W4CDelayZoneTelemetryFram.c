/*
 * XREFs of ?UpdateDelayZoneStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@UtagRECT@@@Z @ 0x1402230C8
 * Callers:
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x14014CE10 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x140214944 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1402152B4 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z @ 0x1402153A0 (-RemoveDelayZoneFromList@DelayZonePalmRejection@@QEAA_NK@Z.c)
 * Callees:
 *     ?UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z @ 0x140155FBC (-UploadTelemetryData@DelayZoneTelemetry@@AEAAX_N@Z.c)
 *     GetUserHandedness @ 0x140157278 (GetUserHandedness.c)
 */

void __fastcall DelayZoneTelemetry::UpdateDelayZoneStateInfo(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v5; // r10d
  DelayZoneTelemetry *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rdi
  int v13; // eax

  v5 = *(_DWORD *)(a1 + 8);
  v8 = (DelayZoneTelemetry *)a1;
  v9 = v5 / 0xD5;
  v10 = v5 % 0xD5;
  if ( a4 == 4
    && (v9 = ((int)v10 - 1) / 0xD5u,
        a1 = 6LL * (((int)v10 - 1) % 0xD5u),
        *((_DWORD *)v8 + 12 * (((int)v10 - 1) % 0xD5u) + 524) == 3) )
  {
    v11 = v5 - 1;
    if ( !v5 )
      v11 = 0;
    *((_DWORD *)v8 + 2) = v11;
  }
  else
  {
    v12 = 6 * v10;
    *((_DWORD *)v8 + 12 * v10 + 516) = -1;
    *((_DWORD *)v8 + 2 * v12 + 517) = *a5;
    *((_DWORD *)v8 + 2 * v12 + 518) = a5[1];
    *((_DWORD *)v8 + 2 * v12 + 519) = (unsigned int)GetUserHandedness(a1, v9);
    v13 = a5[2];
    *((_DWORD *)v8 + 2 * v12 + 523) = 0;
    *((_DWORD *)v8 + 2 * v12 + 525) = v13;
    *((_DWORD *)v8 + 2 * v12 + 526) = a5[3];
    *((_QWORD *)v8 + v12 + 260) = 2LL;
    *((_DWORD *)v8 + 2 * v12 + 522) = a2;
    *((_DWORD *)v8 + 2 * v12 + 524) = a4;
    *((_DWORD *)v8 + 2 * v12 + 527) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    ++*((_DWORD *)v8 + 2);
    if ( a4 != 3 )
      DelayZoneTelemetry::UploadTelemetryData(v8, 0);
  }
}
