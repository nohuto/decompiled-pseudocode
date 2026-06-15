/*
 * XREFs of sub_14007BBD0 @ 0x14007BBD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140076CA0 @ 0x140076CA0 (sub_140076CA0.c)
 */

__int64 __fastcall sub_14007BBD0(RTL_SRWLOCK *a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v8 = a1;
  *(_QWORD *)&v6 = &v8;
  v9 = a3;
  *((_QWORD *)&v6 + 1) = &v9;
  v3 = sub_140076CA0(a1 + 10, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 1306, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v3);
  return v4;
}
