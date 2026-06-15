/*
 * XREFs of ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18002FD1C
 * Callers:
 *     ??0ApplicationSpecificEndpointInfo@@QEAA@XZ @ 0x180007118 (--0ApplicationSpecificEndpointInfo@@QEAA@XZ.c)
 *     ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x180029268 (--0CStreamClassPolicyGains@@QEAA@XZ.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x18002F8B4 (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall `eh vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  __int64 i; // rbx

  for ( i = 0LL; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
}
