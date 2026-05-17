/*
 * XREFs of RtlInitializeRXact @ 0x1800FD2D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlAbortRXact @ 0x1800FD820 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800FD868 (RXactpCommit.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     ZwCreateKey @ 0x18015F2E0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18015FB30 (ZwSetValueKey.c)
 *     NtDeleteKey @ 0x180160AB0 (NtDeleteKey.c)
 *     ZwDeleteValueKey @ 0x180160B10 (ZwDeleteValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlInitializeRXact(__int64 a1, char a2, __int64 *a3)
{
  unsigned int v5; // r14d
  size_t v7; // rax
  __int64 result; // rax
  __int64 Heap_0; // rax
  HANDLE v10; // rbx
  __int64 v11; // rax
  _DWORD *v12; // rsi
  int v13; // eax
  unsigned int *v14; // rcx
  int v15; // ebx
  size_t v16; // rax
  __int64 v17; // rbx
  int v18; // esi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v20; // [rsp+48h] [rbp-B8h] BYREF
  int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v23[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+5Ch] [rbp-A4h]
  const wchar_t *v25; // [rsp+60h] [rbp-A0h]
  _WORD v26[2]; // [rsp+68h] [rbp-98h] BYREF
  int v27; // [rsp+6Ch] [rbp-94h]
  const wchar_t *v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[2]; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v30[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h]
  _WORD *v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+A0h] [rbp-60h]
  int v34; // [rsp+A4h] [rbp-5Ch]
  __int128 v35; // [rsp+A8h] [rbp-58h]
  __int128 v36; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h] BYREF
  int v38; // [rsp+D0h] [rbp-30h]
  _BYTE v39[128]; // [rsp+E0h] [rbp-20h] BYREF

  Handle = 0LL;
  v30[1] = 0;
  v34 = 0;
  v37 = 0LL;
  v5 = 12;
  v38 = 0;
  v21 = 0;
  v20 = 0;
  v24 = 0;
  v29[0] = 0LL;
  v29[1] = 0LL;
  v27 = 0;
  v28 = L"RXACT";
  v7 = 2 * wcslen(L"RXACT");
  v30[0] = 48;
  v31 = a1;
  v33 = 192;
  if ( v7 >= 0xFFFE )
    LOWORD(v7) = -4;
  v26[0] = v7;
  v26[1] = v7 + 2;
  v32 = v26;
  v35 = 0LL;
  result = ZwCreateKey(&Handle, 196639LL, v30, 0LL, 0LL, 0, &v21);
  if ( (int)result < 0 )
    return result;
  Heap_0 = RtlAllocateHeap_0();
  *a3 = Heap_0;
  if ( !Heap_0 )
  {
    NtDeleteKey(Handle);
    NtClose(Handle);
    return 3221225495LL;
  }
  *(_QWORD *)(Heap_0 + 8) = Handle;
  *(_QWORD *)Heap_0 = a1;
  *(_BYTE *)(Heap_0 + 16) = 1;
  *(_QWORD *)(Heap_0 + 24) = 0LL;
  if ( v21 == 1 )
  {
    LODWORD(v37) = 1;
    v15 = ZwSetValueKey(Handle, v29, 0LL, 0LL, &v37, 12);
    if ( v15 >= 0 )
      return 1073741828LL;
    NtDeleteKey(Handle);
    goto LABEL_12;
  }
  v10 = Handle;
  v22 = 24;
  v36 = 0LL;
  v11 = RtlAllocateHeap_0();
  v12 = (_DWORD *)v11;
  if ( !v11 )
  {
    v15 = -1073741670;
    goto LABEL_12;
  }
  v13 = NtQueryValueKey(v10, &v36, 2LL, v11, v22, &v22);
  v14 = v12 + 2;
  if ( v13 == -1073741772 )
  {
    v15 = 0;
    *v14 = 0;
    v12[1] = 0;
  }
  else
  {
    v15 = v13;
    if ( v13 < 0 && v13 != -2147483643 )
      goto LABEL_11;
  }
  v5 = *v14;
  if ( v15 >= 0 )
    memmove(&v37, v12 + 3, v5);
LABEL_11:
  RtlFreeHeap_0();
  if ( v15 < 0 )
  {
LABEL_12:
    NtClose(Handle);
LABEL_13:
    RtlFreeHeap_0();
    return (unsigned int)v15;
  }
  if ( v5 != 12 || (_DWORD)v37 != 1 )
  {
    v15 = -1073741736;
    goto LABEL_12;
  }
  v24 = 0;
  v25 = L"Log";
  v16 = 2 * wcslen(L"Log");
  if ( v16 >= 0xFFFE )
    LOWORD(v16) = -4;
  v23[0] = v16;
  v23[1] = v16 + 2;
  if ( (int)NtQueryValueKey(Handle, v23, 0LL, v39, 128, &v20) < 0 )
    return 0LL;
  if ( !a2 )
    return 2147483672LL;
  result = NtQueryValueKey(Handle, v23, 1LL, 0LL, 0, &v20);
  if ( (_DWORD)result == -1073741789 )
  {
    v17 = RtlAllocateHeap_0();
    if ( v17 )
    {
      v18 = NtQueryValueKey(Handle, v23, 1LL, v17, v20, &v20);
      if ( v18 >= 0 )
      {
        *(_QWORD *)(*a3 + 24) = v17 + *(unsigned int *)(v17 + 8);
        *(_BYTE *)(*a3 + 16) = 0;
        v18 = RXactpCommit(*a3);
        if ( v18 >= 0 )
        {
          ZwDeleteValueKey(Handle, v23);
          *(_QWORD *)(*a3 + 24) = v17;
          return RtlAbortRXact(*a3);
        }
      }
      RtlFreeHeap_0();
      v15 = v18;
      goto LABEL_13;
    }
    return 3221225495LL;
  }
  return result;
}
