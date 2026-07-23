/*
 * XREFs of MiMarkPfnVerified @ 0x14038E794
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiAllocateWsle @ 0x1402B9CD8 (MiAllocateWsle.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiCompleteSecureProcessFault @ 0x14038CC80 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiValidateInPageEntries @ 0x14038E1C0 (MiValidateInPageEntries.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     MiInitializeBootLoadedDriverPfnRange @ 0x140713FC8 (MiInitializeBootLoadedDriverPfnRange.c)
 *     MiValidateImagePfn @ 0x140B0676C (MiValidateImagePfn.c)
 *     MxCreateDescriptorPfns @ 0x140CFBB94 (MxCreateDescriptorPfns.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140D01B84 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiValidateKernelHalLargePageRange @ 0x140D07550 (MiValidateKernelHalLargePageRange.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x1402DB8F8 (MiGetPagePrivilege.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     KeSetPagePrivilege @ 0x1404AA600 (KeSetPagePrivilege.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiMarkPfnVerified(__int64 a1, char a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v5; // rdx
  ULONG_PTR v6; // rbp
  char v7; // cl
  char result; // al
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // r9
  _OWORD v12[2]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v12[0] = 0LL;
  v3 = a1;
  CurrentIrql = 17;
  v5 = (unsigned __int128)((a1 + 0x220000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v6 = (a1 + 0x220000000000LL) / 48;
  if ( (a2 & 4) == 0 )
  {
    if ( (a2 & 0x40) != 0 )
    {
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v5) = 2;
        LOBYTE(a1) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(a1, v5);
      }
      v13 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v13);
        while ( *(__int64 *)(v3 + 24) < 0 );
      }
    }
  }
  if ( (a2 & 2) != 0 && ((*(_QWORD *)(v3 + 40) >> 60) & 7) == 3 )
    a2 &= ~2u;
  v7 = a2;
  if ( (a2 & 2) != 0 && (MiFlags & 0x20000) != 0 )
  {
    if ( *(__int64 *)(v3 + 40) >= 0 && (MiFlags & 0x10000) != 0 )
    {
      v9 = (__int64)(*(_QWORD *)(v3 + 8) << 25) >> 16;
      *(_QWORD *)&v12[0] = v9;
    }
    else
    {
      v9 = *(_QWORD *)&v12[0];
    }
    v10 = a2 & 1;
    a2 &= ~1u;
    if ( !v10 )
      a2 = v7;
    v11 = (unsigned int)(4 * v10 + 2);
    if ( (a2 & 0x20) != 0 )
    {
      v11 = (unsigned int)v11 | 0x40;
      if ( (*(_BYTE *)(v3 + 34) & 0x10) == 0 && (*(_DWORD *)(v3 + 16) & 8) == 0 )
        LODWORD(v11) = v11 | 0x400;
    }
    if ( (int)KeSetPagePrivilege(v6, v9, v12, v11) < 0 )
      KeBugCheckEx(0x1Au, 0x5150CuLL, v6, 0LL, 0LL);
  }
  result = (*(_QWORD *)(v3 + 40) >> 60) & 7;
  if ( result != 3 )
    result = MiSetPfnIdentity(v3, 3u);
  if ( (a2 & 1) != 0 && (MiFlags & 0x20000) != 0 )
  {
    MiGetPagePrivilege((_QWORD *)v3, 1LL, (unsigned __int64)v12);
    result = KeSetPagePrivilege(v6, 0LL, v12, 4LL);
  }
  if ( (a2 & 4) == 0 )
  {
    result = -1;
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return result;
}
