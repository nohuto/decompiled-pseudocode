/*
 * XREFs of ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x180014490
 * Callers:
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180014300 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180033740 (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 * Callees:
 *     floorf @ 0x18008EED0 (floorf.c)
 */

void __fastcall CWindowList::GetPhysicalPtFromLogical(
        CWindowList *this,
        struct CWindowData *a2,
        struct tagRECT *a3,
        int *a4,
        int *a5)
{
  LONG left; // edi
  LONG top; // esi
  int v9; // eax
  float v10; // xmm7_4
  int v11; // eax
  int *v12; // rbx
  float v13; // xmm7_4
  int v14; // ebx
  float v15; // xmm0_4

  left = a3->left;
  top = a3->top;
  if ( (*((_BYTE *)a2 + 372) & 1) == 0 )
  {
    v9 = *((_DWORD *)a2 + 88);
    if ( (double)v9 != 0.0 || (double)*((int *)a2 + 89) != 0.0 )
    {
      left -= (int)floorf((float)v9 + 0.5);
      top -= (int)floorf((float)*((int *)a2 + 89) + 0.5);
    }
    v10 = *((float *)a2 + 83);
    if ( v10 != 1.0 )
    {
      left = (int)floorf((float)((float)left * v10) + 0.5);
      top = (int)floorf((float)((float)top * v10) + 0.5);
    }
    v11 = *((_DWORD *)a2 + 90);
    if ( (double)v11 == 0.0 )
    {
      v12 = (int *)((char *)a2 + 364);
      if ( (double)*v12 == 0.0 )
      {
LABEL_8:
        *a4 = left;
LABEL_9:
        *a5 = top;
        return;
      }
    }
    else
    {
      v12 = (int *)((char *)a2 + 364);
    }
    left += (int)floorf((float)v11 + 0.5);
    top += (int)floorf((float)*v12 + 0.5);
    goto LABEL_8;
  }
  v13 = (float)*((int *)a2 + 86) / (float)*((int *)a2 + 92);
  if ( v13 == 1.0 )
  {
    *a4 = left;
    goto LABEL_9;
  }
  v14 = (int)floorf((float)((float)left * v13) + 0.5);
  v15 = floorf((float)((float)top * v13) + 0.5);
  *a4 = v14;
  *a5 = (int)v15;
}
