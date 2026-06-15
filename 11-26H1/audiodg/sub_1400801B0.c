/*
 * XREFs of sub_1400801B0 @ 0x1400801B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140016F18 @ 0x140016F18 (sub_140016F18.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_14007FF28 @ 0x14007FF28 (sub_14007FF28.c)
 */

__int64 __fastcall sub_1400801B0(__int64 a1, DWORD dwMaximumSizeLow, _QWORD *a3)
{
  unsigned int v4; // ebx
  HANDLE FileMappingW; // rax
  __int64 v6; // r9
  int v7; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+18h]
  DWORD v10; // [rsp+58h] [rbp+28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+30h] BYREF
  void *v12; // [rsp+68h] [rbp+38h] BYREF

  v10 = dwMaximumSizeLow;
  if ( a3 )
  {
    *a3 = 0LL;
    v12 = 0LL;
    FileMappingW = CreateFileMappingW(
                     (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                     (LPSECURITY_ATTRIBUTES)(a1 + 16),
                     4u,
                     0,
                     dwMaximumSizeLow,
                     0LL);
    sub_140016858(&v12, FileMappingW);
    if ( sub_1400165A4(&v12) )
    {
      v4 = sub_1400470EC(
             (int)retaddr,
             55,
             (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
             v6);
    }
    else
    {
      v11 = 0LL;
      sub_140019444(&v11);
      v7 = sub_14007FF28(&v11, &v12, (int *)&v10);
      v4 = v7;
      if ( v7 >= 0 )
      {
        sub_14003826C(&v11, a3);
        sub_140003238(&v11);
        v4 = 0;
      }
      else
      {
        sub_14000C2A8(
          (int)retaddr,
          59,
          (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
          v7);
        sub_140003238(&v11);
      }
    }
    sub_140016F18(&v12);
  }
  else
  {
    v4 = -2147024809;
    sub_14000C2A8(
      (int)retaddr,
      47,
      (int)"avcore\\audiocore\\engine\\core\\crossprocessengineobjects\\cpmemorymanager.cpp",
      -2147024809);
  }
  return v4;
}
