/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x14020D9F0
 * Callers:
 *     NtDxgkVailConnect @ 0x140210E60 (NtDxgkVailConnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z @ 0x1401BEF70 (-Initialize@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x14020CBC0 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x14020CE30 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x140213414 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 *v3; // rsi
  int DefaultSecurityDescriptor; // ebx
  void *v5; // r14
  __int64 v6; // rbx
  __int64 CurrentProcess; // rax
  void *v8; // r12
  DXGVMBUSCHANNEL *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  void *v12; // r15
  struct DXGVMBUSCHANNEL *v13; // rdx
  __int64 v14; // rcx
  char v15; // bl
  char v16; // al
  _BYTE v18[16]; // [rsp+20h] [rbp-10h] BYREF
  void *v19; // [rsp+70h] [rbp+40h] BYREF
  void *v20; // [rsp+78h] [rbp+48h] BYREF
  void *v21; // [rsp+80h] [rbp+50h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
  v2 = *((_QWORD *)this + 15);
  v3 = (__int64 *)((char *)this + 128);
  if ( !v2 && !*v3 )
  {
    v19 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v19);
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL);
      v5 = v19;
      WdLogGlobalForLineNumber = 1748;
LABEL_25:
      if ( v5 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v5);
      goto LABEL_27;
    }
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 0, 0x10000000u, &v21);
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1772;
LABEL_22:
      v8 = v21;
      v5 = v19;
LABEL_23:
      if ( v8 )
        DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v8);
      goto LABEL_25;
    }
    v6 = operator new(0x30uLL, 0x4B677844u, 256LL);
    if ( !v6 )
    {
      *((_QWORD *)this + 15) = 0LL;
      DefaultSecurityDescriptor = -1073741801;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1789;
      goto LABEL_22;
    }
    CurrentProcess = *((_QWORD *)this + 13);
    *(_QWORD *)v6 = &DXG_HOST_REMOTEOBJECTCHANNEL::`vftable';
    *(_QWORD *)(v6 + 8) = 0LL;
    *(_WORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)(v6 + 32) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    if ( !CurrentProcess )
      CurrentProcess = PsGetCurrentProcess(&DXG_HOST_REMOTEOBJECTCHANNEL::`vftable');
    *(_QWORD *)(v6 + 24) = CurrentProcess;
    *(_QWORD *)(v6 + 32) = v19;
    v5 = 0LL;
    *(_QWORD *)(v6 + 40) = v21;
    v8 = 0LL;
    v9 = (DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
    *((_QWORD *)this + 15) = v6;
    DefaultSecurityDescriptor = DXGVMBUSCHANNEL::RegisterSubscriber(
                                  v9,
                                  0x6F746D72u,
                                  (struct IDXGCHANNELSUBSCRIBER *)v6,
                                  (struct IDXGCHANNEL **)(v6 + 8));
    if ( DefaultSecurityDescriptor < 0 )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1810;
      goto LABEL_27;
    }
    DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, 1, 3u, &v20);
    if ( DefaultSecurityDescriptor >= 0 )
    {
      v10 = operator new(0x38uLL, 0x4B677844u, 256LL);
      if ( v10 )
      {
        v11 = *((_QWORD *)this + 13);
        *(_QWORD *)v10 = &DXG_HOST_COMPOSITIONOBJECTCHANNEL::`vftable';
        v12 = 0LL;
        *(_QWORD *)(v10 + 48) = v20;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_WORD *)(v10 + 16) = 0;
        *(_QWORD *)(v10 + 24) = 0LL;
        *(_QWORD *)(v10 + 32) = 0LL;
        *(_QWORD *)(v10 + 40) = v11;
        v13 = (struct DXGVMBUSCHANNEL *)*((_QWORD *)this + 14);
        *v3 = v10;
        DefaultSecurityDescriptor = DXG_HOST_COMPOSITIONOBJECTCHANNEL::Initialize((struct _EPROCESS **)v10, v13);
        if ( DefaultSecurityDescriptor >= 0 )
          goto LABEL_34;
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1871;
LABEL_19:
        if ( v12 )
        {
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v12);
          goto LABEL_23;
        }
LABEL_27:
        v14 = *((_QWORD *)this + 15);
        if ( v14 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 56LL))(v14);
          *((_QWORD *)this + 15) = 0LL;
        }
        if ( *v3 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)*v3 + 56LL))(*v3);
          *v3 = 0LL;
        }
        goto LABEL_34;
      }
      *v3 = 0LL;
      DefaultSecurityDescriptor = -1073741801;
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1852;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1836;
    }
    v12 = v20;
    goto LABEL_19;
  }
  v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 64LL))(v2);
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*v3 + 64LL))(*v3);
  if ( v15 || (DefaultSecurityDescriptor = -1073740528, v16) )
    DefaultSecurityDescriptor = 0;
LABEL_34:
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v18);
  return (unsigned int)DefaultSecurityDescriptor;
}
