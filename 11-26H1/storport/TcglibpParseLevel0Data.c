/*
 * XREFs of TcglibpParseLevel0Data @ 0x140134FC4
 * Callers:
 *     TcglibpGetCapabilities @ 0x1401349AC (TcglibpGetCapabilities.c)
 * Callees:
 *     TcglibReverseBytes @ 0x1401312C4 (TcglibReverseBytes.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall TcglibpParseLevel0Data(__int64 a1, int *a2, unsigned int a3, _DWORD *a4)
{
  char v8; // r15
  unsigned int v9; // r14d
  int v10; // edx
  unsigned int v11; // esi
  _DWORD *v12; // rbx
  __int16 v13; // dx
  __int64 v14; // r12
  __int16 v15; // r14
  bool v16; // al
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  bool v20; // al
  unsigned int v22; // [rsp+60h] [rbp+40h] BYREF

  v8 = 0;
  memset_0(a4, 0, 0xA8uLL);
  if ( a3 > 0x30 )
  {
    v9 = *a2;
    v22 = *a2;
    TcglibReverseBytes((char *)&v22, 4u);
    if ( a3 < v22 + 4 || (v22 = v9, TcglibReverseBytes((char *)&v22, 4u), a3 = v10 + v22, v10 + v22 > 0x30) )
    {
      v11 = a3 - 48;
      v12 = a2 + 12;
      while ( v11 >= 4 )
      {
        LOWORD(v22) = *(_WORD *)v12;
        TcglibReverseBytes((char *)&v22, 2u);
        v13 = *((unsigned __int8 *)v12 + 3);
        v14 = (unsigned __int16)(v13 + 4);
        if ( (unsigned int)v14 > v11 )
          return v8 == 0 ? 0xC00000BB : 0;
        v15 = v22;
        if ( (_WORD)v22 == 2 && (_BYTE)v13 == 12 )
        {
          *((_BYTE *)a4 + 52) = v12[1] & 1;
          *((_BYTE *)a4 + 53) = (v12[1] & 2) != 0;
          *((_BYTE *)a4 + 54) = (v12[1] & 4) != 0;
          *((_BYTE *)a4 + 55) = (v12[1] & 8) != 0;
          *((_BYTE *)a4 + 56) = (v12[1] & 0x10) != 0;
          *((_BYTE *)a4 + 57) = (v12[1] & 0x20) != 0;
        }
        else
        {
          if ( (_WORD)v22 != 512 )
            goto LABEL_13;
          if ( (_BYTE)v13 != 16 )
            goto LABEL_16;
          if ( *a4 == 512 )
          {
LABEL_13:
            if ( (_WORD)v22 != 515 || (_BYTE)v13 != 16 )
            {
LABEL_16:
              if ( (_WORD)v22 == 513 && (_BYTE)v13 == 12 )
              {
                v22 = v12[1];
                TcglibReverseBytes((char *)&v22, 4u);
                a4[32] = v22;
                *((_BYTE *)a4 + 132) = v12[2] & 1;
                *((_BYTE *)a4 + 133) = (v12[2] & 2) != 0;
                v16 = (v12[2] & 4) != 0;
                *((_BYTE *)a4 + 121) = 1;
                *((_BYTE *)a4 + 134) = v16;
              }
              else if ( (_WORD)v22 == 514 && (_BYTE)v13 == 12 )
              {
                LOWORD(v22) = *((_WORD *)v12 + 3);
                TcglibReverseBytes((char *)&v22, 2u);
                v17 = (unsigned __int16)v22;
                *((_WORD *)a4 + 68) = v22;
                *(_DWORD *)(a1 + 36) = v17;
                v22 = v12[2];
                TcglibReverseBytes((char *)&v22, 4u);
                v18 = v22;
                v19 = *((unsigned __int16 *)a4 + 68);
                a4[35] = v22;
                *(_DWORD *)(a1 + 40) = v18 / v19;
                v22 = v12[3];
                TcglibReverseBytes((char *)&v22, 4u);
                a4[36] = v22;
              }
              else if ( (_WORD)v22 == 1026 )
              {
                if ( (_BYTE)v13 == 12 )
                {
                  *((_BYTE *)a4 + 148) = 1;
                  *((_BYTE *)a4 + 149) = (v12[1] & 2) != 0;
                  *((_BYTE *)a4 + 150) = (v12[1] & 1) == 0;
                  *((_BYTE *)a4 + 151) = *((_BYTE *)v12 + 5) & 1;
                }
              }
              else if ( (_WORD)v22 == 1027 && (_BYTE)v13 == 16 )
              {
                *((_BYTE *)a4 + 152) = 1;
                v20 = (*((_BYTE *)v12 + 2) & 0xF0u) >= 0x20 && (v12[1] & 0x20) != 0;
                *((_BYTE *)a4 + 153) = v20;
                *((_BYTE *)a4 + 154) = *((_BYTE *)v12 + 4) >> 7;
                *((_BYTE *)a4 + 155) = (v12[1] & 0x40) != 0;
                v22 = v12[2];
                TcglibReverseBytes((char *)&v22, 4u);
                a4[39] = v22;
                v22 = v12[3];
                TcglibReverseBytes((char *)&v22, 4u);
                a4[40] = v22;
                v22 = v12[4];
                TcglibReverseBytes((char *)&v22, 4u);
                a4[41] = v22;
              }
              goto LABEL_31;
            }
          }
          *a4 = 512;
          *(_DWORD *)(a1 + 32) = 512;
          v8 = 1;
          LOWORD(v22) = *((_WORD *)v12 + 2);
          TcglibReverseBytes((char *)&v22, 2u);
          *(_WORD *)(a1 + 28) = v22;
          *((_BYTE *)a4 + 120) = (v12[2] & 1) == 0;
          if ( v15 == 515 )
          {
            LOWORD(v22) = *(_WORD *)((char *)v12 + 9);
            TcglibReverseBytes((char *)&v22, 2u);
            *((_WORD *)a4 + 61) = v22;
            LOWORD(v22) = *(_WORD *)((char *)v12 + 11);
            TcglibReverseBytes((char *)&v22, 2u);
            *((_WORD *)a4 + 62) = v22;
            *((_BYTE *)a4 + 126) = *((_BYTE *)v12 + 13);
            *((_BYTE *)a4 + 127) = *((_BYTE *)v12 + 14);
          }
        }
LABEL_31:
        v11 -= v14;
        v12 = (_DWORD *)((char *)v12 + v14);
      }
    }
  }
  return v8 == 0 ? 0xC00000BB : 0;
}
