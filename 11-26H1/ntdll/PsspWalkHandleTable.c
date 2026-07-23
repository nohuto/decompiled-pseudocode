/*
 * XREFs of PsspWalkHandleTable @ 0x1800B3A60
 * Callers:
 *     PsspCaptureHandleInformation @ 0x1800B376C (PsspCaptureHandleInformation.c)
 * Callees:
 *     PsspDumpObject_Event @ 0x1801006E0 (PsspDumpObject_Event.c)
 *     _wcsicmp @ 0x180128CB0 (_wcsicmp.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwQueryObject @ 0x18015F040 (ZwQueryObject.c)
 *     ZwDuplicateObject @ 0x18015F5C0 (ZwDuplicateObject.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall PsspWalkHandleTable(
        HANDLE SourceProcessHandle,
        unsigned int *a2,
        unsigned int a3,
        char a4,
        __int64 (__fastcall *a5)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int),
        __int64 a6)
{
  HANDLE v8; // rbx
  __int64 result; // rax
  unsigned int v11; // r15d
  void *v12; // rdx
  unsigned int v13; // edi
  char v14; // si
  __int64 v15; // r9
  unsigned int v16; // ebx
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TargetHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v20)(__int64, _QWORD, _QWORD, __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, unsigned int); // [rsp+68h] [rbp-98h]
  HANDLE v21; // [rsp+70h] [rbp-90h]
  _BYTE ObjectInformation[8]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t *String1; // [rsp+88h] [rbp-78h]
  _OWORD v24[3]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v25; // [rsp+160h] [rbp+60h]
  _BYTE v26[64]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v27[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int16 v28; // [rsp+1C0h] [rbp+C0h]

  v20 = a5;
  v19 = a6;
  v8 = SourceProcessHandle;
  v21 = SourceProcessHandle;
  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  memset_thunk_772440563353939046(ObjectInformation, 0, 0xA8uLL);
  memset_thunk_772440563353939046(v27, 0, 0x210uLL);
  memset_thunk_772440563353939046(v26, 0, 0x40uLL);
  result = 0LL;
  v11 = 0;
  if ( a3 )
  {
    while ( 1 )
    {
      v12 = (void *)*a2;
      v13 = 0;
      TargetHandle = 0LL;
      v14 = 0;
      v17 = 0;
      if ( ZwDuplicateObject(v8, v12, (HANDLE)0xFFFFFFFFFFFFFFFFLL, &TargetHandle, 0, 0, 2u) < 0 )
        goto LABEL_19;
      v13 = 4;
      if ( ZwQueryObject(TargetHandle, ObjectTypeInformation, ObjectInformation, 0xA8u, 0LL) >= 0 )
        break;
      NtClose(TargetHandle);
LABEL_21:
      ++v11;
      ++a2;
      result = 0LL;
      if ( v11 >= a3 )
        return result;
    }
    if ( (a4 & 8) != 0 )
    {
      memset_thunk_772440563353939046(v27, 0, 0x210uLL);
      v16 = 0;
      if ( wcsicmp(String1, L"File") && ZwQueryObject(TargetHandle, ObjectNameInformation, v27, 0x210u, 0LL) < 0 )
        v28 = 0;
    }
    else
    {
      v16 = 0;
    }
    if ( (a4 & 0x10) != 0 && ZwQueryObject(TargetHandle, ObjectBasicInformation, v24, 0x38u, 0LL) >= 0 )
      v13 = 20;
    v17 = 0;
    if ( (a4 & 0x20) != 0 )
    {
      while ( v16 < 6 )
      {
        if ( !wcsicmp(String1, (&off_180170C10)[3 * v16]) )
        {
          if ( ((int (__fastcall *)(HANDLE, _BYTE *, __int64, int *))*(&funcs_1800B3C55 + 3 * v16))(
                 TargetHandle,
                 v26,
                 64LL,
                 &v17) >= 0
            && v17 )
          {
            v13 |= 0x20u;
            v14 = (char)(&off_180170C10)[3 * v16 + 1];
            goto LABEL_18;
          }
          break;
        }
        ++v16;
      }
      v14 = 0;
    }
LABEL_18:
    NtClose(TargetHandle);
LABEL_19:
    LOBYTE(v15) = v14;
    result = v20(
               v19,
               v13,
               *a2,
               v15,
               (unsigned __int64)ObjectInformation & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v27 & -(__int64)((v13 & 4) != 0),
               (unsigned __int64)v24 & -(__int64)((v13 & 0x10) != 0),
               (unsigned __int64)v26 & -(__int64)((v13 & 0x20) != 0),
               v17 & (unsigned int)-((v13 & 0x20) != 0));
    if ( !(_BYTE)result )
      return result;
    v8 = v21;
    goto LABEL_21;
  }
  return result;
}
