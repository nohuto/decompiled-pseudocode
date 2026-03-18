/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D6FD0
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1400D63C0 (NtGdiSetPUMPDOBJ.c)
 *     UMPDThreadCleanup @ 0x1400D6E20 (UMPDThreadCleanup.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D7A00 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D8368 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D79B4 (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D7BAC (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _UMPDHEAP *v4; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 51) = 0LL;
  }
  else if ( *((_QWORD *)this + 7) )
  {
    CurrentThread = GreGetCurrentThread(v2);
    v4 = (struct _UMPDHEAP *)*((_QWORD *)this + 7);
    if ( *((struct _UMPDHEAP **)CurrentThread + 6) != v4 )
      DestroyUMPDHeap(v4);
    *((_QWORD *)this + 7) = 0LL;
  }
}
