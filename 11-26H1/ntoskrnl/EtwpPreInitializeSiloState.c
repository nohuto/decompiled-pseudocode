/*
 * XREFs of EtwpPreInitializeSiloState @ 0x14082D040
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140CE6C94 (EtwpInitialize.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     KeInitializeMutex @ 0x1404ABC00 (KeInitializeMutex.c)
 *     EtwpCleanupSiloState @ 0x14082B430 (EtwpCleanupSiloState.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14091B070 (ExAllocateCacheAwareRundownProtection.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpPreInitializeSiloState(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebp
  __int64 *Pool2; // rax
  __int64 *v6; // rsi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // r9

  v4 = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x48uLL);
  v6 = Pool2;
  if ( !Pool2 )
    goto LABEL_10;
  *Pool2 = a1;
  Pool2[1] = (__int64)PsGetServerSiloGlobals(a1);
  v7 = 256;
  if ( a2 <= 0x100 )
  {
    v7 = a2;
    if ( a2 < 0x20 )
      v7 = 32;
  }
  v8 = 8 * v7;
  *((_DWORD *)v6 + 4) = v7;
  v9 = ExAllocatePool2(0x48uLL);
  v6[88] = v9;
  if ( v9 )
  {
    v10 = 0;
    v6[89] = v9 + v8;
    while ( v10 < *((_DWORD *)v6 + 4) )
    {
      *(_QWORD *)(v6[89] + 8LL * v10) = 1LL;
      v11 = v6[88];
      *(_QWORD *)(v11 + 8LL * v10) = ExAllocateCacheAwareRundownProtection(NonPagedPoolNx, 0x63777445u);
      if ( !*(_QWORD *)(v6[88] + 8LL * v10) )
        goto LABEL_10;
      ++v10;
    }
    KeInitializeMutex((PRKMUTEX)(v6 + 610), 0);
    v12 = v6 + 90;
    *((_WORD *)v6 + 2152) = 3;
    v13 = 64LL;
    do
    {
      v12[6] = 0LL;
      v14 = v12;
      v15 = v12;
      v16 = 3LL;
      do
      {
        v14[1] = v15;
        *v14 = v15;
        v15 += 2;
        v14 += 2;
        --v16;
      }
      while ( v16 );
      v12 += 7;
      --v13;
    }
    while ( v13 );
    v6[86] = 0LL;
    v6[84] = (__int64)v6;
    *((GUID *)v6 + 4) = SecurityProviderGuid;
    *((_QWORD *)PsGetServerSiloGlobals(a1) + 104) = v6;
  }
  else
  {
LABEL_10:
    v4 = -1073741801;
    EtwpCleanupSiloState(v6);
  }
  return v4;
}
