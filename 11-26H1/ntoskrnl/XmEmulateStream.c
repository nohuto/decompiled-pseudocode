/*
 * XREFs of XmEmulateStream @ 0x1404A8978
 * Callers:
 *     XmEmulateInterrupt @ 0x140596B70 (XmEmulateInterrupt.c)
 * Callees:
 *     XmGetCodeByte @ 0x1404A8AE0 (XmGetCodeByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     _setjmp @ 0x140732390 (_setjmp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rdx

  dword_140E10C58 = *(_DWORD *)a4;
  dword_140E10C5C = *(_DWORD *)(a4 + 4);
  dword_140E10C60 = *(_DWORD *)(a4 + 8);
  dword_140E10C64 = *(_DWORD *)(a4 + 12);
  dword_140E10C6C = *(_DWORD *)(a4 + 16);
  dword_140E10C70 = *(_DWORD *)(a4 + 20);
  dword_140E10C74 = *(_DWORD *)(a4 + 24);
  word_140E10C7E = *(_WORD *)(a4 + 28);
  word_140E10C78 = *(_WORD *)(a4 + 30);
  word_140E10C7A = a2;
  dword_140E10C54 = a3;
  v4 = setjmp(Buf);
  for ( XmStatus = v4; !XmStatus; v4 = XmStatus )
  {
    *((_DWORD *)&XmContext + 29) = 3;
    *((_QWORD *)&XmContext + 17) = 0LL;
    XmContext = XmOpcodeControlTable1;
    do
    {
      CodeByte = XmGetCodeByte(&XmContext);
      *((_DWORD *)&XmContext + 28) = CodeByte;
      v7 = *(_WORD *)(XmContext + 2LL * CodeByte);
      *((_WORD *)&XmContext + 40) = v7;
      *((_DWORD *)&XmContext + 31) = (unsigned __int8)v7;
    }
    while ( !(unsigned int)guard_dispatch_icall_no_overrides(&XmContext, v8) );
    guard_dispatch_icall_no_overrides(&XmContext, v9);
  }
  *(_DWORD *)a4 = *((_DWORD *)&XmContext + 6);
  *(_DWORD *)(a4 + 4) = *((_DWORD *)&XmContext + 7);
  *(_DWORD *)(a4 + 8) = *((_DWORD *)&XmContext + 8);
  *(_DWORD *)(a4 + 12) = *((_DWORD *)&XmContext + 9);
  *(_DWORD *)(a4 + 16) = *((_DWORD *)&XmContext + 11);
  *(_DWORD *)(a4 + 20) = *((_DWORD *)&XmContext + 12);
  *(_DWORD *)(a4 + 24) = *((_DWORD *)&XmContext + 13);
  return v4;
}
