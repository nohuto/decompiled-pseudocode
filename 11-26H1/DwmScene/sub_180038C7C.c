/*
 * XREFs of sub_180038C7C @ 0x180038C7C
 * Callers:
 *     sub_18004AD40 @ 0x18004AD40 (sub_18004AD40.c)
 *     sub_180099888 @ 0x180099888 (sub_180099888.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180012A94 @ 0x180012A94 (sub_180012A94.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 *     sub_1800265E0 @ 0x1800265E0 (sub_1800265E0.c)
 *     sub_1800266A4 @ 0x1800266A4 (sub_1800266A4.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180038C7C(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 120);
  if ( v3 && *(_DWORD *)(v3 + 8) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)(a1 + 120) )
    {
      *a2 = *(_QWORD *)(a1 + 112);
      v4 = *(_QWORD *)(a1 + 120);
      a2[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    }
  }
  else
  {
    sub_180012A94(a1 + 72, &v8);
    if ( v8 && (unsigned int)sub_1800266A4(v8) )
    {
      v5 = sub_1800265E0(v8);
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 184LL))(v5);
      sub_1800162D0(a2, v6);
    }
    else
    {
      *a2 = 0LL;
      a2[1] = 0LL;
    }
    if ( v9 )
      sub_180010EC8(v9);
  }
  return a2;
}
