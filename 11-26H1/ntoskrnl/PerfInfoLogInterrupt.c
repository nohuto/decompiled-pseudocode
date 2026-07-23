/*
 * XREFs of PerfInfoLogInterrupt @ 0x14030E640
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x14030E430 (KiInvokeInterruptServiceRoutine.c)
 *     KiScanInterruptObjectList @ 0x14072E930 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x14072EA70 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x14072EB20 (KiInterruptSubDispatchNoLock.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 *__fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  __int16 v4; // di
  int v5; // r9d
  __int64 *result; // rax
  unsigned int v7; // ebx
  bool v8; // zf
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+38h] [rbp-40h]
  int v13; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v14[3]; // [rsp+48h] [rbp-30h] BYREF
  int v15; // [rsp+60h] [rbp-18h]
  int i; // [rsp+64h] [rbp-14h]

  v13 = 0;
  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v11 = *(_QWORD *)(a1 + 32);
      v4 = 3890;
      v5 = 16;
      v13 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v4 = 3907;
      v11 = *(_QWORD *)(a1 + 24);
      v5 = 12;
    }
  }
  else
  {
    v4 = 3935;
    v11 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  result = &v11;
  v12 = a2;
  v14[2] = &v11;
  v15 = v5;
  v7 = *(_DWORD *)(EtwpHostSiloState + 4520);
  v8 = !_BitScanForward((unsigned int *)&v9, v7);
  for ( i = 0; !v8; v8 = !_BitScanForward((unsigned int *)&v9, v7) )
  {
    v7 &= v7 - 1;
    result = (__int64 *)(EtwpHostSiloState + 32LL * (unsigned int)v9 + 4556);
    if ( result )
    {
      if ( (*((_DWORD *)result + 1) & 0x4000) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4505) - 1LL;
        v14[1] = 8LL;
        v14[0] = a3 + 8 * v10;
        result = (__int64 *)EtwpLogKernelEvent(
                              (unsigned int)v14,
                              EtwpHostSiloState,
                              *(unsigned __int8 *)(EtwpHostSiloState + 2LL * (unsigned int)v9 + 4504),
                              2,
                              v4,
                              5245442);
      }
    }
  }
  return result;
}
