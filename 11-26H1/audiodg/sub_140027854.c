/*
 * XREFs of sub_140027854 @ 0x140027854
 * Callers:
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_14006F430 @ 0x14006F430 (sub_14006F430.c)
 * Callees:
 *     sub_1400278AC @ 0x1400278AC (sub_1400278AC.c)
 *     sub_1400278DC @ 0x1400278DC (sub_1400278DC.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_140027854(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+38h] [rbp+10h]

  v4 = a1;
  EnterCriticalSection(&CriticalSection);
  v5 = &CriticalSection;
  v2 = sub_1400278AC(v1, &v4);
  if ( v2 != -1 )
    sub_1400278DC(v3, v2);
  LeaveCriticalSection(&CriticalSection);
}
