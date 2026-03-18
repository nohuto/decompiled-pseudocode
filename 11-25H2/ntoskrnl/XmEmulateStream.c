/*
 * XREFs of XmEmulateStream @ 0x14046AAC4
 * Callers:
 *     XmEmulateInterrupt @ 0x14055C170 (XmEmulateInterrupt.c)
 * Callees:
 *     XmGetCodeByte @ 0x14046AC28 (XmGetCodeByte.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     _setjmp @ 0x1406A9D30 (_setjmp.c)
 */

__int64 __fastcall XmEmulateStream(__int64 a1, __int16 a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v4; // edx
  unsigned __int8 CodeByte; // al
  __int16 v7; // cx
  __int64 v8; // rdx
  __int64 v9; // rdx

  dword_140E11518 = *(_DWORD *)a4;
  dword_140E1151C = *(_DWORD *)(a4 + 4);
  dword_140E11520 = *(_DWORD *)(a4 + 8);
  dword_140E11524 = *(_DWORD *)(a4 + 12);
  dword_140E1152C = *(_DWORD *)(a4 + 16);
  dword_140E11530 = *(_DWORD *)(a4 + 20);
  dword_140E11534 = *(_DWORD *)(a4 + 24);
  word_140E1153E = *(_WORD *)(a4 + 28);
  word_140E11538 = *(_WORD *)(a4 + 30);
  word_140E1153A = a2;
  dword_140E11514 = a3;
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
