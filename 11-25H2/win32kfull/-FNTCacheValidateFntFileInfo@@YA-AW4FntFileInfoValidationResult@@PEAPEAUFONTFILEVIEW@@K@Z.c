/*
 * XREFs of ?FNTCacheValidateFntFileInfo@@YA?AW4FntFileInfoValidationResult@@PEAPEAUFONTFILEVIEW@@K@Z @ 0x140303A40
 * Callers:
 *     UmfdLoadFontFileView @ 0x1400B5DE4 (UmfdLoadFontFileView.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FNTCacheValidateFntFileInfo(__int64 a1, __int64 a2)
{
  unsigned int v2; // r15d
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = 0LL;
  v6 = *(_QWORD *)(W32GetSessionState(a1, a2) + 96);
  while ( (unsigned int)v5 < v2 )
  {
    v7 = *(_QWORD *)(a1 + 8 * v5);
    v12 = 0LL;
    v13 = 0LL;
    if ( !(unsigned int)Win32FileInfo(*(_QWORD *)(v7 + 80), &v13, &v12) )
      return 2LL;
    v8 = *(_QWORD *)(a1 + 8 * v5);
    if ( *(_QWORD *)v8 != v13 || *(_DWORD *)(v8 + 24) != (_DWORD)v12 )
      v4 = 1;
    *(_QWORD *)v8 = v13;
    v9 = *(_QWORD *)(a1 + 8 * v5);
    v5 = (unsigned int)(v5 + 1);
    *(_DWORD *)(v9 + 24) = v12;
  }
  result = v4;
  if ( v4 == 1 )
  {
    v11 = *(_QWORD *)(v6 + 19600);
    if ( v11 )
    {
      *(_DWORD *)(v11 + 16) |= 2u;
      return 1LL;
    }
  }
  return result;
}
