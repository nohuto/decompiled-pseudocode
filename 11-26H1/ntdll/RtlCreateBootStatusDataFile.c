/*
 * XREFs of RtlCreateBootStatusDataFile @ 0x18010BE60
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlIsStateSeparationEnabled @ 0x1800DBC50 (RtlIsStateSeparationEnabled.c)
 *     RtlRestoreBootStatusDefaults @ 0x18010C090 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x18010C1AC (RtlpGetBootStatusPathFromRegistry.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtWriteFile @ 0x18015F040 (NtWriteFile.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwCreateFile @ 0x18015F9E0 (ZwCreateFile.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlCreateBootStatusDataFile(const wchar_t *a1)
{
  char v1; // si
  size_t v2; // rax
  int v3; // edi
  void *Heap_0; // rax
  void *v5; // r14
  const wchar_t *v7; // rbx
  __int128 v8; // [rsp+60h] [rbp-19h] BYREF
  __int128 v9; // [rsp+70h] [rbp-9h] BYREF
  _DWORD v10[2]; // [rsp+80h] [rbp+7h] BYREF
  __int64 v11; // [rsp+88h] [rbp+Fh]
  __int128 *v12; // [rsp+90h] [rbp+17h]
  int v13; // [rsp+98h] [rbp+1Fh]
  int v14; // [rsp+9Ch] [rbp+23h]
  __int128 v15; // [rsp+A0h] [rbp+27h]
  HANDLE Handle; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v17; // [rsp+E8h] [rbp+6Fh] BYREF
  const wchar_t *v18; // [rsp+F0h] [rbp+77h] BYREF

  v1 = 0;
  v10[1] = 0;
  v14 = 0;
  Handle = 0LL;
  v18 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 )
  {
    *((_QWORD *)&v8 + 1) = a1;
LABEL_3:
    v2 = 2 * wcslen(a1);
    if ( v2 >= 0xFFFE )
      LOWORD(v2) = -4;
    LOWORD(v8) = v2;
    WORD1(v8) = v2 + 2;
    goto LABEL_6;
  }
  if ( (int)RtlpGetBootStatusPathFromRegistry(&v18) < 0 )
  {
    v7 = L"\\OSDataRoot\\Windows\\bootstat.dat";
    if ( !RtlIsStateSeparationEnabled() )
      v7 = L"\\SystemRoot\\bootstat.dat";
  }
  else
  {
    v7 = v18;
    v1 = 1;
  }
  *((_QWORD *)&v8 + 1) = v7;
  if ( v7 )
  {
    a1 = v7;
    goto LABEL_3;
  }
LABEL_6:
  v12 = &v8;
  v10[0] = 48;
  v11 = 0LL;
  v13 = 64;
  v15 = 0LL;
  v17 = 67584LL;
  v3 = ZwCreateFile(&Handle, 1180063LL, v10, &v9, &v17, 4, 0, 2, 32800, 0LL, 0);
  if ( v3 >= 0 )
  {
    Heap_0 = (void *)RtlAllocateHeap_0();
    v5 = Heap_0;
    if ( Heap_0 )
    {
      memset_thunk_772440563353939046(Heap_0, 254, 0x10800uLL);
      v17 = 0LL;
      v3 = NtWriteFile(Handle, 0LL, 0LL, 0LL, &v9, v5, 67584, &v17, 0LL);
      if ( v3 >= 0 )
        v3 = RtlRestoreBootStatusDefaults(Handle);
      RtlFreeHeap_0();
    }
    else
    {
      v3 = -1073741801;
    }
  }
  if ( Handle )
    NtClose(Handle);
  if ( v1 )
    RtlFreeHeap_0();
  return (unsigned int)v3;
}
