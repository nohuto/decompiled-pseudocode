/*
 * XREFs of USBHUB_BugCheckSaveHubExtData @ 0x14004ED50
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

void __fastcall USBHUB_BugCheckSaveHubExtData(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  _DWORD *v5; // rax
  int v6; // ecx

  if ( ReasonSpecificDataLength >= 0x30 && WPP_MAIN_CB.Queue.ListEntry.Flink )
  {
    v5 = FdoExt((__int64)WPP_MAIN_CB.Queue.ListEntry.Flink);
    v6 = (dword_14006F588 << 12) + 5280;
    if ( *((_DWORD *)ReasonSpecificData + 2) )
    {
      ReasonSpecificData[4] = v5;
      *((_OWORD *)ReasonSpecificData + 1) = GuidSaveHubExtData;
    }
    *((_DWORD *)ReasonSpecificData + 10) = v6;
  }
}
