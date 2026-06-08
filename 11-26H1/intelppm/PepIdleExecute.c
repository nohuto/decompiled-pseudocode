/*
 * XREFs of PepIdleExecute @ 0x140003DC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140010390 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PepIdleExecute(
        __int64 *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // rax
  int v8; // ecx
  __int64 v10; // rcx
  _DWORD v11[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v7 = 11LL * a3;
  if ( LOBYTE(a1[v7 + 17]) )
  {
    return ((unsigned int (__fastcall *)(__int64 *, _QWORD))a1[v7 + 10])(&a1[v7 + 11], a5);
  }
  else
  {
    v10 = *a1;
    v12 = a7;
    v11[1] = a3;
    v11[3] = a6;
    v11[0] = 0;
    v11[2] = a4;
    v8 = PoFxProcessorNotification(v10, 5LL, v11);
    if ( v8 >= 0 && v11[0] < 0 )
      return (unsigned int)v11[0];
  }
  return (unsigned int)v8;
}
