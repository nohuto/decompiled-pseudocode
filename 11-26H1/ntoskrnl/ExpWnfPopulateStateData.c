/*
 * XREFs of ExpWnfPopulateStateData @ 0x1409CB9C8
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1409CB5E8 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     ExpWnfComposeValueName @ 0x1409C78CC (ExpWnfComposeValueName.c)
 *     ExpExposeWnfStateName @ 0x1409CB444 (ExpExposeWnfStateName.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140AFC7AC (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExpCrossVmWnfPull @ 0x140B699B8 (ExpCrossVmWnfPull.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax
  ULONG i; // r14d
  _DWORD *Pool2; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  NTSTATUS v12; // eax
  __int64 v13; // r15
  unsigned int v14; // eax
  ULONG Length; // [rsp+30h] [rbp-29h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-19h] BYREF
  __int64 v18; // [rsp+50h] [rbp-9h] BYREF
  char v19; // [rsp+58h] [rbp-1h] BYREF

  v1 = (*(_DWORD *)(a1 + 40) >> 6) & 0xF;
  Length = 0;
  KeyHandle = 0LL;
  ValueName = 0LL;
  if ( (_BYTE)v1 == 5 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v18 = 0LL;
    ExpExposeWnfStateName(v10, &v18, 0);
    result = ExpCrossVmWnfPull(&v18, v11, a1);
    if ( (_DWORD)result != -1073741822 )
    {
      if ( (int)result < 0 )
        return result;
      return 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  for ( i = *(_DWORD *)(a1 + 56); ; i = Length - 16 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return 3221225626LL;
    v6 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)&ValueName.Length = 2228224LL;
    ValueName.Buffer = (wchar_t *)&v19;
    ExpWnfComposeValueName(v6, &ValueName);
    v7 = *(_QWORD *)(a1 + 104);
    Length = i + 16;
    v8 = ExpWnfAcquirePermanentDataStoreHandle(v7, &KeyHandle);
    if ( v8 >= 0 )
    {
      v12 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Pool2, Length, &Length);
      v13 = *(_QWORD *)(a1 + 104);
      v8 = v12;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v13 + 8));
      KeAbPostRelease(v13 + 8);
    }
    if ( v8 == -1073741772 )
    {
      *(_OWORD *)Pool2 = 0LL;
LABEL_11:
      *Pool2 = 1050884;
      v9 = Pool2[3];
      Pool2[1] = i;
      *(_DWORD *)(a1 + 96) = v9;
      *(_QWORD *)(a1 + 88) = Pool2;
      return 0LL;
    }
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(Pool2, 0x20666E57u);
  }
  if ( v8 >= 0 )
  {
    if ( Pool2[1] == 3 )
    {
      v14 = Pool2[2];
      if ( v14 >= 4 )
      {
        Pool2[2] = v14 - 4;
        goto LABEL_11;
      }
    }
    v8 = -1073741823;
  }
  ExFreePoolWithTag(Pool2, 0x20666E57u);
  return (unsigned int)v8;
}
