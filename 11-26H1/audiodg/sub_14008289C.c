/*
 * XREFs of sub_14008289C @ 0x14008289C
 * Callers:
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000FFB0 @ 0x14000FFB0 (sub_14000FFB0.c)
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14002AC50 @ 0x14002AC50 (sub_14002AC50.c)
 *     sub_140081FC8 @ 0x140081FC8 (sub_140081FC8.c)
 */

__int64 __fastcall sub_14008289C(__int64 a1, _QWORD *a2, __int64 **a3)
{
  __int64 **v3; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned __int64 i; // rdi
  int v9; // edx
  unsigned __int64 j; // rdi
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // rbx
  _QWORD *v14; // [rsp+28h] [rbp-40h] BYREF
  ATL::CAtlException *v15; // [rsp+30h] [rbp-38h] BYREF
  ATL::CAtlException *v16; // [rsp+38h] [rbp-30h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v19; // [rsp+78h] [rbp+10h]
  __int64 **v20; // [rsp+80h] [rbp+18h]
  __int64 v21; // [rsp+88h] [rbp+20h]

  v20 = a3;
  v18 = a1;
  v3 = a3;
  v4 = 0;
  v5 = (_QWORD *)*a2;
  v14 = (_QWORD *)*a2;
  while ( v5 )
  {
    v6 = *sub_1400265D8(a1, &v14);
    v21 = v6;
    v7 = v6;
    for ( i = 0LL; ; ++i )
    {
      v19 = i;
      if ( i >= *(_QWORD *)(v7 + 64) )
        break;
      v18 = *(_QWORD *)sub_14000FFB0((_QWORD *)(v6 + 56), i);
      if ( !sub_14002AC50(v3, (__int64)&v18) )
      {
        try
        {
          v4 = 0;
          sub_140081FC8(v3, &v18);
        }
        catch ( ATL::CAtlException *v15 )
        {
          v12 = v15;
          if ( *(_DWORD *)v15 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v18) = *(_DWORD *)v12;
          v4 = v18;
          if ( (int)v18 < 0 )
          {
            v9 = 2550;
LABEL_9:
            sub_14000C2A8((int)retaddr, v9, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", v4);
            return v4;
          }
          v3 = v20;
          v6 = v21;
          i = v19;
          v7 = v21;
        }
      }
    }
    for ( j = 0LL; ; ++j )
    {
      v19 = j;
      if ( j >= *(_QWORD *)(v7 + 96) )
        break;
      v18 = *(_QWORD *)sub_14000FFB0((_QWORD *)(v6 + 88), j);
      if ( !sub_14002AC50(v3, (__int64)&v18) )
      {
        try
        {
          v4 = 0;
          sub_140081FC8(v3, &v18);
        }
        catch ( ATL::CAtlException *v16 )
        {
          v13 = v16;
          if ( *(_DWORD *)v16 == -1073741571 )
            o__resetstkoflw();
          LODWORD(v18) = *(_DWORD *)v13;
          v4 = v18;
          if ( (int)v18 < 0 )
          {
            v9 = 2559;
            goto LABEL_9;
          }
          v3 = v20;
          v6 = v21;
          j = v19;
          v7 = v21;
        }
      }
    }
    v5 = v14;
  }
  return v4;
}
