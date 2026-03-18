/*
 * XREFs of VslEnableOnDemandDebugWithResponse @ 0x1407921FC
 * Callers:
 *     PsIumEnableOnDemandDebugWithResponse @ 0x140776964 (PsIumEnableOnDemandDebugWithResponse.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1403685AC (VslpEnterIumSecureMode.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall VslEnableOnDemandDebugWithResponse(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v3; // rdi
  char PreviousMode; // dl
  __int64 result; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-80h]
  __int64 v10; // [rsp+30h] [rbp-78h]
  _BYTE v11[88]; // [rsp+38h] [rbp-70h] BYREF

  v3 = a3;
  memset_0(v8, 0, 0x68uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = 3221225506LL;
  if ( (unsigned int)v3 <= 0x50 )
  {
    v9 = *(_QWORD *)(a1 + 368) & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = v3;
    if ( PreviousMode )
      RtlCopyFromUser(v11, a2, (unsigned int)v3);
    else
      RtlCopyVolatileMemory(v11, a2, (unsigned int)v3);
    return VslpEnterIumSecureMode(2u, 0x13u, 0, (__int64)v8);
  }
  return result;
}
