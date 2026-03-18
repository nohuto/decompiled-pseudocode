/*
 * XREFs of FsFilterFreeCompletionStack @ 0x14026F3E8
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x14026DFE4 (FsRtlAcquireFileForModWriteEx.c)
 *     FsRtlReleaseFileForModWrite @ 0x14026EE84 (FsRtlReleaseFileForModWrite.c)
 * Callees:
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsFilterFreeCompletionStack(__int64 a1)
{
  $AA7B8230874764A53E1F7A8CE5E032EC *p_IptSaveArea; // r9
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  p_IptSaveArea = 0LL;
  if ( (*(_DWORD *)(a1 + 64) & 2) == 0 )
  {
    ExFreePoolWithTag(*(PVOID *)(a1 + 80), 0x676D5346u);
    return;
  }
  v3 = *(unsigned __int8 *)(a1 + 4) - 250;
  if ( !v3 )
    goto LABEL_10;
  v4 = v3 - 1;
  if ( !v4 )
    goto LABEL_9;
  v5 = v4 - 1;
  if ( !v5 )
  {
LABEL_10:
    p_IptSaveArea = &VslpReservedTransferLock.1144;
    goto LABEL_11;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_9:
    p_IptSaveArea = ($AA7B8230874764A53E1F7A8CE5E032EC *)&VslpReservedTransferLock.IptSaveArea;
    goto LABEL_11;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_10;
  if ( v7 == 1 )
    goto LABEL_9;
LABEL_11:
  *(_QWORD *)(*(_QWORD *)(a1 + 80) - 8LL) = 0LL;
  KeSetEvent((PRKEVENT)p_IptSaveArea, 0, 0);
}
