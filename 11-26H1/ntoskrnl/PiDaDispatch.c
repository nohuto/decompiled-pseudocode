/*
 * XREFs of PiDaDispatch @ 0x1407B3E60
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1403FA1C0 (IofCompleteRequest.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PiDaDispatch(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  IRP *v3; // r8
  __int64 v4; // rbp
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  wchar_t *v9; // rcx
  __int64 v10; // rdi
  int v11; // r11d
  int v12; // r10d
  unsigned int v13; // ebx

  v2 = *(_QWORD *)(a2 + 184);
  v3 = (IRP *)a2;
  v4 = a1;
  v5 = *(_QWORD *)(v2 + 48);
  if ( *(_BYTE *)v2 )
  {
    if ( *(_QWORD *)(v5 + 24) < 5uLL )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    v13 = -1073741808;
    *(_DWORD *)(a2 + 48) = -1073741808;
LABEL_15:
    IofCompleteRequest(v3, 0);
    return v13;
  }
  v6 = *(_QWORD *)(v5 + 96);
  if ( !v6 )
    goto LABEL_9;
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    v9 = (&IrpHandlingTable)[v8];
    v10 = v6 - (_QWORD)v9;
    do
    {
      v11 = *(wchar_t *)((char *)v9 + v10);
      v12 = *v9 - v11;
      if ( v12 )
        break;
      ++v9;
    }
    while ( v11 );
    if ( !v12 )
      break;
    ++v7;
    v8 += 3LL;
    if ( v8 >= 15 )
      goto LABEL_9;
  }
  if ( v7 == -1 )
  {
LABEL_9:
    v13 = -1073741811;
    v3->IoStatus.Status = -1073741811;
    goto LABEL_15;
  }
  *(_QWORD *)(v5 + 24) = v7;
  a2 = (__int64)v3;
  a1 = v4;
  return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
}
