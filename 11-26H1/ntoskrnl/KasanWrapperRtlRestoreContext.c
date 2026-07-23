/*
 * XREFs of KasanWrapperRtlRestoreContext @ 0x1404777B0
 * Callers:
 *     RtlRestoreContext @ 0x140537140 (RtlRestoreContext.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 */

char __fastcall KasanWrapperRtlRestoreContext(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 CurrentStackPointer; // rax
  unsigned __int64 v7[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+20h] BYREF

  LOBYTE(v1) = 0;
  v8 = 0;
  BugCheckParameter3 = 0LL;
  v7[0] = 0LL;
  if ( byte_140FC8BD8 )
  {
    v1 = *(_DWORD *)(a1 + 48) & 0x100001;
    if ( v1 == 1048577 )
    {
      if ( KeQueryCurrentStackInformationEx(*(_QWORD *)(a1 + 152), &v8, (char **)&BugCheckParameter3, v7) == 1 )
      {
        v4 = v8;
        if ( v8 )
        {
          v4 = v8 - 5;
          if ( v8 != 5 )
          {
            v4 = v8 - 7;
            if ( v8 != 7 )
            {
              v4 = v8 - 8;
              if ( (unsigned int)v4 >= 2 )
              {
                if ( byte_140FC8BD8 )
                  KasanMarkAddressValidNoInline(BugCheckParameter3, *(_QWORD *)(a1 + 152) - BugCheckParameter3);
              }
            }
          }
        }
      }
      CurrentStackPointer = KeGetCurrentStackPointer(v4, v3);
      LOBYTE(v1) = KeQueryCurrentStackInformationEx(CurrentStackPointer, &v8, (char **)&BugCheckParameter3, v7);
      if ( (_BYTE)v1 == 1 && v8 == 10 && byte_140FC8BD8 )
        LOBYTE(v1) = KasanMarkAddressValidNoInline(BugCheckParameter3, v7[0] - BugCheckParameter3);
    }
  }
  return v1;
}
