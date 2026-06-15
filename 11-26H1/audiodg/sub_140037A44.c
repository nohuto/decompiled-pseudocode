/*
 * XREFs of sub_140037A44 @ 0x140037A44
 * Callers:
 *     sub_140037A30 @ 0x140037A30 (sub_140037A30.c)
 *     sub_14007B3A0 @ 0x14007B3A0 (sub_14007B3A0.c)
 * Callees:
 *     sub_140031B40 @ 0x140031B40 (sub_140031B40.c)
 *     sub_140037BE8 @ 0x140037BE8 (sub_140037BE8.c)
 *     sub_140037C58 @ 0x140037C58 (sub_140037C58.c)
 *     sub_140040814 @ 0x140040814 (sub_140040814.c)
 */

__int64 __fastcall sub_140037A44(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  RTL_SRWLOCK *v6; // rcx
  unsigned int *v9; // r14
  int v10; // esi
  unsigned int v11; // r9d
  _DWORD *v12; // r15
  int v13; // edx
  RTL_SRWLOCK *v14; // rcx
  unsigned __int8 v16; // [rsp+60h] [rbp+18h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    if ( !LODWORD(v6->Ptr) )
      LODWORD(v6->Ptr) = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive(v6);
  }
  v9 = (unsigned int *)(a1 + 48);
  if ( a4 )
    a2 = *v9;
  if ( a2 > *v9 )
  {
    v10 = -2147483637;
    goto LABEL_22;
  }
  if ( *v9 >= 0x7FFFFFFF )
  {
    v10 = -2147024882;
    goto LABEL_11;
  }
  sub_140037C58(&v16, *(unsigned __int8 *)(a1 + 101), a1 + 104);
  v10 = 0;
  v11 = *(_DWORD *)(a1 + 52);
  v12 = (_DWORD *)(a1 + 48);
  if ( *v9 + 1 <= v11 )
  {
LABEL_24:
    if ( a2 >= *v9
      || !(unsigned int)sub_140031B40(
                          (void *)(*(_QWORD *)(a1 + 64) + 8LL * (a2 + 1)),
                          8LL * (*(_DWORD *)(a1 + 52) - a2 - 1),
                          (const void *)(*(_QWORD *)(a1 + 64) + 8LL * a2),
                          8LL * (*v9 - a2)) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL * a2) = a3;
      ++*v12;
      ++*(_DWORD *)(a1 + 96);
      goto LABEL_11;
    }
    v10 = -2147418113;
LABEL_22:
    RoOriginateError((unsigned int)v10, 0LL);
    goto LABEL_11;
  }
  v13 = 1;
  if ( v11 + 1 <= (v11 >> 1) + v11 )
    v13 = v11 >> 1;
  v10 = sub_140037BE8(a1, v11 + v13);
  if ( v10 >= 0 )
  {
    v12 = (_DWORD *)(a1 + 48);
    goto LABEL_24;
  }
LABEL_11:
  v14 = (RTL_SRWLOCK *)(a1 + 88);
  if ( *(_DWORD *)(a1 + 80) == 1 )
    LODWORD(v14->Ptr) += 0x10000000;
  else
    ReleaseSRWLockExclusive(v14);
  if ( v10 >= 0 )
    return (unsigned int)sub_140040814(v16, *(unsigned __int8 *)(a1 + 100), a1, 1LL, a2);
  return (unsigned int)v10;
}
