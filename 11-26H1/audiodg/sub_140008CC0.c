/*
 * XREFs of sub_140008CC0 @ 0x140008CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008C34 @ 0x140008C34 (sub_140008C34.c)
 *     sub_140009AA8 @ 0x140009AA8 (sub_140009AA8.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_140008CC0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v5; // rax
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 248));
  v5 = (_QWORD *)sub_140009AA8(*(_QWORD *)(a1 + 144) + 64LL);
  v6 = sub_140009AA8(*v5);
  v7 = sub_140008C34(a1 - 16, a2, *(_QWORD *)(*(_QWORD *)v6 + 8LL));
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_14000C2A8(retaddr, 1284LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp", (unsigned int)v7);
    if ( v2 )
      LeaveCriticalSection(v2);
    return v8;
  }
  else
  {
    if ( v2 )
      LeaveCriticalSection(v2);
    return 0LL;
  }
}
