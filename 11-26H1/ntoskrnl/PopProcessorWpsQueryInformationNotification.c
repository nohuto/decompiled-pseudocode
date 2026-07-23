/*
 * XREFs of PopProcessorWpsQueryInformationNotification @ 0x1407D1290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopProcessorWpsQueryInformationNotification(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r11
  unsigned int v3; // r9d
  __int64 v4; // rcx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( !v2 || !*(_QWORD *)(v2 + 104) )
    return 3221225474LL;
  if ( *a2 )
  {
    do
    {
      v5 = v3++;
      *(_QWORD *)&a2[6 * v5 + 2] = *(_QWORD *)(*(_QWORD *)&a2[6 * v5 + 2] + 72LL);
    }
    while ( v3 < *a2 );
  }
  return (unsigned __int8)guard_dispatch_icall_no_overrides(v4, 51LL) == 0 ? 0xC00000BB : 0;
}
