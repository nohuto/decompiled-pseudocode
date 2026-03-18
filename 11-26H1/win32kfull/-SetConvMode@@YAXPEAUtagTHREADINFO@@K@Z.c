/*
 * XREFs of ?SetConvMode@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1401F2A6C
 * Callers:
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401F28A0 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetConvMode(struct tagTHREADINFO *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // r9
  char v6; // al
  __int64 v7; // r8
  char v8; // al
  char v9; // al
  __int64 v10; // r9
  char v11; // al
  char v12; // al
  __int64 v13; // r9
  char v14; // al
  char v15; // al
  __int64 v16; // r9
  char v17; // al
  char v18; // al

  v2 = *((_QWORD *)a1 + 59);
  if ( v2 )
  {
    if ( (*(_WORD *)(v2 + 40) & 0x3FF) == 0x11 )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~1u;
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~2u;
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~4u;
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~8u;
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~0x10u;
      *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~0x20u;
      v3 = *((_QWORD *)a1 + 58);
      if ( (a2 & 1) != 0 )
      {
        v9 = *(_BYTE *)(v3 + 340);
        if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v3 + 340) = v9 | 4;
          *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) |= 8u;
        }
        else
        {
          *(_BYTE *)(v3 + 340) = v9 | 0x10;
          *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) |= 0x20u;
        }
      }
      else
      {
        *(_BYTE *)(v3 + 340) |= 1u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) |= 2u;
      }
      v4 = *((_QWORD *)a1 + 58);
      if ( (a2 & 8) != 0 )
      {
        *(_BYTE *)(v4 + 341) |= 1u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) |= 2u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v4 + 340) |= 0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 340LL) |= 0x80u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~1u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~2u;
      }
      v5 = *((_QWORD *)a1 + 58);
      v6 = *(_BYTE *)(v5 + 341);
      if ( (a2 & 0x10) != 0 )
      {
        *(_BYTE *)(v5 + 341) = v6 | 4;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) |= 8u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~0x20u;
      }
      else
      {
        *(_BYTE *)(v5 + 341) = v6 | 0x10;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) |= 0x20u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~4u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 341LL) &= ~8u;
      }
      v7 = *((_QWORD *)a1 + 58);
      v8 = *(_BYTE *)(v7 + 342);
      if ( (a2 & 0x20) != 0 )
      {
        *(_BYTE *)(v7 + 342) = v8 | 0x10;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) |= 0x20u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) &= ~0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v7 + 342) = v8 | 0x40;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) |= 0x80u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) &= ~0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 58) + 342LL) &= ~0x20u;
      }
    }
    else if ( (*(_WORD *)(v2 + 40) & 0x3FF) == 0x12 )
    {
      v10 = *((_QWORD *)a1 + 58);
      v11 = *(_BYTE *)(v10 + 285);
      if ( (a2 & 1) != 0 )
        v12 = v11 | 8;
      else
        v12 = v11 & 0xF7;
      *(_BYTE *)(v10 + 285) = v12;
      v13 = *((_QWORD *)a1 + 58);
      v14 = *(_BYTE *)(v13 + 285);
      if ( (a2 & 8) != 0 )
        v15 = v14 | 0x80;
      else
        v15 = v14 & 0x7F;
      *(_BYTE *)(v13 + 285) = v15;
      v16 = *((_QWORD *)a1 + 58);
      v17 = *(_BYTE *)(v16 + 286);
      if ( (a2 & 0x40) != 0 )
        v18 = v17 | 8;
      else
        v18 = v17 & 0xF7;
      *(_BYTE *)(v16 + 286) = v18;
    }
  }
}
