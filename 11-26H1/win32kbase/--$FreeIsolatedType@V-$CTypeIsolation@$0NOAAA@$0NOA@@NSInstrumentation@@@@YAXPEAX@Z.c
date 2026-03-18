/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400C6CB8
 * Callers:
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1400C61E0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1400C9450 (-Allocate@PDEV@@SAPEAV1@H@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140135DF4 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

__int64 __fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = *(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL);
  v3 = *(_QWORD *)(result + 48);
  if ( v3 )
    return NSInstrumentation::CTypeIsolation<909312,3552>::Free(v3, a1);
  return result;
}
