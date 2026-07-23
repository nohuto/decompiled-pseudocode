/*
 * XREFs of HalpBuddyAllocatorBltFindAndPop @ 0x1403598A4
 * Callers:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x1403594F0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

_QWORD *__fastcall HalpBuddyAllocatorBltFindAndPop(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  KIRQL v11; // r9
  _QWORD **v12; // r8
  _QWORD *i; // rbx
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // rcx

  v6 = a2[5];
  if ( v6 == -1 )
    LODWORD(v9) = 63;
  else
    _BitScanForward64((unsigned __int64 *)&v9, v6 + 1);
  _BitScanForward64((unsigned __int64 *)&v10, a1);
  v11 = KeAcquireSpinLockRaiseToDpc(a2 + 13);
LABEL_4:
  if ( (unsigned int)v10 > (unsigned int)v9 )
  {
    i = 0LL;
  }
  else
  {
    v12 = (_QWORD **)(a2[12] + 16LL * (unsigned int)(v10 - 12));
    for ( i = *v12; ; i = (_QWORD *)*i )
    {
      if ( i == v12 )
      {
        LODWORD(v10) = v10 + 1;
        goto LABEL_4;
      }
      v14 = i[6];
      if ( v14 + i[7] - 1LL >= a1 + a3 - 1 && v14 <= a4 - a1 + 1 )
        break;
    }
    v15 = (_QWORD *)*i;
    if ( *(_QWORD **)(*i + 8LL) != i || (v16 = (_QWORD *)i[1], (_QWORD *)*v16 != i) )
      __fastfail(3u);
    *v16 = v15;
    v15[1] = v16;
    i[1] = i;
    *i = i;
  }
  KeReleaseSpinLock(a2 + 13, v11);
  return i;
}
