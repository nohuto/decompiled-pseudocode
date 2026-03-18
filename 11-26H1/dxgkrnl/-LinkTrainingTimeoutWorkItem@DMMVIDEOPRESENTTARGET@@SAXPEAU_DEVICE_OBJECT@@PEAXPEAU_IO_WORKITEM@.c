/*
 * XREFs of ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1402604F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     DpiPollSingleDisplayChild @ 0x14023A744 (DpiPollSingleDisplayChild.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x14025EE00 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z @ 0x14042F6A0 (-StartLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXE@Z.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::LinkTrainingTimeoutWorkItem(
        PVOID IoObject,
        volatile signed __int32 *Context,
        PIO_WORKITEM IoWorkItem)
{
  unsigned __int8 v4; // bl
  unsigned int v5; // r12d
  void *v6; // rsi
  signed __int32 v7; // eax
  __int64 v8; // r15
  __int64 v9; // rdx
  signed __int32 v10; // eax
  signed __int32 v11; // r14d
  DMMVIDEOPRESENTTARGETSET **v12; // rbx
  __int64 v13; // rax
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v14; // rbx
  struct _IO_WORKITEM *v15; // rcx
  unsigned __int8 v16[8]; // [rsp+38h] [rbp-89h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v17[3]; // [rsp+40h] [rbp-81h] BYREF
  _BYTE v18[144]; // [rsp+58h] [rbp-69h] BYREF

  v4 = 0;
  v5 = 0;
  v16[1] = 0;
  v6 = 0LL;
  v7 = _InterlockedCompareExchange(Context + 38, 0, 5);
  if ( ((v7 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v7 != -1 )
    {
      if ( v7 != 5 )
      {
        WdLogSingleEntry2(7LL, *(_QWORD *)Context, v7);
        WdLogGlobalForLineNumber = 252;
      }
      return;
    }
    goto LABEL_24;
  }
  v8 = *(_QWORD *)Context;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, *(struct DXGADAPTER *const *)Context, 0LL);
  v9 = (int)COREADAPTERACCESS::AcquireExclusive((__int64)v18, 2LL);
  v10 = _InterlockedCompareExchange(Context + 38, 0, 5);
  v11 = v10;
  if ( ((v10 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v10 != -1 && v10 != 5 )
    {
      WdLogSingleEntry2(7LL, v8, v10);
      WdLogGlobalForLineNumber = 288;
    }
  }
  else if ( (int)v9 >= 0 )
  {
    v12 = *(DMMVIDEOPRESENTTARGETSET ***)(*(_QWORD *)(v8 + 3160) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)v17, (__int64)v12);
    v13 = *((_QWORD *)Context + 1);
    v16[0] = 0;
    v5 = *(_DWORD *)(v13 + 24);
    VIDPN_MGR::HandleLinkTrainingTimeout(v12, v5, v11 == 2, v16, &v16[1]);
    if ( v16[0] )
    {
      if ( v11 != 2 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 318;
      }
      DMMVIDEOPRESENTTARGET::StartLinkTrainingTimer(*((DMMVIDEOPRESENTTARGET **)Context + 1), 0);
    }
    v6 = *(void **)(v8 + 216);
    if ( v6 )
    {
      ObfReferenceObject(*(PVOID *)(v8 + 216));
      v4 = v16[1];
    }
    else
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 329;
      v4 = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)v17[0] + 5);
  }
  else
  {
    WdLogSingleEntry2(2LL, v8, v9);
    WdLogGlobalForLineNumber = 298;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  if ( v4 )
  {
    LOBYTE(v17[0]) = 0;
    CDisplayScenarioContextScope::ContextScopeConstructor(v17, 0LL, 0x40u, 0);
    v14 = v17[1];
    WdLogSingleEntry2(7LL, v5, *(_QWORD *)Context);
    WdLogGlobalForLineNumber = 349;
    DpiPollSingleDisplayChild((__int64)v6, v5, (__int64)v14);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v17);
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v11 == -1 )
  {
LABEL_24:
    if ( *(_QWORD *)Context )
      DXGADAPTER::ReleaseReferenceNoTracking(*(DXGADAPTER **)Context);
    v15 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 18);
    if ( v15 )
      IoFreeWorkItem(v15);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)Context);
  }
}
