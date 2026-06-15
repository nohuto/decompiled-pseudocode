/*
 * XREFs of sub_140011660 @ 0x140011660
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140011760 @ 0x140011760 (sub_140011760.c)
 *     sub_1400118C0 @ 0x1400118C0 (sub_1400118C0.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 */

__int64 __fastcall sub_140011660(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf
  int v12; // edi
  int v14; // edx
  __int64 v15; // [rsp+20h] [rbp-38h]
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  char v17; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  v11 = *(_BYTE *)(a1 + 64) == 0;
  v19 = v4;
  if ( v11 )
  {
    v12 = -2005139437;
    v14 = 320;
LABEL_11:
    sub_14000C2A8((int)retaddr, v14, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v12);
    sub_140018FF0(&v19);
    return (unsigned int)v12;
  }
  *(_QWORD *)(a1 + 4760) = a2;
  *(_OWORD *)(a1 + 4696) = *a3;
  if ( a4 )
  {
    v16 = 0LL;
    v15 = a1 + 4712;
    v17 = 1;
    v12 = sub_140011760(v10, v9, a4, &v16);
    if ( v17 )
      sub_1400118C0(v15, v16);
    if ( v12 < 0 )
    {
      v14 = 326;
      goto LABEL_11;
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
