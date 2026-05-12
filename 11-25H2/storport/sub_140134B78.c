/*
 * XREFs of sub_140134B78 @ 0x140134B78
 * Callers:
 *     sub_14008AB58 @ 0x14008AB58 (sub_14008AB58.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140138764 @ 0x140138764 (sub_140138764.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140134B78(__int64 a1, __int64 a2, char a3)
{
  int v3; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 *v9; // r10
  __int64 *v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  v14 = 0LL;
  if ( v3 == 512 )
  {
    v7 = sub_140136180(a1, a2);
    if ( v7 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x14u, (__int64)&unk_140154D78, v7);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x15u, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v10 = &v14;
      if ( v9 )
        v10 = v9;
      v7 = sub_14013A37C(a1, v8, 0x900010001LL, v10);
      if ( v7 )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
          sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x16u, (__int64)&unk_140154D78, v7);
      }
      else
      {
        LOBYTE(v11) = a3;
        v12 = sub_140138764(a1, a2, v11);
        v7 = v12;
        if ( v12 )
          v7 = sub_1401361CC(a1, a2, v12);
      }
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x13u, (__int64)&unk_140154D78, v3);
    return (unsigned int)-1073741637;
  }
  return v7;
}
