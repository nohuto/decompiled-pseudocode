/*
 * XREFs of ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x1400337CC
 * Callers:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003366C (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall ulIndexedGetNearestFromPalentry(struct PALETTE *a1, struct tagPALETTEENTRY a2)
{
  _DWORD *v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // r8
  _DWORD *v7; // r10
  __int64 v8; // r8
  unsigned __int8 *v9; // rbx
  __int64 SessionState; // rax
  unsigned __int8 *v11; // rdx
  unsigned __int8 *v12; // r10
  unsigned int v13; // r9d
  unsigned __int8 *v14; // r11
  unsigned __int8 *v15; // r14
  unsigned int v16; // r8d
  __int64 v17; // rbx
  struct PALETTE *v19; // [rsp+50h] [rbp+8h] BYREF
  struct tagPALETTEENTRY v20; // [rsp+58h] [rbp+10h]

  v20 = a2;
  if ( a2.peFlags != 2 )
  {
    v4 = (_DWORD *)*((_QWORD *)a1 + 14);
    v5 = *((unsigned int *)a1 + 7);
    v6 = v4;
    v7 = &v4[v5];
    while ( v6 != v7 )
    {
      v5 = *v6 & 0xFFFFFF;
      if ( (_DWORD)v5 == (*(_DWORD *)&a2 & 0xFFFFFF) )
      {
        v8 = v6 - v4;
        goto LABEL_7;
      }
      ++v6;
    }
    goto LABEL_8;
  }
  v5 = *((unsigned int *)a1 + 7);
  LODWORD(v8) = a2.peRed;
  if ( a2.peRed >= (unsigned int)v5 )
    LODWORD(v8) = a2.peRed % (unsigned int)v5;
LABEL_7:
  if ( (_DWORD)v8 == -1 )
  {
LABEL_8:
    v19 = a1;
    if ( *((_DWORD *)a1 + 7) )
    {
      v9 = 0LL;
      SessionState = W32GetSessionState(v5);
      v11 = (unsigned __int8 *)&unk_1402660D0;
      if ( v19 != *(struct PALETTE **)(*(_QWORD *)(SessionState + 88) + 3872LL) )
        v11 = (unsigned __int8 *)*((_QWORD *)v19 + 14);
      v12 = v11;
      v13 = 196608;
      v14 = &v11[4 * *((unsigned int *)v19 + 7)];
      do
      {
        v15 = v9;
        v16 = *((unsigned __int16 *)&unk_140265CD0 + *v11 - (unsigned __int64)a2.peRed + 255)
            + *((unsigned __int16 *)&unk_140265CD0 + v11[2] - (unsigned __int64)v20.peBlue + 255)
            + *((unsigned __int16 *)&unk_140265CD0 + v11[1] - (unsigned __int64)v20.peGreen + 255);
        if ( v16 < v13 )
        {
          v9 = v11;
          if ( !v16 )
            break;
        }
        v9 = v11;
        if ( v16 >= v13 )
          v9 = v15;
        v11 += 4;
        if ( v16 >= v13 )
          v16 = v13;
        v13 = v16;
      }
      while ( v11 < v14 );
      v17 = (v9 - v12) >> 2;
    }
    else
    {
      LODWORD(v17) = XEPALOBJ::ulGetMatchFromPalentry((ULONG_PTR *)&v19, a2);
    }
    LODWORD(v8) = v17;
  }
  return (unsigned int)v8;
}
