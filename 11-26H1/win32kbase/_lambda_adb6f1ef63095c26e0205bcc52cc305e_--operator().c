/*
 * XREFs of _lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator() @ 0x1401CEDEC
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___ @ 0x1401CED20 (W32AttachToProcessAndExecute__lambda_adb6f1ef63095c26e0205bcc52cc305e___.c)
 * Callees:
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 */

__int64 __fastcall lambda_adb6f1ef63095c26e0205bcc52cc305e_::operator()(_BYTE *a1)
{
  _BYTE *v1; // rdx
  int v2; // eax
  unsigned int v3; // eax
  __int64 i; // rcx
  __int64 v5; // rax

  v1 = a1 + 8;
  v2 = *(_DWORD *)(*(_QWORD *)a1 + 12LL);
  if ( a1[8] )
    v3 = v2 | 0x2000000;
  else
    v3 = v2 & 0xFDFFFFFF;
  *(_DWORD *)(*(_QWORD *)a1 + 12LL) = v3;
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 328LL); i; i = *(_QWORD *)(i + 696) )
  {
    if ( *v1 )
      _InterlockedOr((volatile signed __int32 *)(i + 520), 0x20000000u);
    else
      _InterlockedAnd((volatile signed __int32 *)(i + 520), 0xDFFFFFFF);
    v5 = *(_QWORD *)(i + 512);
    if ( *v1 )
      *(_DWORD *)(v5 + 28) |= 0x20000000u;
    else
      *(_DWORD *)(v5 + 28) &= ~0x20000000u;
  }
  return 0LL;
}
