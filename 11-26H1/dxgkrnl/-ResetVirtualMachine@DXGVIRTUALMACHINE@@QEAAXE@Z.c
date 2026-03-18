/*
 * XREFs of ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1401F6FD4
 * Callers:
 *     ?DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F5250 (-DestroyVirtualMachine@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ @ 0x1401F6F28 (-ResetVirtualMachine@DXGPROCESSVMWP@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0p_EtwWriteTransfer @ 0x140011178 (McTemplateK0p_EtwWriteTransfer.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x140046930 (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z @ 0x14004A5A0 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@E@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14018F6F0 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1401F6CF0 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401F79D4 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     UnmapGpadl @ 0x1402352A0 (UnmapGpadl.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

void __fastcall DXGVIRTUALMACHINE::ResetVirtualMachine(DXGVIRTUALMACHINE *this, char a2)
{
  __int64 v4; // rcx
  char *v5; // rsi
  char *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  _BYTE v9[48]; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-48h] BYREF

  if ( !*((_BYTE *)this + 337) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0p_EtwWriteTransfer((__int64)&DxgkControlGuid_Context, (__int64)&EventResetVirtualMachine);
    DXGVIRTUALMACHINE::PauseVmBusChannels(this);
    v4 = *((_QWORD *)this + 7);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
    if ( a2 )
      DXGVIRTUALMACHINE::SetVailObject(this, 0LL);
    v5 = (char *)this + 24;
    while ( 1 )
    {
      DXGPUSHLOCK::AcquireExclusive((DXGVIRTUALMACHINE *)((char *)this + 128));
      v6 = *(char **)v5;
      if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 || (v7 = *(_QWORD *)v6, *(char **)(*(_QWORD *)v6 + 8LL) != v6) )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      *(_QWORD *)(v7 + 8) = v5;
      *((_QWORD *)this + 17) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 128, 0LL);
      KeLeaveCriticalRegion();
      if ( v6 == v5 )
        break;
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = 0LL;
      CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess(
        (CEnsureCurrentDxgProcess *)v9,
        (struct DXGPROCESS *)(v6 - 608),
        1u);
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)(v6 - 608));
      CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)v9);
    }
    KeUnstackDetachProcess(&ApcState);
    v8 = *((unsigned int *)this + 76);
    if ( (_DWORD)v8 )
    {
      UnmapGpadl(*((_QWORD *)this + 7), v8, 2056LL, *((_QWORD *)this + 39));
      *((_DWORD *)this + 76) = 0;
      *((_QWORD *)this + 40) = 0LL;
      *((_QWORD *)this + 39) = 0LL;
    }
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXGVIRTUALMACHINE *)((char *)this + 160));
    *(_WORD *)((char *)this + 337) = 257;
  }
}
