/*
 * XREFs of ?CloneLogicalCollection@@YAHPEAEKPEAKK@Z @ 0x14020A60C
 * Callers:
 *     ?BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z @ 0x140209F58 (-BuildReportDescriptor@@YAHGGPEAUtagUSAGE_PROPERTIES@@KKPEAU_HIDP_DEVICE_DESC@@@Z.c)
 * Callees:
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall CloneLogicalCollection(unsigned __int8 *a1, int a2, unsigned int *a3, unsigned int a4)
{
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // ebp
  int v14; // r8d
  __int64 UserSessionState; // rax
  __int64 v16; // rbx

  if ( a4 <= *(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, (_DWORD)a3) + 248) )
    return 0LL;
  v13 = a4 - *(_DWORD *)(W32GetUserSessionState(v9, v8, v10) + 248) + 1;
  if ( a2 - *a3 <= v13 )
    return 0LL;
  UserSessionState = W32GetUserSessionState(v12, v11, v14);
  v16 = *a3;
  memmove(&a1[v16], &a1[*(unsigned int *)(UserSessionState + 248)], v13);
  *a3 = v16 + v13;
  return 1LL;
}
