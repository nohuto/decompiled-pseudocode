/*
 * XREFs of sub_140052E0C @ 0x140052E0C
 * Callers:
 *     sub_14005400C @ 0x14005400C (sub_14005400C.c)
 *     sub_1400541D0 @ 0x1400541D0 (sub_1400541D0.c)
 * Callees:
 *     sub_14002A5F8 @ 0x14002A5F8 (sub_14002A5F8.c)
 *     sub_1400520DC @ 0x1400520DC (sub_1400520DC.c)
 */

unsigned __int64 __fastcall sub_140052E0C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      sub_1400520DC((__int64)a1, (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return sub_14002A5F8(v5, v4, &v6);
    }
    else
    {
      return sub_14005452C(*a1, *v2, v1[1]);
    }
  }
  return result;
}
