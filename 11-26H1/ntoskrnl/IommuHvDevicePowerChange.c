/*
 * XREFs of IommuHvDevicePowerChange @ 0x140506B80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IommuHvDevicePowerChange(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  _QWORD *v3; // rdi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v5; // rcx
  int v6; // eax

  v3 = a2;
  BugCheckParameter4 = a3;
  if ( qword_140FBB180 )
  {
    v5 = *a2;
    LOBYTE(a2) = a3;
    v6 = guard_dispatch_icall_no_overrides(v5, a2);
    if ( v6 == 3473497 )
      KeBugCheckEx(0x159u, 0x3002uLL, v3[4], (unsigned int)BugCheckParameter4, 0LL);
    if ( v6 < 0 )
      KeBugCheckEx(0x159u, 0x3201uLL, v6, v3[4], BugCheckParameter4);
  }
  return 0LL;
}
