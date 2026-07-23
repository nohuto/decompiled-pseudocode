/*
 * XREFs of HalpVpptArmTimer @ 0x140585660
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpVpptUpdatePhysicalTimer @ 0x140434048 (HalpVpptUpdatePhysicalTimer.c)
 */

__int64 __fastcall HalpVpptArmTimer(__int64 *a1, int a2, __int64 a3)
{
  __int64 v7; // rdi
  __int64 v8; // rbp
  int v9; // esi
  __int64 *v10; // rcx
  __int64 **v11; // rax
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v13; // rdx
  int *v14; // rax
  __int64 i; // rcx
  __int64 v16; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  if ( ((a2 - 1) & 0xFFFFFFFD) != 0 )
    return 3221225659LL;
  byte_140FBB798 = HalpAcquireHighLevelLock(&qword_140FBB790);
  v7 = 0LL;
  if ( *(int **)&HalpVpptQueue == &HalpVpptQueue )
  {
    v8 = 0LL;
    v9 = -1;
  }
  else
  {
    v8 = *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL);
    v9 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    v10 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1 )
      goto LABEL_17;
    v11 = (__int64 **)a1[1];
    if ( *v11 != a1 )
      goto LABEL_17;
    *v11 = v10;
    v10[1] = (__int64)v11;
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  if ( a2 != 3 )
    v7 = a3;
  v13 = InterruptTimePrecise.QuadPart + a3;
  v14 = &HalpVpptQueue;
  a1[4] = v13;
  a1[5] = v7;
  for ( i = *(_QWORD *)&HalpVpptQueue; (int *)i != &HalpVpptQueue && v13 >= *(_QWORD *)(i + 32); i = *(_QWORD *)i )
    v14 = (int *)i;
  v16 = *(_QWORD *)v14;
  if ( *(int **)(*(_QWORD *)v14 + 8LL) != v14 )
LABEL_17:
    __fastfail(3u);
  *a1 = v16;
  a1[1] = (__int64)v14;
  *(_QWORD *)(v16 + 8) = a1;
  *(_QWORD *)v14 = a1;
  if ( *(_QWORD *)(*(_QWORD *)&HalpVpptQueue + 32LL) != v8 || *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL) != v9 )
    HalpVpptUpdatePhysicalTimer(i);
  *((_DWORD *)a1 + 5) = 2;
  *((_BYTE *)a1 + 24) = 1;
  HalpReleaseHighLevelLock(&qword_140FBB790, byte_140FBB798);
  return 0LL;
}
