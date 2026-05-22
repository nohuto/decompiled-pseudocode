/*
 * XREFs of ?ShouldAttachDevice@MPCEyeGazeProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1801C8810
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ?MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z @ 0x1801C8564 (-MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_@ISMTracing@@QEAAXKK@Z.c)
 */

bool __fastcall MPCEyeGazeProcessor::ShouldAttachDevice(MPCEyeGazeProcessor *this, struct DeviceInfo *a2)
{
  int v3; // edi
  ISMTracing *v4; // rcx

  if ( (*((_DWORD *)a2 + 1) & 0x200000) != 0 )
  {
    v3 = **((_DWORD **)this + 6);
    if ( ISMTracing::IsEnabled() )
    {
      ISMTracing::Instance();
      ISMTracing::MPCEyeGazeProcessor_UnexpectedSecondEyeGazeProcessor_(v4, *(_DWORD *)a2, v3);
    }
  }
  return 0;
}
