/*
 * XREFs of sub_180038E70 @ 0x180038E70
 * Callers:
 *     sub_180038A68 @ 0x180038A68 (sub_180038A68.c)
 *     sub_1800C5FC0 @ 0x1800C5FC0 (sub_1800C5FC0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_180038E70(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  sub_180012A94(a1 + 72, &v4);
  result = v4;
  if ( v4 )
  {
    result = *(unsigned int *)(v4 + 3880);
    *(_DWORD *)(a1 + 104) = result;
  }
  if ( v5 )
    return sub_180010EC8(v5);
  return result;
}
