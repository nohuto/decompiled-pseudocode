/*
 * XREFs of PiSwFindSwDevice @ 0x140B25E48
 * Callers:
 *     PiSwProcessParentRemoveIrp @ 0x1409B2334 (PiSwProcessParentRemoveIrp.c)
 *     PiSwIrpCleanup @ 0x140A8C048 (PiSwIrpCleanup.c)
 * Callees:
 *     RtlLookupElementGenericTableAvl @ 0x14041C050 (RtlLookupElementGenericTableAvl.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall PiSwFindSwDevice(wchar_t *Str1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  signed __int64 v4; // rdi
  _WORD *v5; // rcx
  __int16 v6; // ax
  _WORD *v7; // rax
  wchar_t *v9; // rax
  PVOID v10; // rax
  _BYTE *Buffer; // [rsp+20h] [rbp-288h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-278h] BYREF
  _BYTE *v13; // [rsp+38h] [rbp-270h]
  wchar_t *v14; // [rsp+40h] [rbp-268h]
  _BYTE v15[10]; // [rsp+100h] [rbp-1A8h] BYREF
  wchar_t Str[195]; // [rsp+10Ah] [rbp-19Eh] BYREF

  memset_0(v12, 0, 0xD0uLL);
  Buffer = v12;
  v2 = 0LL;
  if ( !wcsnicmp(Str1, L"SWD\\", 4uLL) )
  {
    v3 = 200LL;
    v4 = (char *)Str1 - v15;
    v5 = v15;
    do
    {
      if ( v3 == -2147483446 )
        break;
      v6 = *(_WORD *)((char *)v5 + v4);
      if ( !v6 )
        break;
      *v5++ = v6;
      --v3;
    }
    while ( v3 );
    v7 = v5 - 1;
    if ( v3 )
      v7 = v5;
    *v7 = 0;
    if ( v3 )
    {
      v13 = v15;
      v9 = wcschr(Str, 0x5Cu);
      if ( v9 )
      {
        *v9 = 0;
        v14 = v9 + 1;
        v10 = RtlLookupElementGenericTableAvl(&PiSwDeviceInstanceTable, &Buffer);
        if ( v10 )
          return *(_QWORD *)v10;
      }
    }
  }
  return v2;
}
