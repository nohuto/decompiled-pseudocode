/*
 * XREFs of PopPlInitWString @ 0x1407E3018
 * Callers:
 *     PopPlInitDevice @ 0x1407E2C98 (PopPlInitDevice.c)
 *     PopPlInitPowerPlane @ 0x1407E2F20 (PopPlInitPowerPlane.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140459140 (RtlStringCchLengthW.c)
 *     RtlUnicodeStringCchCopyStringN @ 0x140612F70 (RtlUnicodeStringCchCopyStringN.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPlInitWString(PUNICODE_STRING DestinationString, unsigned int a2, __int64 a3, __int64 a4)
{
  const wchar_t *v5; // rsi
  NTSTATUS v6; // ebx
  size_t v7; // rbx
  wchar_t *Pool2; // rax
  size_t cchToCopy; // [rsp+40h] [rbp+18h] BYREF

  v5 = (const wchar_t *)(a3 + a2);
  *DestinationString = 0LL;
  cchToCopy = 0LL;
  v6 = RtlStringCchLengthW(v5, a4 - (_QWORD)v5, &cchToCopy);
  if ( v6 >= 0 )
  {
    v7 = cchToCopy;
    if ( cchToCopy <= 0x7FFF )
    {
      if ( cchToCopy )
      {
        DestinationString->MaximumLength = 2 * cchToCopy;
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
        DestinationString->Buffer = Pool2;
        if ( Pool2 )
        {
          v6 = RtlUnicodeStringCchCopyStringN(DestinationString, v5, v7);
          if ( v6 < 0 )
          {
            ExFreePoolWithTag(DestinationString->Buffer, 0x6C506F50u);
            *DestinationString = 0LL;
          }
        }
        else
        {
          DestinationString->MaximumLength = 0;
          return (unsigned int)-1073741670;
        }
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741820;
    }
  }
  return (unsigned int)v6;
}
