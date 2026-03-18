/*
 * XREFs of ProcessKeyboardInjectedInput @ 0x140124B80
 * Callers:
 *     ProcessKeyboardInjectedInputViaRim @ 0x140124400 (ProcessKeyboardInjectedInputViaRim.c)
 *     NtMITSynthesizeKeyboardInput @ 0x140143DF0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     VKFromVSC @ 0x14008ABB0 (VKFromVSC.c)
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessKeyboardInjectedInput(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int16 v6; // cx
  __int16 v7; // dx
  __int16 v8; // ax
  __int16 v9; // cx
  __int16 v10; // dx
  int v11; // eax
  int i; // eax
  unsigned __int8 v14; // al
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h]

  v15 = 0LL;
  v3 = a3;
  LOBYTE(a3) = 0;
  v17 = 0LL;
  if ( a2 )
    v16 = *a2;
  else
    v16 = 0LL;
  v6 = *(_WORD *)(a1 + 4);
  if ( (v6 & 0x60) != 0 )
  {
    v7 = WORD1(v15);
  }
  else
  {
    LOBYTE(v15) = *(_BYTE *)(a1 + 2);
    v14 = VKFromVSC((unsigned __int8 *)&v15, (v6 & 2) != 0 ? 0xE0 : 0);
    LODWORD(a3) = v14;
    v7 = v14;
    WORD1(v15) = v14;
  }
  v8 = *(_WORD *)(a1 + 4);
  if ( (v8 & 0x40) != 0 )
  {
    v9 = *(_WORD *)(a1 + 2);
    LOBYTE(a3) = *(_BYTE *)(a1 + 2);
    switch ( v9 )
    {
      case 16:
        LOBYTE(a3) = -95;
        break;
      case 17:
        LOBYTE(a3) = ((v8 & 2) != 0) | 0xA2;
        break;
      case 18:
        LOBYTE(a3) = ((v8 & 2) != 0) | 0xA4;
        break;
    }
    v7 = (unsigned __int8)a3 | 0x2000;
    *(_WORD *)(a1 + 2) = 0;
    v8 &= ~0x40u;
    WORD1(v15) = v7;
    *(_WORD *)(a1 + 4) = v8;
  }
  if ( (v8 & 1) != 0 )
  {
    v7 |= 0x8000u;
    WORD1(v15) = v7;
  }
  if ( (v8 & 0x20) != 0 )
  {
    LOWORD(v15) = *(_WORD *)(a1 + 2);
    v10 = ((v8 & 1) << 15) | 0x10E7 | v7;
LABEL_15:
    WORD1(v15) = v10;
    goto LABEL_16;
  }
  if ( (v8 & 2) != 0 )
  {
    v10 = v7 | 0x100;
    goto LABEL_15;
  }
  if ( (unsigned __int8)(a3 - 96) <= 9u || (_BYTE)a3 == 110 )
  {
LABEL_29:
    v10 = v7 | 0x800;
    goto LABEL_15;
  }
  for ( i = 0; ausNumPadCvt[i]; ++i )
  {
    if ( (_BYTE)a3 == LOBYTE(ausNumPadCvt[i]) )
      goto LABEL_29;
  }
LABEL_16:
  v11 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  LOBYTE(a3) = 1;
  *(_QWORD *)&v17 = *(_QWORD *)a1;
  HIDWORD(v15) = v11;
  DWORD2(v17) = 0;
  return xxxProcessKeyEvent((unsigned int)&v15, 0, a3, 0, (__int64)a2, v3);
}
