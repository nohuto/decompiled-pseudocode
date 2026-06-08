/*
 * XREFs of FindSubspace @ 0x140028C2C
 * Callers:
 *     RegisterSubspace @ 0x140028A60 (RegisterSubspace.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FindSubspace(int a1)
{
  __int64 v2; // rbx
  __int64 i; // rax

  v2 = 0LL;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_140019800,
    0LL);
  for ( i = qword_140019808; (__int64 *)i != &qword_140019808; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 48) == a1 )
    {
      v2 = i;
      break;
    }
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_140019800);
  return v2;
}
