/*
 * XREFs of ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1401D07E0
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1401D1110 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x14002E460 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CreateSourceObject(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        int a3,
        struct _OBJECT_ATTRIBUTES *a4,
        ACCESS_MASK DesiredAccess,
        PHANDLE Handle)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rsi
  PVOID v17; // rbx
  NTSTATUS inserted; // eax
  __int64 v19; // rdi
  __int64 (__fastcall ***v20)(_QWORD, __int64); // [rsp+50h] [rbp-10h] BYREF
  PVOID Object; // [rsp+58h] [rbp-8h] BYREF

  v10 = operator new(0x70uLL, 0x4B677844u, 256LL);
  v13 = v10;
  if ( !v10 )
  {
    v20 = 0LL;
    goto LABEL_11;
  }
  *(_QWORD *)(v10 + 8) = 0LL;
  *(_QWORD *)(v10 + 16) = 0LL;
  *(_DWORD *)(v10 + 40) = a3;
  *(_QWORD *)v10 = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  *(_QWORD *)(v10 + 24) = 0LL;
  *(struct _LUID *)(v10 + 32) = a2;
  *(_QWORD *)(v10 + 48) = this;
  *(_BYTE *)(v10 + 56) = 1;
  *(_QWORD *)(v10 + 72) = 0LL;
  *(_QWORD *)(v10 + 80) = 0LL;
  *(_QWORD *)(v10 + 88) = 0LL;
  *(_DWORD *)(v10 + 96) = 0;
  *(_DWORD *)(v10 + 100) = 80;
  *(_DWORD *)(v10 + 104) = 1;
  _InterlockedAdd((volatile signed __int32 *)this + 2, 1u);
  v20 = (__int64 (__fastcall ***)(_QWORD, __int64))v10;
  if ( !*(_BYTE *)(v10 + 56) )
  {
LABEL_11:
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 342;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGDISPLAYMANAGERSOURCEOBJECT",
      342LL,
      0LL,
      0LL,
      0LL,
      0LL);
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v20);
    return 3221225495LL;
  }
  LOBYTE(v12) = 1;
  LOBYTE(v11) = 1;
  Object = 0LL;
  v14 = ObCreateObject(v11, g_pDxgkDisplayManagerObjectType, a4, v12, 0LL, 16, 128, 0, &Object);
  v15 = v14;
  if ( v14 >= 0 )
  {
    *(_OWORD *)Object = 0LL;
    v17 = Object;
    if ( *(_QWORD *)(v13 + 24) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 735;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_Object == nullptr", 735LL, 0LL, 0LL, 0LL, 0LL);
    }
    *(_QWORD *)(v13 + 24) = v17;
    v20 = 0LL;
    *((_QWORD *)Object + 1) = v13;
    inserted = ObInsertObject(Object, 0LL, DesiredAccess, 0, 0LL, Handle);
    v19 = inserted;
    if ( inserted >= 0 )
    {
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v20);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 376;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to create NT handle for display manager source object (0x%I64x)",
        v19,
        0LL,
        0LL,
        0LL,
        0LL);
      auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v20);
      return (unsigned int)v19;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 361;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create NT object for display manager (0x%I64x)",
      v15,
      0LL,
      0LL,
      0LL,
      0LL);
    auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(&v20);
    return (unsigned int)v15;
  }
}
