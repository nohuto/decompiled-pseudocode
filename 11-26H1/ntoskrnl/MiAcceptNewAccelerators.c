/*
 * XREFs of MiAcceptNewAccelerators @ 0x140885D8C
 * Callers:
 *     MmAcceleratorCallbackRoutine @ 0x140885F60 (MmAcceleratorCallbackRoutine.c)
 * Callees:
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiSignalNewAcceleratorsAvailable @ 0x140714488 (MiSignalNewAcceleratorsAvailable.c)
 *     MiQueryAcceleratorHandle @ 0x140885EB0 (MiQueryAcceleratorHandle.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiAcceptNewAccelerators(__int64 a1)
{
  __int64 v2; // rdi
  int CurrentProcessorColor; // eax
  _QWORD *PoolMm; // rbx
  __int64 v5; // r14
  char ****v6; // rax
  __int64 *result; // rax
  char ***v8; // [rsp+20h] [rbp-10h] BYREF
  char ****v9; // [rsp+28h] [rbp-8h]
  unsigned int v10; // [rsp+50h] [rbp+20h] BYREF
  __int64 v11; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0LL;
  v9 = &v8;
  v10 = 0;
  v8 = (char ***)&v8;
  v2 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 8) )
      goto LABEL_13;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (_QWORD *)ExAllocatePoolMm(64LL, 0x38uLL, 1632135501, CurrentProcessorColor | 0x80000000);
    if ( !PoolMm )
      break;
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
    if ( (int)MiQueryAcceleratorHandle(v5, &v10, &v11) < 0 )
    {
      byte_140E36686 = 1;
      goto LABEL_11;
    }
    if ( v10 >= (unsigned __int16)KeNumberNodes )
    {
      byte_140E36687 = 1;
LABEL_11:
      ExFreePoolWithTag(PoolMm, 0);
      goto LABEL_13;
    }
    *((_DWORD *)PoolMm + 6) = v10;
    PoolMm[4] = v11;
    PoolMm[2] = v5;
    v6 = v9;
    if ( *v9 != (char ***)&v8 )
      __fastfail(3u);
    PoolMm[1] = v9;
    *PoolMm = &v8;
    v2 = (unsigned int)(v2 + 1);
    *v6 = (char ***)PoolMm;
    v9 = (char ****)PoolMm;
  }
  byte_140E36685 = 1;
LABEL_13:
  result = (__int64 *)&v8;
  if ( v8 != (char ***)&v8 )
    return MiSignalNewAcceleratorsAvailable((char ***)&v8);
  return result;
}
