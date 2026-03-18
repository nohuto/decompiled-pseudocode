/*
 * XREFs of sub_140402B80 @ 0x140402B80
 * Callers:
 *     sub_140402470 @ 0x140402470 (sub_140402470.c)
 *     sub_1404027F0 @ 0x1404027F0 (sub_1404027F0.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140402B80(__int64 a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  char v6; // r10
  _DWORD *v7; // rdx
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // r11d
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  unsigned int v14; // edi
  unsigned int v15; // r9d
  unsigned int v16; // r11d
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // ecx
  unsigned int v22; // r11d
  int v23; // r9d
  int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // r11d
  unsigned int v27; // r9d
  int v28; // eax
  unsigned int v29; // r11d
  unsigned int v30; // ecx
  unsigned int v31; // r9d
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // r9d
  unsigned int v35; // ecx
  unsigned int v36; // r9d
  unsigned int v37; // ecx
  unsigned int v38; // r11d
  int v39; // r9d
  int v40; // eax
  unsigned int v41; // ecx
  unsigned int v42; // r9d
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // r9d
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  unsigned int v53; // ecx
  unsigned int v54; // r9d
  unsigned int v55; // ecx
  unsigned int v56; // r9d
  unsigned int v57; // r9d
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // r9d
  unsigned int v62; // r9d
  unsigned int v63; // ecx
  unsigned int v64; // ecx
  __int64 v65; // [rsp+0h] [rbp-20h]
  __int64 v66; // [rsp+8h] [rbp-18h]

  v6 = a2;
  v7 = (_DWORD *)(a1 + 16LL * a2);
  switch ( v7[2] )
  {
    case 0:
      v35 = v7[4];
      v36 = v7[3];
      v65 = a3;
      v66 = a3;
      return (a4 >> (v35 % 0xF + 1))
           + *((unsigned __int16 *)&v66 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v65 + ((v36 % 3 + (_BYTE)a2 + 1) & 3)));
    case 1:
      v25 = v7[3];
      v26 = v7[4];
      v66 = a3;
      v65 = a3;
      v27 = a4 - *((unsigned __int16 *)&v66 + ((v25 % 3 + (_BYTE)a2 + 1) & 3));
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_14;
    case 2:
      v53 = v7[4];
      v54 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v53 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                      * (a4 ^ *((unsigned __int16 *)&v66 + ((v54 % 3 + (_BYTE)a2 + 1) & 3))));
    case 3:
      v33 = v7[4];
      v34 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v33 % 0xF + 1)
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v34 % 3 + (_BYTE)a2 + 1) & 3)));
    case 4:
      v48 = v7[4];
      v49 = v7[3];
      v66 = a3;
      v65 = a3;
      return *((unsigned __int16 *)&v65 + (v6 & 3))
           * (a4 ^ *((unsigned __int16 *)&v66 + ((v49 % 3 + (_BYTE)a2 + 1) & 3)))
           - __ROR4__(a4, v48 % 0xF + 1);
    case 5:
      v51 = v7[4];
      v52 = v7[3];
      v66 = a3;
      v65 = a3;
      return __ROR4__(a4, v51 % 0xF + 1) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                          * (a4 ^ *((unsigned __int16 *)&v66 + ((v52 % 3 + (_BYTE)a2 + 1) & 3))));
    case 6:
      v16 = v7[5];
      v17 = v7[4];
      v18 = v7[3];
      v66 = a3;
      v65 = a3;
      return (a4 >> (v16 % 0xF + 1))
           + *((unsigned __int16 *)&v65 + (v6 & 3))
           * __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v18 % 3 + (_BYTE)a2 + 1) & 3)), v17 % 7 + 1);
    case 7:
      v46 = v7[4];
      v26 = v7[5];
      v66 = a3;
      v65 = a3;
      v27 = __ROL4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v46 % 7 + 1);
      v28 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_14:
      v13 = v28 * v27;
      v14 = a4 >> (v26 % 0xF + 1);
      goto LABEL_5;
    case 8:
      v29 = v7[5];
      v30 = v7[4];
      v31 = v7[3];
      v66 = a3;
      v65 = a3;
      v15 = (a4 >> (v29 % 0xF + 1)) ^ (*((unsigned __int16 *)&v65 + (v6 & 3))
                                     * __ROL4__(
                                         a4 - *((unsigned __int16 *)&v66 + ((v31 % 3 + (_BYTE)a2 + 1) & 3)),
                                         v30 % 7 + 1));
      goto LABEL_6;
    case 9:
      v55 = v7[4];
      v56 = v7[3];
      v22 = v7[5];
      v66 = a3;
      v65 = a3;
      v23 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v56 % 3 + (_BYTE)a2 + 1) & 3)), v55 % 7 + 1);
      v24 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v22 % 0x1F + 1) + v24 * v23);
    case 0xA:
      v19 = v7[4];
      v20 = v7[3];
      v10 = v7[5];
      v66 = a3;
      v65 = a3;
      v11 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v20 % 3 + (_BYTE)a2 + 1) & 3)), v19 % 7 + 1);
      v12 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_4;
    case 0xB:
      v60 = v7[4];
      v61 = v7[3];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROL4__(a4 ^ *((unsigned __int16 *)&v66 + ((v61 % 3 + (_BYTE)a2 + 1) & 3)), v60 % 7 + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0xC:
      v59 = v7[4];
      v22 = v7[5];
      v66 = a3;
      v65 = a3;
      v23 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v59 % 0x1F + 1);
      v24 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v22 % 0x1F + 1) + v24 * v23);
    case 0xD:
      v64 = v7[4];
      v22 = v7[5];
      v66 = a3;
      v65 = a3;
      v23 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v64 % 0x1F + 1);
      v24 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v22 % 0x1F + 1) + v24 * v23);
    case 0xE:
      v21 = v7[4];
      v22 = v7[5];
      v66 = a3;
      v65 = a3;
      v23 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v21 % 0x1F + 1);
      v24 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v22 % 0x1F + 1) + v24 * v23);
    case 0xF:
      v32 = v7[4];
      v10 = v7[5];
      v66 = a3;
      v65 = a3;
      v11 = __ROR4__(a4 + *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v32 % 0x1F + 1);
      v12 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_4;
    case 0x10:
      v9 = v7[4];
      v10 = v7[5];
      v66 = a3;
      v65 = a3;
      v11 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v9 % 0x1F + 1);
      v12 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_4;
    case 0x11:
      v45 = v7[4];
      v10 = v7[5];
      v66 = a3;
      v65 = a3;
      v11 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v45 % 0x1F + 1);
      v12 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_4;
    case 0x12:
    case 0x17:
      v37 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v37 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0x13:
      v41 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - a4, v41 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
      goto LABEL_20;
    case 0x14:
      v50 = v7[4];
      v38 = v7[5];
      v66 = a3;
      v65 = a3;
      v39 = __ROR4__(*((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ a4, v50 % 0x1F + 1);
      v40 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_20:
      v15 = __ROR4__(a4, v38 % 0x1F + 1) ^ (v40 * v39);
      goto LABEL_6;
    case 0x15:
      v47 = v7[4];
      v22 = v7[5];
      v66 = a3;
      v65 = a3;
      v23 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v47 % 0x1F + 1);
      v24 = *((unsigned __int16 *)&v65 + (v6 & 3));
      return (unsigned int)(__ROR4__(a4, v22 % 0x1F + 1) + v24 * v23);
    case 0x16:
      v44 = v7[4];
      v10 = v7[5];
      v66 = a3;
      v65 = a3;
      v11 = __ROR4__(a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)), v44 % 0x1F + 1);
      v12 = *((unsigned __int16 *)&v65 + (v6 & 3));
LABEL_4:
      v13 = v12 * v11;
      v14 = __ROR4__(a4, v10 % 0x1F + 1);
LABEL_5:
      v15 = v13 - v14;
LABEL_6:
      result = v15;
      break;
    case 0x18:
      v62 = v7[4];
      v63 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) + __ROR4__(~a4, v63 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v62 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x19:
      v42 = v7[4];
      v43 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (__ROR4__(a4, v43 % 0xF + 1) - *((unsigned __int16 *)&v66 + (v6 & 3)))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v42 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1A:
      v57 = v7[4];
      v58 = v7[3];
      v66 = a3;
      v65 = a3;
      result = (*((unsigned __int16 *)&v66 + (v6 & 3)) ^ __ROR4__(a4, v58 % 0xF + 1))
             * (unsigned int)*((unsigned __int16 *)&v65 + ((v57 % 3 + (_BYTE)a2 + 1) & 3));
      break;
    case 0x1B:
      v65 = a3;
      v66 = a3;
      result = *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1)) - (*((_DWORD *)&v66 + (v6 & 1)) ^ a4);
      break;
    case 0x1C:
      v65 = a3;
      v66 = a3;
      result = a4 ^ *((_DWORD *)&v66 + (v6 & 1)) ^ *((_DWORD *)&v65 + (((_BYTE)a2 - 1) & 1));
      break;
    case 0x1D:
      v66 = a3;
      v65 = a3;
      result = *((_DWORD *)&v65 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) ^ (a4 - *((unsigned __int16 *)&v66 + (v6 & 3)));
      break;
    case 0x1E:
      v66 = a3;
      v65 = a3;
      result = a4 - *((_DWORD *)&v66 + (((unsigned __int8)(a2 >> 1) - 1) & 1)) - *((unsigned __int16 *)&v65 + (v6 & 3));
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
