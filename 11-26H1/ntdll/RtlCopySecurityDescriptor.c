/*
 * XREFs of RtlCopySecurityDescriptor @ 0x1800E6A20
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlCopySecurityDescriptor(
        PSECURITY_DESCRIPTOR InputSecurityDescriptor,
        PSECURITY_DESCRIPTOR *OutputSecurityDescriptor)
{
  __int16 v4; // cx
  char *v5; // rax
  __int64 v6; // r9
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  PVOID Heap_0; // rax
  char *v15; // rax

  v4 = *((_WORD *)InputSecurityDescriptor + 1) & 0x8000;
  if ( *((__int16 *)InputSecurityDescriptor + 1) < 0 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 1) )
      goto LABEL_27;
    v5 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 1);
  }
  else
  {
    v5 = (char *)*((_QWORD *)InputSecurityDescriptor + 1);
  }
  if ( v5 )
  {
    v6 = (4LL * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFCLL;
    goto LABEL_5;
  }
LABEL_27:
  v6 = 0LL;
LABEL_5:
  if ( (*((_BYTE *)InputSecurityDescriptor + 2) & 4) != 0 )
  {
    if ( v4 )
    {
      if ( !*((_DWORD *)InputSecurityDescriptor + 4) )
        goto LABEL_30;
      v7 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 4);
    }
    else
    {
      v7 = (char *)*((_QWORD *)InputSecurityDescriptor + 4);
    }
    if ( v7 )
    {
      v8 = (*((unsigned __int16 *)v7 + 1) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_10;
    }
  }
LABEL_30:
  v8 = 0LL;
LABEL_10:
  if ( v4 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 2) )
      goto LABEL_22;
    v9 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 2);
  }
  else
  {
    v9 = (char *)*((_QWORD *)InputSecurityDescriptor + 2);
  }
  if ( !v9 )
  {
LABEL_22:
    v10 = 0LL;
    goto LABEL_14;
  }
  v10 = (4LL * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFCLL;
LABEL_14:
  if ( (*((_BYTE *)InputSecurityDescriptor + 2) & 0x10) == 0 )
    goto LABEL_15;
  if ( v4 )
  {
    if ( !*((_DWORD *)InputSecurityDescriptor + 3) )
      goto LABEL_15;
    v15 = (char *)InputSecurityDescriptor + *((unsigned int *)InputSecurityDescriptor + 3);
  }
  else
  {
    v15 = (char *)*((_QWORD *)InputSecurityDescriptor + 3);
  }
  if ( !v15 )
  {
LABEL_15:
    v11 = 0LL;
    goto LABEL_16;
  }
  v11 = (*((unsigned __int16 *)v15 + 1) + 3LL) & 0xFFFFFFFCLL;
LABEL_16:
  v12 = v10 + v6 + v8 + v11;
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v12 + 20);
  *OutputSecurityDescriptor = Heap_0;
  if ( !Heap_0 )
    return -1073741801;
  memmove(Heap_0, InputSecurityDescriptor, v12 + 20);
  return 0;
}
