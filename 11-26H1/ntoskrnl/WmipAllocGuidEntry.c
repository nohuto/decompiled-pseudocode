/*
 * XREFs of WmipAllocGuidEntry @ 0x140A0A774
 * Callers:
 *     WmipLinkDataSourceToList @ 0x140A0C4DC (WmipLinkDataSourceToList.c)
 *     WmipOpenBlock @ 0x140A0D540 (WmipOpenBlock.c)
 * Callees:
 *     WmipAllocEntry @ 0x140A0AF24 (WmipAllocEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  void *Pool2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rax

  v0 = 0LL;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v3 = (_QWORD *)WmipAllocEntry(&WmipGEChunkInfo);
    v0 = v3;
    if ( v3 )
    {
      v3[12] = Pool2;
      v3[8] = v3 + 7;
      v3[7] = v3 + 7;
      v3[6] = v3 + 5;
      v3[5] = v3 + 5;
      v3[18] = v3 + 17;
      v3[17] = v3 + 17;
      v4 = (_QWORD *)v3[12];
      v4[5] = WmipLegacyEtwWorker;
      v4[6] = v0;
      v4[3] = 0LL;
    }
    else
    {
      ExFreePoolWithTag(Pool2, 0x70696D57u);
    }
  }
  return v0;
}
