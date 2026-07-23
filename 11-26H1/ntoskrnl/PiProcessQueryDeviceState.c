/*
 * XREFs of PiProcessQueryDeviceState @ 0x1409B0470
 * Callers:
 *     PipProcessStartPhase3 @ 0x1409AB9E8 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x1409B09D4 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PiUpdateDeviceResourceLists @ 0x140774DA4 (PiUpdateDeviceResourceLists.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 *     PnpRequestDeviceRemoval @ 0x14096F3A8 (PnpRequestDeviceRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x1409AF220 (PnpCheckForActiveDependencies.c)
 *     PnpPoFxActivateDevice @ 0x1409B02B0 (PnpPoFxActivateDevice.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PipSetDevNodeUserFlags @ 0x1409B08C0 (PipSetDevNodeUserFlags.c)
 *     PiUpdateGuestAssignedState @ 0x1409B0A78 (PiUpdateGuestAssignedState.c)
 *     PipClearDevNodeUserFlags @ 0x1409B1158 (PipClearDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x140B2F1C0 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140B4C090 (IopDecDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x140B715B8 (IopResourceRequirementsChanged.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rdx
  unsigned int updated; // esi
  int v9; // r8d
  char *v10; // rcx
  _WORD v12[40]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v3 = *(_QWORD *)(v1 + 40);
  PiPnpRtlBeginOperation(&P);
  PnpPoFxActivateDevice(v3, 256);
  v13 = 0LL;
  memset_0(v12, 0, 0x48uLL);
  v12[0] = 5147;
  if ( (int)IopSynchronousCall(a1, (unsigned int)v12, -1073741637, 0, (__int64)&v13) < 0 )
  {
    updated = 0;
  }
  else
  {
    v4 = v13;
    if ( (v13 & 2) != 0 )
      PipSetDevNodeUserFlags(v3, 2LL);
    else
      PipClearDevNodeUserFlags(v3, 2LL);
    if ( (v4 & 0x40) != 0 )
      PipSetDevNodeUserFlags(v3, 64LL);
    else
      PipClearDevNodeUserFlags(v3, 64LL);
    v5 = *(_DWORD *)(v3 + 400) & 8;
    if ( (v4 & 0x20) != 0 )
    {
      if ( !v5 )
      {
        PipSetDevNodeUserFlags(v3, 8LL);
        IopIncDisableableDepends(v3);
      }
    }
    else if ( v5 )
    {
      IopDecDisableableDepends(v3);
      PipClearDevNodeUserFlags(v3, 8LL);
    }
    v6 = v4 >> 8;
    LOBYTE(v6) = BYTE1(v4) & 1;
    updated = PiUpdateGuestAssignedState(v3, v6);
    if ( (v4 & 9) != 0 || (v4 & 0x14) == 4 )
    {
      if ( PnpCheckForActiveDependencies(v3, 3u) )
      {
        v9 = 51;
LABEL_13:
        PnpRequestDeviceRemoval(v3, 0, v9, 0);
        updated = -1073741823;
        goto LABEL_20;
      }
      if ( (v4 & 9) != 0 )
      {
        v9 = (v4 & 1) != 0 ? 29 : 24;
        goto LABEL_13;
      }
    }
    if ( (v4 & 0x10) != 0 )
    {
      LOBYTE(v7) = (v4 & 4) != 0;
      IopResourceRequirementsChanged(a1, v7);
    }
    else
    {
      if ( (v4 & 4) != 0 )
      {
        v9 = 43;
        goto LABEL_13;
      }
      if ( (v4 & 0x80u) != 0 )
        updated = PiUpdateDeviceResourceLists(v3);
    }
  }
LABEL_20:
  PoFxIdleDevice(*(_QWORD *)(v3 + 32));
  v10 = (char *)P;
  *(_DWORD *)(v3 + 704) &= ~0x100u;
  if ( v10 )
    PiPnpRtlEndOperation(v10);
  return updated;
}
