/*
 * XREFs of SdbpGetPathCustomSdb @ 0x180091A90
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     SdbpGetPathAppPatch @ 0x1800916B0 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x18009EFDC (AslPathCombine.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(_WORD *a1, unsigned __int64 a2, const wchar_t *a3)
{
  const wchar_t *v3; // r10
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v9; // [rsp+30h] [rbp-258h] BYREF
  int v10; // [rsp+40h] [rbp-248h]
  wchar_t v11; // [rsp+44h] [rbp-244h]
  wchar_t v12[264]; // [rsp+50h] [rbp-238h] BYREF

  v3 = a3;
  v10 = *(_DWORD *)L"DB";
  v11 = aCustomsdb[10];
  v9 = *(_OWORD *)L"\\CustomSDB";
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  v12[0] = 0;
  if ( !a3 )
    v3 = &word_1800BBB1C;
  v7 = AslPathCombine(&v9, v3, v12, 260LL);
  v8 = v7;
  if ( v7 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2, v12);
  else
    AslLogCallPrintf(1LL, "SdbpGetPathCustomSdb", 1190LL, "AslPathCombine failed [%x]", v7);
  return v8;
}
