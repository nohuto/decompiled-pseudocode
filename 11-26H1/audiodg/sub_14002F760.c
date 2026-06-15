/*
 * XREFs of sub_14002F760 @ 0x14002F760
 * Callers:
 *     sub_14002F6D0 @ 0x14002F6D0 (sub_14002F6D0.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_14002F760(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rcx

  v2 = *(struct _RTL_CRITICAL_SECTION **)(a1 + 24);
  v3 = 0LL;
  if ( v2 )
  {
    v3 = v2;
    EnterCriticalSection(v2);
  }
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    sub_1400B6010(v4);
    *(_BYTE *)(a1 + 16) = 1;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
}
