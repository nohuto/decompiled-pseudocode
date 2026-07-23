/*
 * XREFs of HalpPutScatterGatherListDmarThin @ 0x14049BD84
 * Callers:
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 *     HalPutScatterGatherListDmarThin @ 0x14049BD20 (HalPutScatterGatherListDmarThin.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall HalpPutScatterGatherListDmarThin(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 i; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-20h]
  unsigned __int64 v12; // [rsp+30h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 560);
  v3 = 0;
  v4 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  for ( i = v2; (unsigned int)v4 < *a2; v4 = (unsigned int)(v4 + 1) )
  {
    v7 = *(_QWORD *)&a2[6 * v4 + 4] & 0xFFFFFFFFFFFFF000uLL;
    if ( (_DWORD)v4 || v7 != **(_QWORD **)(a1 + 560) )
    {
      if ( !v3 )
      {
        guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a1 + 512) + 40LL), v7);
        continue;
      }
    }
    else
    {
      v3 = 1;
    }
    v8 = *(_QWORD **)(a1 + 560);
    v12 = (a2[6 * v4 + 6] + (a2[6 * v4 + 4] & 0xFFFu) + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    v11 = v7 - *v8;
    guard_dispatch_icall_no_overrides(&i, v11);
  }
  return v3;
}
