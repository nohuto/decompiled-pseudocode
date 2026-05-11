/*
 * XREFs of PropertyInitializeBooleanCache @ 0x1400330E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PropertyInitializeBooleanCache(__int64 a1, __int64 a2, int *a3)
{
  __int64 (__fastcall *v3)(__int64, __int64, __int64, int *, int, int, int *); // rax
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *, int, int, int *))(a2 + 136);
  v5 = *a3;
  v6 = 0;
  return v3(a1, a2, 1LL, a3 + 3, v5, 129, &v6);
}
