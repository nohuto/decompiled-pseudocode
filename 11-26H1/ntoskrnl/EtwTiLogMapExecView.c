/*
 * XREFs of EtwTiLogMapExecView @ 0x140ACA21C
 * Callers:
 *     MiMapViewOfSectionExCommon @ 0x1409EDD40 (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     EtwProviderEnabled @ 0x140257D70 (EtwProviderEnabled.c)
 *     EtwpTiFillProcessIdentity @ 0x140259590 (EtwpTiFillProcessIdentity.c)
 *     EtwpTiFillThreadIdentity @ 0x14049BCE8 (EtwpTiFillThreadIdentity.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN EtwTiLogMapExecView(__int64 a1, char a2, ...)
{
  BOOLEAN result; // al
  __int64 v5; // rcx
  _KPROCESS *Process; // rsi
  const EVENT_DESCRIPTOR *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v10; // r9d
  int v11; // eax
  int v12; // r9d
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  REGHANDLE v19; // rcx
  unsigned __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[18]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+1B0h] [rbp+B0h] BYREF
  va_list va; // [rsp+1B0h] [rbp+B0h]
  __int64 v25; // [rsp+1B8h] [rbp+B8h] BYREF
  va_list va1; // [rsp+1B8h] [rbp+B8h]
  __int64 v27; // [rsp+1C0h] [rbp+C0h] BYREF
  va_list va2; // [rsp+1C0h] [rbp+C0h]
  va_list va3; // [rsp+1C8h] [rbp+C8h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v23 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v25 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v27 = va_arg(va3, _QWORD);
  result = EtwProviderEnabled(EtwThreatIntProvRegHandle, 0, 0xF00uLL);
  if ( result )
  {
    v5 = 0LL;
    Process = KeGetCurrentThread()->ApcState.Process;
    if ( Process == (_KPROCESS *)a1 )
      v5 = 8LL;
    v7 = *(const EVENT_DESCRIPTOR **)((char *)off_1400019F0 + (a2 != 0 ? 0 : 0x10) + v5);
    result = EtwEventEnabled(EtwThreatIntProvRegHandle, v7);
    if ( result )
    {
      v8 = EtwpTiFillProcessIdentity(UserData, (__int64)Process, &v20);
      v9 = EtwpTiFillThreadIdentity(&UserData[v8].Ptr, (__int64)KeGetCurrentThread());
      v11 = EtwpTiFillProcessIdentity(&UserData[v9 + v10].Ptr, a1, &v21);
      v13 = v11 + v12;
      v14 = v11 + v12 + 1;
      v15 = v13;
      UserData[v15].Ptr = (ULONGLONG)va;
      *(_QWORD *)&UserData[v15].Size = 8LL;
      v16 = v14;
      UserData[v16].Ptr = (ULONGLONG)va1;
      *(_QWORD *)&UserData[v16].Size = 8LL;
      v17 = v14 + 1;
      v14 += 2;
      v17 *= 2LL;
      *(&UserData[0].Ptr + v17) = (ULONGLONG)va2;
      *((_QWORD *)&UserData[0].Size + v17) = 4LL;
      v18 = v14;
      UserData[v18].Ptr = (ULONGLONG)va3;
      v19 = EtwThreatIntProvRegHandle;
      *(_QWORD *)&UserData[v18].Size = 4LL;
      return EtwWrite(v19, v7, 0LL, v14 + 1, UserData);
    }
  }
  return result;
}
