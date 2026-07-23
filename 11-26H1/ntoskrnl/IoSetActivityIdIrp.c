/*
 * XREFs of IoSetActivityIdIrp @ 0x14047BB00
 * Callers:
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IoMakeAssociatedIrpPriv @ 0x1404578A8 (IoMakeAssociatedIrpPriv.c)
 *     IopInitActivityIdIrp @ 0x14047B8F0 (IopInitActivityIdIrp.c)
 * Callees:
 *     IopFreeIrpExtension @ 0x140267EA0 (IopFreeIrpExtension.c)
 *     EtwActivityIdControl @ 0x140460340 (EtwActivityIdControl.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IoSetActivityIdIrp(__int64 a1, _OWORD *a2)
{
  unsigned int v2; // edi
  _WORD *v4; // rdx
  _WORD *v7; // rax
  __int64 Pool2; // rax
  char v9; // al

  v2 = 0;
  v4 = *(_WORD **)(a1 + 200);
  if ( v4 )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      v4[1] |= 1u;
      goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = (_WORD *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 5;
      *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(a1 + 200);
      v9 = *(_BYTE *)(a1 + 71) & 0x3F;
      *(_QWORD *)(a1 + 200) = v4;
      *(_BYTE *)(a1 + 71) = v9 | 0x40;
      *v4 |= 1u;
LABEL_5:
      if ( a2 )
      {
        *(_OWORD *)(v4 + 12) = *a2;
        return v2;
      }
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(a1 + 152) )
      {
        v2 = EtwActivityIdControl(1u, (LPGUID)(v4 + 12));
        if ( (v2 & 0x80000000) == 0 )
          return v2;
      }
      else
      {
        v2 = -1073741637;
      }
      IopFreeIrpExtension(a1, 0, 1);
      return v2;
    }
  }
  else
  {
    v7 = (_WORD *)ExAllocatePool2(0x40uLL);
    v4 = v7;
    if ( v7 )
    {
      v7[1] = 1;
      *(_BYTE *)(a1 + 71) |= 0x40u;
      *(_QWORD *)(a1 + 200) = v7;
      *v7 |= 1u;
      goto LABEL_5;
    }
  }
  if ( v4 )
    goto LABEL_5;
  return 3221225626LL;
}
