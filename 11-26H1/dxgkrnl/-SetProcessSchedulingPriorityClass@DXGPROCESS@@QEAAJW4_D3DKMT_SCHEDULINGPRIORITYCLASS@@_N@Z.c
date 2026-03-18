/*
 * XREFs of ?SetProcessSchedulingPriorityClass@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULINGPRIORITYCLASS@@_N@Z @ 0x1401F7574
 * Callers:
 *     DxgkSetProcessSchedulingPriorityClass @ 0x1404257E0 (DxgkSetProcessSchedulingPriorityClass.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x140017370 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x140017CB8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x140055254 (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?VidSchSetPriorityClassProcess@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_SCHEDULINGPRIORITYCLASS@@H@Z @ 0x140063FE0 (-VidSchSetPriorityClassProcess@VIDSCH_EXPORT@@QEAAJPEAVDXGPROCESS@@W4_D3DKMT_SCHEDULINGPRIORITYC.c)
 *     ?VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@_N@Z @ 0x140075A84 (-VidSchSyncPriorityDevice@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGPROCESS::SetProcessSchedulingPriorityClass(DXGPROCESS *this, unsigned int a2, unsigned __int8 a3)
{
  unsigned int v4; // r15d
  int v6; // edi
  __int64 i; // rbx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v10; // r14
  struct DXGADAPTER *v11; // rbx
  struct DXGDEVICE *Current; // rax
  struct DXGDEVICE *v13; // rdi
  _QWORD v14[2]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v15[16]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v16[144]; // [rsp+70h] [rbp-C8h] BYREF

  v4 = a3;
  if ( !DXGFASTMUTEX::IsOwner((DXGPROCESS *)((char *)this + 104)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3695;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsMutexOwner()", 3695LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = 0;
  for ( i = 0LL; (unsigned int)i < 2; i = (unsigned int)(i + 1) )
  {
    if ( *((_QWORD *)DXGGLOBAL::GetGlobal() + i + 35) )
    {
      Global = DXGGLOBAL::GetGlobal();
      v6 = VIDSCH_EXPORT::VidSchSetPriorityClassProcess(*((VIDSCH_EXPORT **)Global + i + 35), this, a2, v4);
      if ( v6 < 0 )
        break;
    }
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  *((_DWORD *)this + 78) = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 216, 0LL);
  *((_QWORD *)this + 28) = KeGetCurrentThread();
  v10 = (_QWORD *)*((_QWORD *)this + 40);
  v14[0] = (char *)this + 320;
  while ( 1 )
  {
    v14[1] = v10;
    Current = (struct DXGDEVICE *)DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v14);
    v13 = Current;
    if ( !Current )
      break;
    v11 = *(struct DXGADAPTER **)(*((_QWORD *)Current + 2) + 16LL);
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15, Current);
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, v11, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL) >= 0 && (*((_BYTE *)v13 + 1917) & 1) == 0 )
      VIDSCH_EXPORT::VidSchSyncPriorityDevice(
        *(VIDSCH_EXPORT **)(*((_QWORD *)v13 + 2) + 736LL),
        *((struct _VIDSCH_DEVICE **)v13 + 100),
        v4);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v15);
    v10 = (_QWORD *)*v10;
  }
  *((_QWORD *)this + 28) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 216, 0LL);
  KeLeaveCriticalRegion();
  return 0LL;
}
