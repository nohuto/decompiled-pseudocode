/*
 * XREFs of HamConnectForSessionState @ 0x1800052C0
 * Callers:
 *     <none>
 * Callees:
 *     HampConnectionCreate @ 0x180003930 (HampConnectionCreate.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 */

__int64 __fastcall HamConnectForSessionState(__int64 *a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v2 = HampConnectionCreate(0LL, &unk_18001D4F0, 0, 0LL, &v5);
  if ( v2 < 0 )
  {
    v3 = v5;
  }
  else
  {
    v3 = 0LL;
    *a1 = v5;
    v2 = 0;
  }
  if ( v3 )
    HampConnectionDestroy(v3);
  return (unsigned int)v2;
}
