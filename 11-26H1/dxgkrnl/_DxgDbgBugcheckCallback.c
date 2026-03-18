/*
 * XREFs of _DxgDbgBugcheckCallback @ 0x140082F90
 * Callers:
 *     <none>
 * Callees:
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 */

void __fastcall DxgDbgBugcheckCallback(
        KBUGCHECK_CALLBACK_REASON Reason,
        struct _KBUGCHECK_REASON_CALLBACK_RECORD *Record,
        _QWORD *ReasonSpecificData,
        ULONG ReasonSpecificDataLength)
{
  __int64 v4; // rcx
  bool v5; // zf
  unsigned int v6; // ecx
  __int128 v7; // xmm0
  unsigned int v8; // eax
  unsigned int v9; // edx
  char *v10; // rcx

  if ( Reason == KbCallbackSecondaryDumpData )
  {
    if ( KiBugCheckData == 278 && qword_140168CD8 )
    {
      v4 = (unsigned int)(dword_140168CE0 - 1);
      if ( dword_140168CE0 != 1 )
      {
        do
        {
          if ( *(_BYTE *)(v4 + qword_140168CD8) )
            break;
          v5 = (_DWORD)v4 == 1;
          v4 = (unsigned int)(v4 - 1);
        }
        while ( !v5 );
      }
      v6 = v4 + 1;
      v7 = xmmword_140168CB8;
      ReasonSpecificData[4] = qword_140168CD8;
      v8 = *((_DWORD *)ReasonSpecificData + 3);
      *((_OWORD *)ReasonSpecificData + 1) = v7;
      if ( v6 >= v8 )
        v6 = v8;
      *((_DWORD *)ReasonSpecificData + 10) = v6;
    }
    else
    {
      *((_OWORD *)ReasonSpecificData + 1) = xmmword_140168CB8;
      if ( ReasonSpecificData[4] )
      {
        v10 = (char *)*ReasonSpecificData;
        v9 = *((_DWORD *)ReasonSpecificData + 2);
        ReasonSpecificData[4] = *ReasonSpecificData;
      }
      else
      {
        v9 = *((_DWORD *)ReasonSpecificData + 3);
        v10 = 0LL;
      }
      *((_DWORD *)ReasonSpecificData + 10) = TdrCollectBugcheckSecondaryDumpData(v10, v9, 0, 0);
    }
  }
}
