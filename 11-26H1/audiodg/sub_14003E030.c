/*
 * XREFs of sub_14003E030 @ 0x14003E030
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003E030(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // edx
  __int64 v10; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 88);
  if ( !v6 )
  {
    v7 = -2147467263;
    v8 = 512;
LABEL_3:
    sub_14000C2A8((int)retaddr, v8, (int)"avcore\\audiocore\\server\\audiodg\\exe\\apowrappersrv.cpp", v7);
    return (unsigned int)v7;
  }
  if ( a4 )
  {
    v10 = *(_QWORD *)(a1 + 104);
    if ( v10 )
    {
      if ( v10 != -1 )
      {
        CloseHandle(*(HANDLE *)(a1 + 104));
        v6 = *(_QWORD *)(a1 + 88);
      }
    }
    *(_QWORD *)(a1 + 104) = a4;
  }
  v7 = sub_1400B6010(v6);
  if ( v7 < 0 )
  {
    v8 = 520;
    goto LABEL_3;
  }
  return 0LL;
}
