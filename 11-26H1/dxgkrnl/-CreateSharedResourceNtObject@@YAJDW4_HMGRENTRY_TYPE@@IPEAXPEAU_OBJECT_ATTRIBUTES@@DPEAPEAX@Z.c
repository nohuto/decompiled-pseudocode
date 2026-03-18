/*
 * XREFs of ?CreateSharedResourceNtObject@@YAJDW4_HMGRENTRY_TYPE@@IPEAXPEAU_OBJECT_ATTRIBUTES@@DPEAPEAX@Z @ 0x1403129EC
 * Callers:
 *     DxgkShareObjectsInternal @ 0x1403136A0 (DxgkShareObjectsInternal.c)
 *     DxgkCreateBundleObjectInternal @ 0x14041DAC8 (DxgkCreateBundleObjectInternal.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z @ 0x140050A38 (-ReleaseReference@DXGSHAREDRESOURCE@@QEAAJPEAPEAXI@Z.c)
 *     ?AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x140052DFC (-AddNtSharedAllocObject@ADAPTER_RENDER@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@PEAVDXGDEVICESYNCOBJECT@@PEAVDXGRESOURCE@@@Z @ 0x14022D650 (-VmBusSendCreateNtSharedObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAIPEAVDXGPROCESS@@IPEAVDXGSYNCOBJECT@@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1402F9980 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1403126F0 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

__int64 __fastcall CreateSharedResourceNtObject(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  struct DXGRESOURCE *v7; // rbx
  __int64 v8; // r14
  __int64 v9; // rdi
  char v11; // r13
  struct _KTHREAD **Current; // rax
  __int64 v13; // rcx
  __int64 v14; // r9
  struct _KTHREAD **v15; // r15
  unsigned int v16; // eax
  int v17; // r8d
  struct _KTHREAD *v18; // rcx
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rsi
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  int v23; // eax
  struct _LIST_ENTRY *v24; // r14
  PVOID v25; // rcx
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  struct DXGGLOBAL *Global; // rax
  int NtSharedObject; // eax
  struct _EX_RUNDOWN_REF *v31; // [rsp+50h] [rbp-30h] BYREF
  PVOID Object; // [rsp+58h] [rbp-28h] BYREF
  struct DXGRESOURCE *v33; // [rsp+60h] [rbp-20h] BYREF
  _BYTE v34[24]; // [rsp+68h] [rbp-18h] BYREF

  v7 = 0LL;
  v8 = a3;
  LODWORD(v9) = 0;
  Object = 0LL;
  v11 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v15 = Current;
  if ( !Current )
  {
    LODWORD(v9) = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 50;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    *a7 = 0LL;
    return (unsigned int)v9;
  }
  v31 = 0LL;
  if ( !a4 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v34, Current);
    v16 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
    if ( v16 < *((_DWORD *)v15 + 74)
      && (v17 = *((_DWORD *)v15[35] + 4 * v16 + 2),
          (((unsigned int)v8 >> 25) & 0x60) == (*((_BYTE *)v15[35] + 16 * v16 + 8) & 0x60))
      && (v17 & 0x2000) == 0
      && (v17 & 0x1F) != 0 )
    {
      v18 = v15[35];
      if ( (*((_BYTE *)v18 + 16 * v16 + 8) & 0x1F) == 4 )
      {
        v19 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v18 + 2 * v16);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        v19 = 0LL;
      }
    }
    else
    {
      v19 = 0LL;
    }
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v33, v19);
    v7 = v33;
    v31 = (struct _EX_RUNDOWN_REF *)v33;
    v33 = 0LL;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&v33);
    if ( v7 )
    {
      if ( (*((_DWORD *)v7 + 1) & 1) != 0 && (v20 = *((_QWORD *)v7 + 7)) != 0 )
      {
        if ( (*(_DWORD *)(v20 + 12) & 8) != 0 )
        {
          _m_prefetchw((const void *)(v20 + 68));
          v21 = *(_DWORD *)(v20 + 68);
          while ( v21 )
          {
            v22 = v21;
            v21 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 68), v21 + 1, v21);
            if ( v22 == v21 )
            {
              DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
              goto LABEL_17;
            }
          }
          LODWORD(v9) = -1073741811;
          WdLogSingleEntry2(3LL, v8, -1073741811LL);
          WdLogGlobalForLineNumber = 106;
        }
        else
        {
          LODWORD(v9) = -1073741811;
          WdLogSingleEntry2(3LL, *((_QWORD *)v7 + 7), -1073741811LL);
          WdLogGlobalForLineNumber = 90;
        }
      }
      else
      {
        LODWORD(v9) = -1073741811;
        WdLogSingleEntry2(3LL, v8, -1073741811LL);
        WdLogGlobalForLineNumber = 81;
      }
    }
    else
    {
      LODWORD(v9) = -1073741811;
      WdLogSingleEntry2(3LL, v8, -1073741811LL);
      WdLogGlobalForLineNumber = 71;
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v34);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
    goto LABEL_27;
  }
  v20 = *(_QWORD *)(a4 + 16);
  _m_prefetchw((const void *)(v20 + 68));
  v27 = *(_DWORD *)(v20 + 68);
  do
  {
    if ( !v27 )
      break;
    v13 = (unsigned int)(v27 + 1);
    v28 = v27;
    v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 68), v13, v27);
  }
  while ( v28 != v27 );
LABEL_17:
  if ( ((_DWORD)v15[51] & 0x10) != 0 )
  {
    Object = (PVOID)operator new(0x30uLL, 0x4B677844u, 256LL);
    v24 = (struct _LIST_ENTRY *)Object;
    if ( !Object )
    {
      LODWORD(v9) = -1073741801;
      WdLogSingleEntry2(3LL, v15, -1073741801LL);
      WdLogGlobalForLineNumber = 157;
      DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v20, 0LL, 0);
LABEL_45:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
LABEL_27:
      v25 = Object;
      if ( Object )
      {
        if ( ((_DWORD)v15[51] & 0x10) != 0 )
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(Object);
        else
          ObfDereferenceObject(Object);
        v25 = 0LL;
      }
      goto LABEL_23;
    }
  }
  else
  {
    LOBYTE(v14) = a6;
    LOBYTE(v13) = v11;
    v23 = ObCreateObject(v13, g_pDxgkSharedAllocationObjectType, a5, v14, 0LL, 48, 0, 0, &Object);
    v9 = v23;
    if ( v23 < 0 )
    {
      if ( Object )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 140;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 140LL, 0LL, 0LL, 0LL, 0LL);
      }
      WdLogSingleEntry2(3LL, v15, v9);
      WdLogGlobalForLineNumber = 143;
      DXGSHAREDRESOURCE::ReleaseReference((DXGSHAREDRESOURCE *)v20, 0LL, 0);
      goto LABEL_21;
    }
    v24 = (struct _LIST_ENTRY *)Object;
  }
  ADAPTER_RENDER::AddNtSharedAllocObject(*(ADAPTER_RENDER **)(v20 + 80), v24);
  _InterlockedIncrement((volatile signed __int32 *)(v20 + 64));
  v24[1].Flink = (struct _LIST_ENTRY *)v20;
  v24[1].Blink = 0LL;
  v24[2].Flink = 0LL;
  LODWORD(v24[2].Blink) = 0;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v20 + 80) + 16LL) + 209LL) )
  {
    Global = DXGGLOBAL::GetGlobal();
    NtSharedObject = DXG_GUEST_GLOBAL_VMBUS::VmBusSendCreateNtSharedObject(
                       *((DXG_GUEST_GLOBAL_VMBUS **)Global + 212),
                       (struct DXGPROCESS *)v15,
                       0,
                       0LL,
                       0LL,
                       v7);
    LODWORD(v24[2].Blink) = NtSharedObject;
    if ( !NtSharedObject )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 187;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VmBusSendCreateNtSharedObject failed",
        187LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v9) = -1073741823;
      goto LABEL_45;
    }
  }
LABEL_21:
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  if ( (int)v9 < 0 )
    goto LABEL_27;
  v25 = Object;
LABEL_23:
  *a7 = v25;
  return (unsigned int)v9;
}
