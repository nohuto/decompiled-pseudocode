/*
 * XREFs of sub_14006E110 @ 0x14006E110
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_1400373B0 @ 0x1400373B0 (sub_1400373B0.c)
 */

__int64 __fastcall sub_14006E110(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 216);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  v11 = v3;
  v7 = sub_1400373B0(a1 - 8, a2, a3);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    sub_14000C2A8((int)retaddr, 458, (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp", v7);
  sub_140018FF0(&v11);
  return v8;
}
