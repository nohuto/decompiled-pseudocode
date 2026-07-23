/*
 * XREFs of BiUpdateObjectReferenceInEfiEntry @ 0x14089A658
 * Callers:
 *     BiCreateEfiEntry @ 0x14089A010 (BiCreateEfiEntry.c)
 * Callees:
 *     _wcsupr @ 0x140538D10 (_wcsupr.c)
 *     wcsstr @ 0x14053A900 (wcsstr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     BcdQueryObject @ 0x14077CA50 (BcdQueryObject.c)
 *     BiStringFromGUID @ 0x1409A48E8 (BiStringFromGUID.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1409A5200 (BiGetObjectReferenceFromEfiEntry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUpdateObjectReferenceInEfiEntry(__int64 a1, void *a2)
{
  NTSTATUS ObjectReferenceFromEfiEntry; // ebx
  size_t v5; // rdi
  wchar_t *Pool2; // rax
  wchar_t *v7; // rsi
  wchar_t *v8; // rdi
  __int64 v10; // [rsp+20h] [rbp-59h] BYREF
  void *Src; // [rsp+28h] [rbp-51h]
  GUID Identifier; // [rsp+30h] [rbp-49h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-39h] BYREF
  char v14; // [rsp+50h] [rbp-29h] BYREF

  v10 = 5111808LL;
  Src = &v14;
  Identifier = 0LL;
  Buf1 = 0LL;
  ObjectReferenceFromEfiEntry = BiGetObjectReferenceFromEfiEntry(a1, &Buf1);
  if ( ObjectReferenceFromEfiEntry >= 0 )
  {
    ObjectReferenceFromEfiEntry = BcdQueryObject(a2, 0, 0LL, &Identifier);
    if ( ObjectReferenceFromEfiEntry >= 0 )
    {
      if ( memcmp(&Buf1, &Identifier, 0x10uLL) )
      {
        v5 = (unsigned int)(*(_DWORD *)(a1 + 40) - 20);
        Pool2 = (wchar_t *)ExAllocatePool2(0x102uLL);
        v7 = Pool2;
        if ( Pool2 )
        {
          memmove(Pool2, (const void *)(a1 + 48), v5);
          wcsupr(v7);
          v8 = wcsstr(v7, L"BCDOBJECT=");
          if ( v8 )
          {
            BiStringFromGUID(&Identifier, &v10);
            memmove((void *)(a1 + 68 + 2 * ((unsigned __int64)(v8 - v7) >> 1)), Src, (unsigned __int16)v10);
          }
          else
          {
            ObjectReferenceFromEfiEntry = -1073741275;
          }
          ExFreePoolWithTag(v7, 0x4B444342u);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)ObjectReferenceFromEfiEntry;
}
