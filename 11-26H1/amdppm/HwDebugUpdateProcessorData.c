/*
 * XREFs of HwDebugUpdateProcessorData @ 0x140001FA0
 * Callers:
 *     <none>
 * Callees:
 *     HwDebugUpdateRegister @ 0x14000CBA8 (HwDebugUpdateRegister.c)
 *     _guard_dispatch_icall @ 0x14000E680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HwDebugUpdateProcessorData(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned int i; // r14d
  unsigned int j; // r14d

  v3 = (__int64 *)(a1 + 8);
  v4 = 2LL;
  do
  {
    _mm_lfence();
    v5 = *v3;
    if ( *v3 )
    {
      result = _InterlockedExchange64((volatile __int64 *)(v5 + 296), a2);
      if ( result != a2 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v5 + 280));
        for ( i = 0; i < *(unsigned __int8 *)(v5 + 308); HwDebugUpdateRegister(v5 + 24 * (i++ + 13LL), a2) )
          ;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v5 + 280));
      }
    }
    v6 = v3[1];
    if ( v6 )
    {
      result = _InterlockedExchange64((volatile __int64 *)(v6 + 296), a2);
      if ( result != a2 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 280));
        for ( j = 0; j < *(unsigned __int8 *)(v6 + 308); HwDebugUpdateRegister(v6 + 24 * (j++ + 13LL), a2) )
          ;
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v6 + 280));
      }
    }
    v3 += 2;
    --v4;
  }
  while ( v4 );
  return result;
}
