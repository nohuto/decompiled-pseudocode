/*
 * XREFs of ClientPrinterThunk @ 0x1400D44B4
 * Callers:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1400D425C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990 (-IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ.c)
 *     ?pppUserModeCallback@@YAJKPEAXK0K@Z @ 0x1400D451C (-pppUserModeCallback@@YAJKPEAXK0K@Z.c)
 */

__int64 __fastcall ClientPrinterThunk(_DWORD *a1, unsigned int a2, void *a3, unsigned int a4)
{
  unsigned int v8; // ecx

  if ( IS_USERCRIT_OWNED_AT_ALL() )
    return 0xFFFFFFFFLL;
  a1[3] = 0;
  a1[2] = a4;
  return (unsigned int)(pppUserModeCallback(v8, a1, a2, a3, a4) >> 31);
}
