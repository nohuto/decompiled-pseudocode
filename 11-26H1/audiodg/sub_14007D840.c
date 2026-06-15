/*
 * XREFs of sub_14007D840 @ 0x14007D840
 * Callers:
 *     sub_14007D820 @ 0x14007D820 (sub_14007D820.c)
 *     sub_14007D830 @ 0x14007D830 (sub_14007D830.c)
 * Callees:
 *     sub_140031B40 @ 0x140031B40 (sub_140031B40.c)
 *     sub_140037BE8 @ 0x140037BE8 (sub_140037BE8.c)
 *     sub_140037C58 @ 0x140037C58 (sub_140037C58.c)
 *     sub_14003E0E8 @ 0x14003E0E8 (sub_14003E0E8.c)
 *     sub_140040814 @ 0x140040814 (sub_140040814.c)
 */

__int64 __fastcall sub_14007D840(__int64 a1, unsigned int a2, char a3)
{
  int v6; // ebx
  unsigned int *v7; // rsi
  unsigned int v8; // r9d
  unsigned int v9; // r8d
  int v11; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0;
  sub_14003E0E8(&v12, (RTL_SRWLOCK *)(a1 + 80), &v11);
  v6 = v11;
  if ( v11 >= 0 )
  {
    v7 = (unsigned int *)(a1 + 48);
    if ( a3 )
      a2 = *v7 - 1;
    if ( a2 >= *v7 )
    {
      v6 = -2147483637;
      RoOriginateError(2147483659LL, 0LL);
    }
    if ( v6 >= 0 )
    {
      sub_140037C58((__int64)&v11);
      v6 = 0;
      if ( a2 < *v7 - 1
        && (unsigned int)sub_140031B40(
                           (void *)(*(_QWORD *)(a1 + 64) + 8LL * a2),
                           8LL * (*v7 - a2 - 1),
                           (const void *)(*(_QWORD *)(a1 + 64) + 8LL * (a2 + 1)),
                           8LL * (*v7 - a2 - 1)) )
      {
        v6 = -2147418113;
        RoOriginateError(2147549183LL, 0LL);
      }
      else
      {
        v8 = *(_DWORD *)(a1 + 52);
        ++*(_DWORD *)(a1 + 96);
        if ( --*v7 < v8 / 3 )
        {
          v9 = 1;
          if ( v8 - 1 >= v8 - v8 / 3 )
            v9 = v8 / 3;
          v6 = sub_140037BE8(a1, v8 - v9);
        }
      }
    }
  }
  if ( v12 )
  {
    if ( LODWORD(v12->Ptr) == 1 )
      LODWORD(v12[1].Ptr) += 0x10000000;
    else
      ReleaseSRWLockExclusive(v12 + 1);
  }
  if ( v6 >= 0 )
    return (unsigned int)sub_140040814();
  return (unsigned int)v6;
}
