/*
 * XREFs of ?SmBugcheckCallback@@YAXW4_KBUGCHECK_CALLBACK_REASON@@PEAU_KBUGCHECK_REASON_CALLBACK_RECORD@@PEAXK@Z @ 0x1406424F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SmBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  unsigned int v4; // ecx
  unsigned int v5; // eax

  v4 = 0;
  if ( stru_140E27C48.FirstArgument )
  {
    v5 = *((_DWORD *)stru_140E27C48.FirstArgument + 3) + 56;
    if ( v5 <= *((_DWORD *)ReasonSpecificData + 3) )
    {
      ReasonSpecificData[4] = stru_140E27C48.FirstArgument;
      v4 = v5;
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_1400394F0;
    }
  }
  *((_DWORD *)ReasonSpecificData + 10) = v4;
}
