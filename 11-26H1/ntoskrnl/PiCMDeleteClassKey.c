/*
 * XREFs of PiCMDeleteClassKey @ 0x140B6E3E4
 * Callers:
 *     PiCMHandleIoctl @ 0x140958980 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x14046E0D0 (PiControlFreeUserModeCallersBuffer.c)
 *     _CmDeleteInstallerClass @ 0x14089D0DC (_CmDeleteInstallerClass.c)
 *     _CmDeleteInterfaceClass @ 0x14089D234 (_CmDeleteInterfaceClass.c)
 *     PiAuDoesClientHaveAccess @ 0x14094E8B0 (PiAuDoesClientHaveAccess.c)
 *     PiCMCaptureObjectInputData @ 0x140959F08 (PiCMCaptureObjectInputData.c)
 *     PiCMReturnBasicResultData @ 0x14095AF34 (PiCMReturnBasicResultData.c)
 *     PiPnpRtlBeginOperation @ 0x140968528 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140968708 (PiPnpRtlEndOperation.c)
 */

__int64 __fastcall PiCMDeleteClassKey(void *a1, unsigned int a2, void *a3, unsigned int a4, int a5, char *P)
{
  char *v6; // r15
  int v9; // ebx
  int v10; // eax
  __int64 v11; // rbx
  int v12; // edi
  __int128 v14; // [rsp+30h] [rbp-30h] BYREF
  __int128 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v6 = P;
  v16 = 0LL;
  P = 0LL;
  *(_DWORD *)v6 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v9 = PiCMCaptureObjectInputData(a1, a2, a5, (__int64)&v14);
  if ( v9 >= 0 )
  {
    if ( PiAuDoesClientHaveAccess(2u) )
    {
      v11 = v15;
      v12 = DWORD2(v14);
      if ( (_QWORD)v15
        && !HIDWORD(v15)
        && a3
        && a4 >= 8
        && (unsigned int)(DWORD2(v14) - 2) <= 1
        && (unsigned int)(DWORD1(v14) - 1) <= 1 )
      {
        v10 = PiPnpRtlBeginOperation(&P);
        if ( v10 >= 0 )
        {
          if ( v12 == 3 )
            v10 = CmDeleteInterfaceClass(*(__int64 *)&PiPnpRtlCtx, v11, 0);
          else
            v10 = CmDeleteInstallerClass(*(__int64 *)&PiPnpRtlCtx, v11, 0);
        }
      }
      else
      {
        v10 = -1073741811;
      }
    }
    else
    {
      v10 = -1073741790;
    }
    v9 = PiCMReturnBasicResultData(v10, v16, a3, a4, v6);
  }
  if ( (_QWORD)v15 )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v15);
  if ( P )
    PiPnpRtlEndOperation(P);
  return (unsigned int)v9;
}
