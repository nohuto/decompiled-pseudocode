/*
 * XREFs of NtGdiGetPerBandInfo @ 0x14020DA30
 * Callers:
 *     <none>
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x140084C80 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z @ 0x14020DB68 (-GrepGetPerBandInfo@@YAKAEAVXDCOBJ@@PEAU_PERBANDINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetPerBandInfo(HDC a1, ULONG64 a2)
{
  unsigned int PerBandInfo; // ebx
  _BYTE *v4; // rdx
  _QWORD v6[14]; // [rsp+20h] [rbp-98h] BYREF
  _PERBANDINFO v7; // [rsp+90h] [rbp-28h] BYREF

  memset(&v7, 0, sizeof(v7));
  PerBandInfo = 0;
  if ( a2 )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(_PERBANDINFO *)a2;
  }
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( v6[0] )
    PerBandInfo = GrepGetPerBandInfo((struct XDCOBJ *)v6, &v7);
  if ( PerBandInfo - 1 <= 0xFFFFFFFD )
  {
    if ( (a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v4 = (_BYTE *)MmUserProbeAddress;
    *v4 = *v4;
    v4[19] = v4[19];
    *(_PERBANDINFO *)a2 = v7;
  }
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return PerBandInfo;
}
