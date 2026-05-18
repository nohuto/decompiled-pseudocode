/*
 * XREFs of sub_1800D37C0 @ 0x1800D37C0
 * Callers:
 *     sub_1800D0A50 @ 0x1800D0A50 (sub_1800D0A50.c)
 *     sub_1800D0CF0 @ 0x1800D0CF0 (sub_1800D0CF0.c)
 *     sub_1800D0FD4 @ 0x1800D0FD4 (sub_1800D0FD4.c)
 *     sub_1800D1314 @ 0x1800D1314 (sub_1800D1314.c)
 * Callees:
 *     sub_18000D954 @ 0x18000D954 (sub_18000D954.c)
 *     sub_180012AC4 @ 0x180012AC4 (sub_180012AC4.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_18001D6F4 @ 0x18001D6F4 (sub_18001D6F4.c)
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 *     sub_1800D28FC @ 0x1800D28FC (sub_1800D28FC.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800D37C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v10; // [rsp+68h] [rbp+20h] BYREF

  if ( _InterlockedExchange((volatile __int32 *)(a1 + 256), 1) )
  {
    sub_1800141BC(a2);
    sub_18001DCFC(&qword_1801BD608, 4);
  }
  else
  {
    sub_18000D954(&v9, a1);
    v10 = &v9;
    sub_180012AC4(a1 + 160);
    v4 = **(_QWORD **)(a1 + 240);
    v8 = v4;
    while ( !*(_BYTE *)(v4 + 25) )
    {
      v5 = *(_QWORD *)(v4 + 96);
      if ( !v5 )
      {
        std::_Xbad_function_call();
        break;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, a2);
      sub_18001D6F4(&v8, v6);
      v4 = v8;
    }
    Mtx_unlock((_Mtx_t)(a1 + 160));
    sub_1800D28FC((__int64 *)&v10, v7);
  }
}
