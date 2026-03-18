/*
 * XREFs of ?NtUserfnHkINLPCBTACTIVATESTRUCT@@YA_JK_KPEAUtagCBTACTIVATESTRUCT@@@Z @ 0x14003E310
 * Callers:
 *     NtUserCallNextHookEx @ 0x14003D690 (NtUserCallNextHookEx.c)
 * Callees:
 *     ?xxxCallNextHookEx@@YA_JH_K_J@Z @ 0x14003D278 (-xxxCallNextHookEx@@YA_JH_K_J@Z.c)
 */

__int64 __fastcall NtUserfnHkINLPCBTACTIVATESTRUCT(__int64 a1, __int64 a2, struct tagCBTACTIVATESTRUCT *a3)
{
  __int64 v4[2]; // [rsp+28h] [rbp-20h] BYREF

  *(_OWORD *)v4 = 0LL;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (struct tagCBTACTIVATESTRUCT *)MmUserProbeAddress;
  *(_OWORD *)v4 = *(_OWORD *)a3;
  return xxxCallNextHookEx(a1, a2, (__int64)v4);
}
