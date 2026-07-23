/*
 * XREFs of KscpUmaSmapResumeAfterException @ 0x140C640C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x14061C280 (RtlRaiseException.c)
 */

void __fastcall KscpUmaSmapResumeAfterException(int a1, void *a2, unsigned int a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  EXCEPTION_RECORD v5; // [rsp+0h] [rbp-A0h] BYREF

  v5.ExceptionCode = a1;
  v5.ExceptionFlags = 0;
  v5.ExceptionAddress = a2;
  v5.ExceptionRecord = 0LL;
  v5.NumberParameters = a3;
  *(_OWORD *)v5.ExceptionInformation = v3;
  *(_OWORD *)&v5.ExceptionInformation[2] = v4;
  RtlRaiseException(&v5);
  __debugbreak();
  JUMPOUT(0x140C6410FLL);
}
