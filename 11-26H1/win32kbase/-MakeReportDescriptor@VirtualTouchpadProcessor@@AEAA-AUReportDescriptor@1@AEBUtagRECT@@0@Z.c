/*
 * XREFs of ?MakeReportDescriptor@VirtualTouchpadProcessor@@AEAA?AUReportDescriptor@1@AEBUtagRECT@@0@Z @ 0x140220F74
 * Callers:
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x140220A7C (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall VirtualTouchpadProcessor::MakeReportDescriptor(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // rax
  _WORD *v6; // rsi
  _WORD *v7; // rdi
  __int64 v8; // rcx
  __int128 v10; // [rsp+28h] [rbp-89h]
  __int128 v11; // [rsp+38h] [rbp-79h]
  __int128 v12; // [rsp+48h] [rbp-69h]
  _BYTE v13[50]; // [rsp+58h] [rbp-59h] BYREF
  __int128 v14; // [rsp+98h] [rbp-19h]
  __int128 v15; // [rsp+A8h] [rbp-9h]
  __int128 v16; // [rsp+B8h] [rbp+7h]
  __int128 v17; // [rsp+D8h] [rbp+27h]

  v13[8] = BYTE2(*a3);
  v13[13] = BYTE2(a3[2]);
  v13[20] = BYTE2(*(_DWORD *)(a4 + 8));
  *(_WORD *)&v13[6] = *a3;
  *(_WORD *)&v13[11] = a3[2];
  *(_WORD *)&v13[18] = *(_DWORD *)(a4 + 8);
  *(_WORD *)&v13[31] = a3[1];
  v13[33] = BYTE2(a3[1]);
  v13[34] = HIBYTE(a3[1]);
  *(_QWORD *)&v14 = 0x18501A105090D05LL;
  *((_QWORD *)&v14 + 1) = 0xFFFF470000FFFF27uLL;
  *(_QWORD *)&v15 = 0x951001660C550000uLL;
  *((_QWORD *)&v15 + 1) = 0x8156090D05107501uLL;
  *(_QWORD *)&v16 = 0x9500450525540902uLL;
  *((_QWORD *)&v16 + 1) = 0x909050281107501LL;
  *(_QWORD *)&v10 = 0x150D0502A12209LL;
  *((_QWORD *)&v10 + 1) = 0x55004500350125LL;
  *(_QWORD *)&v11 = 0x295470942090065LL;
  *((_QWORD *)&v11 + 1) = 0x675019502810175LL;
  *(_QWORD *)&v12 = 0xFF27107501950381uLL;
  *((_QWORD *)&v12 + 1) = 0x5028151090000FFLL;
  *(_DWORD *)v13 = 1963037953;
  *(_WORD *)&v13[4] = 5920;
  v13[9] = HIBYTE(*a3);
  v13[10] = 39;
  v13[14] = HIBYTE(a3[2]);
  strcpy(&v13[15], "5");
  v13[17] = 71;
  v13[21] = HIBYTE(*(_DWORD *)(a4 + 8));
  *(_QWORD *)&v13[22] = 0x281300911650D55LL;
  v13[30] = 23;
  v13[35] = 39;
  *(_WORD *)&v13[36] = a3[3];
  *(_WORD *)&v13[41] = *(_DWORD *)(a4 + 12);
  v13[38] = BYTE2(a3[3]);
  v13[44] = HIBYTE(*(_DWORD *)(a4 + 12));
  v13[39] = HIBYTE(a3[3]);
  v13[40] = 71;
  v13[43] = BYTE2(*(_DWORD *)(a4 + 12));
  *(_DWORD *)&v13[45] = 42021129;
  v13[49] = -64;
  *(_QWORD *)&v17 = 0x15550902850D05LL;
  *((_QWORD *)&v17 + 1) = 0x55014500350525LL;
  v5 = Win32AllocPoolZInitImpl(256LL, 0x240uLL, 0x70747655u);
  if ( v5 )
  {
    v6 = (_WORD *)(v5 + 61);
    v7 = (_WORD *)(v5 + 159);
    *(_OWORD *)v5 = v14;
    *(_OWORD *)(v5 + 16) = v15;
    *(_OWORD *)(v5 + 32) = v16;
    *(_QWORD *)(v5 + 48) = 0x8101950175012501uLL;
    *(_DWORD *)(v5 + 56) = -2130209534;
    v8 = 196LL;
    *(_BYTE *)(v5 + 60) = 3;
    *(_OWORD *)(v5 + 61) = v10;
    *(_OWORD *)(v5 + 77) = v11;
    *(_OWORD *)(v5 + 93) = v12;
    *(_OWORD *)(v5 + 109) = *(_OWORD *)v13;
    *(_OWORD *)(v5 + 125) = *(_OWORD *)&v13[16];
    *(_OWORD *)(v5 + 141) = *(_OWORD *)&v13[32];
    *(_WORD *)(v5 + 157) = *(_WORD *)&v13[48];
    while ( v8 )
    {
      *v7++ = *v6++;
      --v8;
    }
    *(_OWORD *)(v5 + 551) = v17;
    *(_QWORD *)(v5 + 567) = 0x2B1087501950065LL;
    *(_BYTE *)(v5 + 575) = -64;
  }
  *(_QWORD *)a2 = v5;
  *(_WORD *)(a2 + 8) = 576;
  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  return a2;
}
