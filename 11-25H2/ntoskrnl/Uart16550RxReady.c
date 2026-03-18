/*
 * XREFs of Uart16550RxReady @ 0x140699C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

bool __fastcall Uart16550RxReady(_QWORD *a1)
{
  char v1; // al
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( *a1 )
    {
      v1 = guard_dispatch_icall_no_overrides(a1);
      if ( v1 != -1 && (v1 & 1) != 0 )
        return 1;
    }
  }
  return result;
}
