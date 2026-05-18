/*
 * XREFs of sub_18007F764 @ 0x18007F764
 * Callers:
 *     sub_18007F6E8 @ 0x18007F6E8 (sub_18007F6E8.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011FA0 @ 0x180011FA0 (sub_180011FA0.c)
 *     sub_180012A50 @ 0x180012A50 (sub_180012A50.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     __RTDynamicCast @ 0x1800D7C64 (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_18007F764(__int64 *a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // [rsp+38h] [rbp-30h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 *v13; // [rsp+88h] [rbp+20h]

  v4 = (struct _Mtx_internal_imp_t *)(a1 + 2);
  v13 = a1 + 2;
  sub_180012AC4((__int64)(a1 + 2));
  v11 = _std_type_info_hash(&qword_1801BEB38);
  sub_180012A50(a1, (__int64)&v12, &v11);
  if ( v12 == *a1 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    sub_180011FA0(v12 + 40, (__int64)&v9);
    v5 = _RTDynamicCast(
           v9,
           0LL,
           &Spectre::Engine::RendererResource `RTTI Type Descriptor',
           &Spectre::Engine::DeviceShaderPipeline `RTTI Type Descriptor',
           0);
    v6 = v10;
    if ( v5 )
    {
      if ( v10 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v6 = v10;
      }
      v7 = v6;
    }
    else
    {
      v7 = 0LL;
    }
    *a2 = v5;
    a2[1] = v7;
    if ( v6 )
      sub_180010EC8(v6);
  }
  Mtx_unlock(v4);
  return a2;
}
