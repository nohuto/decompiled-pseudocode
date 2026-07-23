/*
 * XREFs of HalpHvTimerArm @ 0x140462EC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpHvTimerArm(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rax
  int v5; // edi
  _BOOL8 v7; // rdx
  __int64 v8; // rax
  unsigned __int64 v9; // rdx

  v5 = a2;
  if ( (_DWORD)a2 == 3 )
  {
    if ( HalpHvTimerApi )
      v3 = guard_dispatch_icall_no_overrides(0LL, a2);
    else
      v3 = __readmsr(0x40000020u);
    a3 += v3;
  }
  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v7 = v5 == 2;
  v8 = 3 * v3;
  if ( v7 != ((*(_QWORD *)(a1 + 8 * v8) >> 1) & 1LL) )
  {
    v9 = *(_QWORD *)(a1 + 8 * v8) & 0xFFFFFFFFFFFFFFFCuLL | (2 * v7);
    *(_QWORD *)(a1 + 8 * v8) = v9;
    __writemsr(0x400000B0u, v9);
  }
  __writemsr(0x400000B1u, a3);
  return 0LL;
}
