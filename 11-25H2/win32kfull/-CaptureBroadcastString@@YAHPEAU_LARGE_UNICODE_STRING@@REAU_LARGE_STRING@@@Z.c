/*
 * XREFs of ?CaptureBroadcastString@@YAHPEAU_LARGE_UNICODE_STRING@@REAU_LARGE_STRING@@@Z @ 0x1402B2EEC
 * Callers:
 *     xxxBroadcastMessageEx @ 0x1401293EC (xxxBroadcastMessageEx.c)
 *     xxxSendNotifyMessage @ 0x14012B560 (xxxSendNotifyMessage.c)
 * Callees:
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall CaptureBroadcastString(struct _LARGE_UNICODE_STRING *a1, struct _LARGE_STRING *volatile a2)
{
  bool v3; // sf
  int v4; // edx
  bool v5; // zf
  ULONG v6; // edx
  __int64 v7; // rax
  void **v8; // rdi
  NTSTATUS v9; // edx
  unsigned int v10; // ecx
  ULONG MaxBytesInUnicodeString; // [rsp+70h] [rbp+18h] BYREF
  char *v14; // [rsp+78h] [rbp+20h]

  v3 = *((int *)a2 + 1) < 0;
  v4 = *(_DWORD *)a2;
  if ( v3 )
    v4 *= 2;
  v5 = v4 == -2;
  v6 = v4 + 2;
  MaxBytesInUnicodeString = v6;
  if ( v5 )
    return 0LL;
  v7 = Win32AllocPoolWithQuotaZInit(v6, 1936946005LL);
  v8 = (void **)((char *)a1 + 8);
  v14 = (char *)a1 + 8;
  *((_QWORD *)a1 + 1) = v7;
  if ( !v7 )
    return 0LL;
  *((_DWORD *)a1 + 1) = MaxBytesInUnicodeString & 0x7FFFFFFF;
  if ( *((int *)a2 + 1) >= 0 )
  {
    v10 = *(_DWORD *)a2;
    *(_DWORD *)a1 = *(_DWORD *)a2;
    memmove(*v8, *((const void **)a2 + 1), v10);
    v9 = 0;
  }
  else
  {
    v9 = RtlMultiByteToUnicodeN(
           (PWCH)*v8,
           MaxBytesInUnicodeString,
           &MaxBytesInUnicodeString,
           *((const CHAR **)a2 + 1),
           *(_DWORD *)a2);
    *(_DWORD *)a1 = MaxBytesInUnicodeString;
  }
  *((_WORD *)*v8 + ((unsigned __int64)*(unsigned int *)a1 >> 1)) = 0;
  if ( v9 < 0 )
  {
    Win32FreePool(*v8);
    return 0LL;
  }
  return 1LL;
}
