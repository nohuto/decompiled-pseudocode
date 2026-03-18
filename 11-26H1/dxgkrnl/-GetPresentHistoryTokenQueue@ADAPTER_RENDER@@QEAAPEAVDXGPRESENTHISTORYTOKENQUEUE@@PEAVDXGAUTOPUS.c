/*
 * XREFs of ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x14036CC90
 * Callers:
 *     DxgkGetPresentHistoryReadyEvent @ 0x140423AA0 (DxgkGetPresentHistoryReadyEvent.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ??1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x1401F4EFC (--1DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 *     ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x140336B70 (-Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ.c)
 *     ??0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ @ 0x140430404 (--0DXGPRESENTHISTORYTOKENQUEUE@@QEAA@XZ.c)
 */

struct DXGPRESENTHISTORYTOKENQUEUE *__fastcall ADAPTER_RENDER::GetPresentHistoryTokenQueue(
        ADAPTER_RENDER *this,
        struct DXGAUTOPUSHLOCK *a2,
        int a3)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessSessionId; // eax
  const void **v8; // rsi
  __int64 v9; // rbx
  struct DXGPRESENTHISTORYTOKENQUEUE *result; // rax
  _QWORD *v11; // r14
  DXGPRESENTHISTORYTOKENQUEUE *v12; // rax
  const wchar_t *v13; // r9
  int v14; // r15d
  unsigned __int64 v15; // rax
  char *v16; // rax
  char *v17; // r14
  union _SLIST_HEADER *v18; // rax
  DXGPRESENTHISTORYTOKENQUEUE *v19; // rsi

  CurrentProcess = PsGetCurrentProcess(this);
  ProcessSessionId = PsGetProcessSessionId(CurrentProcess);
  v8 = (const void **)((char *)this + 1016);
  v9 = ProcessSessionId;
  if ( ProcessSessionId >= *((_DWORD *)this + 252)
    || (result = (struct DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)*v8 + ProcessSessionId)) == 0LL )
  {
    if ( !a3 )
      return 0LL;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK(a2);
    DXGAUTOPUSHLOCK::AcquireExclusive(a2);
    if ( (unsigned int)v9 >= *((_DWORD *)this + 252) )
    {
      v14 = v9 + 4;
      v15 = 8LL * (unsigned int)(v9 + 4);
      if ( !is_mul_ok((unsigned int)(v9 + 4), 8uLL) )
        v15 = -1LL;
      v16 = (char *)operator new[](v15, 0x4B677844u, 256LL);
      v17 = v16;
      if ( !v16 )
      {
        WdLogSingleEntry2(2LL, this, v9);
        v13 = L"No memory for the new Present History Token queue session table on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
        WdLogGlobalForLineNumber = 2609;
LABEL_9:
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, (__int64)this, v9, 0LL, 0LL, 0LL);
        return 0LL;
      }
      if ( *v8 )
        memmove(v16, *v8, 8LL * *((unsigned int *)this + 252));
      memset(&v17[8 * *((unsigned int *)this + 252)], 0, 8LL * (unsigned int)(v14 - *((_DWORD *)this + 252)));
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete((void *)*v8);
      *v8 = v17;
      v11 = (_QWORD *)((char *)this + 1016);
      *((_DWORD *)this + 252) = v14;
    }
    else
    {
      v11 = (_QWORD *)((char *)this + 1016);
    }
    if ( *((_QWORD *)*v8 + v9) )
      return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*v11 + 8 * v9);
    v12 = (DXGPRESENTHISTORYTOKENQUEUE *)operator new(0x4850uLL, 0x4B677844u, 64LL);
    if ( v12 )
    {
      v18 = (union _SLIST_HEADER *)DXGPRESENTHISTORYTOKENQUEUE::DXGPRESENTHISTORYTOKENQUEUE(v12);
      v19 = (DXGPRESENTHISTORYTOKENQUEUE *)v18;
      if ( v18 )
      {
        if ( DXGPRESENTHISTORYTOKENQUEUE::Initialize(v18) < 0 )
        {
          DXGPRESENTHISTORYTOKENQUEUE::~DXGPRESENTHISTORYTOKENQUEUE(v19);
          DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v19);
          return 0LL;
        }
        *(_QWORD *)(*((_QWORD *)this + 127) + 8 * v9) = v19;
        return *(struct DXGPRESENTHISTORYTOKENQUEUE **)(*v11 + 8 * v9);
      }
    }
    WdLogSingleEntry2(2LL, this, v9);
    v13 = L"No memory for the new Present History Token queue on ADAPTER_RENDER 0x%I64x for session 0x%I64x";
    WdLogGlobalForLineNumber = 2645;
    goto LABEL_9;
  }
  return result;
}
