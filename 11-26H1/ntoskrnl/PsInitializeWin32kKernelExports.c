/*
 * XREFs of PsInitializeWin32kKernelExports @ 0x140617310
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 PsInitializeWin32kKernelExports()
{
  __int64 result; // rax
  ULONG_PTR v1; // rdx
  _QWORD v2[6]; // [rsp+30h] [rbp-30h] BYREF
  int v3; // [rsp+70h] [rbp+10h] BYREF
  __int64 v4; // [rsp+78h] [rbp+18h] BYREF

  v4 = 0LL;
  v2[0] = PspGetFreezeState;
  v3 = 0;
  v2[1] = PsGetProcessUILimits;
  v2[2] = PsGetJobIdentity;
  v2[3] = PsGetUILimitJobProvider;
  v2[4] = PsSystemSetUILimitJobObject;
  result = Win32kGetSupportedExportsVersion(&v3);
  if ( (_DWORD)result != -1073741637 )
  {
    if ( (int)result < 0 )
    {
      v1 = 72LL;
      goto LABEL_8;
    }
    if ( v3 != 1 )
    {
      LODWORD(result) = -1073741637;
      v1 = 73LL;
      goto LABEL_8;
    }
    v4 = 0x200000001LL;
    result = Win32kKernelExportsSet(&v4, v2, 5LL);
    if ( (int)result < 0 )
    {
      v1 = 74LL;
LABEL_8:
      KeBugCheckEx(0x164u, v1, (int)result, 0LL, 0LL);
    }
  }
  return result;
}
