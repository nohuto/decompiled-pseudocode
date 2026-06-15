/*
 * XREFs of sub_14006E240 @ 0x14006E240
 * Callers:
 *     <none>
 * Callees:
 *     sub_140009018 @ 0x140009018 (sub_140009018.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 *     sub_140048178 @ 0x140048178 (sub_140048178.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006E240(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // edx
  __int64 v10; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v5 = *(_QWORD *)(a1 + 24);
  v13 = v2;
  if ( v5 )
  {
    v6 = sub_140047DB4(v5, 0LL);
    v7 = sub_140009018(a2, -1LL, *(_QWORD *)(v6 + 8));
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = 866;
      goto LABEL_7;
    }
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 272);
    if ( v10 )
    {
      v7 = sub_140048178(a2, v10);
      v8 = v7;
      if ( v7 < 0 )
      {
        v9 = 870;
        goto LABEL_7;
      }
    }
  }
  v7 = sub_1400B6010(a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v8 = 0;
    goto LABEL_11;
  }
  v9 = 873;
LABEL_7:
  sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v7);
LABEL_11:
  sub_140018FF0(&v13);
  return v8;
}
