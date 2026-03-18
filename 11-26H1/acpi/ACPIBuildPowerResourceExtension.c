/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x140057F90
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x140063BC4 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     AMLIReferenceHandleEx @ 0x140024CAC (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_L @ 0x1400385BC (WPP_RECORDER_SF_L.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(__int64 *a1, _QWORD *a2)
{
  int v4; // edx
  __int64 Pool2; // r8
  __int64 v7; // r8
  int v8; // r9d
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax

  Pool2 = ExAllocatePool2(64LL, 144LL, 1148216129LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 4LL;
    *(_QWORD *)(Pool2 + 32) = a1;
    AMLIReferenceHandleEx((__int64)a1);
    *(_BYTE *)(v7 + 40) = v9[1];
    *(_DWORD *)(v7 + 64) = 3;
    v10 = *v9;
    if ( (unsigned __int8)v10 < 6u )
      v8 = SystemPowerStateTranslation[v10];
    *(_DWORD *)(v7 + 44) = v8;
    *(_QWORD *)(v7 + 56) = v7 + 48;
    *(_QWORD *)(v7 + 48) = v7 + 48;
    *(_QWORD *)(v7 + 128) = v7 + 120;
    *(_QWORD *)(v7 + 120) = v7 + 120;
    *(_QWORD *)(v7 + 112) = v7 + 104;
    *(_QWORD *)(v7 + 104) = v7 + 104;
    v11 = *a1;
    *a2 = v7;
    *(_QWORD *)(v11 + 104) = v7;
    return 259LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 2;
      WPP_RECORDER_SF_L(
        WPP_GLOBAL_Control->DeviceExtension,
        v4,
        22,
        25,
        (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
        144);
    }
    return 3221225626LL;
  }
}
