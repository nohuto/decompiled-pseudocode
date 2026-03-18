/*
 * XREFs of CarReadRegistry @ 0x14064C9A0
 * Callers:
 *     CarInit @ 0x140649ADC (CarInit.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x140A10F30 (RtlQueryRegistryValuesEx.c)
 */

__int64 CarReadRegistry()
{
  struct _LIST_ENTRY **p_Blink; // rax
  __int64 v1; // rcx
  wchar_t *v2; // rbx
  __int128 v4; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v5[8]; // [rsp+40h] [rbp-C0h] BYREF
  int v6; // [rsp+48h] [rbp-B8h]
  const WCHAR *v7; // [rsp+50h] [rbp-B0h]
  __int128 *v8; // [rsp+58h] [rbp-A8h]
  int v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+80h] [rbp-80h]
  const WCHAR *v11; // [rsp+88h] [rbp-78h]
  unsigned __int8 *v12; // [rsp+90h] [rbp-70h]
  int v13; // [rsp+98h] [rbp-68h]
  int v14; // [rsp+B8h] [rbp-48h]
  const wchar_t *v15; // [rsp+C0h] [rbp-40h]
  PVOID *p_SparePtr; // [rsp+C8h] [rbp-38h]
  int v17; // [rsp+D0h] [rbp-30h]

  v4 = 0LL;
  p_Blink = &stru_140F066E8.WaitBlock[1].WaitListEntry.Blink;
  v1 = 0x7FFFLL;
  while ( *(_WORD *)p_Blink )
  {
    p_Blink = (struct _LIST_ENTRY **)((char *)p_Blink + 2);
    if ( !--v1 )
      goto LABEL_6;
  }
  *((_QWORD *)&v4 + 1) = &stru_140F066E8.WaitBlock[1].WaitListEntry.Blink;
  LOWORD(v4) = -2 - 2 * v1;
LABEL_6:
  v2 = *(wchar_t **)&PspSiloMonitorLock.ResourceIndex;
  if ( HIDWORD(WheapPfaLock.CycleTime) )
    v2 = off_140E08E58;
  WORD1(v4) = 3072;
  memset_0(v5, 0, 0xE0uLL);
  v9 = 0x1000000;
  v6 = 288;
  v13 = 0x4000000;
  v7 = L"VerifyDrivers";
  v10 = 288;
  v8 = &v4;
  v17 = 0x4000000;
  v11 = L"XdvVerifierOptions";
  v14 = 288;
  v12 = &stru_140F066E8.WaitBlockFill5[44];
  v15 = L"XdvTipTag";
  p_SparePtr = &stru_140F066E8.WaitBlock[0].SparePtr;
  RtlQueryRegistryValuesEx(0LL, v2, v5, 0LL, 0LL);
  return 0LL;
}
