/*
 * XREFs of sub_14006E9C0 @ 0x14006E9C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140008528 @ 0x140008528 (sub_140008528.c)
 *     sub_140009934 @ 0x140009934 (sub_140009934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140040274 @ 0x140040274 (sub_140040274.c)
 *     sub_140047DB4 @ 0x140047DB4 (sub_140047DB4.c)
 */

__int64 __fastcall sub_14006E9C0(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v14 = v2;
  v5 = sub_140040274(a1);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    if ( v8 )
    {
      v9 = sub_140047DB4(v8, 0LL);
      v5 = sub_140008528(a2, *(_QWORD *)(v9 + 8));
      v6 = v5;
      if ( v5 < 0 )
      {
        v7 = 944;
        goto LABEL_6;
      }
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 272);
      if ( v10 )
      {
        v11 = sub_140009934(v10, 0);
        v5 = sub_140008528(a2, *(_QWORD *)(v11 + 8));
        v6 = v5;
        if ( v5 < 0 )
        {
          v7 = 950;
          goto LABEL_6;
        }
      }
    }
    v6 = 0;
    goto LABEL_11;
  }
  v7 = 936;
LABEL_6:
  sub_14000C2A8((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp", v5);
LABEL_11:
  sub_140018FF0(&v14);
  return v6;
}
