/*
 * XREFs of ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0
 * Callers:
 *     ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1401D52B0 (-DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIPEAPEAVDXGADAPTERSYNCOBJECT@@_NU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@PEAVDXGPAGINGQUEUE@@PEAE77I@Z @ 0x140352B34 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z @ 0x1403E92C0 (-DxgkpDriverKnownEscape@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@PEAXIPEAE@Z.c)
 *     DxgkSignalSynchronizationObjectFromGpuByReference @ 0x14040C5C8 (DxgkSignalSynchronizationObjectFromGpuByReference.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N4@Z @ 0x140351D48 (-InitializeAdapterObject@DXGADAPTERSYNCOBJECT@@QEAAJPEAVDXGSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAG.c)
 *     ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x14037B2A8 (--1DXGADAPTERSYNCOBJECT@@QEAA@XZ.c)
 */

__int64 __fastcall DXGSYNCOBJECT::GetDxgAdapterSyncObject(
        DXGSYNCOBJECT *this,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_RENDER ***a3,
        struct VIDMM_DEVICE **a4,
        struct DXGPAGINGQUEUE *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        bool a8,
        bool a9)
{
  int v10; // ebx
  struct DXGADAPTERSYNCOBJECT *v11; // rcx
  struct ADAPTER_RENDER *v15; // r8
  __int64 result; // rax
  struct DXGADAPTERSYNCOBJECT *i; // rax
  struct ADAPTER_RENDER **v18; // r14
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+28h] [rbp-50h]

  v10 = 0;
  *a3 = 0LL;
  v11 = (DXGSYNCOBJECT *)((char *)this + 440);
  if ( (*((_DWORD *)this + 106) & 4) != 0 )
  {
    for ( i = *(struct DXGADAPTERSYNCOBJECT **)v11; ; i = *(struct DXGADAPTERSYNCOBJECT **)i )
    {
      if ( i == v11 )
      {
        v18 = 0LL;
        goto LABEL_16;
      }
      v18 = (struct ADAPTER_RENDER **)((char *)i - 152);
      if ( !a2 || v18[2] == a2 )
        break;
    }
    if ( i != (struct DXGADAPTERSYNCOBJECT *)152 )
    {
LABEL_12:
      *a3 = v18;
      return (unsigned int)v10;
    }
LABEL_16:
    if ( !a2 )
      goto LABEL_12;
    v19 = 256LL;
    if ( *((_DWORD *)this + 105) == 7 && !a9 || a8 )
      v19 = 64LL;
    v20 = operator new(0xB0uLL, 0x4B677844u, v19);
    v18 = (struct ADAPTER_RENDER **)v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 16) = a2;
      *(_OWORD *)v20 = 0LL;
      *(_WORD *)(v20 + 24) = 0;
      *(_BYTE *)(v20 + 26) = 0;
      *(_QWORD *)(v20 + 32) = 0LL;
      *(_QWORD *)(v20 + 120) = 0LL;
      *(_QWORD *)(v20 + 128) = 0LL;
      *(_QWORD *)(v20 + 136) = 0LL;
      *(_DWORD *)(v20 + 144) = 0;
      *(_QWORD *)(v20 + 168) = this;
      *(_OWORD *)(v20 + 152) = 0LL;
      v10 = DXGADAPTERSYNCOBJECT::InitializeAdapterObject((DXGADAPTERSYNCOBJECT *)v20, this, a4, a5, a6, a7, a8, a9);
      if ( v10 >= 0 )
        goto LABEL_12;
      DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT((DXGADAPTERSYNCOBJECT *)v18);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v18);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)v10;
  }
  else if ( a2 && (v15 = (struct ADAPTER_RENDER *)*((_QWORD *)v11 + 2), v15 != a2) )
  {
    WdLogSingleEntry4(2LL, this, v15, a2, -1073741811LL);
    v21 = *((_QWORD *)this + 57);
    WdLogGlobalForLineNumber = 2619;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Mismatch RenderCore with 0x%I64x (0x%I64x vs 0x%I64x), returning 0x%I64x",
      (__int64)this,
      v21,
      (__int64)a2,
      -1073741811LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    if ( !this )
      v11 = 0LL;
    result = 0LL;
    *a3 = (struct ADAPTER_RENDER **)v11;
  }
  return result;
}
