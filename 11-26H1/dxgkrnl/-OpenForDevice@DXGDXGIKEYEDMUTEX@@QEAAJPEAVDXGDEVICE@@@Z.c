/*
 * XREFs of ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1401EDEC0
 * Callers:
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU_D3DKMT_PRESENT_RGNS@@PEBUDXGK_PRESENT_PARAMS@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1402B0B58 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@U_D3DKMT_OUTPUTDUPLPRESENTFLAGS@@IKPEAU.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x14000DED0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x140034DA0 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGSYNCOBJECTLOCK@@QEAA@XZ @ 0x140037FC0 (--1DXGSYNCOBJECTLOCK@@QEAA@XZ.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECE1C (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401EE398 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1402B04D0 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z @ 0x140313250 (-ConfigureSharedResourceHelper@DXGDEVICE@@QEAAJEPEAXPEAVDXGSHAREDRESOURCE@@EH@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenForDevice(DXGDXGIKEYEDMUTEX *this, ADAPTER_RENDER **a2)
{
  __int64 v4; // r8
  __int64 v6; // rcx
  int v7; // edi
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  const wchar_t *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v29; // rdi
  struct DXGPROCESS *v30; // rsi
  char *v31; // rbp
  unsigned int v32; // ecx
  __int64 v33; // r8
  int v34; // edx
  __int64 v35; // rdi
  void **v36; // [rsp+28h] [rbp-80h]
  _BYTE v37[16]; // [rsp+80h] [rbp-28h] BYREF

  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(a2[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 475;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDevice->GetRenderCore()->IsCoreResourceSharedOwner()",
      475LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *((_QWORD *)this + 1);
  if ( v4 )
  {
    WdLogSingleEntry2(2LL, this, v4);
    v36 = (void **)*((_QWORD *)this + 1);
    WdLogGlobalForLineNumber = 480;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"KeyedMutex 0x%I64x already opened locally by device 0x%I64x",
      (__int64)this,
      (__int64)v36,
      0LL,
      0LL,
      0LL);
    return 3221227288LL;
  }
  *((_QWORD *)this + 1) = a2;
  v7 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(this, 0LL);
  if ( v7 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, this, CurrentProcess);
    WdLogGlobalForLineNumber = 490;
    v10 = PsGetCurrentProcess(v9);
    v11 = L"Failed to open local producer mutex for KeyedMutex 0x%I64x in process 0x%I64x";
LABEL_7:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, (__int64)this, v10, 0LL, 0LL, 0LL);
LABEL_14:
    v24 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, a2, v24);
    WdLogGlobalForLineNumber = 537;
    v26 = PsGetCurrentProcess(v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open DxgiKeyedMutex for device 0x%I64x in process 0x%I64x",
      (__int64)a2,
      v26,
      0LL,
      0LL,
      0LL);
    DXGDXGIKEYEDMUTEX::CloseFromDevice(this, v27);
    return (unsigned int)v7;
  }
  v7 = DXGDEVICE::ConfigureSharedResourceHelper(
         (DXGDEVICE *)a2,
         0,
         (void *)0xFFFFFFFFFFFFFFFFLL,
         *(struct DXGSHAREDRESOURCE **)(*(_QWORD *)this + 16LL),
         1u,
         0);
  if ( v7 < 0 )
  {
    v14 = PsGetCurrentProcess(v13);
    WdLogSingleEntry2(2LL, this, v14);
    WdLogGlobalForLineNumber = 498;
    v10 = PsGetCurrentProcess(v15);
    v11 = L"Failed to add producer device to PAL for KeyedMutex 0x%I64x in process 0x%I64x";
    goto LABEL_7;
  }
  v7 = DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(this, (struct DXGDEVICE *)a2);
  if ( v7 < 0 )
  {
    v17 = PsGetCurrentProcess(v16);
    WdLogSingleEntry2(2LL, this, v17);
    WdLogGlobalForLineNumber = 506;
    v10 = PsGetCurrentProcess(v18);
    v11 = L"Failed to open shared surface for KeyedMutex 0x%I64x in process 0x%I64x, insure the DDA producer and consumer "
           "devices are on the same adapter";
    goto LABEL_7;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v37);
  v7 = DXGSYNCOBJECT::Open(
         *(DXGSYNCOBJECT **)(*(_QWORD *)this + 32LL),
         0LL,
         0LL,
         0LL,
         (unsigned int *)this + 24,
         0LL,
         0LL,
         0,
         0LL,
         0,
         (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS)DXGDEVICE::DestroyFlagsDefault.0,
         0LL,
         0LL,
         0,
         0,
         0);
  if ( v7 < 0 )
  {
    v21 = PsGetCurrentProcess(v20);
    WdLogSingleEntry3(2LL, *(_QWORD *)(*(_QWORD *)this + 32LL), a2, v21);
    WdLogGlobalForLineNumber = 517;
    v23 = PsGetCurrentProcess(v22);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open GPU fence 0x%I64x for device 0x%I64x in process 0x%I64x",
      *(_QWORD *)(*(_QWORD *)this + 32LL),
      (__int64)a2,
      v23,
      0LL,
      0LL);
    DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37);
    goto LABEL_14;
  }
  Current = DXGPROCESS::GetCurrent();
  v29 = *((unsigned int *)this + 24);
  v30 = Current;
  v31 = (char *)Current + 248;
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 248));
  v32 = ((unsigned int)v29 >> 6) & 0xFFFFFF;
  if ( v32 < *((_DWORD *)v30 + 74) )
  {
    v33 = *((_QWORD *)v30 + 35);
    v34 = *(_DWORD *)(v33 + 16LL * v32 + 8);
    if ( (((unsigned int)v29 >> 25) & 0x60) == (v34 & 0x60) && (v34 & 0x1F) != 0 )
    {
      v35 = 16 * ((v29 >> 6) & 0xFFFFFF);
      if ( (*(_DWORD *)(v35 + v33 + 8) & 0x2000) == 0 )
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
      *(_DWORD *)(*((_QWORD *)v30 + 35) + v35 + 8) &= ~0x2000u;
    }
  }
  *((_QWORD *)v31 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v31, 0LL);
  KeLeaveCriticalRegion();
  *((_QWORD *)this + 13) = *(_QWORD *)(*(_QWORD *)this + 32LL);
  DXGSYNCOBJECTLOCK::~DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v37);
  return 0LL;
}
