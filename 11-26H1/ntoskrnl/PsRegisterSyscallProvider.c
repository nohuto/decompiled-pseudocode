/*
 * XREFs of PsRegisterSyscallProvider @ 0x1407F2F80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14079566C (VslRevokeSyscallProviderServiceTables.c)
 *     PspInsertSyscallProvider @ 0x1407F342C (PspInsertSyscallProvider.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PsRegisterSyscallProvider(__int64 *Object, __int64 a2, _QWORD *a3)
{
  char *Pool2; // rax
  char *v8; // rdi
  __int64 v9; // rbx
  __int128 v10; // xmm0
  int inserted; // ebx
  int v12; // esi
  char v13[8]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+28h] [rbp-90h]
  int v15; // [rsp+30h] [rbp-88h]

  if ( !PspSyscallProvidersEnabled )
    return 3221225629LL;
  if ( *(_BYTE *)a2 != 1 )
    return 3221225561LL;
  Pool2 = (char *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = *(_QWORD *)(a2 + 24);
  memset_0(Pool2, 0, 0x60uLL);
  v10 = *(_OWORD *)(a2 + 4);
  *((_QWORD *)v8 + 4) = Object;
  *((_OWORD *)v8 + 1) = v10;
  ObfReferenceObjectWithTag(Object, 0x63537350u);
  *((_QWORD *)v8 + 5) = v9;
  *((_QWORD *)v8 + 6) = 1LL;
  *((_QWORD *)v8 + 7) = 0LL;
  *((_QWORD *)v8 + 8) = 0LL;
  *((_QWORD *)v8 + 10) = v8 + 72;
  *((_QWORD *)v8 + 9) = v8 + 72;
  *((_DWORD *)v8 + 22) = 0;
  *((_DWORD *)v8 + 23) = -1;
  memset_0(v13, 0, 0x68uLL);
  v14 = Object[3];
  inserted = VslpEnterIumSecureMode(2u, 0x5Bu, 0, (__int64)v13);
  if ( inserted < 0 )
    goto LABEL_12;
  v12 = v15;
  *((_DWORD *)v8 + 23) = v15;
  inserted = PspInsertSyscallProvider(v8);
  if ( inserted < 0 )
  {
    if ( v12 != -1 )
      VslRevokeSyscallProviderServiceTables(Object[3]);
LABEL_12:
    ObfDereferenceObjectWithTag(*((PVOID *)v8 + 4), 0x63537350u);
    ExFreePoolWithTag(v8, 0x63537350u);
    return (unsigned int)inserted;
  }
  *a3 = v8;
  return 0;
}
