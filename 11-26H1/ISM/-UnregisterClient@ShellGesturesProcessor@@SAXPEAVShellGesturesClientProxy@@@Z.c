/*
 * XREFs of ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18007E78C
 * Callers:
 *     ?OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18007E760 (-OnDisconnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ??$find@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@PEAVShellGesturesClientProxy@@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@V10@AEBQEAVShellGesturesClientProxy@@@Z @ 0x1800949E4 (--$find@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClientProxy@@@s.c)
 *     ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180096F18 (-erase@-$deque@PEAVShellGesturesClientProxy@@V-$allocator@PEAVShellGesturesClientProxy@@@std@@@s.c)
 */

void __fastcall ShellGesturesProcessor::UnregisterClient(struct ShellGesturesClientProxy *a1)
{
  __int64 *v1; // rax
  __int64 v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-60h] BYREF
  __int64 v4; // [rsp+28h] [rbp-58h]
  __int64 v5; // [rsp+30h] [rbp-50h]
  __int64 v6; // [rsp+38h] [rbp-48h] BYREF
  __int64 v7; // [rsp+40h] [rbp-40h]
  __int64 v8; // [rsp+48h] [rbp-38h]
  _BYTE v9[24]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v10[24]; // [rsp+68h] [rbp-18h] BYREF
  struct ShellGesturesClientProxy *v11; // [rsp+90h] [rbp+10h] BYREF

  v11 = a1;
  v8 = qword_180253FE8;
  v5 = qword_180253FE8 + qword_180253FF0;
  v4 = 0LL;
  v3 = ShellGesturesProcessor::s_clients;
  v7 = 0LL;
  v6 = ShellGesturesProcessor::s_clients;
  v1 = (__int64 *)((__int64 (__fastcall *)(_BYTE *, __int64 *, __int64 *, struct ShellGesturesClientProxy **))std::find<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,ShellGesturesClientProxy *>)(
                    v9,
                    &v6,
                    &v3,
                    &v11);
  v7 = 0LL;
  v4 = 0LL;
  v2 = *v1;
  v5 = v1[2];
  v6 = v2;
  v3 = v2;
  v8 = v5 + 1;
  ((void (__fastcall *)(__int64, _BYTE *, __int64 *, __int64 *))std::deque<ShellGesturesClientProxy *>::erase)(
    v2,
    v10,
    &v3,
    &v6);
}
