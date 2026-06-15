/*
 * XREFs of sub_14005FF40 @ 0x14005FF40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14003A998 @ 0x14003A998 (sub_14003A998.c)
 *     sub_14005FA28 @ 0x14005FA28 (sub_14005FA28.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_14005FF40(RTL_SRWLOCK *a1, __int64 a2)
{
  RTL_SRWLOCK *v4; // rbx
  _QWORD *Ptr; // rdx
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = a1 + 12;
  AcquireSRWLockExclusive(a1 + 12);
  try
  {
    v9 = v4;
    v8 = a2;
    if ( a2 )
      sub_1400B6010(a2);
    Ptr = a1[14].Ptr;
    if ( Ptr == a1[15].Ptr )
    {
      sub_14005FA28(&a1[13].Ptr, (__int64)Ptr, &v8);
    }
    else
    {
      v8 = 0LL;
      *Ptr = a2;
      a1[14].Ptr = (char *)a1[14].Ptr + 8;
    }
    sub_140003238(&v8);
    sub_14003A998(&v9);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_14004EEE4(
                           (int)retaddr,
                           138,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgesourceendpoint.cpp");
  }
  return result;
}
