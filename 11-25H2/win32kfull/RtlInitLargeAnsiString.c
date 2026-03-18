/*
 * XREFs of RtlInitLargeAnsiString @ 0x1401B0F6C
 * Callers:
 *     xxxCreateWindowEx @ 0x14003997C (xxxCreateWindowEx.c)
 *     ?NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z @ 0x140293450 (-NtUserfnHkINLPCBTCREATESTRUCT@@YA_JI_KREAUtagCBT_CREATEWNDW@@H@Z.c)
 *     NtUserfnINLPMDICREATESTRUCT @ 0x1402A3B50 (NtUserfnINLPMDICREATESTRUCT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitLargeAnsiString(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // edx

  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 4) |= 0x80000000;
  if ( a2 )
  {
    result = -1LL;
    do
      ++result;
    while ( *(_BYTE *)(a2 + result) );
    v3 = (result + 1) | 0x80000000;
  }
  else
  {
    v3 = 0x80000000;
    result = 0LL;
  }
  *(_DWORD *)a1 = result;
  *(_DWORD *)(a1 + 4) = v3;
  return result;
}
