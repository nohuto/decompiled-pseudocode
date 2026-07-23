/*
 * XREFs of PspCaptureAndValidateUnicodeString @ 0x140A72CEC
 * Callers:
 *     PspCaptureUserProcessParameters @ 0x140A72430 (PspCaptureUserProcessParameters.c)
 * Callees:
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

__int64 __fastcall PspCaptureAndValidateUnicodeString(unsigned int *a1, unsigned __int16 *a2)
{
  SIZE_T v4; // rcx
  volatile void *v5; // r9
  __int128 v7; // [rsp+28h] [rbp-20h]

  DWORD1(v7) = 0;
  LODWORD(v7) = RtlReadULongFromUser(a1);
  *((_QWORD *)&v7 + 1) = RtlReadULong64FromUser(a1 + 2);
  *(_OWORD *)a2 = v7;
  v4 = *a2;
  if ( (v4 & 1) == 0 )
  {
    v5 = (volatile void *)*((_QWORD *)a2 + 1);
    if ( v5 )
    {
      a2[1] = v4 + 2;
      if ( (unsigned __int16)(v4 + 2) >= (unsigned __int16)v4 )
      {
LABEL_4:
        ProbeForRead(v5, v4, 1u);
        return 0LL;
      }
    }
    else if ( !(_WORD)v4 )
    {
      a2[1] = 0;
      goto LABEL_4;
    }
  }
  return 3221225485LL;
}
