/*
 * XREFs of IopFreeIrpExtension @ 0x140267EA0
 * Callers:
 *     IopFreeIrp @ 0x140267B00 (IopFreeIrp.c)
 *     IoReuseIrp @ 0x140267BC0 (IoReuseIrp.c)
 *     IoCleanupIrp @ 0x140267D80 (IoCleanupIrp.c)
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopfCompleteRequest @ 0x1403FA200 (IopfCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x1403FB3E8 (IopPerfCompleteRequest.c)
 *     IopCopyCompleteReadIrp @ 0x14040F120 (IopCopyCompleteReadIrp.c)
 *     IoSetActivityIdIrp @ 0x14047BB00 (IoSetActivityIdIrp.c)
 *     IopFreeCopyObjectsFromDataBuffer @ 0x1404BC654 (IopFreeCopyObjectsFromDataBuffer.c)
 *     IoClearAdapterCryptoEngineExtension @ 0x1405CE430 (IoClearAdapterCryptoEngineExtension.c)
 *     IoClearFsTrackOffsetState @ 0x1405CE480 (IoClearFsTrackOffsetState.c)
 * Callees:
 *     IopFreeCopyObjectsFromIrp @ 0x14040F0AC (IopFreeCopyObjectsFromIrp.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void *__fastcall IopFreeIrpExtension(__int64 a1, int a2, char a3)
{
  char v3; // al
  __int64 v4; // rdi
  void *v8; // rbp
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax

  v3 = *(_BYTE *)(a1 + 71);
  v4 = *(_QWORD *)(a1 + 200);
  v8 = 0LL;
  if ( v3 < 0 )
  {
    *(_QWORD *)(a1 + 200) = 0LL;
    *(_BYTE *)(a1 + 71) = v3 & 0x7F;
  }
  else if ( v4 )
  {
    if ( (a2 == 5 || a2 == -1) && *(char *)(a1 + 71) >= 0 && (*(_BYTE *)(v4 + 2) & 0x20) != 0 )
      *(_QWORD *)(v4 + 40) = 0LL;
    if ( a2 != 9 && a2 != -1 )
      goto LABEL_18;
    v10 = *(_QWORD *)(a1 + 200);
    if ( *(char *)(a1 + 71) >= 0 && v10 && _bittest16((const signed __int16 *)(v10 + 2), 9u) )
    {
      v12 = *(_DWORD *)(a1 + 16);
      if ( (v12 & 0x200) != 0 )
      {
        IopFreeCopyObjectsFromIrp();
        *(_BYTE *)(a1 + 65) = 1;
      }
      else if ( (v12 & 0x100) != 0 )
      {
        v8 = &IopCopyCompleteReadIrp;
      }
    }
    if ( a2 == -1 )
    {
      *(_WORD *)(v4 + 2) = 0;
    }
    else
    {
LABEL_18:
      v11 = *(unsigned __int16 *)(v4 + 2) & ~(1 << a2);
      *(_WORD *)(v4 + 2) = v11;
      if ( (_WORD)v11 )
        return v8;
    }
    if ( (*(_BYTE *)(a1 + 71) & 0x40) != 0 && a3 )
    {
      ExFreePoolWithTag((PVOID)v4, 0x58707249u);
      *(_BYTE *)(a1 + 71) &= ~0x40u;
      *(_QWORD *)(a1 + 200) = 0LL;
    }
  }
  return v8;
}
