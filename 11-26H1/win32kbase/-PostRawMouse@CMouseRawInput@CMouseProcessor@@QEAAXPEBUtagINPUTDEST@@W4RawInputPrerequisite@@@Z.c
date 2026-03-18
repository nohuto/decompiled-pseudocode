/*
 * XREFs of ?PostRawMouse@CMouseRawInput@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@W4RawInputPrerequisite@@@Z @ 0x14008A158
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x140088610 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1401447E8 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     EditionPostRawMouseInputMessage @ 0x14008A200 (EditionPostRawMouseInputMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall CMouseProcessor::CMouseRawInput::PostRawMouse(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  int v6; // ebp
  int v7; // edi
  __int64 v8; // r14
  int (*v9)(void); // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v3 = &retaddr;
  if ( !*(_BYTE *)(a1 + 69) && !*(_BYTE *)(a1 + 68) )
  {
    LODWORD(v3) = a3 & *(_DWORD *)(a1 + 64);
    if ( (_DWORD)v3 == a3 )
    {
      v6 = *(_DWORD *)(a1 + 24);
      v7 = 0;
      v8 = *(_QWORD *)(a1 + 32);
      v9 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 6488LL);
      if ( v9 && v9() >= 0 )
        v7 = EditionPostRawMouseInputMessage(a2, v8, v6, (int)a1 + 40, a1);
      LOBYTE(v3) = v7 != 0;
      *(_BYTE *)(a1 + 68) = v7 != 0;
    }
  }
  return (char)v3;
}
