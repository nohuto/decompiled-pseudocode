/*
 * XREFs of MiFreeSecureKernelPage @ 0x1403CCF10
 * Callers:
 *     MmFreeSecureKernelPages @ 0x1403CBD80 (MmFreeSecureKernelPages.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     MiFreeSmallPageFromMdl @ 0x1403CE304 (MiFreeSmallPageFromMdl.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiGetSecurePageState @ 0x1405343D0 (MiGetSecurePageState.c)
 */

unsigned __int64 __fastcall MiFreeSecureKernelPage(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        int a7)
{
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  ULONG_PTR v14; // r10
  char SecurePageState; // r15
  unsigned __int8 v16; // si
  unsigned __int64 result; // rax
  unsigned __int8 CurrentIrql; // si

  v10 = 48 * a1 - 0x220000000000LL;
  SecurePageState = MiGetSecurePageState(v10);
  if ( (SecurePageState & 8) != 0 )
  {
    if ( a7 )
    {
      CurrentIrql = 17;
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(v12) = CurrentIrql;
        KiRaiseIrqlProcessIrqlFlags(v12, v11);
      }
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    MiSetPfnIdentity(v10, 0);
    MiFreeSmallPageFromMdl(a1, 0LL, 3LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  else if ( (SecurePageState & 2) != 0 )
  {
    if ( a7 )
    {
      v16 = 17;
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    else
    {
      v16 = KeGetCurrentIrql();
      if ( v16 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11) = 2;
        LOBYTE(v12) = v16;
        KiRaiseIrqlProcessIrqlFlags(v12, v11);
      }
      a6 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&a6);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
    }
    if ( !a3 )
      MiSetPfnIdentity(v10, 0);
    MiFreeSmallPageFromMdl(a1, 0LL, 3LL);
    result = 0x7FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v16 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v16);
      result = v16;
      __writecr8(v16);
    }
    _InterlockedDecrement64(&qword_140E2D928);
    if ( (SecurePageState & 4) == 0 )
    {
      result = MiReleaseNonPagedResources(a2, 1LL);
      _InterlockedDecrement64((volatile signed __int64 *)(a2 + 23528));
    }
  }
  else
  {
    result = (unsigned int)*a5;
    *(_QWORD *)(v13 + 8 * result + 48) = a1;
    *a5 = result + 1;
    if ( (_DWORD)result == 15 )
    {
      *(_DWORD *)(v13 + 40) = 0x10000;
      *(_QWORD *)v13 = 0LL;
      *(_WORD *)(v13 + 8) = 176;
      *(_QWORD *)(v13 + 32) = 0LL;
      *(_DWORD *)(v13 + 44) = 0;
      *(_WORD *)(v13 + 10) = 2;
      result = MiFreePagesFromMdl(v14, 0, 0, 0);
      *a5 = 0;
    }
  }
  return result;
}
