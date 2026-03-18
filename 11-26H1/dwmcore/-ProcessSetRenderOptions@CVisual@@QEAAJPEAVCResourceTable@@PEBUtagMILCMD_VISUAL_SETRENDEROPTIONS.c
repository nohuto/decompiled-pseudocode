/*
 * XREFs of ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x1801AC608
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetRenderOptions(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_SETRENDEROPTIONS *a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // eax
  int v5; // edx
  int v6; // r9d
  int v7; // r10d
  int v8; // eax
  int v9; // edx
  int v10; // r9d
  int v11; // eax
  int v13; // edx
  int v14; // edx
  int v15; // r9d
  int v16; // r9d
  int v17; // r9d

  v3 = *((_DWORD *)this + 24) & 0xC07FFFFF;
  *((_DWORD *)this + 24) = v3;
  v4 = v3;
  if ( (*((_BYTE *)a3 + 8) & 2) != 0 )
  {
    v13 = *((_DWORD *)a3 + 3);
    if ( v13 != -1 )
    {
      v4 = (v13 << 19) ^ (v3 ^ (v13 << 19)) & 0xFF87FFFF | 0x1000000;
      *((_DWORD *)this + 24) = v4;
    }
  }
  v5 = v4;
  if ( (*((_BYTE *)a3 + 8) & 4) != 0 )
  {
    v6 = *((_DWORD *)a3 + 4);
    if ( v6 != -1 )
    {
      v5 = v4 | 0x2000000;
      *((_DWORD *)this + 49) = v6;
      *((_DWORD *)this + 24) = v4 | 0x2000000;
    }
  }
  v7 = 0;
  v8 = v5;
  if ( (*((_BYTE *)a3 + 8) & 1) != 0 )
  {
    v16 = *((_DWORD *)a3 + 6);
    if ( v16 )
    {
      v8 = (v16 << 30) | v5 & 0x3F7FFFFF | 0x800000;
      *((_DWORD *)this + 24) = v8;
    }
  }
  v9 = v8;
  if ( (*((_BYTE *)a3 + 8) & 8) != 0 )
  {
    v15 = *((_DWORD *)a3 + 7);
    if ( v15 != 5 )
    {
      v9 = v8 | 0x4000000;
      *((_DWORD *)this + 50) = v15;
      *((_DWORD *)this + 24) = v8 | 0x4000000;
    }
  }
  v10 = v9;
  if ( (*((_BYTE *)a3 + 8) & 0x10) != 0 && *((_DWORD *)a3 + 8) != -1 )
  {
    if ( *((_DWORD *)a3 + 8) != -2 )
      v7 = *((_DWORD *)a3 + 8);
    v10 = v9 | 0x8000000;
    *((_DWORD *)this + 24) = v9 | 0x8000000;
    *((_DWORD *)this + 51) = v7;
  }
  v11 = v10;
  if ( (*((_BYTE *)a3 + 8) & 0x20) != 0 )
  {
    v14 = *((_DWORD *)a3 + 9);
    if ( v14 != -1 )
    {
      v11 = v10 | 0x10000000;
      *((_DWORD *)this + 52) = v14;
      *((_DWORD *)this + 24) = v10 | 0x10000000;
    }
  }
  if ( (*((_BYTE *)a3 + 8) & 0x40) != 0 )
  {
    v17 = *((_DWORD *)a3 + 10);
    if ( v17 != -1 )
    {
      *((_DWORD *)this + 53) = v17;
      *((_DWORD *)this + 24) = v11 | 0x20000000;
    }
  }
  CVisual::PropagateFlags((__int64)this, 5u);
  return 0LL;
}
