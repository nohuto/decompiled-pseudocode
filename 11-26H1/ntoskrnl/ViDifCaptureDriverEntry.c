/*
 * XREFs of ViDifCaptureDriverEntry @ 0x140C2E494
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 * Callees:
 *     ViDifFindIoCallbackContext @ 0x140C2E4E0 (ViDifFindIoCallbackContext.c)
 */

char __fastcall ViDifCaptureDriverEntry(__int64 a1, __int64 a2)
{
  __int64 IoCallbackContext; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  IoCallbackContext = ViDifFindIoCallbackContext(1342177308LL, a2);
  if ( IoCallbackContext )
  {
    if ( (*(_DWORD *)(IoCallbackContext + 8) & 1) != 0 )
    {
      v4 = *(_QWORD *)(v3 + 88);
      if ( v4 )
      {
        **(_QWORD **)(*(_QWORD *)(v3 + 48) + 64LL) = v4;
        *(_QWORD *)(v3 + 88) = pXdvDriverEntry;
      }
    }
  }
  return 1;
}
