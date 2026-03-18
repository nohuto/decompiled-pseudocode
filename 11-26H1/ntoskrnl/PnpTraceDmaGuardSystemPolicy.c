/*
 * XREFs of PnpTraceDmaGuardSystemPolicy @ 0x1407B191C
 * Callers:
 *     PipDmgInitPhaseTwo @ 0x1407B12D4 (PipDmgInitPhaseTwo.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 */

void PnpTraceDmaGuardSystemPolicy()
{
  int v0; // [rsp+30h] [rbp-68h] BYREF
  __int64 v1; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v3; // [rsp+60h] [rbp-38h]
  __int64 v4; // [rsp+68h] [rbp-30h]
  int *v5; // [rsp+70h] [rbp-28h]
  __int64 v6; // [rsp+78h] [rbp-20h]

  if ( (unsigned int)dword_140E06EA8 > 5 && tlgKeywordOn((__int64)&dword_140E06EA8, 0x400000000000LL) )
  {
    v1 = 2048LL;
    v3 = &v1;
    v0 = PipDmaGuardPolicy;
    v6 = 4LL;
    v5 = &v0;
    v4 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06EA8, (unsigned __int8 *)&word_14004811E, 0LL, 0LL, 4u, &v2);
  }
}
