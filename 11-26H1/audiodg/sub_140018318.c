/*
 * XREFs of sub_140018318 @ 0x140018318
 * Callers:
 *     sub_14001727C @ 0x14001727C (sub_14001727C.c)
 *     sub_140040EE0 @ 0x140040EE0 (sub_140040EE0.c)
 * Callees:
 *     sub_14003501C @ 0x14003501C (sub_14003501C.c)
 *     j_j__o_free @ 0x14004969C (j_j__o_free.c)
 *     sub_1400499B8 @ 0x1400499B8 (sub_1400499B8.c)
 *     sub_1400499DC @ 0x1400499DC (sub_1400499DC.c)
 */

__int64 __fastcall sub_140018318(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  bool v5; // cf
  __int64 v6; // rax
  unsigned __int64 *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v4 = -1LL;
  v5 = __CFADD__(v4, 8LL);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1LL;
  v7 = (unsigned __int64 *)sub_1400499B8(v6, &unk_1400C75FC);
  if ( v7 )
  {
    *v7 = a2;
    v8 = v7 + 1;
    sub_1400499DC(v7 + 1, 8LL, a2, sub_140020D50, sub_14001A5F0);
  }
  else
  {
    v8 = 0LL;
  }
  a1[2] = v8;
  v9 = 8 * a2;
  if ( !is_mul_ok(a2, 8uLL) )
    v9 = -1LL;
  v10 = sub_1400499B8(v9, &unk_1400C75FC);
  a1[4] = v10;
  v12 = a1[2];
  if ( v12 )
  {
    if ( v10 )
    {
      a1[3] = v12;
      return 0LL;
    }
    sub_14003501C();
  }
  j_j__o_free(a1[4], v11);
  a1[2] = 0LL;
  a1[4] = 0LL;
  return 2147942414LL;
}
