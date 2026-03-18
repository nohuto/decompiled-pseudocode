/*
 * XREFs of ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1403DC9E0
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1404348A4 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$06@DispBroker@@@@@Z @ 0x14002DBF4 (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$06@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z @ 0x14003DB88 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEBU_LUID@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1402ACDEC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ @ 0x1403BDA5C (--1-$NT_OBJECT_REFERENCE@PEAUDXGSWAPCHAIN_CONTAINER@@@@QEAA@XZ.c)
 *     DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1403DCEE4 (DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1403DD0B0 (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, void *a3)
{
  unsigned int v3; // edi
  DWORD LowPart; // ebx
  struct DXGADAPTER *v7; // rsi
  unsigned int i; // r14d
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  ReferenceCounted *v13; // rbx
  NTSTATUS v15; // esi
  __int64 v16; // rax
  struct DXGPROCESS *Current; // rax
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  struct _LUID v19; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+60h] [rbp-A0h] BYREF
  ReferenceCounted *v21; // [rsp+68h] [rbp-98h] BYREF
  struct DXGADAPTER *v22; // [rsp+70h] [rbp-90h] BYREF
  ReferenceCounted *v23; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v24[144]; // [rsp+90h] [rbp-70h] BYREF

  v3 = 0;
  v19 = a1;
  Object = 0LL;
  LowPart = a1.LowPart;
  if ( a3 )
  {
    v15 = ObReferenceObjectByHandleWithTag(a3, 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
    if ( v15 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 406;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to open display manager source object with handle 0x%I64x",
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x4B677844u);
      return (unsigned int)v15;
    }
    v16 = *((_QWORD *)Object + 1);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 412;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      v3 = -1073741811;
      goto LABEL_46;
    }
    if ( !*(_BYTE *)(v16 + 56) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 418;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Display manager object 0x%I64x was not a source object.",
        (__int64)Object,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( Object )
        ObfDereferenceObjectWithTag(Object, 0x4B677844u);
      return 3221225506LL;
    }
  }
  v22 = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)&v22, &v19);
  v7 = v22;
  if ( v22 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v22, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL) >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        v20 = -1;
        v9 = DmmEnumClientVidPnPathTargetsFromSource(v7, a2, i, &v20);
        v10 = v9;
        if ( v9 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          DXGADAPTER::ReleaseReference(v7);
          if ( Object )
            ObfDereferenceObjectWithTag(Object, 0x4B677844u);
          return v10;
        }
        if ( v9 == 1075708748 || v20 == -1 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          DXGADAPTER::ReleaseReference(v7);
          if ( Object )
            ObfDereferenceObjectWithTag(Object, 0x4B677844u);
          return 0LL;
        }
        v23 = 0LL;
        v21 = (ReferenceCounted *)&v23;
        v12 = DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(v7, v20, &v21);
        if ( v12 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
          v3 = v12;
          goto LABEL_46;
        }
        v13 = v23;
        v21 = v23;
        if ( !a3 )
          break;
        if ( !v23 )
        {
          Current = DXGPROCESS::GetCurrent(v11);
          if ( !Current || (*((_DWORD *)Current + 102) & 4) == 0 )
            goto LABEL_39;
          auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v21, 0LL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
LABEL_46:
          NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGSWAPCHAIN_CONTAINER *>(&Object);
          return v3;
        }
        v19 = 0LL;
        DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v19);
        if ( *(ReferenceCounted **)&v19 != v23 )
        {
          auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset((ReferenceCounted **)&v19, 0LL);
LABEL_39:
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 495;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Access denied to take ownership of VidPn source",
            495LL,
            0LL,
            0LL,
            0LL,
            0LL);
          auto_rc<rc_buffer<DispBroker::AlpcRequest<7>>>::reset(&v21, 0LL);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
          DXGADAPTER_REFERENCE::Assign((DXGADAPTER_REFERENCE *)&v22, 0LL);
          v3 = -1073741790;
          goto LABEL_46;
        }
        if ( v19 )
          ReferenceCounted::Release(*(ReferenceCounted **)&v19);
        if ( v13 )
          goto LABEL_20;
LABEL_11:
        ;
      }
      if ( !v23 )
        goto LABEL_11;
      if ( *((_BYTE *)v23 + 184) )
        goto LABEL_39;
LABEL_20:
      ReferenceCounted::Release(v13);
      goto LABEL_11;
    }
    WdLogSingleEntry2(3LL, v19.HighPart, LowPart);
    WdLogGlobalForLineNumber = 433;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
    DXGADAPTER::ReleaseReference(v7);
  }
  else
  {
    WdLogSingleEntry2(3LL, v19.HighPart, LowPart);
    WdLogGlobalForLineNumber = 427;
  }
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x4B677844u);
  return 3221226021LL;
}
