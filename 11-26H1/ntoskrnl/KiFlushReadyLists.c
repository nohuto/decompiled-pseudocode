/*
 * XREFs of KiFlushReadyLists @ 0x140336D7C
 * Callers:
 *     KiParkCurrentProcessor @ 0x14033670C (KiParkCurrentProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x140307900 (KiInsertDeferredReadyList.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x14043D290 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

_UNKNOWN **__fastcall KiFlushReadyLists(__int64 a1, unsigned int *a2, __int64 *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  __int64 *v6; // r12
  unsigned int v9; // esi
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdi
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  __int64 v15; // rdx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h] BYREF
  int v17; // [rsp+58h] [rbp+10h] BYREF

  result = &retaddr;
  v6 = a3;
  if ( a4 )
  {
    v17 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 768), 0LL) )
    {
      do
      {
        KeYieldProcessorEx(&v17);
        result = *(_UNKNOWN ***)(a4 + 768);
      }
      while ( result );
    }
  }
  v9 = *a2;
  if ( *a2 )
  {
    do
    {
      _BitScanForward((unsigned int *)&v10, v9);
      v17 = 0;
      v9 &= v9 - 1;
      v11 = (_QWORD *)(a1 + 16 * v10);
      v12 = (_QWORD *)*v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
        __fastfail(3u);
      *v13 = v12;
      v14 = v12;
      v12[1] = v13;
      v11[1] = v11;
      *v11 = v11;
      do
      {
        if ( a4 )
        {
          LOBYTE(a3) = 1;
          KiUpdateSoftParkElectionStatisticsOnRemoval(a4, v12 - 27, a3);
        }
        *((_DWORD *)v12 - 25) |= 2u;
        v15 = (__int64)(v12 - 27);
        v12 = (_QWORD *)*v12;
        result = (_UNKNOWN **)KiInsertDeferredReadyList(v6, v15);
      }
      while ( v12 != v14 );
    }
    while ( v9 );
    *a2 = 0;
  }
  if ( a4 )
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 768), 0LL);
  return result;
}
