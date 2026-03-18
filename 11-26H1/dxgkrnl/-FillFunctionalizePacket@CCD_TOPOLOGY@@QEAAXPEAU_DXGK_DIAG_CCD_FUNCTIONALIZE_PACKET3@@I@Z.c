/*
 * XREFs of ?FillFunctionalizePacket@CCD_TOPOLOGY@@QEAAXPEAU_DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3@@I@Z @ 0x140319C64
 * Callers:
 *     ?LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z @ 0x140319BB8 (-LogFunctionalizePacket@CCD_TOPOLOGY@@QEAAJH@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

void __fastcall CCD_TOPOLOGY::FillFunctionalizePacket(
        CCD_TOPOLOGY *this,
        struct _DXGK_DIAG_CCD_FUNCTIONALIZE_PACKET3 *a2,
        unsigned int a3)
{
  unsigned int v6; // r9d
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx

  memset(a2, 0, a3);
  *(_DWORD *)a2 = 36;
  v6 = 0;
  *((_DWORD *)a2 + 10) = 0;
  *((_QWORD *)a2 + 4) = 0LL;
  *((_DWORD *)a2 + 1) = a3;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_OWORD *)a2 + 1) = 0LL;
  *((_DWORD *)a2 + 12) = *(unsigned __int16 *)(*((_QWORD *)this + 8) + 20LL);
  v7 = *((_QWORD *)this + 8);
  if ( *(_WORD *)(v7 + 20) )
  {
    do
    {
      v8 = v6++;
      v9 = 296 * v8;
      v8 <<= 6;
      *(_DWORD *)((char *)a2 + v8 + 56) = *(_DWORD *)(v9 + v7 + 80);
      *(_DWORD *)((char *)a2 + v8 + 60) = *(_DWORD *)(v9 + v7 + 84);
      *(_QWORD *)((char *)a2 + v8 + 72) = *(_QWORD *)(v9 + v7 + 56);
      *(_QWORD *)((char *)a2 + v8 + 64) = *(_QWORD *)(v9 + v7 + 72);
      *(_DWORD *)((char *)a2 + v8 + 104) = *(_DWORD *)(v9 + v7 + 196);
      *(_QWORD *)((char *)a2 + v8 + 80) = *(_QWORD *)(v9 + v7 + 208);
      *(_OWORD *)((char *)a2 + v8 + 88) = *(_OWORD *)(v9 + v7 + 224);
      *(_DWORD *)((char *)a2 + v8 + 108) = *(_DWORD *)(v9 + v7 + 316);
      *(_DWORD *)((char *)a2 + v8 + 112) = *(_DWORD *)(v9 + v7 + 260);
      *(_DWORD *)((char *)a2 + v8 + 116) = *(_DWORD *)(v9 + v7 + 264);
      v7 = *((_QWORD *)this + 8);
    }
    while ( v6 < *(unsigned __int16 *)(v7 + 20) );
  }
}
