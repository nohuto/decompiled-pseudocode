/*
 * XREFs of AslPathToSystemPath @ 0x18009F190
 * Callers:
 *     SdbpGetManifestedMergeStubAlloc @ 0x18008E3FC (SdbpGetManifestedMergeStubAlloc.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x180099864 (AslStringDuplicate.c)
 *     AslPathToSystemPathBuf @ 0x18009F250 (AslPathToSystemPathBuf.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall AslPathToSystemPath(_QWORD *a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  const char *v5; // r9
  __int64 v6; // r8
  int v8; // [rsp+20h] [rbp-238h]
  _WORD v9[264]; // [rsp+30h] [rbp-228h] BYREF

  *a1 = 0LL;
  v9[0] = 0;
  v3 = AslPathToSystemPathBuf(v9, 260LL, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = AslStringDuplicate(a1, (__int64)v9);
    v4 = v3;
    if ( v3 >= 0 )
      return 0;
    v5 = "Failed to allocate path string [%x]";
    v6 = 1543LL;
  }
  else
  {
    v5 = "AslPathToSystemPathBuf failed [%x]";
    v6 = 1537LL;
  }
  v8 = v3;
  AslLogCallPrintf(1LL, "AslPathToSystemPath", v6, v5, v8);
  return v4;
}
