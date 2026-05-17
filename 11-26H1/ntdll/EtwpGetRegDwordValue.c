/*
 * XREFs of EtwpGetRegDwordValue @ 0x180056FE4
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180055750 (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     StringCopyWorkerW @ 0x180104B7C (StringCopyWorkerW.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 */

__int64 __fastcall EtwpGetRegDwordValue(__int64 a1, __int64 a2, _DWORD *a3)
{
  wchar_t *Heap_0; // rsi
  size_t v5; // rax
  int v6; // ebx
  size_t v7; // rdx
  __int64 v8; // rdi
  size_t *v9; // r8
  const wchar_t *v10; // r9
  size_t v12; // rax
  size_t v13; // [rsp+20h] [rbp-60h]
  _WORD v14[2]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+34h] [rbp-4Ch]
  const wchar_t *v16; // [rsp+38h] [rbp-48h]
  _WORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  int v18; // [rsp+44h] [rbp-3Ch]
  wchar_t *v19; // [rsp+48h] [rbp-38h]
  _QWORD v20[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  int v23; // [rsp+B8h] [rbp+38h] BYREF
  int v24; // [rsp+BCh] [rbp+3Ch]

  v24 = HIDWORD(a2);
  v23 = 0;
  HIDWORD(v20[0]) = 0;
  Handle = (HANDLE)-1LL;
  Heap_0 = (wchar_t *)RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
  v15 = 0;
  v16 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control";
  v5 = 2 * wcslen(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control");
  v20[0] = 48LL;
  v20[3] = 64LL;
  v20[1] = 0LL;
  if ( v5 >= 0xFFFE )
    LOWORD(v5) = -4;
  v14[0] = v5;
  v14[1] = v5 + 2;
  v20[2] = v14;
  v21 = 0LL;
  v6 = NtOpenKey(&Handle, 131097LL, v20);
  if ( v6 >= 0 )
  {
    v8 = RtlAllocateHeap_0();
    if ( v8 )
    {
      StringCopyWorkerW(Heap_0, v7, v9, v10, v13);
      v18 = 0;
      v19 = Heap_0;
      v12 = 2 * wcslen(Heap_0);
      if ( v12 >= 0xFFFE )
        LOWORD(v12) = -4;
      v17[0] = v12;
      v17[1] = v12 + 2;
      v6 = NtQueryValueKey(Handle, v17, 2LL, v8, 16, &v23);
      if ( v6 >= 0 )
        *a3 = *(_DWORD *)(v8 + 12);
      RtlFreeHeap_0();
    }
    else
    {
      v6 = -1073741801;
    }
    NtClose(Handle);
  }
  RtlFreeHeap_0();
  return (unsigned int)v6;
}
