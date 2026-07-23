/*
 * XREFs of BiGetObjectReferenceFromEfiEntry @ 0x1409A5200
 * Callers:
 *     BiUpdateObjectReferenceInEfiEntry @ 0x14089A658 (BiUpdateObjectReferenceInEfiEntry.c)
 *     BiBuildIdentifierList @ 0x1409A5E6C (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsupr @ 0x140538D10 (_wcsupr.c)
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     BiIsWindowsEfiEntry @ 0x1409A5348 (BiIsWindowsEfiEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetObjectReferenceFromEfiEntry(__int64 a1, GUID *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // rbx
  wchar_t *Pool2; // rax
  wchar_t *v8; // rdi
  wchar_t *v9; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  WCHAR SourceString[8]; // [rsp+30h] [rbp-29h] BYREF
  __int128 v12; // [rsp+40h] [rbp-19h]
  __int128 v13; // [rsp+50h] [rbp-9h]
  __int128 v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  __int16 v17; // [rsp+7Ch] [rbp+23h]

  DestinationString = 0LL;
  if ( (unsigned __int8)BiIsWindowsEfiEntry(a1, a2) )
  {
    v6 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
    Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
    v8 = Pool2;
    if ( Pool2 )
    {
      memmove(Pool2, (const void *)(a1 + 48), (unsigned int)v6);
      wcsupr(v8);
      v9 = wcsstr(v8, L"BCDOBJECT=");
      if ( v9 && (unsigned __int64)v8 + v6 - (_QWORD)(v9 + 10) >= 0x4E )
      {
        *(_OWORD *)SourceString = *(_OWORD *)(v9 + 10);
        v12 = *(_OWORD *)(v9 + 18);
        v13 = *(_OWORD *)(v9 + 26);
        v14 = *(_OWORD *)(v9 + 34);
        v15 = *(_QWORD *)(v9 + 42);
        v16 = *((_DWORD *)v9 + 23);
        v17 = 0;
        RtlInitUnicodeString(&DestinationString, SourceString);
        v4 = RtlGUIDFromString(&DestinationString, a2);
      }
      else
      {
        v4 = -1073741275;
      }
      ExFreePoolWithTag(v8, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
