/*
 * XREFs of IopMountBootLayerCallout @ 0x140CC3D20
 * Callers:
 *     <none>
 * Callees:
 *     HeadlessKernelAddLogEntry @ 0x1404E6FF8 (HeadlessKernelAddLogEntry.c)
 *     PnpBootDeviceWait @ 0x1405DADA4 (PnpBootDeviceWait.c)
 *     RtlDuplicateUnicodeString @ 0x1409791B0 (RtlDuplicateUnicodeString.c)
 *     IopCreateArcNamesDisk @ 0x140CC2C1C (IopCreateArcNamesDisk.c)
 *     PnpWaitForDevicesToStart @ 0x140CC9A9C (PnpWaitForDevicesToStart.c)
 *     IopMountCimfsLayer @ 0x140D0970C (IopMountCimfsLayer.c)
 *     IopMountCompositeLayer @ 0x140D09874 (IopMountCompositeLayer.c)
 *     SbpAddTransportToInstance @ 0x140D098DC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140D09AC8 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140D09EA0 (SbpWaitForVmbus.c)
 */

void __fastcall IopMountBootLayerCallout(_QWORD *Parameter)
{
  _DWORD **v1; // rdx
  _DWORD *v3; // r9
  UNICODE_STRING *v4; // rdi
  int started; // ebx
  int v6; // eax
  _DWORD *v7; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v8; // [rsp+28h] [rbp-20h]
  UNICODE_STRING *v9; // [rsp+30h] [rbp-18h]

  v1 = (_DWORD **)Parameter[1];
  v3 = (_DWORD *)*Parameter;
  v4 = (UNICODE_STRING *)Parameter[2];
  if ( v1 && **v1 != 1 )
  {
    started = -1073741811;
    goto LABEL_23;
  }
  switch ( *v3 )
  {
    case 1:
      v8 = 0LL;
      v7 = v3;
      v9 = v4;
      if ( v1 )
        v8 = *v1;
      IopCreateArcNamesDisk();
      v6 = PnpBootDeviceWait(KeLoaderBlock_0, 1, (__int64)IopMountBlockIoLayerCallback, (__int64)&v7);
      goto LABEL_22;
    case 2:
      v6 = IopMountCimfsLayer(v3, v1, v4);
      goto LABEL_22;
    case 3:
      v6 = IopMountCompositeLayer(v3, v1, v4);
      goto LABEL_22;
    case 4:
      started = SbpStartLanman();
      if ( started < 0 )
        goto LABEL_23;
      started = SbpWaitForVmbus();
      if ( started < 0 )
        goto LABEL_23;
      started = SbpAddTransportToInstance();
      if ( started < 0 || !v4 )
        goto LABEL_23;
      v6 = RtlDuplicateUnicodeString(0, &OsSharePath, v4);
LABEL_22:
      started = v6;
      goto LABEL_23;
  }
  if ( (unsigned int)(*v3 - 5) < 2 )
  {
    started = 0;
    if ( !(unsigned int)PnpWaitForDevicesToStart() )
    {
      HeadlessKernelAddLogEntry();
      LODWORD(IopInitFailCode) = 27;
      started = -1073740675;
    }
  }
  else
  {
    started = -1073741637;
  }
LABEL_23:
  *((_DWORD *)Parameter + 6) = started;
}
