/*
 * XREFs of MiInitializeNewUltraHugeContext @ 0x1404875D8
 * Callers:
 *     MiGetBackgroundHugePageToZero @ 0x1404BBDD8 (MiGetBackgroundHugePageToZero.c)
 * Callees:
 *     MiGetUltraMapping @ 0x140287730 (MiGetUltraMapping.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiWriteLargePte @ 0x1402A0630 (MiWriteLargePte.c)
 *     MiCreateUltraThreadContext @ 0x1402D6670 (MiCreateUltraThreadContext.c)
 *     MiMakeProtectionPfnCompatible @ 0x14033E850 (MiMakeProtectionPfnCompatible.c)
 *     MiSafeLockPageAtDpc @ 0x14035A998 (MiSafeLockPageAtDpc.c)
 *     MiLockHugePfnAtDpc @ 0x14035AA34 (MiLockHugePfnAtDpc.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiStopPageAccessor @ 0x140487B48 (MiStopPageAccessor.c)
 */

__int64 __fastcall MiInitializeNewUltraHugeContext(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r14
  ULONG_PTR v5; // r14
  __int64 v6; // rbx
  int v7; // r12d
  __int64 v8; // rdi
  __int64 UltraMapping; // rax
  __int64 v10; // rdx
  __int64 *v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r8
  __int64 **v14; // rax
  __int64 result; // rax
  int ProtectionPfnCompatible; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  _OWORD v19[3]; // [rsp+20h] [rbp-38h] BYREF
  int UltraThreadContext; // [rsp+60h] [rbp+8h]

  v2 = *(_QWORD *)(a2 + 168);
  v19[0] = 0LL;
  if ( *(_BYTE *)(a2 + 68) )
  {
    v5 = v2 & 0x3FFFFF;
    v6 = 0LL;
    v7 = 1;
    v8 = *(_QWORD *)((char *)&stru_140E2ED08.116 + 4) + 8 * v5;
    v2 = v5 << 18;
  }
  else
  {
    v6 = 48 * v2 - 0x220000000000LL;
    v7 = 0;
    v8 = 0LL;
  }
  *(_DWORD *)(a2 + 88) = 512;
  *(_QWORD *)(a2 + 96) = a2 + 104;
  ++*(_DWORD *)(a2 + 316);
  *(_QWORD *)(a1 + 328) = a2;
  **(_BYTE **)(a2 + 96) |= 1u;
  MiInitializePageColorBase(0LL, 3, *(_DWORD *)(a2 + 312) + 1, (__int64)v19);
  UltraThreadContext = MiCreateUltraThreadContext(a2 + 176, (__int64)v19, 1, 12LL);
  if ( v7 )
  {
    MiLockHugePfnAtDpc(v8);
  }
  else if ( MiSafeLockPageAtDpc(v2) == 17 )
  {
    v6 = 0LL;
  }
  if ( (*(_QWORD *)(a2 + 24) & 1) != 0 )
  {
    if ( v7 )
    {
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    }
    else if ( v6 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( UltraThreadContext )
      MiDeleteUltraThreadContext(a2 + 176);
    return 1LL;
  }
  else if ( UltraThreadContext )
  {
    UltraMapping = MiGetUltraMapping(a2 + 176, 0LL, 0x40000LL, 5);
    v10 = *(_QWORD *)(a1 + 80);
    v11 = (__int64 *)(a2 + 72);
    v12 = UltraMapping;
    v13 = *(_QWORD *)(v10 + 136) + 32LL;
    v14 = *(__int64 ***)(*(_QWORD *)(v10 + 136) + 40LL);
    if ( *v14 != (__int64 *)v13 )
      __fastfail(3u);
    *v11 = v13;
    *(_QWORD *)(a2 + 80) = v14;
    *v14 = v11;
    *(_QWORD *)(v13 + 8) = v11;
    *(_QWORD *)(a2 + 304) = v12;
    *(_QWORD *)(a2 + 40) = v12;
    if ( v6 )
      ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v6);
    else
      ProtectionPfnCompatible = 4;
    v17 = MiWriteLargePte(v12, v2, 0, ProtectionPfnCompatible | 0xA4000000);
    v18 = *(_QWORD *)(a2 + 40) + 0x3FFFFFFFLL;
    *(_DWORD *)(a2 + 64) = 0;
    *(_QWORD *)(a2 + 48) = v18;
    *(_QWORD *)(a2 + 32) = v17;
    if ( v6 )
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    else
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    *(_DWORD *)(a1 + 64) = 0;
    result = 0LL;
    *(_WORD *)(a1 + 320) = 0;
  }
  else
  {
    if ( v6 )
    {
      MiStopPageAccessor(v6);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      MiStopPageAccessor(v8);
      _InterlockedAnd(
        (volatile signed __int32 *)(*(_QWORD *)&stru_140E2ED08.SystemCallNumber
                                  + 4
                                  * ((((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3) & 0x3FFFFFuLL) >> 5)),
        ~(1 << ((v8 - *(_QWORD *)((char *)&stru_140E2ED08.116 + 4)) >> 3)));
    }
    MiDeleteUltraThreadContext(a2 + 176);
    return 2LL;
  }
  return result;
}
