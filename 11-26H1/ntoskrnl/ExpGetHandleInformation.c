/*
 * XREFs of ExpGetHandleInformation @ 0x140A2F8F0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 *     ObGetHandleInformation @ 0x140A30AF8 (ObGetHandleInformation.c)
 */

__int64 __fastcall ExpGetHandleInformation(unsigned int a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r8
  __int64 result; // rax
  unsigned int HandleInformation; // ebx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  v11 = 0LL;
  CurrentThread = KeGetCurrentThread();
  P[0] = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  result = ExLockUserBuffer(a2, a3, CurrentThread, 1LL, &v11, P);
  if ( (int)result >= 0 )
  {
    HandleInformation = ObGetHandleInformation(a1, v11, a3, a4);
    ExUnlockUserBuffer((struct _MDL *)P[0]);
    return HandleInformation;
  }
  return result;
}
