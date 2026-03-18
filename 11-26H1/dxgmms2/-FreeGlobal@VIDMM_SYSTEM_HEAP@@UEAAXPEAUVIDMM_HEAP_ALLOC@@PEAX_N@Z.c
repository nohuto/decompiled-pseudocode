/*
 * XREFs of ?FreeGlobal@VIDMM_SYSTEM_HEAP@@UEAAXPEAUVIDMM_HEAP_ALLOC@@PEAX_N@Z @ 0x1400F8040
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1400F8394 (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z @ 0x1401048C4 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1E@Z.c)
 */

void __fastcall VIDMM_SYSTEM_HEAP::FreeGlobal(VIDMM_PROCESS **this, struct VIDMM_HEAP_ALLOC *a2, void *a3, char a4)
{
  __int64 v4; // r8
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rdx
  void *v10; // rcx

  v4 = *((_QWORD *)a2 + 3);
  if ( v4 )
  {
    v9 = *(void **)(v4 + 8);
    if ( v9 )
    {
      VIDMM_PROCESS::UnmapHostAddressesFromGuest(this[1], v9, *(_QWORD *)(v4 + 16), *((_QWORD *)a2 + 2), 1);
      *(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL) = 0LL;
      *(_QWORD *)(*((_QWORD *)a2 + 3) + 16LL) = 0LL;
      **((_QWORD **)a2 + 3) = 0LL;
    }
    v10 = (void *)*((_QWORD *)a2 + 3);
    if ( v10 )
      operator delete(v10);
    *((_QWORD *)a2 + 3) = 0LL;
  }
  v7 = (void *)*((_QWORD *)a2 + 1);
  if ( v7 )
  {
    MmUnmapViewInSystemSpace(v7);
    *((_QWORD *)a2 + 1) = 0LL;
  }
  v8 = *(void **)a2;
  if ( *(_QWORD *)a2 )
  {
    if ( a4 )
      VidMmDereferenceObjectAsync(v8);
    else
      ObfDereferenceObject(v8);
    *(_QWORD *)a2 = 0LL;
  }
  operator delete(a2);
}
