/*
 * XREFs of sub_14007E8FC @ 0x14007E8FC
 * Callers:
 *     sub_14007F1E0 @ 0x14007F1E0 (sub_14007F1E0.c)
 * Callees:
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_140045508 @ 0x140045508 (sub_140045508.c)
 *     sub_1400791E0 @ 0x1400791E0 (sub_1400791E0.c)
 *     sub_14007E9FC @ 0x14007E9FC (sub_14007E9FC.c)
 */

void __fastcall sub_14007E8FC(RTL_SRWLOCK *a1, _QWORD *a2, __int64 a3)
{
  RTL_SRWLOCK *Ptr; // rbx
  RTL_SRWLOCK *v7; // rcx
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( LOBYTE(a1->Ptr) && !sub_140045508((__int64)a1) && sub_1400791E0(a1) )
  {
    AcquireSRWLockExclusive(a1 + 4);
    v9 = a1 + 4;
    if ( !a1[28].Ptr )
    {
      Ptr = (RTL_SRWLOCK *)a1[3].Ptr;
      if ( Ptr )
      {
        v7 = (RTL_SRWLOCK *)a1[3].Ptr;
        a1[28].Ptr = 0LL;
        AcquireSRWLockExclusive(v7);
        v8 = Ptr;
        sub_14007E9FC(&Ptr[25], &a1[28], sub_140075D30, a1);
        sub_14003A998(&v8);
      }
    }
    sub_14007E9FC(&a1[19], a2, a3, 0LL);
    if ( *a2 )
      *a2 |= 0x80000000uLL;
    sub_14003A998(&v9);
  }
}
