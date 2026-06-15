/*
 * XREFs of sub_14002F140 @ 0x14002F140
 * Callers:
 *     <none>
 * Callees:
 *     sub_14002F1A0 @ 0x14002F1A0 (sub_14002F1A0.c)
 */

void __fastcall sub_14002F140(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  sub_14002F1A0(a1 + 184, &v4);
  if ( v2 )
    LeaveCriticalSection(v2);
}
