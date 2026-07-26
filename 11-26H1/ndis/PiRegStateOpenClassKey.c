/*
 * XREFs of PiRegStateOpenClassKey @ 0x1401513D4
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x140151730 (PpRegStateReadCreateClassCreationSettings.c)
 *     PpRegStateUpdateStackCreationSettings @ 0x14015189C (PpRegStateUpdateStackCreationSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     CmRegUtilCreateWstrKey @ 0x140151BB0 (CmRegUtilCreateWstrKey.c)
 *     CmRegUtilOpenExistingWstrKey @ 0x140151C10 (CmRegUtilOpenExistingWstrKey.c)
 */

__int64 __fastcall PiRegStateOpenClassKey(unsigned int *a1, __int64 a2, int a3, int *a4, _QWORD *a5)
{
  __int64 result; // rax
  int v9; // r8d
  int v10; // r9d
  HANDLE v11; // rbx
  int WstrKey; // eax
  int v13; // esi
  int v14; // edi
  int v15; // [rsp+70h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-59h] BYREF
  _QWORD v17[2]; // [rsp+80h] [rbp-51h] BYREF
  wchar_t Dest[40]; // [rsp+90h] [rbp-41h] BYREF

  Handle = 0LL;
  v17[0] = 0LL;
  v15 = 0;
  *a5 = 0LL;
  if ( a4 )
    *a4 = 0;
  result = CmRegUtilOpenExistingWstrKey(
             0LL,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Class",
             131097LL,
             &Handle);
  if ( (int)result >= 0 )
  {
    _snwprintf(
      Dest,
      0x27uLL,
      L"{%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
      *a1,
      *((unsigned __int16 *)a1 + 2),
      *((unsigned __int16 *)a1 + 3),
      *((unsigned __int8 *)a1 + 8),
      *((unsigned __int8 *)a1 + 9),
      *((unsigned __int8 *)a1 + 10),
      *((unsigned __int8 *)a1 + 11),
      *((unsigned __int8 *)a1 + 12),
      *((unsigned __int8 *)a1 + 13),
      *((unsigned __int8 *)a1 + 14),
      *((unsigned __int8 *)a1 + 15));
    v11 = Handle;
    Dest[38] = 0;
    if ( a3 )
    {
      WstrKey = CmRegUtilCreateWstrKey((_DWORD)Handle, (unsigned int)Dest, v9, v10, 0LL, (__int64)&v15, (__int64)v17);
      v13 = v15;
    }
    else
    {
      WstrKey = CmRegUtilOpenExistingWstrKey(Handle, Dest, 983103LL, v17);
      v13 = 2;
    }
    v14 = WstrKey;
    ZwClose(v11);
    if ( v14 >= 0 )
    {
      *a5 = v17[0];
      if ( a4 )
        *a4 = v13;
    }
    return (unsigned int)v14;
  }
  return result;
}
