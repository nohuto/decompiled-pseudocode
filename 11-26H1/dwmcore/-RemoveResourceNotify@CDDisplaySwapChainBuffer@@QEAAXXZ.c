/*
 * XREFs of ?RemoveResourceNotify@CDDisplaySwapChainBuffer@@QEAAXXZ @ 0x18029AFA0
 * Callers:
 *     ?MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devices@Windows@@@Z @ 0x18029ADA8 (-MarkTransitional@CDDisplaySwapChainBuffer@@QEAAJPEAPEAUIDisplaySurfacePrivate@Core@Display@Devi.c)
 *     ??1CDDisplaySwapChainBuffer@@MEAA@XZ @ 0x18029CCB0 (--1CDDisplaySwapChainBuffer@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChainBuffer::RemoveResourceNotify(CDDisplaySwapChainBuffer *this)
{
  if ( *((_QWORD *)this + 24) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 80LL))(*((_QWORD *)this + 27));
    *((_QWORD *)this + 24) = 0LL;
  }
}
