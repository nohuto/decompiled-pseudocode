/*
 * XREFs of ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1401C3A8C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z @ 0x1400171A4 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEBD@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x140039DDC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     McTemplateK0ppqpttqpqp_EtwWriteTransfer @ 0x140057CFC (McTemplateK0ppqpttqpqp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z @ 0x14022E23C (-VmBusSendDestroyDevice@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXII@Z.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1402E5D3C (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z @ 0x1402E6680 (-IterateOutputDuplMgrsForRender@@YAJPEAVDXGDEVICE@@P6AJPEAVOUTPUTDUPL_MGR@@PEAX@Z2@Z.c)
 *     ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402E7344 (-CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A3B88 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A64B4 (-DestroyContext@DXGCONTEXT@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z @ 0x1403CA1F4 (-DdiDestroyDevice@ADAPTER_RENDER@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGDEVICE::DestroyDevice(DXGDEVICE *this, PERESOURCE **a2)
{
  unsigned int i; // edi
  __int64 v5; // rbp
  ReferenceCounted *v6; // rcx
  DXGPAGINGQUEUE *v7; // r14
  DXGPAGINGQUEUE *j; // rdi
  DXGPAGINGQUEUE *v9; // rax
  DXGDEVICESYNCOBJECT *v10; // r14
  DXGDEVICESYNCOBJECT *k; // rdi
  DXGDEVICESYNCOBJECT *v12; // rax
  DXGDEVICESYNCOBJECT *v13; // rcx
  DXGCONTEXT *v14; // r14
  DXGCONTEXT *m; // rdi
  DXGCONTEXT *v16; // rax
  void *v17; // rdx
  ADAPTER_RENDER **v18; // rdi
  char *v19; // r14
  DXGPROCESS **v20; // rsi
  DXGCONTEXT *v21; // rcx
  DXGPAGINGQUEUE *v22; // rcx
  int HostProcess; // eax
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+38h] [rbp-50h]
  __int64 v26; // [rsp+40h] [rbp-48h]

  if ( *((_QWORD *)this + 241) )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[3]) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1189;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"!pCoreDeviceAccess->IsExclusiveOwner()",
          1189LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a2);
    }
    KeWaitForSingleObject(*((PVOID *)this + 241), Executive, 0, 0, 0LL);
    if ( a2 )
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a2, (const char *)a2);
  }
  for ( i = 0; i < *((_DWORD *)this + 476); *((_QWORD *)this + v5 + 213) = 0LL )
  {
    v5 = i;
    v6 = (ReferenceCounted *)*((_QWORD *)this + i + 197);
    if ( v6 )
    {
      ReferenceCounted::Release(v6);
      *((_QWORD *)this + i + 197) = 0LL;
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + i++ + 213));
  }
  v7 = (DXGDEVICE *)((char *)this + 528);
  for ( j = (DXGPAGINGQUEUE *)*((_QWORD *)this + 66); ; j = *(DXGPAGINGQUEUE **)j )
  {
    v9 = 0LL;
    if ( j != v7 )
      v9 = j;
    if ( !v9 )
      break;
    v22 = j;
    if ( j == v7 )
      v22 = 0LL;
    DXGPAGINGQUEUE::DestroyCoreState(v22, (struct COREDEVICEACCESS *)a2);
  }
  v10 = (DXGDEVICE *)((char *)this + 544);
  for ( k = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 68); ; k = *(DXGDEVICESYNCOBJECT **)k )
  {
    v12 = 0LL;
    if ( k != v10 )
      v12 = k;
    if ( !v12 )
      break;
    v13 = k;
    if ( k == v10 )
      v13 = 0LL;
    DXGDEVICESYNCOBJECT::DestroyCoreState(v13);
  }
  if ( *((_QWORD *)this + 242) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 736LL) + 8LL) + 640LL))();
    *((_QWORD *)this + 242) = 0LL;
  }
  v14 = (DXGDEVICE *)((char *)this + 496);
  for ( m = (DXGCONTEXT *)*((_QWORD *)this + 62); ; m = *(DXGCONTEXT **)m )
  {
    v16 = 0LL;
    if ( m != v14 )
      v16 = m;
    if ( !v16 )
      break;
    v21 = m;
    if ( m == v14 )
      v21 = 0LL;
    DXGCONTEXT::DestroyContext(v21, (struct COREDEVICEACCESS *)a2);
  }
  v17 = (void *)*((_QWORD *)this + 77);
  v18 = (ADAPTER_RENDER **)((char *)this + 16);
  if ( v17 )
  {
    ADAPTER_RENDER::DdiDestroyDevice(*v18, v17);
    *((_QWORD *)this + 77) = 0LL;
  }
  if ( *((_QWORD *)this + 99) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)*v18 + 95) + 8LL) + 384LL))();
    *((_QWORD *)this + 99) = 0LL;
  }
  v19 = (char *)this + 16;
  if ( *((_QWORD *)this + 100) )
  {
    (*(void (**)(void))(*(_QWORD *)(*((_QWORD *)*v18 + 92) + 8LL) + 136LL))();
    *((_QWORD *)this + 100) = 0LL;
    v19 = (char *)this + 16;
  }
  IterateOutputDuplMgrsForRender(this, W32kStub_UserRemoveWindowedSwapChain, this);
  v20 = (DXGPROCESS **)((char *)this + 40);
  if ( *((_BYTE *)this + 1918) )
  {
    DXGPROCESS::CloseAdapter(*v20, *v18);
    *((_BYTE *)this + 1918) = 0;
  }
  if ( *((_DWORD *)this + 118) )
  {
    HostProcess = DXGPROCESS::GetHostProcess(*v20);
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendDestroyDevice(
      (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*(_QWORD *)v19 + 16LL) + 4712LL),
      HostProcess,
      *((_DWORD *)this + 118));
    *((_DWORD *)this + 118) = 0;
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
  {
    LODWORD(v26) = *((unsigned __int8 *)this + 1914);
    LODWORD(v25) = *((unsigned __int8 *)this + 1913);
    LODWORD(v24) = *((_DWORD *)this + 116);
    McTemplateK0ppqpttqpqp_EtwWriteTransfer(
      *((_QWORD *)*v20 + 8),
      &EventDestroyDevice,
      *((unsigned __int8 *)this + 1914),
      *(_QWORD *)(*((_QWORD *)*v20 + 8) + 80LL),
      *(_QWORD *)(*(_QWORD *)v19 + 16LL),
      v24,
      this,
      v25,
      v26,
      *((_DWORD *)this + 117),
      0LL,
      0,
      0LL);
  }
}
