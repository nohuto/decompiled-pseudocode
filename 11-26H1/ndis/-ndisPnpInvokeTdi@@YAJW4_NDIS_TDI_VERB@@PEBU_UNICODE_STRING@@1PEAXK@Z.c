/*
 * XREFs of ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x140169750
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

int __fastcall ndisPnpInvokeTdi(
        int a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        void *a4,
        unsigned int a5)
{
  unsigned int v6; // ecx
  int v7; // [rsp+40h] [rbp-28h] BYREF
  struct _UNICODE_STRING v8; // [rsp+48h] [rbp-20h] BYREF

  if ( !ndisTdiPnPHandler )
    return -1073741823;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v6 = 3;
    }
    else
    {
      if ( a1 != 2 )
        return -1073741811;
      v6 = 2;
    }
  }
  else
  {
    v6 = 1;
  }
  v8.Buffer = (wchar_t *)&v7;
  v7 = 0;
  *(_QWORD *)&v8.Length = 262146LL;
  return ndisTdiPnPHandler(a3, a2, &v8, a4, a5, v6);
}
