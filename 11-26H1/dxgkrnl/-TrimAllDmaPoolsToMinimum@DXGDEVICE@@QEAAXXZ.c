/*
 * XREFs of ?TrimAllDmaPoolsToMinimum@DXGDEVICE@@QEAAXXZ @ 0x1401C3CFC
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1403B85FC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGDEVICE::TrimAllDmaPoolsToMinimum(DXGDEVICE *this)
{
  char *v1; // rdi
  char *i; // rbx
  char *v3; // rax
  char *v4; // rax

  v1 = (char *)this + 496;
  for ( i = (char *)*((_QWORD *)this + 62); ; i = *(char **)i )
  {
    v3 = 0LL;
    if ( i != v1 )
      v3 = i;
    if ( !v3 )
      break;
    v4 = i;
    if ( i == v1 )
      v4 = 0LL;
    if ( *((_QWORD *)v4 + 29) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v4 + 2) + 16LL) + 760LL) + 8LL) + 448LL))();
  }
}
