/*
 * XREFs of NVMeVersionCheck2 @ 0x140011480
 * Callers:
 *     BuildIdentifyCommandGeneric @ 0x140019CBC (BuildIdentifyCommandGeneric.c)
 *     QueryProtocolInfoLogPageData @ 0x140021888 (QueryProtocolInfoLogPageData.c)
 * Callees:
 *     NVMeVersionCheck @ 0x1400114D0 (NVMeVersionCheck.c)
 */

char __fastcall NVMeVersionCheck2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // r9d
  bool v6; // cf
  bool v7; // zf
  unsigned int v8; // eax

  if ( (unsigned int)a2 < 2 )
    return NVMeVersionCheck(a1, a2, a3, a4);
  v5 = *(unsigned __int16 *)(a1 + 186);
  v6 = v5 < (unsigned int)a2;
  v7 = v5 == (_DWORD)a2;
  if ( v5 == (_DWORD)a2 )
  {
    v8 = *(unsigned __int8 *)(a1 + 185);
    if ( v8 == (_DWORD)a3 || v8 >= (unsigned int)a3 )
      return 1;
    v6 = v5 < (unsigned int)a2;
    v7 = v5 == (_DWORD)a2;
  }
  return !v6 && !v7;
}
