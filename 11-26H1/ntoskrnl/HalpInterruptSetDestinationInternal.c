/*
 * XREFs of HalpInterruptSetDestinationInternal @ 0x140435518
 * Callers:
 *     HalpInterruptSetDestination @ 0x140432F20 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x14032FC8C (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptApplyOverrides @ 0x140433248 (HalpInterruptApplyOverrides.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptFindBestRouting @ 0x1404357AC (HalpInterruptFindBestRouting.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetDestinationInternal(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  ULONG_PTR *v6; // rax
  __int64 v7; // rbx
  ULONG_PTR *v8; // rcx
  ULONG_PTR *v9; // rax
  ULONG_PTR *v10; // rsi
  int v11; // edx
  unsigned int v12; // edi
  __int64 v13; // rbp
  __int64 *v14; // r15
  int v15; // r8d
  ULONG_PTR v17; // rax
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int128 v20; // xmm0
  signed __int32 v21[8]; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+30h] [rbp-98h]
  __int128 v23; // [rsp+40h] [rbp-88h]
  __int128 v24; // [rsp+50h] [rbp-78h]
  __int64 v25; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+20h]

  v25 = *a1;
  HalpInterruptApplyOverrides((int *)&v25, 0LL, 0LL);
  LODWORD(v5) = v25;
  while ( 2 )
  {
    v6 = HalpInterruptLookupController(v5);
    v7 = (__int64)v6;
    if ( v6 )
    {
      if ( (v6[31] & 2) != 0 )
        KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, (ULONG_PTR)v6, 0x7931847uLL);
      v8 = v6 + 33;
      v9 = (ULONG_PTR *)v6[33];
      do
      {
        if ( v9 == v8 )
          goto LABEL_15;
        v10 = v9;
        v9 = (ULONG_PTR *)*v9;
        v11 = *((_DWORD *)v10 + 5);
      }
      while ( v11 > SHIDWORD(v25) || *((_DWORD *)v10 + 6) <= SHIDWORD(v25) );
      v12 = HIDWORD(v25) - v11;
      if ( !v10 )
      {
LABEL_15:
        HalpInterruptLastProblemController = v7;
        HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        HalpInterruptLastProblem = 18;
        HalpInterruptLastProblemLine = 1071;
        HalpInterruptLastProblemStatus = 0;
        *(_QWORD *)(v7 + 316) = 18LL;
        *(_QWORD *)(v7 + 328) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
        *(_DWORD *)(v7 + 336) = 1071;
        return (unsigned int)-1073741275;
      }
      if ( *(_BYTE *)(v10[6] + 16LL * v12) )
      {
        HalpInterruptSetProblemEx(v7, 19, 0, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c", 1084);
        return (unsigned int)-1073741811;
      }
      else
      {
        v13 = v10[5] + 56LL * v12;
        v22 = *(_OWORD *)v13;
        v23 = *(_OWORD *)(v13 + 16);
        v24 = *(_OWORD *)(v13 + 32);
        v26 = *(_QWORD *)(v13 + 48);
        HalpInterruptDestinationToTarget(2LL * v12, a2, (_DWORD *)(v13 + 24));
        v14 = (__int64 *)(v13 + 16);
        HalpInterruptFindBestRouting(&v25, *(_QWORD *)a3, v13 + 16);
        _InterlockedOr(v21, 0);
        v15 = HalpInterruptSetLineStateInternal(v7, (__int64)&v25, v13);
        if ( v15 < 0 )
        {
          HalpInterruptSetProblemEx(
            v7,
            7,
            v15,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\connect.c",
            1123);
          v17 = v10[5];
          v18 = v23;
          v19 = 56LL * v12;
          *(_OWORD *)(v19 + v17) = v22;
          v20 = v24;
          *(_OWORD *)(v19 + v17 + 16) = v18;
          *(_OWORD *)(v19 + v17 + 32) = v20;
          *(_QWORD *)(v19 + v17 + 48) = v26;
        }
        else if ( *(_DWORD *)(v13 + 20) != *(_DWORD *)(a3 + 4) || *(_DWORD *)v14 != *(_DWORD *)a3 )
        {
          v5 = *v14;
          v25 = *v14;
          continue;
        }
      }
    }
    else
    {
      HalpInterruptLastProblemController = 0LL;
      HalpInterruptLastProblemFile = (__int64)"minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      HalpInterruptLastProblem = 17;
      HalpInterruptLastProblemStatus = 0;
      HalpInterruptLastProblemLine = 1047;
      return (unsigned int)-1073741275;
    }
    return (unsigned int)v15;
  }
}
