/*
 * XREFs of PiProcessQueryDeviceState @ 0x14090E340
 * Callers:
 *     PipProcessStartPhase3 @ 0x140908998 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14090E8A4 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1404B2604 (PoFxIdleDevice.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PiUpdateDeviceResourceLists @ 0x140771DA4 (PiUpdateDeviceResourceLists.c)
 *     PnpCheckForActiveDependencies @ 0x14090D0F0 (PnpCheckForActiveDependencies.c)
 *     PnpPoFxActivateDevice @ 0x14090E180 (PnpPoFxActivateDevice.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     PipSetDevNodeUserFlags @ 0x14090E790 (PipSetDevNodeUserFlags.c)
 *     PiUpdateGuestAssignedState @ 0x14090E948 (PiUpdateGuestAssignedState.c)
 *     PipClearDevNodeUserFlags @ 0x14090F028 (PipClearDevNodeUserFlags.c)
 *     PnpRequestDeviceRemoval @ 0x14091493C (PnpRequestDeviceRemoval.c)
 *     PiPnpRtlBeginOperation @ 0x1409A7AC8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1409A7CB4 (PiPnpRtlEndOperation.c)
 *     IopIncDisableableDepends @ 0x140B2D140 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140B4A300 (IopDecDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x140B6E108 (IopResourceRequirementsChanged.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int updated; // esi
  __int64 v10; // r8
  PVOID v11; // rcx
  _WORD v13[40]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+8h] BYREF
  PVOID P; // [rsp+A8h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 312);
  P = 0LL;
  v4 = *(_QWORD *)(v2 + 40);
  PiPnpRtlBeginOperation(&P, a2);
  PnpPoFxActivateDevice(v4, 256);
  v14 = 0LL;
  memset_0(v13, 0, 0x48uLL);
  v13[0] = 5147;
  if ( (int)IopSynchronousCall(a1, (unsigned int)v13, -1073741637, 0, (__int64)&v14) < 0 )
  {
    updated = 0;
  }
  else
  {
    v5 = v14;
    if ( (v14 & 2) != 0 )
      PipSetDevNodeUserFlags(v4, 2LL);
    else
      PipClearDevNodeUserFlags(v4, 2LL);
    if ( (v5 & 0x40) != 0 )
      PipSetDevNodeUserFlags(v4, 64LL);
    else
      PipClearDevNodeUserFlags(v4, 64LL);
    v6 = *(_DWORD *)(v4 + 400) & 8;
    if ( (v5 & 0x20) != 0 )
    {
      if ( !v6 )
      {
        PipSetDevNodeUserFlags(v4, 8LL);
        IopIncDisableableDepends(v4);
      }
    }
    else if ( v6 )
    {
      IopDecDisableableDepends(v4);
      PipClearDevNodeUserFlags(v4, 8LL);
    }
    v7 = v5 >> 8;
    LOBYTE(v7) = BYTE1(v5) & 1;
    updated = PiUpdateGuestAssignedState(v4, v7);
    if ( (v5 & 9) != 0 || (v5 & 0x14) == 4 )
    {
      if ( PnpCheckForActiveDependencies(v4, 3u) )
      {
        v10 = 51LL;
LABEL_13:
        PnpRequestDeviceRemoval(v4, 0LL, v10);
        updated = -1073741823;
        goto LABEL_20;
      }
      if ( (v5 & 9) != 0 )
      {
        v10 = (v5 & 1) != 0 ? 29 : 24;
        goto LABEL_13;
      }
    }
    if ( (v5 & 0x10) != 0 )
    {
      LOBYTE(v8) = (v5 & 4) != 0;
      IopResourceRequirementsChanged(a1, v8);
    }
    else
    {
      if ( (v5 & 4) != 0 )
      {
        v10 = 43LL;
        goto LABEL_13;
      }
      if ( (v5 & 0x80u) != 0 )
        updated = PiUpdateDeviceResourceLists(v4);
    }
  }
LABEL_20:
  PoFxIdleDevice(*(_QWORD *)(v4 + 32));
  v11 = P;
  *(_DWORD *)(v4 + 704) &= ~0x100u;
  if ( v11 )
    PiPnpRtlEndOperation(v11);
  return updated;
}
