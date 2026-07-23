/*
 * XREFs of ViHookDmaAdapter @ 0x140C2D4FC
 * Callers:
 *     VfGetDmaAdapter @ 0x140C2A8F0 (VfGetDmaAdapter.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 *     ExInterlockedInsertHeadList @ 0x1403E15C0 (ExInterlockedInsertHeadList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ViAllocateContiguousMemory @ 0x140C2BDB4 (ViAllocateContiguousMemory.c)
 *     ViCopyDeviceDescription @ 0x140C2C9B0 (ViCopyDeviceDescription.c)
 *     ViGetAdapterSignature @ 0x140C2D0A0 (ViGetAdapterSignature.c)
 */

__int64 __fastcall ViHookDmaAdapter(_QWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v10; // rcx
  __int64 v11; // rbx
  ULONG_PTR Pool2; // rax
  _BYTE *v13; // rax
  void *v14; // rax

  if ( (unsigned int)ViGetAdapterSignature((__int64)a1) == 1634550870 )
  {
    v11 = v10 - 16;
    if ( v10 == 16 )
      return v11;
    goto LABEL_19;
  }
  Pool2 = ExAllocatePool2(64LL, 0x160uLL, 0x566C6148u);
  v11 = Pool2;
  if ( !Pool2 )
    return v11;
  *(_DWORD *)(Pool2 + 76) = 0;
  PsReferenceSiloContext(a1);
  *(_QWORD *)(v11 + 104) = 0LL;
  *(_QWORD *)(v11 + 96) = v11 + 88;
  *(_QWORD *)(v11 + 88) = v11 + 88;
  *(_QWORD *)(v11 + 128) = 0LL;
  *(_QWORD *)(v11 + 120) = v11 + 112;
  *(_QWORD *)(v11 + 112) = v11 + 112;
  *(_QWORD *)(v11 + 152) = 0LL;
  *(_QWORD *)(v11 + 144) = v11 + 136;
  *(_QWORD *)(v11 + 136) = v11 + 136;
  *(_QWORD *)(v11 + 176) = 0LL;
  *(_QWORD *)(v11 + 168) = v11 + 160;
  *(_QWORD *)(v11 + 160) = v11 + 160;
  ViCopyDeviceDescription(v11 + 224, (unsigned int *)a2);
  *(_DWORD *)(v11 + 184) = a3;
  if ( *(_DWORD *)(a2 + 20) == 1 && *(_DWORD *)(a2 + 16) < 8u )
  {
    v13 = (_BYTE *)(a2 + 4);
  }
  else
  {
    v13 = (_BYTE *)(a2 + 4);
    if ( *(_BYTE *)(a2 + 4) )
      goto LABEL_10;
  }
  *(_BYTE *)(v11 + 74) = 1;
LABEL_10:
  *(_QWORD *)(v11 + 312) = 0LL;
  if ( *v13 && *(_BYTE *)(a2 + 5) )
  {
    if ( ViDoubleBufferDma )
      ViAllocateContiguousMemory(v11);
  }
  else
  {
    *(_BYTE *)(v11 + 73) = 1;
  }
  *(_DWORD *)(v11 + 32) = 1634550870;
  *(_QWORD *)(v11 + 40) = a1;
  *(_WORD *)(v11 + 16) = *(_WORD *)a1;
  *(_WORD *)(v11 + 18) = 48;
  *(_QWORD *)(v11 + 56) = v11 + 48;
  *(_QWORD *)(v11 + 48) = v11 + 48;
  if ( *(_QWORD *)(a1[1] + 248LL) )
  {
    *(_DWORD *)(v11 + 224) = 3;
    v14 = &ViDmaOperationsV3;
  }
  else
  {
    v14 = &ViDmaOperationsV2;
  }
  *(_QWORD *)(v11 + 24) = v14;
LABEL_19:
  if ( a6 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 76));
    *(_QWORD *)(v11 + 80) = a5;
    *(_QWORD *)(v11 + 64) = a4;
    ExInterlockedInsertHeadList(&ViAdapterList, (PLIST_ENTRY)v11, &qword_140F085F0);
  }
  return v11;
}
