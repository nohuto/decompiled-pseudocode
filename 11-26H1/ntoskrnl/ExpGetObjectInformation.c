/*
 * XREFs of ExpGetObjectInformation @ 0x1407774F4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140B169CC (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x14040F520 (ExUnlockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1407C6810 (ObGetObjectInformation.c)
 *     ExLockUserBuffer @ 0x140A2FFA0 (ExLockUserBuffer.c)
 */

__int64 __fastcall ExpGetObjectInformation(int a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r8
  int v6; // esi
  __int64 result; // rax
  unsigned int ObjectInformation; // ebx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  *a4 = 0;
  CurrentThread = KeGetCurrentThread();
  v6 = a2;
  v12 = 0LL;
  P[0] = 0LL;
  LOBYTE(CurrentThread) = CurrentThread->PreviousMode;
  result = ExLockUserBuffer(a2, a3, CurrentThread, 1LL, &v12, P);
  if ( (int)result >= 0 )
  {
    ObjectInformation = ObGetObjectInformation(a1, v6, v12, a3, (__int64)a4);
    ExUnlockUserBuffer((struct _MDL *)P[0]);
    return ObjectInformation;
  }
  return result;
}
