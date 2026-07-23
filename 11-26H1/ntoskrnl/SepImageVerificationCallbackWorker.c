/*
 * XREFs of SepImageVerificationCallbackWorker @ 0x140B2F130
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SepImageVerificationCallbackWorker(unsigned int *P)
{
  bool v1; // sf
  int v3; // r8d
  __int64 v4; // rdx
  PCALLBACK_OBJECT v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (P[8] & 0x80000000) != 0;
  v6[0] = &SepImageVerificationCallbackPreProcess;
  v6[2] = *((_QWORD *)P + 5);
  v6[3] = P[12];
  v6[1] = 0LL;
  if ( v1 )
  {
    v3 = (_DWORD)P + 56;
    v4 = 4LL;
    v5 = ExCbSeImageVerificationBlockInfo;
  }
  else
  {
    v4 = 1LL;
    if ( (P[9] & 1) == 0 )
      goto LABEL_4;
    v3 = (_DWORD)P + 56;
    v5 = (PCALLBACK_OBJECT)ExCbSeImageVerificationDriverInfo;
  }
  ExNotifyWithProcessing((__int64)v5, v4, v3, v6);
LABEL_4:
  ExFreePoolWithTag(*((PVOID *)P + 5), 0x63734943u);
  ExFreePoolWithTag(P, 0x63734943u);
}
