/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x140338058
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140337F0C (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ @ 0x14033811C (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@QEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a4)
{
  int v6; // ebx
  struct _LUID v8; // [rsp+20h] [rbp-40h] BYREF
  int v9; // [rsp+28h] [rbp-38h]
  unsigned int v10; // [rsp+2Ch] [rbp-34h]
  int v11; // [rsp+30h] [rbp-30h]
  int v12; // [rsp+34h] [rbp-2Ch]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+3Ch] [rbp-24h]
  int v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+44h] [rbp-1Ch]
  __int16 v17; // [rsp+48h] [rbp-18h]
  char v18; // [rsp+4Ah] [rbp-16h]
  int v19; // [rsp+4Ch] [rbp-14h]
  __int16 v20; // [rsp+50h] [rbp-10h]

  v13 = 0;
  v15 = 0;
  v9 = -1;
  v8 = 0LL;
  v10 = -1;
  v14 = -1;
  v11 = -2;
  v12 = -2;
  v16 = 1;
  v17 = 0;
  v18 = 0;
  v19 = 4;
  v20 = 256;
  v6 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v8);
  if ( v6 >= 0 )
  {
    *a1 = v8;
    *a2 = v10;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 287;
  }
  return (unsigned int)v6;
}
