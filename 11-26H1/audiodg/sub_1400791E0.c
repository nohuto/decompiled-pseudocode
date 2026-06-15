/*
 * XREFs of sub_1400791E0 @ 0x1400791E0
 * Callers:
 *     sub_140079F14 @ 0x140079F14 (sub_140079F14.c)
 *     sub_14007CA54 @ 0x14007CA54 (sub_14007CA54.c)
 *     sub_14007E8FC @ 0x14007E8FC (sub_14007E8FC.c)
 * Callees:
 *     sub_14001FC40 @ 0x14001FC40 (sub_14001FC40.c)
 *     sub_1400257E4 @ 0x1400257E4 (sub_1400257E4.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140078898 @ 0x140078898 (sub_140078898.c)
 */

bool __fastcall sub_1400791E0(RTL_SRWLOCK *a1)
{
  __int64 v2; // rsi
  __int64 Ptr; // rcx
  bool v4; // zf
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF
  char v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a1[3].Ptr )
  {
    sub_1400257E4((__int64)&v7);
    if ( a1[3].Ptr )
    {
      v2 = 0LL;
    }
    else
    {
      if ( !a1[2].Ptr )
      {
        Ptr = (__int64)a1[1].Ptr;
        v6 = 0LL;
        if ( (int)sub_140078898(Ptr, &v6) >= 0 && !a1[2].Ptr )
          a1[2].Ptr = v6;
      }
      v2 = ((__int64)a1[2].Ptr + 32) & -(__int64)(a1[2].Ptr != 0LL);
    }
    AcquireSRWLockExclusive(a1 + 4);
    v4 = a1[3].Ptr == 0LL;
    v6 = a1 + 4;
    if ( v4 )
      a1[3].Ptr = (PVOID)v2;
    sub_14003A998(&v6);
    sub_14001FC40((__int64)&v7);
  }
  return a1[3].Ptr != 0LL;
}
