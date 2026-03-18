/*
 * XREFs of ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401BEF70
 * Callers:
 *     ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020D9F0 (-CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z @ 0x14006B110 (-ReferenceDwmProcess@DXGSESSIONDATA@@QEAAJPEAPEAU_EPROCESS@@@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140213414 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 *     ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1402A47D0 (-GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize(struct _EPROCESS **this, struct DXGVMBUSCHANNEL *a2)
{
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v6; // rcx
  int v7; // ebx
  struct _EPROCESS *CurrentProcess; // rax

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGSESSIONMGR::GetSessionData(*((DXGSESSIONMGR **)Global + 123));
  if ( SessionData )
  {
    v7 = DXGSESSIONDATA::ReferenceDwmProcess(SessionData, this + 3);
    if ( v7 >= 0 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v6);
      this[4] = CurrentProcess;
      ObfReferenceObject(CurrentProcess);
      v7 = DXGVMBUSCHANNEL::RegisterSubscriber(a2, 0x706D6F63u, (struct IDXGCHANNELSUBSCRIBER *)this, this + 1);
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 54;
      }
    }
  }
  else
  {
    v7 = -1073741790;
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 43;
  }
  return (unsigned int)v7;
}
