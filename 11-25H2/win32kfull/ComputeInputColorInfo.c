/*
 * XREFs of ComputeInputColorInfo @ 0x14013C9C4
 * Callers:
 *     SetupAAHeader @ 0x14013BB0C (SetupAAHeader.c)
 *     GetDstBFInfo @ 0x1402F4694 (GetDstBFInfo.c)
 * Callees:
 *     <none>
 */

char __fastcall ComputeInputColorInfo(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, __int64 a5)
{
  _BYTE *v6; // rbx
  int v7; // r9d
  __int64 (__fastcall *v8)(); // rax
  __int64 v9; // rdi
  __int64 v10; // r11
  __int64 v11; // rbp
  _BYTE *v12; // r8
  __int64 (__fastcall *v13)(); // rax
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  __int64 v18; // r10
  __int64 v19; // r11
  int v20; // r10d
  int v21; // r9d
  char v22; // cl
  char v23; // r9
  char v24; // cl
  int v25; // ecx
  bool v26; // sf
  int v27; // edx
  __int64 v28; // rcx

  v6 = (_BYTE *)(a5 + 64);
  if ( a1 )
  {
    v7 = *(unsigned __int16 *)(a5 + 2);
    if ( *(_WORD *)(a5 + 2) )
    {
      v9 = SrcOrderTable[4 * (unsigned int)a3 + 1];
      v10 = SrcOrderTable[4 * (unsigned int)a3 + 2];
      v11 = SrcOrderTable[4 * (unsigned int)a3 + 3];
      v12 = *(_BYTE **)(a5 + 80);
      if ( *(_BYTE *)(a5 + 65) == 1 )
      {
        v13 = Input1BPPToAA24;
      }
      else
      {
        if ( *(_BYTE *)(a5 + 65) != 2 )
        {
          if ( *(_BYTE *)(a5 + 65) == 3 || *(unsigned __int8 *)(a5 + 65) == 254 )
          {
            v13 = Input8BPPToAA24;
            goto LABEL_13;
          }
          if ( *(unsigned __int8 *)(a5 + 65) != 255 )
          {
LABEL_14:
            v14 = v10;
            v15 = (unsigned int)a2;
            v16 = v9 - v14;
            v17 = (_BYTE *)(v14 + a1);
            v18 = v11 - v14;
            do
            {
              v12[2] = v17[v16];
              v12[1] = *v17;
              LOBYTE(v8) = v17[v18];
              v17 += v15;
              *v12 = (_BYTE)v8;
              v12 += 4;
              --v7;
            }
            while ( v7 );
            return (char)v8;
          }
        }
        v13 = Input4BPPToAA24;
      }
LABEL_13:
      *(_QWORD *)(a5 + 16) = v13;
      goto LABEL_14;
    }
  }
  *(_QWORD *)(a5 + 16) = InputAABFDATAToAA24;
  if ( (*a4 & 1) != 0 )
  {
    *v6 |= 1u;
    *(_BYTE *)(a5 + 66) = a4[21];
    *(_BYTE *)(a5 + 67) = a4[22];
    LOBYTE(v8) = a4[23];
    *(_BYTE *)(a5 + 68) = (_BYTE)v8;
  }
  else
  {
    v8 = (__int64 (__fastcall *)())(a4 + 8);
    a3 = v6 - a4;
    v19 = 3LL;
    do
    {
      v20 = *((unsigned __int8 *)v8 - 4);
      v8 = (__int64 (__fastcall *)())((char *)v8 - 1);
      a2 = 0LL;
      v21 = *(unsigned __int8 *)v8;
      if ( (unsigned __int8)v21 < 8u )
      {
        v25 = 8 - v21;
        v23 = -1 << (8 - v21);
        v26 = v20 - v25 < 0;
        v27 = v20 - v25;
        v24 = v20 - v25;
        if ( v26 )
        {
          a2 = (unsigned int)-v27;
          v24 = 0;
        }
        else
        {
          a2 = 0LL;
        }
      }
      else
      {
        v22 = v21 - 8;
        v23 = -1;
        v24 = v20 + v22;
      }
      *((_BYTE *)v8 + a3 - 3) = v23;
      *((_BYTE *)v8 + a3) = a2;
      *((_BYTE *)v8 + a3 + 3) = v24;
      --v19;
    }
    while ( v19 );
  }
  if ( a4[1] == 4 )
    goto LABEL_26;
  if ( a4[1] != 5 )
  {
    if ( a4[1] == 6 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v28 = *(_QWORD *)(W32GetSessionState((unsigned int)(unsigned __int8)a4[1] - 6, a2, a3) + 112);
        LOBYTE(v8) = a4[20];
        if ( (_BYTE)v8 )
        {
          if ( (_BYTE)v8 == 4 )
            *v6 |= 4u;
        }
        else
        {
          *v6 |= 8u;
        }
        if ( !*(_DWORD *)(v28 + 80) )
        {
          v8 = InputPreMul32BPPToAA24;
          *(_QWORD *)(a5 + 16) = InputPreMul32BPPToAA24;
        }
      }
      *(_BYTE *)(a5 + 75) = 4;
      return (char)v8;
    }
    if ( (unsigned int)(unsigned __int8)a4[1] - 252 > 1 )
      return (char)v8;
LABEL_26:
    *(_BYTE *)(a5 + 75) = 2;
    return (char)v8;
  }
  if ( a4[20] == 4 )
    *v6 |= 2u;
  *(_BYTE *)(a5 + 75) = 3;
  return (char)v8;
}
