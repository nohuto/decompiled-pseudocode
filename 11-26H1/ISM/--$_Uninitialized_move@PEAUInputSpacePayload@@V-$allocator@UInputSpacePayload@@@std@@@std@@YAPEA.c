/*
 * XREFs of ??$_Uninitialized_move@PEAUInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@YAPEAUInputSpacePayload@@QEAU1@0PEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x1801968E4
 * Callers:
 *     ??$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAPEAUInputSpacePayload@@QEAU2@AEAUINPUT_SPACE_PAYLOAD@@@Z @ 0x1801963C0 (--$_Emplace_reallocate@AEAUINPUT_SPACE_PAYLOAD@@@-$vector@UInputSpacePayload@@V-$allocator@UInpu.c)
 *     ??$_Reallocate@$0A@@?$vector@UInputSpacePayload@@V?$allocator@UInputSpacePayload@@@std@@@std@@AEAAXAEA_K@Z @ 0x180196840 (--$_Reallocate@$0A@@-$vector@UInputSpacePayload@@V-$allocator@UInputSpacePayload@@@std@@@std@@AE.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@AEAV?$allocator@UInputSpacePayload@@@0@@Z @ 0x180196180 (--$_Destroy_range@V-$allocator@UInputSpacePayload@@@std@@@std@@YAXPEAUInputSpacePayload@@QEAU1@A.c)
 */

__int64 __fastcall std::_Uninitialized_move<InputSpacePayload *>(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v5; // r9
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = a3;
  if ( a1 != a2 )
  {
    v5 = a1 + 3;
    v6 = a3 - (_QWORD)a1;
    do
    {
      *(_QWORD *)v3 = *(v5 - 3);
      *(_DWORD *)(v3 + 8) = *((_DWORD *)v5 - 4);
      v3 += 40LL;
      v7 = v5[1];
      v5[1] = 0LL;
      v8 = *v5;
      *v5 = 0LL;
      v9 = *(v5 - 1);
      *(v5 - 1) = 0LL;
      *(_QWORD *)((char *)v5 + v6 - 8) = v9;
      *(_QWORD *)((char *)v5 + v6) = v8;
      *(_QWORD *)((char *)v5 + v6 + 8) = v7;
      v5 += 5;
    }
    while ( v5 - 3 != a2 );
  }
  std::_Destroy_range<std::allocator<InputSpacePayload>>((_QWORD *)v3, (_QWORD *)v3);
  return v3;
}
