/*
 * XREFs of IopGetDriverPathInformation @ 0x1405CD1B4
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140982460 (NtQueryVolumeInformationFile.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402FF360 (KeAcquireQueuedSpinLock.c)
 *     IopVerifyDriverObjectOnStack @ 0x1405CD540 (IopVerifyDriverObjectOnStack.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 */

__int64 __fastcall IopGetDriverPathInformation(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // r10
  _WORD v9[2]; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+44h] [rbp-14h]
  __int64 v11; // [rsp+48h] [rbp-10h]

  v10 = 0;
  if ( (unsigned int)(a3 - 8) < *(_DWORD *)(a2 + 4) )
    return 3221225485LL;
  v11 = a2 + 8;
  v9[0] = *(_WORD *)(a2 + 4);
  v9[1] = v9[0];
  result = ObReferenceObjectByName(v9, 64LL, 0LL);
  if ( (int)result >= 0 )
  {
    KeAcquireQueuedSpinLock(0xAuLL);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v6 && (v7 = *(_QWORD *)(v6 + 8)) != 0 && (unsigned __int8)IopVerifyDriverObjectOnStack(v7, 0LL) )
      *(_BYTE *)a2 = 1;
    else
      *(_BYTE *)a2 = IopVerifyDriverObjectOnStack(*(_QWORD *)(a1 + 8), 0LL);
    KeReleaseQueuedSpinLock(0xAuLL, v8);
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    return 0LL;
  }
  return result;
}
