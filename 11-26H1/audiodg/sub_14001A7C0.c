/*
 * XREFs of sub_14001A7C0 @ 0x14001A7C0
 * Callers:
 *     sub_14001A534 @ 0x14001A534 (sub_14001A534.c)
 *     sub_14001AA24 @ 0x14001AA24 (sub_14001AA24.c)
 *     sub_140078A54 @ 0x140078A54 (sub_140078A54.c)
 * Callees:
 *     sub_14001727C @ 0x14001727C (sub_14001727C.c)
 *     sub_140017458 @ 0x140017458 (sub_140017458.c)
 *     sub_140017850 @ 0x140017850 (sub_140017850.c)
 *     sub_140038F50 @ 0x140038F50 (sub_140038F50.c)
 */

__int64 __fastcall sub_14001A7C0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  int v11; // edi
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _QWORD *i; // rdi
  __int64 v16; // rcx
  __int64 v17[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+60h] [rbp+8h] BYREF
  __int64 v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = (RTL_SRWLOCK *)(a1 + 16);
  *a4 = 0LL;
  v19 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 16));
  v9 = *(_QWORD **)a1;
  v18 = 0LL;
  if ( v9 )
    v10 = ((__int64)(v9[3] - v9[2]) >> 3) + 1;
  else
    v10 = 1LL;
  v17[0] = v10;
  v11 = sub_14001727C(&v18, v17);
  if ( v11 >= 0 )
  {
    v13 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 )
    {
      v14 = (_QWORD *)v13[4];
      for ( i = (_QWORD *)v13[2]; i != (_QWORD *)v13[3]; ++i )
      {
        sub_140038F50(v18, *i, *v14);
        v13 = *(_QWORD **)a1;
        ++v14;
      }
    }
    v16 = v18;
    *a4 = a2;
    sub_140038F50(v16, a2, a3);
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 8));
    sub_140017458(&v19, (char *)a1);
    sub_140017458((__int64 *)a1, (char *)&v18);
    if ( a1 != -8 )
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 8));
    if ( v18 )
      sub_140017850(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    if ( v19 )
      sub_140017850(v19);
    return 0LL;
  }
  else
  {
    if ( v18 )
      sub_140017850(v18);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return (unsigned int)v11;
  }
}
