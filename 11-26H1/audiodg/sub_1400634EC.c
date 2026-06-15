/*
 * XREFs of sub_1400634EC @ 0x1400634EC
 * Callers:
 *     sub_1400632D4 @ 0x1400632D4 (sub_1400632D4.c)
 *     sub_140063350 @ 0x140063350 (sub_140063350.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_14006315C @ 0x14006315C (sub_14006315C.c)
 *     sub_140063214 @ 0x140063214 (sub_140063214.c)
 *     sub_140063B30 @ 0x140063B30 (sub_140063B30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1400634EC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 *v5; // rdx
  __int64 v6; // rcx
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // rax
  ATL::CAtlException *v13; // rbx
  ATL::CAtlException *v14; // rbx
  __int64 *v15; // [rsp+28h] [rbp-70h]
  __int64 v16; // [rsp+30h] [rbp-68h] BYREF
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  _QWORD *v18; // [rsp+40h] [rbp-58h] BYREF
  ATL::CAtlException *v19; // [rsp+68h] [rbp-30h] BYREF
  ATL::CAtlException *v20; // [rsp+70h] [rbp-28h] BYREF
  int v21; // [rsp+A0h] [rbp+8h]
  int v22; // [rsp+A0h] [rbp+8h]

  v4 = 0;
  v15 = *(__int64 **)(a1 + 64);
  while ( 1 )
  {
    v5 = v15;
    if ( !v15 )
      break;
    v16 = 0LL;
    v17 = 0LL;
    v6 = *v15;
    v15 = (__int64 *)*v15;
    v4 = 0;
    v18 = *(_QWORD **)v5[2];
    while ( v18 )
    {
      v4 = 0;
      v7 = (__int64 *)*sub_1400265D8(v6, &v18);
      v8 = v7[3];
      if ( v8 )
      {
        v4 = sub_140063B30(a2, v8, &v16);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
      }
      v9 = v7[4];
      if ( v9 )
      {
        v4 = sub_140063B30(a2, v9, &v17);
        if ( (v4 & 0x80000000) != 0 )
          return v4;
      }
      if ( v16 )
      {
        v4 = 0;
        try
        {
          v10 = (__int64 *)sub_14006315C(a3, v7[1]);
          sub_140063214(v10, &v16);
        }
        catch ( ATL::CAtlException *v19 )
        {
          v13 = v19;
          if ( *(_DWORD *)v19 == -1073741571 )
            o__resetstkoflw();
          v21 = *(_DWORD *)v13;
          v4 = *(_DWORD *)v13;
          if ( v21 < 0 )
            return v4;
        }
      }
      if ( v17 )
      {
        v4 = 0;
        try
        {
          v11 = (__int64 *)sub_14006315C(a4, v7[1]);
          sub_140063214(v11, &v17);
        }
        catch ( ATL::CAtlException *v20 )
        {
          v14 = v20;
          if ( *(_DWORD *)v20 == -1073741571 )
            o__resetstkoflw();
          v22 = *(_DWORD *)v14;
          v4 = *(_DWORD *)v14;
          if ( v22 < 0 )
            return v4;
        }
      }
    }
  }
  return v4;
}
