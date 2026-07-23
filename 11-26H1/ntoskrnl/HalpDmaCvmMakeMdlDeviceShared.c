/*
 * XREFs of HalpDmaCvmMakeMdlDeviceShared @ 0x140785C5C
 * Callers:
 *     HalpDmaAllocateScatterMemory @ 0x140B330DC (HalpDmaAllocateScatterMemory.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpDmaCvmSetPageShareability @ 0x140785D68 (HalpDmaCvmSetPageShareability.c)
 */

__int64 __fastcall HalpDmaCvmMakeMdlDeviceShared(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // r14d
  unsigned __int64 i; // rbp
  ULONG_PTR BugCheckParameter4; // rbx
  int v13; // eax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(_QWORD *)a1 == 0LL;
  v14 = 0LL;
  if ( !v3 )
    return 3221225474LL;
  v6 = qword_140FBAD48;
  v7 = 0LL;
  v8 = (*(_DWORD *)(a1 + 40) >> 12) + (unsigned int)((*(_DWORD *)(a1 + 40) & 0xFFF) != 0);
  while ( 1 )
  {
    if ( v7 >= v8 )
      return 0LL;
    v9 = *(_QWORD *)(a1 + 8 * v7 + 48) << 12;
    if ( (v9 & v6) == 0 )
      break;
LABEL_8:
    ++v7;
  }
  LOBYTE(a3) = 1;
  v10 = HalpDmaCvmSetPageShareability(v9, 1LL, a3, &v14);
  if ( v10 >= 0 )
  {
    *(_QWORD *)(a1 + 8 * v7 + 48) = v14 >> 12;
    goto LABEL_8;
  }
  for ( i = 0LL; i < v7; ++i )
  {
    BugCheckParameter4 = *(_QWORD *)(a1 + 8 * i + 48) << 12;
    v13 = HalpDmaCvmSetPageShareability(BugCheckParameter4, 1LL, 0LL, &v14);
    if ( v13 < 0 )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF08uLL, v13, BugCheckParameter4);
    *(_QWORD *)(a1 + 8 * i + 48) = v14 >> 12;
  }
  return (unsigned int)v10;
}
