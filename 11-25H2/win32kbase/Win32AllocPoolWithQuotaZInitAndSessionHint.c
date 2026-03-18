/*
 * XREFs of Win32AllocPoolWithQuotaZInitAndSessionHint @ 0x1401C1E40
 * Callers:
 *     <none>
 * Callees:
 *     W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___ @ 0x1401C21C4 (W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02___.c)
 */

__int64 __fastcall Win32AllocPoolWithQuotaZInitAndSessionHint(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _QWORD v5[3]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-10h]
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v5[2] = a2;
  v3 = 0LL;
  v5[0] = &v7;
  v7 = 0LL;
  v5[1] = 256LL;
  v6 = a3;
  if ( (int)W32ExecuteUsingSessionGlobal__lambda_7830472d83fd6962041fe396e2298a02_(a1, v5) >= 0 )
    return v7;
  return v3;
}
