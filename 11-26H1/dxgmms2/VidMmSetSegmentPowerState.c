/*
 * XREFs of VidMmSetSegmentPowerState @ 0x140047690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VidMmSetSegmentPowerState(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, char a5)
{
  __int64 v6; // r8
  __int64 v7; // rcx

  v6 = (unsigned int)a4;
  LOBYTE(a4) = a5 != 0;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 40320) + 8LL * a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)v7 + 312LL))(v7, a3, v6, a4);
}
