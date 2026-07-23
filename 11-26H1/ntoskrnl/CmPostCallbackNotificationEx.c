/*
 * XREFs of CmPostCallbackNotificationEx @ 0x1408D0300
 * Callers:
 *     NtRenameKey @ 0x140855BA0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140856030 (NtReplaceKey.c)
 *     NtSaveMergedKeys @ 0x1408564A0 (NtSaveMergedKeys.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmPostCallbackNotificationEx(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  _QWORD *v10; // r8
  _QWORD v12[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v14; // [rsp+58h] [rbp-40h]
  int v15; // [rsp+5Ch] [rbp-3Ch]
  __int64 v16; // [rsp+60h] [rbp-38h]
  unsigned int v17; // [rsp+68h] [rbp-30h]
  __int128 v18; // [rsp+6Ch] [rbp-2Ch]
  __int64 v19; // [rsp+7Ch] [rbp-1Ch]
  int v20; // [rsp+84h] [rbp-14h]

  if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() || (_QWORD *)*a6 == a6 )
    return a3;
  v15 = 0;
  v12[0] = &v13;
  v10 = v12;
  v19 = 0LL;
  v20 = 0;
  if ( !a5 )
    LODWORD(v10) = 0;
  v12[1] = a5;
  v13 = a2;
  v14 = a3;
  v18 = 0LL;
  v17 = a3;
  v16 = a4;
  CmpCallCallBacksEx(a1, (unsigned int)&v13, (_DWORD)v10, 0, a1, a2, (__int64)a6);
  return v17;
}
