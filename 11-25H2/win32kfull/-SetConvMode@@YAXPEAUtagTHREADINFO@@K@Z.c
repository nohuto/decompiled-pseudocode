/*
 * XREFs of ?SetConvMode@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1401C91A4
 * Callers:
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401C8FD8 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SetConvMode(struct tagTHREADINFO *a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 60);
  if ( v2 )
  {
    if ( (*(_WORD *)(v2 + 40) & 0x3FF) == 0x11 )
    {
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~1u;
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~2u;
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~4u;
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~8u;
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~0x10u;
      *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~0x20u;
      v3 = *((_QWORD *)a1 + 59);
      if ( (a2 & 1) != 0 )
      {
        if ( (a2 & 2) != 0 )
        {
          *(_BYTE *)(v3 + 316) |= 4u;
          *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) |= 8u;
        }
        else
        {
          *(_BYTE *)(v3 + 316) |= 0x10u;
          *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) |= 0x20u;
        }
      }
      else
      {
        *(_BYTE *)(v3 + 316) |= 1u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) |= 2u;
      }
      v4 = *((_QWORD *)a1 + 59);
      if ( (a2 & 8) != 0 )
      {
        *(_BYTE *)(v4 + 317) |= 1u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) |= 2u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v4 + 316) |= 0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 316LL) |= 0x80u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~1u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~2u;
      }
      v5 = *((_QWORD *)a1 + 59);
      if ( (a2 & 0x10) != 0 )
      {
        *(_BYTE *)(v5 + 317) |= 4u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) |= 8u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~0x20u;
      }
      else
      {
        *(_BYTE *)(v5 + 317) |= 0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) |= 0x20u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~4u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 317LL) &= ~8u;
      }
      v6 = *((_QWORD *)a1 + 59);
      if ( (a2 & 0x20) != 0 )
      {
        *(_BYTE *)(v6 + 318) |= 0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) |= 0x20u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) &= ~0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) &= ~0x80u;
      }
      else
      {
        *(_BYTE *)(v6 + 318) |= 0x40u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) |= 0x80u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) &= ~0x10u;
        *(_BYTE *)(*((_QWORD *)a1 + 59) + 318LL) &= ~0x20u;
      }
    }
    else if ( (*(_WORD *)(v2 + 40) & 0x3FF) == 0x12 )
    {
      v7 = (_BYTE *)(*((_QWORD *)a1 + 59) + 261LL);
      if ( (a2 & 1) != 0 )
        *v7 |= 8u;
      else
        *v7 &= ~8u;
      v8 = (_BYTE *)(*((_QWORD *)a1 + 59) + 261LL);
      if ( (a2 & 8) != 0 )
        *v8 |= 0x80u;
      else
        *v8 &= ~0x80u;
      v9 = *((_QWORD *)a1 + 59);
      if ( (a2 & 0x40) != 0 )
        *(_BYTE *)(v9 + 262) |= 8u;
      else
        *(_BYTE *)(v9 + 262) &= ~8u;
    }
  }
}
