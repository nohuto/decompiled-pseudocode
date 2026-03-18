/*
 * XREFs of ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x14020E2AC
 * Callers:
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x14020EAEC (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x140083240 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x14020D788 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x14020D820 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::Initialize(DXGVAILGUESTOBJECT *this, __int64 a2, const struct _GUID *a3)
{
  int VmBusGuestSubscribers; // ebx
  struct _GUID v6; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)&v6.Data1 = 0LL;
  VmBusGuestSubscribers = CreateVmBusChannel(0LL, &v6, a3);
  if ( VmBusGuestSubscribers >= 0 )
  {
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v6.Data1);
    VmBusGuestSubscribers = DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(this);
    if ( VmBusGuestSubscribers < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2003;
      DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 1988;
  }
  return (unsigned int)VmBusGuestSubscribers;
}
