/*
 * XREFs of PspCreateSecureThread @ 0x140B36748
 * Callers:
 *     PspInsertThread @ 0x140A7B188 (PspInsertThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     MmProbeAndLockPagesEx @ 0x1403A1820 (MmProbeAndLockPagesEx.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     MmSizeOfMdl @ 0x140481EB0 (MmSizeOfMdl.c)
 *     KeSecureThread @ 0x1404F24F8 (KeSecureThread.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspCreateSecureThread(__int64 Base, __int64 a2)
{
  _KPROCESS *v4; // rcx
  __int64 Pool2; // rax
  struct _MDL *v6; // rbx
  int v7; // edi
  _OWORD v9[3]; // [rsp+30h] [rbp-58h] BYREF

  v4 = *(_KPROCESS **)(Base + 544);
  memset(v9, 0, sizeof(v9));
  KiStackAttachProcess(v4, 0, (__int64)v9);
  MmSizeOfMdl((PVOID)Base, 0x798uLL);
  Pool2 = ExAllocatePool2(0x40uLL);
  v6 = (struct _MDL *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = 0LL;
    *(_WORD *)(Pool2 + 10) = 0;
    *(_DWORD *)(Pool2 + 40) = 1944;
    *(_WORD *)(Pool2 + 8) = 8 * (((unsigned __int16)((Base & 0xFFF) + 6039) >> 12) + 6);
    *(_QWORD *)(Pool2 + 32) = Base & 0xFFFFFFFFFFFFF000uLL;
    *(_DWORD *)(Pool2 + 44) = Base & 0xFFF;
    v7 = MmProbeAndLockPagesEx(Pool2, 4uLL);
    if ( v7 >= 0 )
    {
      v7 = KeSecureThread(Base, (int)v6, *(_QWORD *)(Base + 1296), *(_QWORD *)(Base + 1376), a2);
      if ( v7 >= 0 )
        goto LABEL_4;
      MmUnlockPages(v6);
    }
    ExFreePoolWithTag(v6, 0x65537350u);
  }
  else
  {
    v7 = -1073741670;
  }
LABEL_4:
  KiUnstackDetachProcess((__int64)v9, 0);
  return (unsigned int)v7;
}
