/*
 * XREFs of CmPostCallbackNotification @ 0x1408CF960
 * Callers:
 *     CmpDoQueryKeyName @ 0x1402606D0 (CmpDoQueryKeyName.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotification(int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 v10; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+48h] [rbp-40h]
  int v12; // [rsp+4Ch] [rbp-3Ch]
  __int64 v13; // [rsp+50h] [rbp-38h]
  unsigned int v14; // [rsp+58h] [rbp-30h]
  __int128 v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+6Ch] [rbp-1Ch]
  int v17; // [rsp+74h] [rbp-14h]

  if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)*a5 == a5 )
    return a3;
  v12 = 0;
  v16 = 0LL;
  v17 = 0;
  v10 = a2;
  v15 = 0LL;
  v11 = a3;
  v14 = a3;
  v13 = a4;
  CmpCallCallBacksEx(a1, (unsigned int)&v10, 0, 0, a1, a2, (__int64)a5);
  return v14;
}
