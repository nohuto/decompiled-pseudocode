/*
 * XREFs of CmpLightWeightPrepareSetSecDescUoW @ 0x140AE3604
 * Callers:
 *     CmpProcessLightWeightUOW @ 0x1408B4F40 (CmpProcessLightWeightUOW.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     HvpMarkCellDirty @ 0x1408DB070 (HvpMarkCellDirty.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x1408E5828 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140AE3A30 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpLightWeightPrepareSetSecDescUoW(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  ULONG_PTR v3; // rdi
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 Pool2; // rax
  unsigned int *v7; // r12
  _BYTE *v8; // rsi
  __int64 CellFlat; // rax
  __int64 v10; // r13
  int SecurityDescriptorNode; // ebx
  _BYTE *v12; // rax
  __int64 v13; // rdx
  __int64 CellPaged; // rax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned int v20[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v21[2]; // [rsp+48h] [rbp-20h] BYREF
  unsigned int v22[6]; // [rsp+50h] [rbp-18h] BYREF
  int v24; // [rsp+B8h] [rbp+50h]
  int v25; // [rsp+B8h] [rbp+50h]
  int v26; // [rsp+C0h] [rbp+58h]
  unsigned int v27; // [rsp+C8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 48);
  v21[1] = 0;
  v21[0] = -1;
  v20[0] = -1;
  v2 = *(_DWORD *)(v1 + 40);
  v3 = *(_QWORD *)(v1 + 32);
  v4 = 0LL;
  v27 = v2;
  v5 = 0LL;
  v20[1] = 0;
  v22[0] = -1;
  v22[1] = 0;
  Pool2 = ExAllocatePool2(0x100uLL);
  v7 = (unsigned int *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v8 = (_BYTE *)(v3 + 140);
  *(_QWORD *)(Pool2 + 8) = v3;
  *(_DWORD *)Pool2 = -1;
  if ( (*(_BYTE *)(v3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(v3, v2, v21);
  else
    CellFlat = HvpGetCellPaged(v3, v2);
  v10 = CellFlat;
  if ( CellFlat )
  {
    SecurityDescriptorNode = HvpMarkCellDirty(v3, v2, 1);
    v12 = (_BYTE *)(v3 + 140);
    if ( SecurityDescriptorNode < 0 )
    {
LABEL_23:
      v8 = v12;
      goto LABEL_24;
    }
    v13 = *(unsigned int *)(a1 + 96);
    if ( (*v8 & 1) != 0 )
      CellPaged = HvpGetCellFlat(v3, v13, v20);
    else
      CellPaged = HvpGetCellPaged(v3, v13);
    v4 = CellPaged;
    if ( CellPaged )
    {
      v15 = *(_DWORD *)(v10 + 44);
      v16 = (*v8 & 1) != 0 ? HvpGetCellFlat(v3, v15, v22) : HvpGetCellPaged(v3, v15);
      v5 = v16;
      if ( v16 )
      {
        v24 = *(_DWORD *)(v16 + 8);
        v26 = *(_DWORD *)(v16 + 4);
        SecurityDescriptorNode = HvpMarkCellDirty(v3, v15, 1);
        v12 = (_BYTE *)(v3 + 140);
        if ( SecurityDescriptorNode >= 0 )
        {
          SecurityDescriptorNode = HvpMarkCellDirty(v3, v24, 1);
          v12 = (_BYTE *)(v3 + 140);
          if ( SecurityDescriptorNode >= 0 )
          {
            SecurityDescriptorNode = HvpMarkCellDirty(v3, v26, 1);
            v12 = (_BYTE *)(v3 + 140);
            if ( SecurityDescriptorNode >= 0 )
            {
              SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(v3, v27, v10, v27 >> 31, (void *)(v4 + 20), 1, v7);
              v12 = (_BYTE *)(v3 + 140);
              if ( SecurityDescriptorNode >= 0 )
              {
                if ( (*v8 & 1) != 0 )
                  HvpReleaseCellFlat(v3, (__int64)v20);
                else
                  HvpReleaseCellPaged(v3, v20);
                v17 = *v7;
                v18 = (*v8 & 1) != 0 ? HvpGetCellFlat(v3, v17, v20) : HvpGetCellPaged(v3, v17);
                v4 = v18;
                v25 = *(_DWORD *)(v18 + 4);
                SecurityDescriptorNode = HvpMarkCellDirty(v3, *(_DWORD *)(v18 + 8), 1);
                v12 = (_BYTE *)(v3 + 140);
                if ( SecurityDescriptorNode >= 0 )
                {
                  SecurityDescriptorNode = HvpMarkCellDirty(v3, v25, 1);
                  v12 = (_BYTE *)(v3 + 140);
                  if ( SecurityDescriptorNode >= 0 )
                  {
                    SecurityDescriptorNode = 0;
                    *(_QWORD *)(a1 + 104) = v7;
                    goto LABEL_25;
                  }
                }
              }
            }
          }
        }
        goto LABEL_23;
      }
    }
  }
  SecurityDescriptorNode = -1073741670;
LABEL_24:
  CmpLightWeightCleanupSetSecDescUoW(v7);
  if ( v10 )
  {
LABEL_25:
    if ( (*v8 & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)v21);
    else
      HvpReleaseCellPaged(v3, v21);
  }
  if ( v4 )
  {
    if ( (*v8 & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)v20);
    else
      HvpReleaseCellPaged(v3, v20);
  }
  if ( v5 )
  {
    if ( (*v8 & 1) != 0 )
      HvpReleaseCellFlat(v3, (__int64)v22);
    else
      HvpReleaseCellPaged(v3, v22);
  }
  return (unsigned int)SecurityDescriptorNode;
}
