/*
 * XREFs of sub_14007DB60 @ 0x14007DB60
 * Callers:
 *     <none>
 * Callees:
 *     sub_140037C58 @ 0x140037C58 (sub_140037C58.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_140040814 @ 0x140040814 (sub_140040814.c)
 */

__int64 __fastcall sub_14007DB60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  _QWORD *v7; // rcx
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rbp
  int v11; // r14d
  __int64 v12; // rsi
  int v13; // r15d
  __int64 v14; // rax
  RTL_SRWLOCK *v15; // rcx
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-28h] BYREF
  int v18; // [rsp+78h] [rbp+20h] BYREF

  v3 = (unsigned int)a2;
  v18 = 0;
  if ( (_DWORD)a2 )
  {
    v6 = _o_malloc(8LL * (unsigned int)a2, a2);
    v7 = (_QWORD *)v6;
    if ( !v6 )
      return (unsigned int)-2147024882;
    v9 = v3;
    v10 = a3 - v6;
    v11 = v3;
    v12 = v6;
    v13 = v3;
    do
    {
      *v7 = *(_QWORD *)((char *)v7 + v10);
      ++v7;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    v11 = 0;
    v12 = 0LL;
    v13 = 0;
  }
  sub_14003E0E8(&v17, (RTL_SRWLOCK *)(a1 + 80), &v18);
  v8 = v18;
  if ( v18 >= 0 )
  {
    sub_140037C58((__int64)&v18);
    *(_DWORD *)(a1 + 48) = v11;
    v8 = 0;
    *(_DWORD *)(a1 + 52) = v13;
    v14 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 64) = v12;
    v12 = v14;
    ++*(_DWORD *)(a1 + 96);
  }
  if ( v17 )
  {
    v15 = v17 + 1;
    if ( LODWORD(v17->Ptr) == 1 )
      LODWORD(v15->Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v15);
  }
  if ( v12 )
    _o_free(v12);
  if ( v8 >= 0 )
    return (unsigned int)sub_140040814();
  return (unsigned int)v8;
}
