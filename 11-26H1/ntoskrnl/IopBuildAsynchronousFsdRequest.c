/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x1404AD760
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x1404AD720 (IoBuildAsynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     IopBuildSynchronousFsdRequest @ 0x140AD1480 (IopBuildSynchronousFsdRequest.c)
 *     IoBuildSynchronousFsdRequest @ 0x140AD2BD0 (IoBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140B1EBE8 (IopCreateArcName.c)
 * Callees:
 *     IoFreeIrp @ 0x140267DD0 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x14026BBB0 (IopAllocateIrpExReturn.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14026C270 (IoSetDiskIoAttributionFromThread.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     IopProbeAndLockPages_0 @ 0x1404AD924 (IopProbeAndLockPages_0.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v6; // rdi
  size_t v9; // r12
  __int64 Irp; // rbx
  __int64 v11; // r9
  __int64 v12; // rbp
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  __int64 result; // rax
  __int64 Mdl; // rax
  void *Pool2; // rax
  int v19; // eax

  v6 = a2;
  LOBYTE(a2) = *(_BYTE *)(a2 + 76);
  v9 = a4;
  Irp = IopAllocateIrpExReturn(v6, a2, 0LL);
  if ( Irp )
  {
    v12 = *(_QWORD *)(Irp + 184);
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(v12 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v13 = 138478080;
      if ( _bittest(&v13, a1) )
      {
LABEL_12:
        v15 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152)) + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        result = Irp;
        *(_DWORD *)(Irp + 16) = v15;
        return result;
      }
    }
    v14 = *(_DWORD *)(v6 + 48);
    if ( (v14 & 4) != 0 )
    {
      Pool2 = (void *)ExAllocatePool2(0x48uLL);
      *(_QWORD *)(Irp + 24) = Pool2;
      if ( Pool2 )
      {
        if ( a1 == 4 )
        {
          memmove(Pool2, a3, v9);
          v19 = 48;
        }
        else
        {
          *(_QWORD *)(Irp + 112) = a3;
          v19 = 112;
        }
        *(_DWORD *)(Irp + 16) = v19;
        goto LABEL_7;
      }
    }
    else
    {
      if ( (v14 & 0x10) == 0 )
      {
        *(_QWORD *)(Irp + 112) = a3;
LABEL_7:
        *(_DWORD *)(v12 - 64) = v9;
        if ( a5 )
          *(_QWORD *)(v12 - 48) = *a5;
        if ( *(_DWORD *)(v6 + 72) == 7
          || *(_DWORD *)(v6 + 72) == 8
          || *(_DWORD *)(v6 + 72) == 9
          || *(_DWORD *)(v6 + 72) == 36 )
        {
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        }
        goto LABEL_12;
      }
      Mdl = IopAllocateMdl((__int64)a3, v9, 0, v11, 0LL, 0);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        if ( (int)IopProbeAndLockPages_0(Mdl, 0, a1 == 3, v6, *(unsigned __int8 *)(v12 - 72)) >= 0 )
          goto LABEL_7;
        IoFreeMdl(*(PMDL *)(Irp + 8));
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
