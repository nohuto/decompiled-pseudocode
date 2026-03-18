/*
 * XREFs of PpmCapturePerformanceDistribution @ 0x140428B10
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B145DC (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeGetPrcb @ 0x1402916D0 (KeGetPrcb.c)
 *     PopQueueTargetDpc @ 0x14042883C (PopQueueTargetDpc.c)
 *     PpmCapturePerformanceDistributionCallback @ 0x140428DC0 (PpmCapturePerformanceDistributionCallback.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall PpmCapturePerformanceDistribution(
        unsigned __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        _DWORD *a5)
{
  unsigned __int64 v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 Prcb; // r15
  unsigned __int8 CurrentIrql; // si
  int v16; // r14d
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 result; // rax
  unsigned int v22; // eax
  __int64 Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+54h] [rbp-ACh]
  int v28; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v29; // [rsp+68h] [rbp-98h]
  _QWORD v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v31; // [rsp+80h] [rbp-80h]
  int v32; // [rsp+82h] [rbp-7Eh]
  __int16 v33; // [rsp+86h] [rbp-7Ah]
  _QWORD v34[5]; // [rsp+88h] [rbp-78h] BYREF
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+B4h] [rbp-4Ch]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v38; // [rsp+D0h] [rbp-30h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  __int64 v42; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v43[33]; // [rsp+108h] [rbp+8h] BYREF

  v29 = a5;
  memset_0(&v42, 0, 0x108uLL);
  v25 = (_DWORD *)a1;
  LOWORD(a1) = *(_WORD *)(a4 + 8);
  v9 = *(_QWORD *)a4;
  v28 = 0;
  v26 = a2;
  v27 = (unsigned int)(4 * a3 + 4);
  do
  {
LABEL_2:
    v10 = (unsigned __int16)a1 + 1;
    while ( !v9 )
    {
      a1 = (unsigned __int16)(a1 + 1);
      if ( (unsigned int)a1 >= v10 )
      {
        v22 = v27;
        *v29 = v27;
        if ( v22 > a2 )
          return 3221225476LL;
        *v25 = a3;
        return 0LL;
      }
      v9 = *(_QWORD *)(8 * a1 + 8);
    }
    _BitScanForward64(&v11, v9);
    v9 &= ~(1LL << v11);
    Prcb = KeGetPrcb(*((_DWORD *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
                     + 64 * (unsigned __int16)a1
                     + (unsigned int)(unsigned __int8)v11));
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v12) = 2;
      LOBYTE(v13) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(v13, v12);
    }
    v16 = PpmCapturePerformanceDistributionCallback(Prcb);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  while ( v16 >= 0 );
  v42 = 2097153LL;
  memset_0(v43, 0, 0x100uLL);
  v17 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * *(unsigned int *)(Prcb + 36)) & 0x3F;
  v18 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * *(unsigned int *)(Prcb + 36)) >> 6;
  if ( (unsigned __int16)v42 > (unsigned int)v18 )
    goto LABEL_12;
  if ( WORD1(v42) > (unsigned int)v18 )
  {
    LOWORD(v42) = v18 + 1;
LABEL_12:
    v19 = (unsigned int)v18;
    v20 = v43[v18];
    _bittestandset64(&v20, v17);
    v43[v19] = v20;
  }
  v36 = 0;
  v40 = 0LL;
  v41 = 0;
  v32 = 0;
  v33 = 0;
  v24[1] = v24;
  v24[0] = v24;
  v30[1] = v43[0];
  v30[0] = &v42;
  v34[0] = PpmCapturePerformanceDistributionCallback;
  v34[1] = &v25;
  v34[4] = v30;
  v34[3] = &Object;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  Object = 393217LL;
  v38 = 0LL;
  v31 = 0;
  v39 = 0LL;
  v34[2] = 0LL;
  v35 = 0;
  PopQueueTargetDpc((ULONG_PTR)BugCheckParameter2, (__int64)v34);
  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  result = (unsigned int)v35;
  if ( v35 >= 0 )
    goto LABEL_2;
  return result;
}
