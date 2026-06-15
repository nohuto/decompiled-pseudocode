/*
 * XREFs of sub_140021650 @ 0x140021650
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140021998 @ 0x140021998 (sub_140021998.c)
 *     sub_1400219B0 @ 0x1400219B0 (sub_1400219B0.c)
 *     sub_140021A88 @ 0x140021A88 (sub_140021A88.c)
 *     sub_140021ACC @ 0x140021ACC (sub_140021ACC.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400546DC @ 0x1400546DC (sub_1400546DC.c)
 */

__int64 __fastcall sub_140021650(__int64 a1, __int64 a2, __int128 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-38h] BYREF
  __int128 v15; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = v3;
  v15 = 0LL;
  v16 = 0LL;
  v7 = sub_140021998(a2);
  sub_1400219B0(&v15, a2, v7);
  sub_1400546DC(a1 + 72, &v13, &v15);
  sub_140021A88(&v15);
  if ( v13 == *(_QWORD *)(a1 + 80)
    || (v8 = *((_DWORD *)a3 + 4),
        v9 = *(_QWORD *)(v13 + 48),
        v15 = *a3,
        LODWORD(v16) = v8,
        v10 = sub_140021ACC(v9, &v15),
        v11 = v10,
        v10 >= 0) )
  {
    if ( v3 )
      LeaveCriticalSection(v3);
    return 0LL;
  }
  else
  {
    sub_14000C2A8((int)retaddr, 707, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoprocessinghost.cpp", v10);
    sub_140018FF0(&v14);
    return v11;
  }
}
