/*
 * XREFs of MiGetPageToTrade @ 0x140294740
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiSearchChannelTable @ 0x1402ADCA8 (MiSearchChannelTable.c)
 *     MiUnlinkPageChainHead @ 0x140367C90 (MiUnlinkPageChainHead.c)
 *     MiInitializePageChainPacket @ 0x140412300 (MiInitializePageChainPacket.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiGetPageToTrade(__int64 a1)
{
  int v2; // r14d
  int v3; // ebp
  char v4; // di
  char v5; // cl
  unsigned int v6; // ebx
  unsigned int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 Page; // rax
  __int64 v11; // r8
  __int64 v12; // r8
  int v14; // eax
  _QWORD v15[11]; // [rsp+70h] [rbp-78h] BYREF
  _BYTE v16[16]; // [rsp+C8h] [rbp-20h] BYREF
  __int64 v17; // [rsp+D8h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 8);
  v3 = (*(_DWORD *)(*(_QWORD *)(a1 + 256) + 32LL) >> 22) & 3;
  if ( (v2 & 0x4000) != 0 )
  {
    v6 = 12289;
    v7 = *(_DWORD *)(a1 + 152) ^ (unsigned __int8)(*(_BYTE *)(a1 + 240) ^ *(_DWORD *)(a1 + 152));
  }
  else
  {
    v4 = MiPageToNode(*(_QWORD *)(a1 + 240));
    if ( qword_140E2D868 )
      v5 = *(_BYTE *)(MiSearchChannelTable(*(_QWORD *)(a1 + 240)) + 12);
    else
      v5 = 0;
    v6 = (v2 & 0x1000000 | 0x200u) >> 9;
    v7 = (unsigned __int8)*(_DWORD *)(a1 + 240) | ((v5 & 1 | (2 * ((v3 << 9) | v4 & 0x3F | 0x180))) << 8);
    if ( (v2 & 0x2000000) != 0 )
      v6 |= 0x800u;
  }
  v8 = *(__int64 **)(a1 + 144);
  if ( v8 )
  {
    v9 = *v8;
    if ( *v8 != -1 )
    {
      *(_DWORD *)a1 |= 4u;
      v11 = 3 * v9;
      *(_QWORD *)(a1 + 248) = v9;
      goto LABEL_11;
    }
  }
  if ( *(_QWORD *)(a1 + 128) == -1LL )
  {
    Page = MiGetPage(*(_QWORD *)(a1 + 216), v7, v6);
    *(_QWORD *)(a1 + 248) = Page;
    if ( Page != -1 )
    {
      v11 = 3 * Page;
LABEL_11:
      v12 = 16 * v11 - 0x220000000000LL;
LABEL_12:
      *(_QWORD *)(a1 + 264) = v12;
      return 0LL;
    }
    _InterlockedIncrement(&dword_140EF9034);
    return 1LL;
  }
  else
  {
    memset_0(v15, 0, 0x70uLL);
    v14 = MiPageToNode(*(_QWORD *)(a1 + 240));
    MiInitializePageChainPacket(
      *(_QWORD *)(a1 + 216),
      *(_QWORD *)(a1 + 200),
      *(_BYTE *)(a1 + 45) & 1,
      *(_QWORD *)(a1 + 176),
      v14 + 1,
      v3,
      v6,
      *(_QWORD *)(a1 + 128),
      0LL,
      9,
      0LL,
      1LL,
      (__int64)v15);
    MiGetPageChain(v15);
    if ( v17 )
    {
      v12 = MiUnlinkPageChainHead(v16);
      *(_QWORD *)(a1 + 248) = (v12 + 0x220000000000LL) / 48;
      goto LABEL_12;
    }
    _InterlockedIncrement(&dword_140EF9038);
    return 1LL;
  }
}
