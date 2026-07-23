/*
 * XREFs of _PnpRegQueryValueIndirect @ 0x140972A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140456BE0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1407282A0 (ZwQueryValueKey.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     _PnpCtxRegQueryValue @ 0x1409728D0 (_PnpCtxRegQueryValue.c)
 *     _PnpParseIndirectInfString @ 0x140973CE0 (_PnpParseIndirectInfString.c)
 *     _PnpParseIndirectResourceString @ 0x140973DB8 (_PnpParseIndirectResourceString.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRegQueryValueIndirect(
        __int64 a1,
        void *a2,
        const WCHAR *a3,
        int *a4,
        void *a5,
        ULONG *a6,
        bool *a7)
{
  void *v7; // r14
  void *v8; // rdi
  const WCHAR *v10; // r15
  void *v11; // rbp
  unsigned int inited; // ebx
  char *p_KeyValueInformation; // r15
  ULONG Length; // ebx
  NTSTATUS v15; // eax
  ULONG v16; // ecx
  ULONG v17; // eax
  __int64 Pool2; // rax
  ULONG v20; // ebp
  _WORD *v21; // rax
  unsigned __int64 i; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  int v25; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-F8h] BYREF
  const WCHAR *v27; // [rsp+38h] [rbp-F0h]
  HANDLE KeyHandle; // [rsp+40h] [rbp-E8h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-E0h] BYREF
  char KeyValueInformation; // [rsp+58h] [rbp-D0h] BYREF

  v7 = a5;
  v8 = 0LL;
  v10 = a3;
  v27 = a3;
  KeyHandle = a2;
  if ( a5 )
  {
    if ( !*a6 )
      v7 = 0LL;
  }
  else
  {
    *a6 = 0;
  }
  if ( a7 )
    *a7 = 0;
  *a4 = 0;
  ResultLength = 0;
  v11 = 0LL;
  DestinationString = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, a3);
  if ( (inited & 0x80000000) == 0 )
  {
    if ( v7 && *a6 > 0x80 )
    {
      Length = *a6 + 12;
      if ( Length < 0xC )
        return (unsigned int)-1073741675;
      Pool2 = ExAllocatePool2(0x100uLL);
      v11 = (void *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741801;
      p_KeyValueInformation = (char *)Pool2;
    }
    else
    {
      p_KeyValueInformation = &KeyValueInformation;
      Length = 140;
    }
    v15 = ZwQueryValueKey(
            KeyHandle,
            &DestinationString,
            KeyValuePartialInformation,
            p_KeyValueInformation,
            Length,
            &ResultLength);
    inited = v15;
    if ( !v15 || v15 == -2147483643 )
    {
      v16 = *a6;
      v17 = *((_DWORD *)p_KeyValueInformation + 2);
      *a6 = v17;
      if ( v16 < v17 )
        inited = -1073741789;
      else
        memmove(v7, p_KeyValueInformation + 12, *((unsigned int *)p_KeyValueInformation + 2));
      *a4 = *((_DWORD *)p_KeyValueInformation + 1);
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
    v10 = v27;
  }
  if ( (!inited || inited == -1073741789) && a7 )
  {
    v25 = *a4;
    switch ( v25 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 7:
        v20 = *a6;
        if ( inited )
        {
          while ( v20 <= 0xFFFE )
          {
            if ( v8 )
              ExFreePoolWithTag(v8, 0);
            v8 = (void *)ExAllocatePool2(0x100uLL);
            if ( !v8 )
              return inited;
            ResultLength = v20;
            v24 = PnpCtxRegQueryValue(v23, KeyHandle, v10, 0LL, v8, &ResultLength);
            if ( v24 != -1073741789 )
            {
              if ( v24 )
                goto LABEL_32;
              v7 = v8;
              goto LABEL_39;
            }
            if ( ResultLength <= v20 )
              goto LABEL_32;
            v20 = ResultLength;
          }
        }
        else
        {
          if ( !v7 )
            return inited;
LABEL_39:
          v21 = v7;
          for ( i = (unsigned __int64)v20 >> 1; i; --i )
          {
            if ( !*v21 )
              break;
            ++v21;
          }
          if ( i
            && ((unsigned __int8)PnpParseIndirectInfString(v7) || (unsigned __int8)PnpParseIndirectResourceString(v7)) )
          {
            *a7 = 1;
          }
        }
        if ( v8 )
LABEL_32:
          ExFreePoolWithTag(v8, 0);
        break;
      case 4:
      case 5:
      case 6:
      case 8:
      case 9:
      case 10:
      case 11:
        *a7 = 0;
        return inited;
      default:
        *a7 = (_WORD)v25 == 25;
        return inited;
    }
  }
  return inited;
}
