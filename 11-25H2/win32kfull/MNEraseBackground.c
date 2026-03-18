/*
 * XREFs of MNEraseBackground @ 0x1402EAB2C
 * Callers:
 *     xxxMNInvertItem @ 0x14003E628 (xxxMNInvertItem.c)
 *     xxxMenuWindowProc @ 0x140183030 (xxxMenuWindowProc.c)
 * Callees:
 *     MNGetpItemFromIndex @ 0x140042B84 (MNGetpItemFromIndex.c)
 *     GetDPIMetrics @ 0x140042DD8 (GetDPIMetrics.c)
 *     GreSetBrushOrg @ 0x140055A78 (GreSetBrushOrg.c)
 *     GrePatBlt @ 0x14009F4D0 (GrePatBlt.c)
 *     GreGetBrushOrg @ 0x140208D4C (GreGetBrushOrg.c)
 */

__int64 __fastcall MNEraseBackground(HDC a1, __int64 a2, int a3, unsigned int a4, int a5, int a6)
{
  int v10; // r14d
  int v11; // edi
  int v12; // ecx
  unsigned int v13; // edx
  int v14; // r8d
  int v15; // ebx
  __int64 v16; // rbx
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = 0LL;
  v10 = 1;
  GreGetBrushOrg(a1, &v18);
  v11 = 3;
  v12 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 40LL);
  if ( (*(_DWORD *)(a2 + 124) & 3) != 0 )
  {
    v13 = *(_DWORD *)(a2 + 116);
    if ( (v12 & 8) != 0 )
    {
      v11 = 0;
      LODWORD(v18) = 0;
      v14 = -*(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v13) + 68LL);
    }
    else
    {
      v11 = -3;
      LODWORD(v18) = -3;
      v15 = *(_DWORD *)(*(_QWORD *)MNGetpItemFromIndex(a2, v13) + 68LL);
      v14 = -3 - *(_DWORD *)(GetDPIMetrics() + 28) - v15;
    }
    HIDWORD(v18) = v14;
    goto LABEL_8;
  }
  if ( (v12 & 8) != 0 )
  {
    v18 = 0x300000003LL;
    v14 = 3;
LABEL_8:
    GreSetBrushOrg(a1, v11, v14, &v18);
    goto LABEL_10;
  }
  v10 = 0;
LABEL_10:
  v16 = GreSelectBrush(a1, *(_QWORD *)(*(_QWORD *)(a2 + 40) + 24LL));
  GrePatBlt(a1, a3, a4, a5, a6, 15728673);
  if ( v10 )
    GreSetBrushOrg(a1, v18, SHIDWORD(v18), 0LL);
  return GreSelectBrush(a1, v16);
}
