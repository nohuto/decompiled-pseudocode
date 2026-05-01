/*
 * XREFs of ??1?$unique_call@P6AXXZ$1?CoUninitialize@@YAXXZ$00@wil@@QEAA@XZ @ 0x1802CE500
 * Callers:
 *     __lambda_2a8f8fa06f2e0b1768a49123f6915af2_::operator()_::_1_::dtor$0 @ 0x1806A9834 (__lambda_2a8f8fa06f2e0b1768a49123f6915af2_--operator()_--_1_--dtor$0.c)
 *     __lambda_60171be431ab7e306603b28a1d6e78d6_::operator()_::_1_::dtor$0 @ 0x1806DCCB6 (__lambda_60171be431ab7e306603b28a1d6e78d6_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::unique_call<void (*)(void),&void CoUninitialize(void),1>::~unique_call<void (*)(void),&void CoUninitialize(void),1>(
        char *a1)
{
  char v1; // al

  v1 = *a1;
  *a1 = 0;
  if ( v1 )
    CoUninitialize();
}
