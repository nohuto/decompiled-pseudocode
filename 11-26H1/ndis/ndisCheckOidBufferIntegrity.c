/*
 * XREFs of ndisCheckOidBufferIntegrity @ 0x14004BED0
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x140026840 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x14008C320 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisCheckOidBufferIntegrity(unsigned int *BugCheckParameter3, ULONG_PTR BugCheckParameter2)
{
  __int64 result; // rax
  unsigned int v4; // edx

  result = BugCheckParameter3[1];
  if ( !(_DWORD)result || (_DWORD)result == 2 )
  {
    result = BugCheckParameter3[12];
    v4 = BugCheckParameter3[13];
  }
  else
  {
    if ( (_DWORD)result != 12 )
      return result;
    result = BugCheckParameter3[13];
    v4 = BugCheckParameter3[15];
  }
  if ( v4 > (unsigned int)result )
    ndisBugCheckEx(0x1DuLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  return result;
}
