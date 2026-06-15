/*
 * XREFs of sub_140054C80 @ 0x140054C80
 * Callers:
 *     sub_140039760 @ 0x140039760 (sub_140039760.c)
 * Callees:
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003F724 @ 0x14003F724 (sub_14003F724.c)
 *     sub_140045224 @ 0x140045224 (sub_140045224.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_140054C80(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int *v4; // rbx
  int v5; // edx
  unsigned int v6; // ebx
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 48));
  v8 = v2;
  v3 = *(_QWORD *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( v3 )
    sub_1400B6010(v3);
  v4 = (unsigned int *)(a1 + 96);
  if ( (int)sub_140045224((_QWORD *)(a1 + 88), 0) < 0 )
    RtwqAllocateWorkQueue(RTWQ_STANDARD_WORKQUEUE, (DWORD *)(a1 + 96));
  else
    *v4 = sub_14003F724(*(_QWORD *)(a1 + 88), v5);
  v6 = *v4;
  sub_140018FF0(&v8);
  return v6;
}
