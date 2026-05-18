/*
 * XREFs of sub_18006BDBC @ 0x18006BDBC
 * Callers:
 *     sub_18004A638 @ 0x18004A638 (sub_18004A638.c)
 *     sub_1800929B0 @ 0x1800929B0 (sub_1800929B0.c)
 * Callees:
 *     sub_180012A50 @ 0x180012A50 (sub_180012A50.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_18002F640 @ 0x18002F640 (sub_18002F640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006BDBC(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbp
  struct _Mtx_internal_imp_t *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rbp
  _BYTE v10[48]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h] BYREF

  v3 = a3;
  v6 = (struct _Mtx_internal_imp_t *)(a1 + 24);
  sub_180012AC4(a1 + 24);
  v7 = 0LL;
  if ( a2 )
  {
    v8 = v3 << 32;
    v11 = v8 | a2;
    sub_180012A50((__int64 *)(a1 + 184), (__int64)&v12, &v11);
    if ( v12 == *(_QWORD *)(a1 + 184) )
    {
      v7 = v8 | (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 216));
      *(_QWORD *)(*(_QWORD *)sub_18002F640((__int64 *)(a1 + 184), (__int64)v10, &v11) + 40LL) = v7;
    }
    else
    {
      v7 = *(_QWORD *)(v12 + 40);
    }
  }
  Mtx_unlock(v6);
  return v7;
}
