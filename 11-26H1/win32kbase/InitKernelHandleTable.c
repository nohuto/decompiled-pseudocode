/*
 * XREFs of InitKernelHandleTable @ 0x1402F02B4
 * Callers:
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 * Callees:
 *     Win32CreateSection @ 0x1401641E4 (Win32CreateSection.c)
 */

__int64 __fastcall InitKernelHandleTable(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  PVOID *v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  NTSTATUS v20; // ebx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // [rsp+20h] [rbp-38h]
  __int64 v27; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp+10h] BYREF

  v27 = 2621440LL;
  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  result = Win32CreateSection((_QWORD *)(UserSessionState + 19880), v4, v5, (__int64)&v27, v26, 0x4000000);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v8, v7, v9) + 19864) = 0LL;
    v13 = (PVOID *)(W32GetUserSessionState(v11, v10, v12) + 19864);
    v17 = W32GetUserSessionState(v15, v14, v16);
    v20 = MmMapViewInSessionSpace(*(PVOID *)(v17 + 19880), v13, &ViewSize);
    if ( v20 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v22 = W32GetUserSessionState(v19, v18, v21);
      ObfDereferenceObject(*(PVOID *)(v22 + 19872));
      *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 19872) = 0LL;
      return (unsigned int)v20;
    }
  }
  return result;
}
