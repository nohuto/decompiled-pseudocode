/*
 * XREFs of sub_14007D9A8 @ 0x14007D9A8
 * Callers:
 *     sub_14003E674 @ 0x14003E674 (sub_14003E674.c)
 *     sub_140076D48 @ 0x140076D48 (sub_140076D48.c)
 * Callees:
 *     sub_140017458 @ 0x140017458 (sub_140017458.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_140038F50 @ 0x140038F50 (sub_140038F50.c)
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 */

__int64 __fastcall sub_14007D9A8(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v4; // rbx
  _QWORD *Ptr; // rax
  _QWORD *v7; // rcx
  bool v8; // r15
  __int64 v9; // r12
  __int64 v10; // r12
  int v11; // r14d
  __int64 *v13; // r14
  __int64 *v14; // rdi
  _QWORD *v15; // [rsp+60h] [rbp+40h] BYREF
  __int64 v16; // [rsp+70h] [rbp+50h] BYREF
  __int64 v17; // [rsp+78h] [rbp+58h] BYREF

  v2 = a1 + 2;
  v4 = 0LL;
  v16 = 0LL;
  AcquireSRWLockExclusive(a1 + 2);
  Ptr = a1->Ptr;
  if ( !a1->Ptr )
  {
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
    return 0LL;
  }
  v7 = (_QWORD *)Ptr[2];
  v8 = 0;
  v9 = Ptr[3] - (_QWORD)v7;
  v15 = 0LL;
  v10 = (v9 >> 3) - 1;
  v17 = v10;
  if ( !v10 )
  {
    v8 = *v7 == a2;
    goto LABEL_21;
  }
  v11 = sub_140040EE0(&v15, (unsigned __int64 *)&v17);
  if ( v11 >= 0 )
  {
    v13 = (__int64 *)*((_QWORD *)a1->Ptr + 2);
    if ( v13 == *((__int64 **)a1->Ptr + 3) )
    {
LABEL_25:
      if ( v15 )
        sub_140017850((__int64)v15);
      if ( v2 )
        ReleaseSRWLockExclusive(v2);
      if ( v4 )
        sub_140017850(v4);
      return 0LL;
    }
    v14 = (__int64 *)*((_QWORD *)a1->Ptr + 4);
    do
    {
      if ( v8 || a2 != *v13 )
      {
        if ( !v10 )
          break;
        sub_140038F50(v15, *v13, *v14++);
        --v10;
      }
      else
      {
        v8 = 1;
      }
      ++v13;
    }
    while ( v13 != *((__int64 **)a1->Ptr + 3) );
    v2 = a1 + 2;
LABEL_21:
    if ( v8 )
    {
      AcquireSRWLockExclusive(a1 + 1);
      sub_140017458(&v16, (char *)a1);
      sub_140017458((__int64 *)a1, (char *)&v15);
      if ( a1 != (RTL_SRWLOCK *)-8LL )
        ReleaseSRWLockExclusive(a1 + 1);
      v4 = v16;
    }
    goto LABEL_25;
  }
  if ( v15 )
    sub_140017850((__int64)v15);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)v11;
}
