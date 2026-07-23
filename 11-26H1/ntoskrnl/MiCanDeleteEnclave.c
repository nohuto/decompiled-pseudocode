/*
 * XREFs of MiCanDeleteEnclave @ 0x140704A74
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 * Callees:
 *     MiLockVad @ 0x14027E130 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027EBE0 (MiUnlockVad.c)
 *     MiFreeEnclaveModules @ 0x140776CE8 (MiFreeEnclaveModules.c)
 *     PsIsVsmEnclaveTerminated @ 0x1408046B4 (PsIsVsmEnclaveTerminated.c)
 *     PsRundownVsmEnclave @ 0x14080478C (PsRundownVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140AB8F4C (PsDereferenceVsmEnclave.c)
 *     PsReferenceVsmEnclave @ 0x140B08AF8 (PsReferenceVsmEnclave.c)
 */

__int64 __fastcall MiCanDeleteEnclave(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  void *v5; // rsi
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  _QWORD *v9; // rax
  int v10; // ebx
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9

  if ( a2 )
    *a2 = 0LL;
  if ( (*(_DWORD *)(a1 + 72) & 1) != 0 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = *(void **)(a1 + 80);
  PsReferenceVsmEnclave(v5);
  v7 = a1 + 88;
  if ( v6 )
  {
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7
      || (*v6 = v8, v6[1] = v7, *(_QWORD *)(v8 + 8) = v6, *(_QWORD *)v7 = v6, v6[1] != v7)
      || (v9 = *(_QWORD **)(a1 + 96), *v9 != v7) )
    {
      __fastfail(3u);
    }
    *v9 = v6;
    v6[1] = v9;
    *(_QWORD *)(a1 + 96) = a1 + 88;
    *(_QWORD *)v7 = v7;
  }
  else
  {
    MiFreeEnclaveModules(v7);
  }
  if ( (unsigned __int8)PsIsVsmEnclaveTerminated(v5) )
  {
    MiUnlockVad((__int64)CurrentThread, a1);
    v10 = PsRundownVsmEnclave(v5);
    MiLockVad((__int64)CurrentThread, a1, v11, v12);
    if ( v10 >= 0 && (*(_DWORD *)(a1 + 48) & 1) != 0 )
      v10 = -1073741800;
  }
  else
  {
    v10 = -1073740527;
  }
  PsDereferenceVsmEnclave(v5);
  return (unsigned int)v10;
}
