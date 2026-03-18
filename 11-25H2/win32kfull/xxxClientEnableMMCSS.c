/*
 * XREFs of xxxClientEnableMMCSS @ 0x14021F090
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 *     _lambda_340913faf875194f1243cffee2808d86_::_lambda_invoker_cdecl_ @ 0x140288300 (_lambda_340913faf875194f1243cffee2808d86_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RtlCopyFromUser @ 0x140270948 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientEnableMMCSS(int a1)
{
  int v1; // ebx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v3 = 0;
  v4 = a1;
  EtwTraceBeginCallback(57LL);
  v1 = KeUserModeCallback(57LL, &v4, 4LL, &Src, &v3);
  EtwTraceEndCallback(57LL);
  if ( v1 < 0 || v3 != 24 )
    return 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src, 8uLL);
  return v6;
}
