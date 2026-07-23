/*
 * XREFs of PspInitializeFullProcessImageName @ 0x140AA6F44
 * Callers:
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     PspSetProcessShortName @ 0x140AA711C (PspSetProcessShortName.c)
 *     MmGetFileObjectForSection @ 0x140AA75C0 (MmGetFileObjectForSection.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInitializeFullProcessImageName(__int64 a1, __int64 a2)
{
  __int64 FileObjectForSection; // rsi
  int v5; // eax
  signed int v6; // edi
  __int64 v7; // rax
  void *v8; // rbx
  __int64 Pool2; // rax
  __int64 v11; // rcx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v13; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B0h] BYREF

  memset_0(Src, 0, 0x110uLL);
  if ( (*(_DWORD *)(a2 + 1532) & 1) != 0 )
    goto LABEL_16;
  if ( a1 )
  {
    FileObjectForSection = *(_QWORD *)(a1 + 184);
  }
  else
  {
    v11 = *(_QWORD *)(a2 + 680);
    if ( !v11 )
      goto LABEL_16;
    FileObjectForSection = MmGetFileObjectForSection(v11);
  }
  v13 = *(_OWORD *)(FileObjectForSection + 88);
  PspSetProcessShortName(a2, &v13);
  v12 = 272;
  v5 = ObQueryNameStringMode(FileObjectForSection, (__int64)Src, 0x110u, &v12, 0);
  v6 = v5;
  if ( v5 == -2147483643 || v5 == -1073741820 || v5 == -1073741789 )
  {
    if ( v12 > 0x110 )
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      v8 = (void *)Pool2;
      if ( Pool2 )
      {
        v6 = ObQueryNameStringMode(FileObjectForSection, Pool2, v12, &v12, 0);
        if ( v6 >= 0 )
          goto LABEL_11;
        ExFreePoolWithTag(v8, 0);
      }
    }
LABEL_16:
    v12 = 16;
    v8 = (void *)ExAllocatePool2(0x40uLL);
    v6 = v8 == 0LL ? 0xC0000017 : 0;
    goto LABEL_11;
  }
  if ( v5 < 0 )
    goto LABEL_16;
  if ( v12 - 17 > 0xFF )
    goto LABEL_16;
  v7 = ExAllocatePool2(0x40uLL);
  v8 = (void *)v7;
  if ( !v7 )
    goto LABEL_16;
  *(_OWORD *)v7 = *(_OWORD *)Src;
  *(_QWORD *)(v7 + 8) = v7 + 16;
  memmove((void *)(v7 + 16), Src[1], WORD1(Src[0]));
LABEL_11:
  *(_QWORD *)(a2 + 848) = v8;
  return (unsigned int)v6;
}
