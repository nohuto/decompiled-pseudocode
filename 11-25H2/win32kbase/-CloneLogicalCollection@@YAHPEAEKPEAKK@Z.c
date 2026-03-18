/*
 * XREFs of ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x1401EBB78
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x1401EB4C0 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall CloneLogicalCollection(unsigned __int8 *a1, __int64 a2, unsigned int *a3, unsigned int a4)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 UserSessionState; // rax
  __int64 v14; // rbx
  __int64 result; // rax

  v6 = a2;
  if ( a4 <= *(_DWORD *)(W32GetUserSessionState(a1, a2) + 248) )
    return 0LL;
  v12 = a4 - *(_DWORD *)(W32GetUserSessionState(v9, v8) + 248) + 1;
  if ( v6 - *a3 <= v12 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v11, v10);
  v14 = *a3;
  memmove(&a1[v14], &a1[*(unsigned int *)(UserSessionState + 248)], v12);
  result = 1LL;
  *a3 = v14 + v12;
  return result;
}
