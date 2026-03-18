/*
 * XREFs of ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0
 * Callers:
 *     ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402260E0 (-VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x14004C5D0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140052DFC (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ @ 0x14007463C (--0DXGADAPTERALLOCATION_VGPU@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z @ 0x14007F09C (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@PEBX@Z.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@IPEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1401FDB60 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401FE008 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 *     ?CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z @ 0x1403B24BC (-CreateSharedResource@DXGSHAREDRESOURCE@@SAPEAV1@PEAVADAPTER_RENDER@@PEAVDXGADAPTER@@E@Z.c)
 *     ?CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1403DBCBC (-CreateKeyedMutex@DXGGLOBAL@@QEAAJ_KU_D3DKMT_CREATEKEYEDMUTEX2_FLAGS@@IPEAPEAVDXGKEYEDMUTEX@@@Z.c)
 */

__int64 __fastcall DxgkpCreateSharedObjectFromHostDesc(
        struct ADAPTER_RENDER *a1,
        const unsigned __int8 *a2,
        struct _LIST_ENTRY **a3)
{
  int v4; // edi
  DXGKEYEDMUTEX *v5; // r15
  __int64 v6; // rdx
  struct DXGSHAREDRESOURCE *SharedResource; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  const unsigned __int8 *v11; // r15
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // kr00_8
  __int64 v14; // rax
  unsigned int v15; // eax
  void *v16; // rax
  __int64 v17; // rax
  const wchar_t *v18; // r9
  unsigned int v19; // eax
  void *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // eax
  DXGADAPTERALLOCATION_VGPU *v23; // rax
  DXGADAPTERALLOCATION_VGPU *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  DXGADAPTERALLOCATION_VGPU *v27; // r13
  const unsigned __int8 *v28; // rax
  size_t v29; // rcx
  void *v30; // rax
  const unsigned __int8 *v31; // rcx
  struct DXGSHAREDRESOURCE *v32; // r13
  struct DXGSHAREDRESOURCE **v33; // rcx
  int v34; // edi
  ADAPTER_RENDER *v35; // r13
  DXGGLOBAL *Global; // rax
  struct DXGSYNCOBJECT *v37; // rbx
  PERESOURCE *v38; // rax
  struct _LIST_ENTRY *v39; // rcx
  struct _LIST_ENTRY *v40; // rbx
  struct _LIST_ENTRY *v42; // [rsp+50h] [rbp-69h] BYREF
  struct DXGSYNCOBJECT *v43; // [rsp+58h] [rbp-61h] BYREF
  const unsigned __int8 *v44; // [rsp+60h] [rbp-59h]
  const unsigned __int8 *v45; // [rsp+68h] [rbp-51h]
  _OWORD v46[10]; // [rsp+70h] [rbp-49h] BYREF
  unsigned int v48; // [rsp+128h] [rbp+6Fh]
  struct DXGKEYEDMUTEX *v50; // [rsp+138h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v50 = 0LL;
  SharedResource = DXGSHAREDRESOURCE::CreateSharedResource(a1, 0LL, 0);
  if ( SharedResource )
  {
    v10 = *((_DWORD *)a2 + 18);
    v11 = a2 + 92;
    if ( v10 > 1 )
    {
      v13 = v10;
      v12 = 8LL * v10;
      if ( !is_mul_ok(v13, 8uLL) )
        v12 = -1LL;
      v14 = operator new[](v12, 0x4B677844u, 256LL);
      if ( !v14 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 14783;
LABEL_8:
        v4 = -1073741801;
LABEL_40:
        v5 = v50;
        goto LABEL_41;
      }
      *((_QWORD *)SharedResource + 21) = v14;
    }
    *((_DWORD *)SharedResource + 3) = *((_DWORD *)a2 + 20);
    v15 = *((_DWORD *)a2 + 21);
    if ( v15 )
    {
      v16 = operator new(v15, v6, v8, a2 + 92);
      *((_QWORD *)SharedResource + 15) = v16;
      if ( !v16 )
      {
        WdLogSingleEntry0(6LL);
        v17 = 14799LL;
        v18 = L"Failed to allocate shared resource private driver data";
LABEL_13:
        WdLogGlobalForLineNumber = v17;
        DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v18, v17, 0LL, 0LL, 0LL, 0LL);
        goto LABEL_8;
      }
      *((_DWORD *)SharedResource + 32) = *((_DWORD *)a2 + 21);
      v11 += *((unsigned int *)a2 + 21);
    }
    v19 = *((_DWORD *)a2 + 22);
    if ( v19 )
    {
      v20 = operator new(v19, v6, v8, v11);
      *((_QWORD *)SharedResource + 13) = v20;
      if ( !v20 )
      {
        WdLogSingleEntry0(6LL);
        v17 = 14814LL;
        v18 = L"Failed to allocate shared resource runtime data";
        goto LABEL_13;
      }
      *((_DWORD *)SharedResource + 28) = *((_DWORD *)a2 + 22);
      v11 += *((unsigned int *)a2 + 22);
    }
    v21 = 0;
    while ( 1 )
    {
      v22 = *((_DWORD *)a2 + 18);
      v48 = v21;
      v45 = v11;
      if ( v21 >= v22 )
        break;
      v44 = v11;
      v11 += 56;
      v23 = (DXGADAPTERALLOCATION_VGPU *)operator new(0x78uLL, 0x4B677844u, 256LL);
      if ( !v23 || (v24 = DXGADAPTERALLOCATION_VGPU::DXGADAPTERALLOCATION_VGPU(v23), (v27 = v24) == 0LL) )
      {
        WdLogSingleEntry0(6LL);
        WdLogGlobalForLineNumber = 14831;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate DXGADAPTERALLOCATION_VGPU object for shared host resource",
          14831LL,
          0LL,
          0LL,
          0LL,
          0LL);
        goto LABEL_50;
      }
      *((_DWORD *)v24 + 1) = *(_DWORD *)v45 | 0x20000;
      v28 = v44;
      *((_OWORD *)v27 + 4) = *(_OWORD *)(v44 + 8);
      *((_OWORD *)v27 + 5) = *(_OWORD *)(v28 + 24);
      *((_OWORD *)v27 + 6) = *(_OWORD *)(v28 + 40);
      v29 = *((unsigned int *)v28 + 1);
      if ( (_DWORD)v29 )
      {
        v30 = operator new(v29, v25, v26, v11);
        *((_QWORD *)v27 + 4) = v30;
        if ( !v30 )
        {
          WdLogSingleEntry0(6LL);
          v17 = 14844LL;
          v18 = L"Failed to allocate private driver data for DXGADAPTERALLOCATION_VGPU";
          goto LABEL_13;
        }
        v31 = v44;
        *((_DWORD *)v27 + 10) = *((_DWORD *)v44 + 1);
        v11 += *((unsigned int *)v31 + 1);
      }
      v32 = (DXGADAPTERALLOCATION_VGPU *)((char *)v27 + 48);
      v33 = (struct DXGSHAREDRESOURCE **)*((_QWORD *)SharedResource + 18);
      if ( *v33 != (struct DXGSHAREDRESOURCE *)((char *)SharedResource + 136) )
        __fastfail(3u);
      *((_QWORD *)v32 + 1) = v33;
      *(_QWORD *)v32 = (char *)SharedResource + 136;
      *v33 = v32;
      v21 = v48 + 1;
      *((_QWORD *)SharedResource + 18) = v32;
    }
    *((_DWORD *)SharedResource + 33) = v22;
    v34 = *((_DWORD *)a2 + 14);
    if ( v34 )
    {
      memset(v46, 0, 0x60uLL);
      HIDWORD(v46[0]) |= 3u;
      v35 = a1;
      DWORD2(v46[0]) = 3;
      v4 = CreateSynchronizationObjectInternal(0LL, 1, a1, (__int64)v46, 14, v34, &v43, 0LL, 0LL);
      if ( v4 < 0 )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 14880;
        goto LABEL_40;
      }
    }
    else
    {
      v35 = a1;
    }
    if ( *((_DWORD *)a2 + 15)
      && (Global = DXGGLOBAL::GetGlobal(),
          v4 = DXGGLOBAL::CreateKeyedMutex(
                 Global,
                 *(_QWORD *)v11,
                 (struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS)1,
                 *((_DWORD *)a2 + 15),
                 &v50),
          v4 < 0) )
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 14909;
    }
    else
    {
      LOBYTE(v9) = 1;
      v46[0] = 0x30uLL;
      *((_QWORD *)&v46[1] + 1) = 64LL;
      *(_QWORD *)&v46[1] = 0LL;
      v46[2] = 0LL;
      v4 = ObCreateObject(1LL, g_pDxgkSharedAllocationObjectType, v46, v9, 0LL, 48, 0, 0, &v42);
      if ( v4 >= 0 )
      {
        _InterlockedAdd((volatile signed __int32 *)SharedResource + 16, 1u);
        v39 = (struct _LIST_ENTRY *)v50;
        v40 = (struct _LIST_ENTRY *)v43;
        v42[1].Flink = (struct _LIST_ENTRY *)SharedResource;
        v42[1].Blink = v39;
        v42[2].Flink = v40;
        LODWORD(v42[2].Blink) = *((_DWORD *)a2 + 13);
        ADAPTER_RENDER::AddNtSharedAllocObject(v35, v42);
        goto LABEL_50;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 14939;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create shared alloc object",
        14939LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_40;
  }
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 14767;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to create shared resource for host shared resource",
    14767LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v4 = -1073741801;
LABEL_41:
  if ( v42 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 14959;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSharedAllocObject == nullptr", 14959LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( SharedResource )
    DXGSHAREDRESOURCE::ReleaseReference(SharedResource, 0LL, 0);
  if ( v5 )
    DXGKEYEDMUTEX::ReleaseReference(v5);
  v37 = v43;
  if ( v43 )
  {
    v38 = (PERESOURCE *)DXGGLOBAL::GetGlobal();
    DXGGLOBAL::DestroySyncObject(v38, v37, 0, 0);
  }
LABEL_50:
  *a3 = v42;
  return (unsigned int)v4;
}
