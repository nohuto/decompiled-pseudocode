/*
 * XREFs of WheaPrmTranslateNormalizedAddressToPhysicalAddressAmd @ 0x1406DB680
 * Callers:
 *     <none>
 * Callees:
 *     WheapPrmInvokeHandler @ 0x1406DB750 (WheapPrmInvokeHandler.c)
 */

__int64 __fastcall WheaPrmTranslateNormalizedAddressToPhysicalAddressAmd(__int64 a1, char a2, __int64 a3, __int64 *a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+38h] [rbp-20h]
  __int64 v8; // [rsp+39h] [rbp-1Fh]
  __int64 *v9; // [rsp+41h] [rbp-17h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v6 = a1;
  v7 = a2;
  v9 = &v11;
  v8 = a3;
  v10 = 0LL;
  v11 = -1LL;
  result = WheapPrmInvokeHandler(
             (unsigned int)&AMD_NORMALIZED_TO_SPA_PRM_HANDLER_GUID,
             (unsigned int)&v6,
             25,
             (_DWORD)a4,
             (__int64)&v10);
  if ( (int)result >= 0 )
  {
    if ( v10 )
      return 3221225659LL;
    else
      *a4 = *v9;
  }
  return result;
}
