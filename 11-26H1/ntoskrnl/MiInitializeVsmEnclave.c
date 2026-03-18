/*
 * XREFs of MiInitializeVsmEnclave @ 0x140AB7638
 * Callers:
 *     MiInitializeEnclave @ 0x140AB757C (MiInitializeEnclave.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     MiLockVad @ 0x14027EBC0 (MiLockVad.c)
 *     MiUnlockVad @ 0x14027F670 (MiUnlockVad.c)
 *     PsInitializeVsmEnclave @ 0x140AB771C (PsInitializeVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x140AB790C (PsDereferenceVsmEnclave.c)
 *     MiUnmapImageForEnclaveUse @ 0x140B46178 (MiUnmapImageForEnclaveUse.c)
 *     MiMapImageForEnclaveUse @ 0x140B5ED58 (MiMapImageForEnclaveUse.c)
 */

__int64 __fastcall MiInitializeVsmEnclave(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // r8
  struct _KLOCK_ENTRIES *v12; // r9
  int v13; // esi
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  __int64 v17; // rsi
  ULONG_PTR v18; // rax
  int v19; // r8d
  void *v20; // rbx
  __int64 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+78h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 80);
  v21 = 0LL;
  v22 = 0LL;
  LODWORD(v9) = 0;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 16)) <= 1 )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  MiUnlockVad((__int64)CurrentThread, a2);
  if ( !*(_BYTE *)(v4 + 76) )
    goto LABEL_3;
  if ( a4 < 0x38 )
  {
    v13 = -1073741820;
    goto LABEL_4;
  }
  v17 = *(_QWORD *)(a3 + 48);
  if ( !v17 )
  {
LABEL_3:
    v13 = PsInitializeVsmEnclave(v4, a3, a4, v9, v22);
    goto LABEL_4;
  }
  v18 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, v11, v12);
  LOBYTE(v19) = CurrentThread->PreviousMode;
  v20 = (void *)v18;
  v13 = MiMapImageForEnclaveUse(v17, v18, v19, (unsigned int)&v22, (__int64)&v21);
  ObfDereferenceObject(v20);
  if ( v13 >= 0 )
  {
    v9 = *(_QWORD *)((*(_QWORD *)(v21 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 64);
    goto LABEL_3;
  }
LABEL_4:
  PsDereferenceVsmEnclave((PVOID)v4);
  if ( v22 )
    MiUnmapImageForEnclaveUse();
  MiLockVad((__int64)CurrentThread, a2, v14, v15);
  return (unsigned int)v13;
}
