/*
 * XREFs of InitKernelHandleTable @ 0x1402E82B0
 * Callers:
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitKernelHandleTable(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // [rsp+50h] [rbp+8h] BYREF
  int v19; // [rsp+54h] [rbp+Ch]
  ULONG_PTR ViewSize; // [rsp+58h] [rbp+10h] BYREF

  v19 = 0;
  v18 = 2621440;
  v2 = (_QWORD *)(W32GetUserSessionState(a1, a2) + 19848);
  result = MmCreateSection(v2, 983071LL, 0LL, &v18, 4, 0x4000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ObDeleteCapturedInsertInfo(*v2);
    ViewSize = 0LL;
    *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19832) = 0LL;
    v8 = (PVOID *)(W32GetUserSessionState(v7, v6) + 19832);
    UserSessionState = W32GetUserSessionState(v10, v9);
    v14 = MmMapViewInSessionSpace(*(PVOID *)(UserSessionState + 19848), v8, &ViewSize);
    if ( v14 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v15 = W32GetUserSessionState(v13, v12);
      ObfDereferenceObject(*(PVOID *)(v15 + 19840));
      *(_QWORD *)(W32GetUserSessionState(v17, v16) + 19840) = 0LL;
      return (unsigned int)v14;
    }
  }
  return result;
}
