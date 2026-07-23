/*
 * XREFs of PpmAllocatePerfCheck @ 0x1407D9270
 * Callers:
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmAllocatePerfCheck(__int64 a1)
{
  PVOID *Pool2; // rdi
  unsigned int v3; // ebx
  int v4; // ebp
  __int64 v5; // rax
  PVOID *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  PVOID v9; // rcx
  PVOID v10; // rcx

  if ( *(_QWORD *)(a1 + 16) )
    return 0;
  Pool2 = (PVOID *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v4 = PpmHeteroWorkloadClasses;
  v5 = ExAllocatePool2(0x40uLL);
  v6 = Pool2 + 19;
  Pool2[19] = (PVOID)v5;
  if ( v5 )
  {
    v7 = ExAllocatePool2(0x40uLL);
    Pool2[11] = (PVOID)v7;
    if ( v7 )
    {
      v8 = ExAllocatePool2(0x40uLL);
      Pool2[27] = (PVOID)v8;
      if ( v8 )
      {
        *((_DWORD *)*v6 + 12) = v4;
        *((_DWORD *)Pool2[11] + 12) = v4;
        *((_DWORD *)Pool2[27] + 12) = v4;
        *(_QWORD *)(a1 + 16) = Pool2;
        return 0;
      }
    }
  }
  v3 = -1073741670;
  if ( *v6 )
    ExFreePoolWithTag(*v6, 0x704D5050u);
  v9 = Pool2[11];
  if ( v9 )
    ExFreePoolWithTag(v9, 0x704D5050u);
  v10 = Pool2[27];
  if ( v10 )
    ExFreePoolWithTag(v10, 0x704D5050u);
  ExFreePoolWithTag(Pool2, 0x704D5050u);
  return v3;
}
