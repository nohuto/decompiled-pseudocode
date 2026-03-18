/*
 * XREFs of ??1DXGADAPTERSYNCOBJECT@@QEAA@XZ @ 0x14037B2A8
 * Callers:
 *     ??1DXGSYNCOBJECTSA@@QEAA@XZ @ 0x140050584 (--1DXGSYNCOBJECTSA@@QEAA@XZ.c)
 *     ??_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z @ 0x140061324 (--_GDXGADAPTERSYNCOBJECTCA@@QEAAPEAXI@Z.c)
 *     ??1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ @ 0x14006CDD4 (--1DXGADAPTERSYNCOBJECTCA@@QEAA@XZ.c)
 *     ?GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PEAVDXGDEVICE@@PEAVDXGPAGINGQUEUE@@PEAEI_N5@Z @ 0x140372CF0 (-GetDxgAdapterSyncObject@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAPEAVDXGADAPTERSYNCOBJECT@@PE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

void __fastcall DXGADAPTERSYNCOBJECT::~DXGADAPTERSYNCOBJECT(DXGADAPTERSYNCOBJECT *this)
{
  __int64 v2; // rdi
  DXGADAPTERSYNCOBJECT *v3; // rdx
  DXGADAPTERSYNCOBJECT **v4; // rax
  __int64 v5; // rcx

  if ( *((_BYTE *)this + 24) )
  {
    v2 = *((_QWORD *)this + 2);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v2 + 192));
    v3 = *(DXGADAPTERSYNCOBJECT **)this;
    if ( *(DXGADAPTERSYNCOBJECT **)(*(_QWORD *)this + 8LL) != this
      || (v4 = (DXGADAPTERSYNCOBJECT **)*((_QWORD *)this + 1), *v4 != this) )
    {
      __fastfail(3u);
    }
    *v4 = v3;
    *((_QWORD *)v3 + 1) = v4;
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v2 + 192));
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v5 + 16), (struct DXGADAPTER *)v5);
  }
  if ( *((_QWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1692;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pVidSchSyncObject == NULL", 1692LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
