/*
 * XREFs of PspCreateActivityReference @ 0x140B294C8
 * Callers:
 *     NtAcquireProcessActivityReference @ 0x140B293A0 (NtAcquireProcessActivityReference.c)
 * Callees:
 *     ObInsertObjectEx @ 0x140906FA0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     PsChargeProcessWakeCounter @ 0x14098F230 (PsChargeProcessWakeCounter.c)
 */

__int64 __fastcall PspCreateActivityReference(void *a1, _QWORD *a2)
{
  __int64 result; // rax
  char *v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-60h]
  _QWORD v7[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v8; // [rsp+70h] [rbp-10h]
  char *v9; // [rsp+A0h] [rbp+20h] BYREF

  v7[0] = 48LL;
  v7[1] = 0LL;
  v7[2] = 0LL;
  v9 = 0LL;
  v7[3] = 32LL;
  v8 = 0LL;
  result = ObCreateObjectEx(
             0,
             (_DWORD *)stru_140FC11F0.AffinityVersion,
             (__int64)v7,
             KeGetCurrentThread()->PreviousMode,
             v6,
             8,
             0,
             8,
             &v9,
             0LL);
  if ( (int)result >= 0 )
  {
    v5 = v9;
    *(_QWORD *)v5 = PsChargeProcessWakeCounter(a1);
    return ObInsertObjectEx(v5, 0LL, 983040, 0, 0, 0LL, a2);
  }
  return result;
}
