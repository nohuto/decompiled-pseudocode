/*
 * XREFs of ACPIEcGetGpeVector @ 0x1400AEFA4
 * Callers:
 *     ACPIEcStartDeviceWorker @ 0x1400600F0 (ACPIEcStartDeviceWorker.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x14000EC04 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     AMLIFreeDataBuffs @ 0x14003C918 (AMLIFreeDataBuffs.c)
 */

__int64 __fastcall ACPIEcGetGpeVector(__int64 a1)
{
  __int64 *v2; // rdi
  int v4; // esi
  __int128 v5; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-18h]

  v2 = AMLIGetNamedChild(*(__int64 **)(a1 + 56), 1162889055);
  if ( !v2 )
    return 3221225524LL;
  v7 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v4 = AMLIEvalNameSpaceObject(v2, (__int64)&v5, 0, 0LL);
  AMLIDereferenceHandleEx((__int64)v2);
  if ( v4 >= 0 )
  {
    if ( WORD1(v5) != 1 )
    {
      AMLIFreeDataBuffs((__int64)&v5);
      return 3222536207LL;
    }
    *(_DWORD *)(a1 + 48) = (unsigned __int8)v6;
    AMLIFreeDataBuffs((__int64)&v5);
  }
  return (unsigned int)v4;
}
