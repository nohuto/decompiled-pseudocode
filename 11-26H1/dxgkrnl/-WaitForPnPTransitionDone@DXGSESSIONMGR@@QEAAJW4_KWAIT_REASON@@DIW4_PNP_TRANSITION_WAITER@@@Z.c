/*
 * XREFs of ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x14038BE2C
 * Callers:
 *     DxgkWaitForPnPTransitionDone @ 0x14038BDD4 (DxgkWaitForPnPTransitionDone.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x140047278 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::WaitForPnPTransitionDone(
        __int64 a1,
        KWAIT_REASON a2,
        KPROCESSOR_MODE a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v5; // rsi
  DXGFASTMUTEX *v7; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rcx
  void *v12; // rdi
  unsigned int v13; // ebx
  const wchar_t *v14; // rsi
  __int64 v15; // rax
  union _LARGE_INTEGER *Timeout; // rax
  unsigned int v17; // ebp
  __int64 v19; // rdi
  const wchar_t *v20; // r9
  __int64 v21; // [rsp+50h] [rbp-48h] BYREF
  DXGFASTMUTEX *v22; // [rsp+58h] [rbp-40h] BYREF
  char v23; // [rsp+60h] [rbp-38h]

  v5 = a4;
  v23 = 0;
  v7 = (DXGFASTMUTEX *)(a1 + 88);
  v22 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v7 = 0LL;
  }
  if ( DXGFASTMUTEX::IsOwner(v7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  v10 = 0;
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v22);
  if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 80) || !*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5) )
  {
    v19 = -1073741583LL;
    WdLogSingleEntry2(2LL, v5, -1073741583LL);
    v20 = L"Session 0x%I64x does not have session data, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6078;
    goto LABEL_16;
  }
  _mm_lfence();
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 8 * v5);
  v12 = *(void **)(v11 + 18768);
  if ( !v12 )
  {
    v19 = -1073741811LL;
    WdLogSingleEntry2(2LL, v5, -1073741811LL);
    v20 = L"PnP notification event is not created for session 0x%I64x, returning 0x%I64x.";
    WdLogGlobalForLineNumber = 6088;
LABEL_16:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v20, v5, v19, 0LL, 0LL, 0LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
    return (unsigned int)v19;
  }
  ObfReferenceObject(*(PVOID *)(v11 + 18768));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v22);
  v13 = 0;
  v14 = L"\b";
  do
  {
    v15 = *(int *)v14;
    v10 += v15;
    v21 = -10000000 * v15;
    Timeout = (union _LARGE_INTEGER *)&v21;
    if ( v13 == 3 )
      Timeout = 0LL;
    v17 = KeWaitForSingleObject(v12, a2, a3, 0, Timeout);
    if ( v17 != 258 )
      break;
    DxgkLogCodePointPacket(0x6Fu, v10, a5, 0, 0LL);
    ++v13;
    v14 += 2;
  }
  while ( v13 < 4 );
  ObfDereferenceObject(v12);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v22);
  return v17;
}
