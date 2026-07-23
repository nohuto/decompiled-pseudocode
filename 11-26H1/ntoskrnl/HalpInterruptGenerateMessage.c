/*
 * XREFs of HalpInterruptGenerateMessage @ 0x14057E07C
 * Callers:
 *     HalpPopulateMsiMessages @ 0x14057E794 (HalpPopulateMsiMessages.c)
 *     HalpIommuConfigureInterrupt @ 0x14058E40C (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     HalGetProcessorIdByNtNumber @ 0x140432C50 (HalGetProcessorIdByNtNumber.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptGenerateMessage(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v4; // rdi
  int v6; // ecx
  char v7; // r15
  __int64 v11; // rcx
  int v12; // ecx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  int ProcessorIdByNtNumber; // eax
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // r8d
  int v19; // eax
  __int128 v21; // [rsp+30h] [rbp-40h] BYREF
  __int128 v22; // [rsp+40h] [rbp-30h] BYREF
  __int128 v23; // [rsp+50h] [rbp-20h] BYREF
  __int64 v24; // [rsp+60h] [rbp-10h]

  v4 = HalpInterruptController;
  *a3 = 0LL;
  *a4 = 0LL;
  v6 = *(_DWORD *)a1;
  v7 = 0;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v11 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v11 )
  {
    v12 = v11 - 2;
    if ( v12 )
    {
      if ( v12 != 3 )
        return (unsigned int)-1073741637;
      v14 = *(unsigned int *)(a1 + 8);
      v7 = 1;
      DWORD2(v22) = 4;
      ProcessorIdByNtNumber = HalGetProcessorIdByNtNumber(v14, (__int64)&v23, (__int64)a3, (__int64)a4);
      if ( ProcessorIdByNtNumber < 0 )
      {
        HalpInterruptSetProblemEx(
          0LL,
          21,
          ProcessorIdByNtNumber,
          (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
          0x7B3u);
        return (unsigned int)-1073741811;
      }
    }
    else
    {
      DWORD2(v22) = 1;
    }
  }
  else
  {
    v19 = HalpInterruptDestinationToTarget(v11, a1, (_DWORD *)&v22 + 2);
    if ( v19 < 0 )
    {
      HalpInterruptSetProblemEx(0LL, 21, v19, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x7C3u);
      return (unsigned int)-1073741811;
    }
  }
  v16 = 16;
  LODWORD(v21) = 2;
  DWORD2(v21) = 1;
  *(_QWORD *)&v22 = 0x1FFFFFFFFLL;
  if ( !v7 )
    v16 = 18;
  HIDWORD(v21) = v16;
  LODWORD(v24) = *(_DWORD *)(a2 + 4);
  if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 )
  {
    v17 = *(_DWORD **)(a1 + 16);
    if ( (*v17 & 0x3FFFFFFF) != 0x3FFFFFFE )
    {
      DWORD2(v22) = 7;
      LODWORD(v23) = *v17 & 0x3FFFFFFF;
    }
  }
  v18 = -1073741637;
  if ( *(_QWORD *)(v4 + 136) && (v18 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 16), &v21), v18 >= 0) )
  {
    v13 = -1073740768;
    if ( (((-(__int64)(HalpApicGuestX2Mode != 0) & 0xFF00000100000000uLL) - 0x100000000LL) & *a3) == 0 )
      return (*a4 & 0xFFFFFFFFFFFF0000uLL) != 0 ? 0xC0000420 : 0;
  }
  else
  {
    HalpInterruptSetProblemEx(v4, 8, v18, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 0x801u);
  }
  return v13;
}
