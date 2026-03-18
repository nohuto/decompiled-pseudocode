/*
 * XREFs of ?Initialize@InkProcessor@@SAJXZ @ 0x1402319E8
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402EBCA8 (--0InkProcessor@@AEAA@XZ.c)
 */

__int64 __fastcall InkProcessor::Initialize(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  InkProcessor *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  InkProcessor *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx

  v2 = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 3272) )
  {
    v3 = (InkProcessor *)Win32AllocPoolZInit(112LL, 1349217865LL);
    if ( v3 )
      v6 = InkProcessor::InkProcessor(v3);
    else
      v6 = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 3272) = v6;
    if ( !*(_QWORD *)(W32GetUserSessionState(v8, v7) + 3272) )
      return (unsigned int)-1073741801;
  }
  return v2;
}
