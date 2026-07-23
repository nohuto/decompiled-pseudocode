/*
 * XREFs of ObFastReferenceObject @ 0x1404099C0
 * Callers:
 *     IopQueueIrpToFileObject @ 0x140409810 (IopQueueIrpToFileObject.c)
 *     PspReferenceSystemDll @ 0x140A08E70 (PspReferenceSystemDll.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140278120 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1, unsigned int a2)
{
  signed __int64 v2; // rbx
  signed __int64 v3; // r9
  signed __int64 v4; // rax
  ULONG_PTR v5; // rbx
  unsigned int v6; // r9d
  __int64 v8; // rax
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  _m_prefetchw(a1);
  v2 = *a1;
  v3 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v4 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v4 )
        break;
      v2 = v4;
      LOBYTE(v3) = v4;
    }
    while ( (v4 & 0xF) != 0 );
  }
  v5 = v2 & 0xFFFFFFFFFFFFFFF0uLL;
  v6 = v3 & 0xF;
  if ( v6 > 1 )
  {
LABEL_4:
    ObpTraceObjectReferenceIfActive(v5 - 48, 1, a2);
    return v5;
  }
  if ( v6 )
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 - 48), 0xFuLL);
    if ( v8 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v5, 0x10uLL, v8 + 15);
    _m_prefetchw(a1);
    v9 = *a1;
    while ( (v9 & 0xF) == 0 && v5 == (v9 & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      v10 = v9;
      v9 = _InterlockedCompareExchange64(a1, v9 + 15, v9);
      if ( v10 == v9 )
        goto LABEL_4;
    }
    _InterlockedAdd64((volatile signed __int64 *)(v5 - 48), 0xFFFFFFFFFFFFFFF1uLL);
    goto LABEL_4;
  }
  return 0LL;
}
