/*
 * XREFs of ?Initialize@DXGPAGINGQUEUE@@IEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@@Z @ 0x14035097C
 * Callers:
 *     ?CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z @ 0x140350624 (-CreatePagingQueue@DXGDEVICE@@QEAAJIW4D3DDDI_PAGINGQUEUE_PRIORITY@@PEAPEAVDXGPAGINGQUEUE@@@Z.c)
 * Callees:
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x140009150 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140035BB0 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1402E5CE4 (-GetVidSchSyncObject@DXGDEVICESYNCOBJECT@@QEBAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z @ 0x1403500D8 (-MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT@@QEAAJIPEA_K@Z.c)
 *     ?CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@_NPEAVDXGPAGINGQUEUE@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAVDXGADAPTERSYNCOBJECT@@PEAU_D3DDDI_NATIVEFENCEINFO@@PEAE@Z @ 0x1403511A0 (-CreateSyncObject@DXGGLOBAL@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@IPEAU_D3DDDI_SYNCHRONIZATIO.c)
 */

__int64 __fastcall DXGPAGINGQUEUE::Initialize(DXGPAGINGQUEUE *this, unsigned int a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  char v7; // r12
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v12; // rax
  DXGDEVICESYNCOBJECT **v13; // rdi
  int v14; // eax
  unsigned int v15; // esi
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 result; // rax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // rax
  int v22; // eax
  _BYTE v23[16]; // [rsp+78h] [rbp-29h] BYREF
  _QWORD v24[10]; // [rsp+88h] [rbp-19h] BYREF
  unsigned int v25; // [rsp+110h] [rbp+6Fh] BYREF

  *((_DWORD *)this + 12) = a2;
  v4 = *((_QWORD *)this + 2);
  v6 = *(_QWORD *)(v4 + 16);
  v7 = *(_BYTE *)(*(_QWORD *)(v6 + 16) + 209LL);
  if ( !v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *))(*(_QWORD *)(*(_QWORD *)(v6 + 760) + 8LL) + 848LL))(
           *(_QWORD *)(v4 + 792),
           a2,
           a3,
           (char *)this + 32);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v8);
      WdLogGlobalForLineNumber = 120;
      return v9;
    }
  }
  memset(v24, 0, sizeof(v24));
  v10 = *((_QWORD *)this + 2);
  HIDWORD(v24[0]) |= 0x90u;
  LODWORD(v24[0]) = 5;
  v25 = 0;
  v24[1] = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) + 3132LL);
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v23);
  v12 = DXGGLOBAL::GetGlobal();
  v13 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
  v14 = DXGGLOBAL::CreateSyncObject(
          v12,
          *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
          *((_QWORD *)this + 2),
          (unsigned int)(1 << a2),
          v24,
          2,
          0,
          this,
          0LL,
          (char *)this + 40,
          &v25,
          0LL,
          0LL,
          0LL);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)this + 2), v14);
    WdLogGlobalForLineNumber = 162;
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v23);
    return v15;
  }
  if ( v23[8] )
  {
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v23);
    v13 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
  }
  v16 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
  DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v16 + 248));
  v17 = (v25 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 < *(_DWORD *)(v16 + 296) )
  {
    v18 = *(_QWORD *)(v16 + 280);
    if ( ((v25 >> 25) & 0x60) == (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
      && (*(_DWORD *)(v18 + 16 * v17 + 8) & 0x1F) != 0 )
    {
      v19 = 16 * (((unsigned __int64)v25 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v19 + v18 + 8) & 0x2000) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 224;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
          224LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *(_DWORD *)(*(_QWORD *)(v16 + 280) + v19 + 8) &= ~0x2000u;
      v13 = (DXGDEVICESYNCOBJECT **)((char *)this + 40);
    }
  }
  *(_QWORD *)(v16 + 256) = 0LL;
  ExReleasePushLockExclusiveEx(v16 + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v7 )
  {
    result = DXGDEVICESYNCOBJECT::MapGpuVaForPagingProcess(
               *((DXGDEVICESYNCOBJECT **)this + 5),
               a2,
               (unsigned __int64 *)this + 7);
    v15 = result;
    if ( (int)result < 0 )
      return result;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(*((_QWORD *)*v13 + 4) + 32LL), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    VidSchSyncObject = DXGDEVICESYNCOBJECT::GetVidSchSyncObject(*v13);
    (*(void (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                 + 760LL)
                                                                                     + 8LL)
                                                                         + 840LL))(
      *((_QWORD *)this + 4),
      VidSchSyncObject,
      v24[1]);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
  }
  v22 = DXGPROCESS::AllocHandleSafe(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL), (__int64)this, 0xAu);
  *((_DWORD *)this + 6) = v22;
  if ( !v22 )
  {
    v9 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 202;
    return v9;
  }
  return v15;
}
