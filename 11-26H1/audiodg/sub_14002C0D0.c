/*
 * XREFs of sub_14002C0D0 @ 0x14002C0D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14002C1B8 @ 0x14002C1B8 (sub_14002C1B8.c)
 *     sub_140054680 @ 0x140054680 (sub_140054680.c)
 */

__int64 __fastcall sub_14002C0D0(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  int v6; // eax
  unsigned int v7; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  v12 = v3;
  sub_140054680(a1 + 184, &v10, &v11);
  if ( v10 == *(_QWORD *)(a1 + 192) )
  {
    v7 = -2147023728;
    sub_14000C2A8((int)retaddr, 139, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", -2147023728);
    sub_140018FF0(&v12);
    return v7;
  }
  v6 = sub_14002C1B8(*(_QWORD *)(v10 + 24), a3);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8((int)retaddr, 141, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v6);
    if ( v3 )
      LeaveCriticalSection(v3);
    return v7;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
