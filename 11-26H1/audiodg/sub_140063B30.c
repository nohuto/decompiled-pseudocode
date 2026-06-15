/*
 * XREFs of sub_140063B30 @ 0x140063B30
 * Callers:
 *     sub_1400634EC @ 0x1400634EC (sub_1400634EC.c)
 * Callees:
 *     sub_1400265D8 @ 0x1400265D8 (sub_1400265D8.c)
 *     sub_140049338 @ 0x140049338 (sub_140049338.c)
 *     sub_1400631E8 @ 0x1400631E8 (sub_1400631E8.c)
 *     sub_140063214 @ 0x140063214 (sub_140063214.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140063B30(__int64 *a1, __int64 a2, __int64 **a3)
{
  __int64 **v3; // r14
  __int64 *v5; // r15
  unsigned int v6; // esi
  _QWORD *v7; // rax
  __int64 **v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 result; // rax
  ATL::CAtlException *v12; // rbx
  ATL::CAtlException *v13; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *i; // [rsp+60h] [rbp+8h] BYREF
  __int64 **v15; // [rsp+70h] [rbp+18h]
  _QWORD *v16; // [rsp+78h] [rbp+20h]

  v15 = a3;
  v3 = a3;
  v5 = a1;
  v6 = 0;
  v7 = (_QWORD *)*a1;
  for ( i = (_QWORD *)*a1; ; v7 = i )
  {
    if ( !v7 )
    {
      *v3 = 0LL;
      goto LABEL_8;
    }
    v8 = (__int64 **)sub_1400265D8((__int64)a1, &i);
    a1 = *v8;
    if ( **v8 == a2 )
      break;
  }
  *v3 = a1;
  if ( a1 )
    goto LABEL_16;
LABEL_8:
  v9 = sub_140049338(104LL, (__int64)&unk_1400C75FC);
  v10 = (_QWORD *)v9;
  i = (_QWORD *)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = a2;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = 0LL;
    *(_QWORD *)(v9 + 40) = 0LL;
    *(_DWORD *)(v9 + 48) = 10;
    *(_QWORD *)(v9 + 56) = 0LL;
    *(_QWORD *)(v9 + 64) = 0LL;
    *(_QWORD *)(v9 + 72) = 0LL;
    *(_QWORD *)(v9 + 80) = 0LL;
    *(_QWORD *)(v9 + 88) = 0LL;
    *(_DWORD *)(v9 + 96) = 10;
  }
  else
  {
    v10 = 0LL;
  }
  try
  {
    v16 = v10;
    i = v10;
    v6 = 0;
    sub_140063214(v5, &i);
  }
  catch ( ATL::CAtlException *v13 )
  {
    v12 = v13;
    if ( *(_DWORD *)v13 == -1073741571 )
      o__resetstkoflw();
    LODWORD(i) = *(_DWORD *)v12;
    v6 = (unsigned int)i;
    if ( (int)i >= 0 )
    {
      v3 = v15;
      v10 = v16;
      goto LABEL_15;
    }
    if ( v16 )
      sub_1400631E8((__int64)v16);
LABEL_16:
    result = v6;
  }
LABEL_15:
  *v3 = v10;
  goto LABEL_16;
}
