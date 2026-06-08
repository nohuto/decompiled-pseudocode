/*
 * XREFs of PccCommitAcquireCallback @ 0x14000DEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PccCommitAcquireCallback(__int64 a1, __int64 (*a2)(void))
{
  __int64 i; // r8
  __int64 v4; // rdx
  __int64 result; // rax

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_140015C50);
  for ( i = qword_140015658; (__int64 *)i != &qword_140015658; i = *(_QWORD *)i )
  {
    **(_BYTE **)(i + 24) = 1;
    *(_BYTE *)(*(_QWORD *)(i + 24) + 1LL) = *(_BYTE *)(i + 16);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(WdfDriverGlobals, qword_140015C50);
  LOBYTE(v4) = 1;
  result = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD))qword_140015C00)(qword_140015BC8, v4, 0LL, 0LL);
  if ( a2 )
    return a2();
  return result;
}
