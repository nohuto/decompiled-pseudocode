/*
 * XREFs of sub_140063F54 @ 0x140063F54
 * Callers:
 *     sub_140063E30 @ 0x140063E30 (sub_140063E30.c)
 * Callees:
 *     sub_140063214 @ 0x140063214 (sub_140063214.c)
 */

__int64 __fastcall sub_140063F54(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 result; // rax
  ATL::CAtlException *v7; // rbx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+20h] [rbp-28h] BYREF
  ATL::CAtlException *v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF
  int v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  v11 = a1;
  try
  {
    v4 = a2;
    v3 = a1;
    sub_140063214((__int64 *)(a1 + 8), &v12);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      o__resetstkoflw();
    v13 = *(_DWORD *)v7;
    v2 = v13;
    if ( v13 >= 0 )
    {
      v3 = v11;
      v4 = v12;
      goto LABEL_17;
    }
LABEL_4:
    result = v2;
  }
LABEL_17:
  try
  {
    v2 = 0;
    v11 = v3;
    sub_140063214((__int64 *)(v4 + 56), &v11);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v8 = v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      o__resetstkoflw();
    v2 = *(_DWORD *)v8;
    goto LABEL_4;
  }
  goto LABEL_4;
}
