/*
 * XREFs of ApiSetTransformPointForIvSpatialInput @ 0x140228348
 * Callers:
 *     ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EDE0 (-ivHandleMouseInputPacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetTransformPointForIvSpatialInput(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // edi
  int (*v7)(void); // rax
  __int64 v8; // rcx
  unsigned int (__fastcall *v9)(__int64, __int64, __int64); // rax

  v6 = 0;
  v7 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 7008LL);
  if ( !v7 || v7() < 0 )
    return 0LL;
  v9 = *(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v8) + 48)
                                                                + 7016LL);
  if ( v9 )
    return v9(a1, a2, a3);
  return v6;
}
