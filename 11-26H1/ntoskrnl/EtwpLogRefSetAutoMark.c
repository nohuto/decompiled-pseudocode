/*
 * XREFs of EtwpLogRefSetAutoMark @ 0x1408357CC
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140A99DCC (EtwpKernelTraceRundown.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140475C38 (RtlStringCbCopyA.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     EtwpSetMark @ 0x140778508 (EtwpSetMark.c)
 */

__int64 __fastcall EtwpLogRefSetAutoMark(char a1)
{
  const char *v1; // r8
  char v2; // r10
  unsigned int *v3; // r11
  int v5; // [rsp+30h] [rbp-38h] BYREF
  char pszDest[16]; // [rsp+34h] [rbp-34h] BYREF
  __int64 v7; // [rsp+44h] [rbp-24h]

  v7 = 0LL;
  v1 = "RefSetStart::AutoMark";
  v5 = a1 != 0;
  if ( !a1 )
    v1 = "RefSetStop::AutoMark";
  *(_OWORD *)pszDest = 0LL;
  RtlStringCbCopyA(pszDest, 0x16uLL, v1);
  return EtwpSetMark(v3, &v5, (unsigned int)(v2 != 0) + 25, 1, 0);
}
