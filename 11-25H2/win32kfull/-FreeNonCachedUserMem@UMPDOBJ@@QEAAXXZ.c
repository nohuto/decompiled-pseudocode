/*
 * XREFs of ?FreeNonCachedUserMem@UMPDOBJ@@QEAAXXZ @ 0x1400D389C
 * Callers:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1400D2E48 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1400D2FC0 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     UMPDThreadCleanup @ 0x1400D3640 (UMPDThreadCleanup.c)
 *     NtGdiSetPUMPDOBJ @ 0x140265370 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bSandboxedClient@UMPDOBJ@@QEAAHXZ @ 0x1400D3EDC (-bSandboxedClient@UMPDOBJ@@QEAAHXZ.c)
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1400D45CC (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall UMPDOBJ::FreeNonCachedUserMem(UMPDOBJ *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _UMPDHEAP *v5; // rcx

  if ( (unsigned int)UMPDOBJ::bSandboxedClient(this) )
  {
    *((_QWORD *)this + 53) = 0LL;
  }
  else if ( *((_QWORD *)this + 9) )
  {
    CurrentThread = GreGetCurrentThread(v3, v2);
    v5 = (struct _UMPDHEAP *)*((_QWORD *)this + 9);
    if ( *((struct _UMPDHEAP **)CurrentThread + 6) != v5 )
      DestroyUMPDHeap(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
}
