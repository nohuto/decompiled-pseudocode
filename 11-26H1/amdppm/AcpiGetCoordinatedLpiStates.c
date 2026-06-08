/*
 * XREFs of AcpiGetCoordinatedLpiStates @ 0x14002A0CC
 * Callers:
 *     RegisterKernelCoordinatedLpiStates @ 0x14003545C (RegisterKernelCoordinatedLpiStates.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 *     AcpiParseProcessorContainer @ 0x14002B3B0 (AcpiParseProcessorContainer.c)
 *     Display_LPI @ 0x14002C824 (Display_LPI.c)
 */

__int64 __fastcall AcpiGetCoordinatedLpiStates(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  _DWORD *v5; // rbx
  __int64 Pool2; // rax
  unsigned int *v7; // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // edi
  __int64 v11; // r14
  __int64 i; // r14
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 j; // r14
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx
  __int128 v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]
  __int64 v23; // [rsp+A0h] [rbp+30h] BYREF

  v21 = 0;
  v23 = 0LL;
  v20 = 0LL;
  v4 = 32;
  v5 = 0LL;
  while ( 1 )
  {
    Pool2 = ExAllocatePool2(256LL, v4, 1919119952LL);
    v7 = (unsigned int *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD *)(a1 + 16);
    *((_QWORD *)&v20 + 1) = Pool2;
    *(_QWORD *)&v20 = 1LL;
    v22 = 0;
    v21 = v4;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64, _QWORD, __int128 *, _QWORD, __int64 *))(WdfFunctions_01015 + 1488))(
           WdfDriverGlobals,
           v8,
           0LL,
           2703748LL,
           0LL,
           &v20,
           0LL,
           &v23);
    v10 = v9;
    if ( v9 != -2147483643 )
      break;
    v4 = *v7;
    ExFreePoolWithTag(v7, (ULONG)0);
  }
  if ( v9 >= 0 && v23 )
  {
    v5 = (_DWORD *)ExAllocatePool2(64LL, 40 * v7[1] + 8, 1919119952LL);
    if ( v5 )
    {
      v11 = 0LL;
      *v5 = v7[1];
      while ( (unsigned int)v11 < v7[1] )
      {
        v10 = AcpiParseProcessorContainer(v7, (unsigned int)v11, &v5[8 * v11 + 2 + 2 * (unsigned int)v11]);
        if ( v10 < 0 )
          goto LABEL_18;
        v11 = (unsigned int)(v11 + 1);
      }
      for ( i = 0LL; (unsigned int)i < *v5; i = (unsigned int)(i + 1) )
      {
        v13 = *(_QWORD *)&v5[10 * i + 6];
        if ( v13 )
          Display_LPI(v13, *(_QWORD *)&v5[10 * i + 4]);
      }
      *a2 = v5;
      v5 = 0LL;
    }
    else
    {
      v10 = -1073741670;
    }
  }
LABEL_18:
  ExFreePoolWithTag(v7, (ULONG)0);
  v14 = v10;
  if ( v5 )
  {
    for ( j = 0LL; (unsigned int)j < *v5; j = (unsigned int)(j + 1) )
    {
      v16 = *(void **)&v5[10 * j + 4];
      if ( v16 )
        ExFreePoolWithTag(v16, (ULONG)0);
      v17 = *(void **)&v5[10 * j + 10];
      if ( v17 )
        ExFreePoolWithTag(v17, (ULONG)0);
      v18 = *(void **)&v5[10 * j + 6];
      if ( v18 )
        ExFreePoolWithTag(v18, (ULONG)0);
    }
    ExFreePoolWithTag(v5, (ULONG)0);
  }
  return v14;
}
