/*
 * XREFs of PopBSDiagCaptureLiveDump @ 0x140610C1C
 * Callers:
 *     PopBSDiagButtonWnfCallback @ 0x140610B50 (PopBSDiagButtonWnfCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140B43CF0 (DbgkWerCaptureLiveKernelDump.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopBSDiagCaptureLiveDump(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  unsigned int v3; // ebp
  unsigned int v6; // edi
  __int64 i; // rcx
  int v8; // r8d
  unsigned int v9; // eax
  __int64 Pool2; // rax
  __int64 v11; // r15
  const void **v12; // rdi
  __int128 v13; // xmm0
  __int64 v14; // r14
  unsigned int v15; // ebp
  char *v16; // r14

  v2 = 0LL;
  *(_DWORD *)(a1 + 288) = PopConsoleDisplayState;
  v3 = 0;
  *(_BYTE *)(a1 + 292) = PopHiberBootForceMonitorOff;
  v6 = 32;
  *(_BYTE *)(a1 + 293) = PopConsoleExternalDisplayConnected;
  *(_BYTE *)(a1 + 294) = PopLidOpened;
  *(_DWORD *)(a1 + 296) = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  for ( i = 0LL; (unsigned int)i < 0xB; i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(a1 + 16 * (i + 5)) )
    {
      v8 = *(_DWORD *)(a1 + 16LL * (unsigned int)i + 88);
      if ( v8 )
      {
        v9 = v6 + 8;
        if ( v6 + 8 < v6 )
          goto LABEL_16;
        v6 = v9 + v8;
        if ( v9 + v8 < v9 )
          goto LABEL_16;
        ++v3;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x100uLL);
  v2 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 4) = v6;
    v11 = 0LL;
    *(_DWORD *)Pool2 = 1;
    v12 = (const void **)(a1 + 88);
    *(_DWORD *)(Pool2 + 24) = *(_DWORD *)a2 >> 1;
    v13 = *(_OWORD *)(a2 + 8);
    v14 = v3 + 4LL;
    *(_DWORD *)(Pool2 + 28) = v3;
    *(_OWORD *)(Pool2 + 8) = v13;
    v15 = 0;
    v16 = (char *)(Pool2 + 8 * v14);
    do
    {
      if ( *(v12 - 1) && *(_DWORD *)v12 )
      {
        v2[2 * v11 + 8] = v15;
        v2[2 * v11 + 9] = *(_DWORD *)v12;
        memmove(v16, *(v12 - 1), *(unsigned int *)v12);
        v16 += *(unsigned int *)v12;
        v11 = (unsigned int)(v11 + 1);
      }
      ++v15;
      v12 += 2;
    }
    while ( v15 < 0xB );
    PopReleaseRwLock((struct _KTHREAD *)(a1 + 56));
    DbgkWerCaptureLiveKernelDump(
      (unsigned int)L"KernelPowerBSD",
      12744,
      (_DWORD)v2,
      0,
      0LL,
      0LL,
      (__int64)v2,
      (__int64)PopBSDiagLiveDumpCallback,
      2);
    goto LABEL_17;
  }
LABEL_16:
  PopReleaseRwLock((struct _KTHREAD *)(a1 + 56));
  if ( !v2 )
    return;
LABEL_17:
  ExFreePoolWithTag(v2, 0x67696450u);
}
