/*
 * XREFs of PopFxAllocatePowerIrp @ 0x14021BA28
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 * Callees:
 *     PopFxTryReferenceDevice @ 0x14021B7B8 (PopFxTryReferenceDevice.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeResetEvent @ 0x140397930 (KeResetEvent.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 */

__int64 __fastcall PopFxAllocatePowerIrp(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *OldIrql,
        _QWORD *a8)
{
  volatile LONG *v9; // rbp
  KIRQL v14; // al
  __int64 v15; // rdi
  int v16; // esi
  __int64 v17; // r8
  signed __int32 v18; // edx
  char v19; // al
  signed __int32 v21; // r8d
  __int64 v22; // rcx
  signed __int32 v23; // r8d
  signed __int32 v24; // eax
  signed __int32 v25; // eax
  signed __int32 v26; // ett
  signed __int32 v27; // ett
  KIRQL OldIrqla; // [rsp+80h] [rbp+38h]

  v9 = (volatile LONG *)(a1 + 88);
  *OldIrql = 0LL;
  *a8 = 0LL;
  v14 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 88));
  v15 = *(_QWORD *)(a1 + 80);
  OldIrqla = v14;
  if ( !v15 )
  {
    v16 = -1073741130;
    goto LABEL_8;
  }
  v16 = PopFxTryReferenceDevice(v15, 0);
  if ( v16 < 0 )
    goto LABEL_8;
  _m_prefetchw((const void *)(v15 + 32));
  v18 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x10;
  _m_prefetchw((const void *)(v15 + 32));
  v19 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
  if ( v18 )
  {
    if ( (v19 & 0x20) == 0 )
      goto LABEL_13;
    _m_prefetchw((const void *)(v15 + 32));
    v24 = *(_DWORD *)(v15 + 32);
    do
    {
      v26 = v24;
      v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v24, v24);
    }
    while ( v26 != v24 );
    v17 = v24 & 0x100;
    _m_prefetchw((const void *)(v15 + 32));
    if ( ((_DWORD)v17 != 0) != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
    {
LABEL_13:
      _m_prefetchw((const void *)(v15 + 32));
      v21 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x200;
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x20u);
      _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x200u);
      v16 = 259;
      *(_QWORD *)((v21 != 0 ? 8 : 0) + v15 + 552) = a2;
      *(_DWORD *)((v21 != 0 ? 4 : 0) + v15 + 568) = a3;
      v22 = v21 != 0 ? 8 : 0;
      v17 = (unsigned int)-v21;
      *(_QWORD *)(v22 + v15 + 576) = a4;
      *(_QWORD *)(((_DWORD)v17 != 0 ? 8 : 0) + v15 + 592) = a5;
      goto LABEL_14;
    }
LABEL_22:
    v16 = -1073741670;
    goto LABEL_14;
  }
  if ( (v19 & 0x10) != 0 )
  {
LABEL_14:
    PopFxDereferenceDevice(v15, 0LL, v17, 0LL);
    goto LABEL_8;
  }
  if ( !a6 )
  {
    _m_prefetchw((const void *)(v15 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x20) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
      KeResetEvent((PRKEVENT)(v15 + 608));
      v16 = 0;
      *OldIrql = *(_QWORD *)(v15 + 16);
      *a8 = *(_QWORD *)(v15 + 24);
      goto LABEL_8;
    }
    _m_prefetchw((const void *)(v15 + 32));
    v25 = *(_DWORD *)(v15 + 32);
    do
    {
      v27 = v25;
      v25 = _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 32), v25, v25);
    }
    while ( v27 != v25 );
    v17 = v25 & 0x100;
    _m_prefetchw((const void *)(v15 + 32));
    if ( ((_DWORD)v17 != 0) != (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
      goto LABEL_13;
    goto LABEL_22;
  }
  _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0);
  _InterlockedXor((volatile signed __int32 *)(v15 + 32), 0x100u);
  _m_prefetchw((const void *)(v15 + 32));
  v23 = _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) & 0x100;
  _m_prefetchw((const void *)(v15 + 32));
  if ( (v23 != 0) == (((unsigned int)_InterlockedOr((volatile signed __int32 *)(v15 + 32), 0) >> 9) & 1) )
    _InterlockedAnd((volatile signed __int32 *)(v15 + 32), 0xFFFFFFDF);
  _InterlockedOr((volatile signed __int32 *)(v15 + 32), 0x10u);
  v16 = 0;
  *OldIrql = *(_QWORD *)(v15 + 16);
  *a8 = *(_QWORD *)(v15 + 24);
LABEL_8:
  ExReleaseSpinLockExclusive(v9, OldIrqla);
  if ( v15 )
    PopFxAddLogEntry(*(_QWORD *)(v15 + 48), 0LL, 21LL, v16);
  return (unsigned int)v16;
}
