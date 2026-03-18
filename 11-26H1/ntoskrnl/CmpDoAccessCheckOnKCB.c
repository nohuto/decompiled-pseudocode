/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x1408597A8
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x140A9F648 (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PsGetCurrentThreadProcess @ 0x1404AA5F0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeDeleteAccessState @ 0x1408F16E0 (SeDeleteAccessState.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     CmpCheckKeyBodyAccess @ 0x140930990 (CmpCheckKeyBodyAccess.c)
 *     SeCreateAccessStateEx @ 0x1409843E0 (SeCreateAccessStateEx.c)
 */

char __fastcall CmpDoAccessCheckOnKCB(__int64 a1, __int64 a2, int a3, char a4)
{
  char v7; // si
  int v8; // r9d
  int v9; // ecx
  _QWORD *v11; // rdi
  char *v12; // rbx
  unsigned int CurrentThreadProcess; // eax
  char v14; // bl
  PVOID Object[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _BYTE v16[160]; // [rsp+60h] [rbp-1C8h] BYREF
  _BYTE v17[224]; // [rsp+100h] [rbp-128h] BYREF

  memset_0(v16, 0, sizeof(v16));
  memset_0(v17, 0, sizeof(v17));
  v7 = 0;
  LOBYTE(v8) = a4;
  LOBYTE(v9) = a4;
  Object[0] = 0LL;
  if ( (int)ObCreateObjectEx(v9, (_DWORD)CmKeyObjectType, 0, v8) < 0 )
    return 0;
  v11 = Object[0];
  *((_QWORD *)Object[0] + 7) = 0LL;
  v11[8] = 0LL;
  *(_DWORD *)v11 = 1803104306;
  v11[1] = 0LL;
  *((_DWORD *)v11 + 12) = 0;
  v11[10] = v11 + 9;
  v11[9] = v11 + 9;
  v12 = (char *)CmKeyObjectType + 76;
  CurrentThreadProcess = (unsigned int)PsGetCurrentThreadProcess();
  LODWORD(Object[0]) = SeCreateAccessStateEx(
                         (unsigned int)KeGetCurrentThread(),
                         CurrentThreadProcess,
                         (unsigned int)v16,
                         (unsigned int)v17,
                         a3,
                         (__int64)v12);
  if ( SLODWORD(Object[0]) >= 0 )
  {
    v11[1] = a1;
    v14 = CmpCheckKeyBodyAccess(v11, (__int64)Object);
    SeDeleteAccessState(v16);
    v11[1] = 0LL;
    v7 = v14;
  }
  ObfDereferenceObject(v11);
  return v7;
}
