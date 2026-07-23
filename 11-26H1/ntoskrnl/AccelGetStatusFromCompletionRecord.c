/*
 * XREFs of AccelGetStatusFromCompletionRecord @ 0x1402A15FC
 * Callers:
 *     AccelpSubmitWork @ 0x1402A1434 (AccelpSubmitWork.c)
 *     SmHwAcceleratorWaitForRequest @ 0x140643C40 (SmHwAcceleratorWaitForRequest.c)
 * Callees:
 *     AccelpInternalOperationHandler @ 0x1405342F8 (AccelpInternalOperationHandler.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall AccelGetStatusFromCompletionRecord(__int64 *a1)
{
  _DWORD v3[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v4; // [rsp+28h] [rbp-80h]
  __int64 *v5; // [rsp+30h] [rbp-78h]
  int v6; // [rsp+38h] [rbp-70h]
  __int64 v7; // [rsp+40h] [rbp-68h]
  __int64 v8; // [rsp+48h] [rbp-60h]
  __int64 v9; // [rsp+50h] [rbp-58h]

  v3[1] = 0;
  memset_0(v3, 0, 0x7CuLL);
  if ( !a1 )
    return 3221225485LL;
  v4 = *a1;
  v6 = *((_DWORD *)a1 + 6);
  v7 = a1[6];
  v8 = a1[7];
  v3[0] = 3;
  v5 = a1;
  v9 = 0LL;
  return AccelpInternalOperationHandler(v3);
}
