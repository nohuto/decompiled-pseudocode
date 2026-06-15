/*
 * XREFs of sub_14002FFB0 @ 0x14002FFB0
 * Callers:
 *     sub_14002FA30 @ 0x14002FA30 (sub_14002FA30.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003003C @ 0x14003003C (sub_14003003C.c)
 */

__int64 __fastcall sub_14002FFB0(struct _RTL_CRITICAL_SECTION *a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  bool v3; // zf
  int v5; // eax
  unsigned int v6; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+30h] [rbp+8h] BYREF

  v1 = a1 + 1;
  EnterCriticalSection(a1 + 1);
  v3 = a1[2].DebugInfo == 0LL;
  v8 = v1;
  if ( v3 || (v5 = sub_14003003C(a1), v6 = v5, v5 >= 0) )
  {
    if ( v1 )
      LeaveCriticalSection(v1);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 114, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghostobject.cpp", v5);
    sub_140018FF0(&v8);
    return v6;
  }
}
