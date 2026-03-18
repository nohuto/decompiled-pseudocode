/*
 * XREFs of OSOpenNextSubkey @ 0x1400B7244
 * Callers:
 *     AMLIAddNextNamespaceOverride @ 0x14006D790 (AMLIAddNextNamespaceOverride.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x14001E4A0 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_d @ 0x1400386C0 (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x140072440 (memmove.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 */

__int64 __fastcall OSOpenNextSubkey(HANDLE KeyHandle, ULONG Index, void *a3, _DWORD *a4, __int64 a5)
{
  NTSTATUS v9; // ebx
  NTSTATUS v10; // eax
  ULONG v11; // eax
  int v12; // edx
  unsigned __int16 *Pool2; // rsi
  int v14; // edx
  int MaximumLength; // r15d
  struct _STRING DestinationString; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+30h] BYREF

  ResultLength = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( !KeyHandle || a4 && *a4 && !a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, 0LL, 0, &ResultLength);
    v9 = v10;
    if ( v10 )
    {
      if ( v10 == -2147483643 || v10 == -1073741789 )
      {
        v11 = 24;
        if ( ResultLength > 0x18 )
          v11 = ResultLength;
        ResultLength = v11;
        Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 1299211073LL);
        if ( Pool2 )
        {
          v9 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, Pool2, ResultLength, &ResultLength);
          if ( v9 >= 0 )
          {
            SourceString.Buffer = Pool2 + 8;
            SourceString.Length = Pool2[6];
            SourceString.MaximumLength = Pool2[6] + 2;
            v9 = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 1u);
            if ( v9 >= 0 )
            {
              if ( !a4 )
                goto LABEL_24;
              MaximumLength = DestinationString.MaximumLength;
              if ( *a4 < (unsigned int)DestinationString.MaximumLength )
                v9 = -1073741789;
              else
                memmove(a3, DestinationString.Buffer, DestinationString.MaximumLength);
              *a4 = MaximumLength;
              if ( v9 >= 0 )
              {
LABEL_24:
                if ( a5 )
                  v9 = OSOpenHandle(DestinationString.Buffer);
              }
              RtlFreeAnsiString(&DestinationString);
            }
            else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v14) = 2;
              WPP_RECORDER_SF_D(
                WPP_GLOBAL_Control->DeviceExtension,
                v14,
                21,
                15,
                (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
                v9);
            }
          }
          ExFreePoolWithTag(Pool2, 0);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 2;
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            21,
            14,
            (__int64)&WPP_b53b04e5215c33f856eb87d923c6e01e_Traceguids,
            ResultLength);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v9;
}
