/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1401393DC
 * Callers:
 *     xxxPointerCallHook @ 0x140138DC4 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140139028 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // r9
  _OWORD v15[5]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v16; // [rsp+98h] [rbp-70h]
  __int128 v17; // [rsp+A8h] [rbp-60h]
  _OWORD v18[7]; // [rsp+B8h] [rbp-50h] BYREF

  result = FindThreadPointerData(a1, a2);
  v7 = (__int64)result;
  if ( result )
  {
    UserSessionState = W32GetUserSessionState(v6, v5);
    LOBYTE(v9) = 1;
    v10 = *(_QWORD *)(UserSessionState + 3256);
    v11 = HMValidateHandleNoSecure(*(_QWORD *)(v7 + 40), v9);
    memset_0(v15, 0, 0x70uLL);
    if ( v11 )
    {
      LODWORD(v15[0]) = 4;
      *(_QWORD *)&v16 = v11;
      HIDWORD(v16) = 2;
    }
    v12 = *(_QWORD *)(v7 + 24);
    v13 = *(_DWORD *)(v7 + 32);
    v14 = *(unsigned int *)(v7 + 20);
    v18[0] = v15[0];
    v18[1] = v15[1];
    v18[2] = v15[2];
    v18[3] = v15[3];
    v18[4] = v15[4];
    v18[5] = v16;
    v18[6] = v17;
    return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(v10, a1, a2, v14, v12, v13, v18);
  }
  return result;
}
