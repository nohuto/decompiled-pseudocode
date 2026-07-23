/*
 * XREFs of DrvDbGetRegValueMappedProperty @ 0x140976440
 * Callers:
 *     DrvDbGetDriverPackageSignerName @ 0x1408A4B38 (DrvDbGetDriverPackageSignerName.c)
 *     DrvDbGetDeviceIdMappedProperty @ 0x140976018 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14097690C (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140976CE0 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x140B258C4 (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x140B64C8C (DrvDbGetDriverFileMappedProperty.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        int *a5,
        unsigned int a6,
        _DWORD *a7)
{
  _DWORD *v7; // rbp
  int v8; // r14d
  int v9; // eax
  unsigned int v10; // edi
  int *v11; // r13
  const WCHAR *v12; // rdx
  void *v13; // r12
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // rbp
  ULONG Length; // ebx
  NTSTATUS v17; // eax
  unsigned int v18; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 Pool2; // rax
  int v23; // [rsp+30h] [rbp-118h]
  int v24; // [rsp+34h] [rbp-114h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-110h] BYREF
  __int64 v26; // [rsp+40h] [rbp-108h]
  HANDLE KeyHandle; // [rsp+48h] [rbp-100h]
  __int64 v28; // [rsp+50h] [rbp-F8h]
  _DWORD *v29; // [rsp+58h] [rbp-F0h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-E8h] BYREF
  char KeyValueInformation; // [rsp+70h] [rbp-D8h] BYREF

  v7 = a7;
  v8 = 0;
  v23 = 0;
  v9 = *(_DWORD *)(a3 + 8);
  v29 = a4;
  v28 = a3;
  KeyHandle = a2;
  v26 = (__int64)a7;
  v24 = 0;
  if ( v9 == 5 || v9 == 17 )
  {
    v11 = &v24;
    v10 = 4;
  }
  else
  {
    v10 = a6;
    v11 = a5;
  }
  v12 = *(const WCHAR **)(a3 + 16);
  v13 = 0LL;
  DestinationString = 0LL;
  ResultLength = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, v12);
  if ( (inited & 0x80000000) == 0 )
  {
    if ( v11 && v10 > 0x80 )
    {
      Length = v10 + 12;
      if ( v10 >= 0xFFFFFFF4 )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(0x100uLL);
      v13 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v17 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v17;
    if ( !v17 || v17 == -2147483643 )
    {
      v18 = v10;
      v10 = *((_DWORD *)p_KeyValueInformation + 2);
      if ( v18 < v10 )
      {
        inited = -1073741789;
      }
      else
      {
        memmove(v11, p_KeyValueInformation + 12, v10);
        v8 = v24;
      }
      v23 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    v7 = (_DWORD *)v26;
  }
  if ( inited == -1073741772 )
    return (unsigned int)-1073741275;
  if ( inited && inited != -1073741789 )
    return inited;
  v20 = v28;
  if ( v23 != *(_DWORD *)(v28 + 24) )
    return (unsigned int)-1073741595;
  *v29 = *(_DWORD *)(v28 + 8);
  v21 = *(_DWORD *)(v20 + 8);
  if ( v21 == 5 )
  {
    *v7 = 2;
    if ( !a5 || a6 < 2 )
      return (unsigned int)-1073741789;
    if ( inited != -1073741789 )
    {
      *(_WORD *)a5 = v8;
      return inited;
    }
    return (unsigned int)-1073741595;
  }
  if ( v21 == 17 )
  {
    *v7 = 1;
    if ( !a5 || !a6 )
      return (unsigned int)-1073741789;
    if ( inited != -1073741789 )
    {
      *(_BYTE *)a5 = -(v8 != 0);
      return inited;
    }
    return (unsigned int)-1073741595;
  }
  *v7 = v10;
  if ( !a5 || a6 < v10 )
    return (unsigned int)-1073741789;
  return inited;
}
