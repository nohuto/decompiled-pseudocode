/*
 * XREFs of ?erase@?$deque@PEAVShellGesturesClientProxy@@V?$allocator@PEAVShellGesturesClientProxy@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@2@0@Z @ 0x180096F18
 * Callers:
 *     ?UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z @ 0x18007E78C (-UnregisterClient@ShellGesturesProcessor@@SAXPEAVShellGesturesClientProxy@@@Z.c)
 * Callees:
 *     ??$move@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18015C3B0 (--$move@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGesturesClien.c)
 *     ??$move_backward@V?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@PEAVShellGesturesClientProxy@@@std@@@std@@@0@V10@00@Z @ 0x18015C480 (--$move_backward@V-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@PEAVShellGest.c)
 */

__int64 *__fastcall std::deque<ShellGesturesClientProxy *>::erase(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  __int64 v6; // r10
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-30h] BYREF
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  _BYTE v20[16]; // [rsp+50h] [rbp-10h] BYREF

  v4 = *(_QWORD *)(a3 + 16);
  v6 = *(_QWORD *)(a4 + 16);
  v7 = ShellGesturesProcessor::s_clients;
  v8 = v4 - qword_180253FE8;
  v9 = v6 - v4;
  if ( v6 == v4 )
  {
    a2[1] = 0LL;
    *a2 = v7;
    a2[2] = v4;
  }
  else
  {
    if ( ShellGesturesProcessor::s_clients )
    {
      v10 = *(_QWORD *)ShellGesturesProcessor::s_clients;
      v11 = *(__int64 **)ShellGesturesProcessor::s_clients;
    }
    else
    {
      v11 = 0LL;
      v10 = 0LL;
    }
    v15[0] = v10;
    v15[1] = v6;
    if ( v8 >= qword_180253FE8 + qword_180253FF0 - v6 )
    {
      v18 = v11;
      v19 = v4;
      v17 = qword_180253FE8 + qword_180253FF0;
      v16 = &ShellGesturesProcessor::s_clients;
      ((void (__fastcall *)(_BYTE *, _QWORD *, __int64 **, __int64 **))std::move<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>)(
        v20,
        v15,
        &v16,
        &v18);
      v12 = qword_180253FF0;
      v13 = qword_180253FE8;
      do
      {
        if ( !--v12 )
          v13 = 0LL;
        --v9;
      }
      while ( v9 );
      qword_180253FE8 = v13;
    }
    else
    {
      v16 = v11;
      v17 = v4;
      v18 = &ShellGesturesProcessor::s_clients;
      v19 = qword_180253FE8;
      ((void (__fastcall *)(_BYTE *, __int64 **, __int64 **, _QWORD *))std::move_backward<std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>,std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<ShellGesturesClientProxy *>>>>)(
        v20,
        &v18,
        &v16,
        v15);
      v12 = qword_180253FF0;
      v13 = qword_180253FE8;
      do
      {
        if ( --v12 )
          ++v13;
        else
          v13 = 0LL;
        qword_180253FE8 = v13;
        --v9;
      }
      while ( v9 );
    }
    qword_180253FF0 = v12;
    *a2 = ShellGesturesProcessor::s_clients;
    a2[2] = v13 + v8;
    a2[1] = 0LL;
  }
  return a2;
}
