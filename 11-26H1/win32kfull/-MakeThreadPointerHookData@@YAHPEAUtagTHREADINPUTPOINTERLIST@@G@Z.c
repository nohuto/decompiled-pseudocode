/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x140135B9C
 * Callers:
 *     xxxPointerCallHook @ 0x1401360C4 (xxxPointerCallHook.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x140136348 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

struct tagTHREADPOINTERDATA *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct tagTHREADPOINTERDATA *result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  int v13; // [rsp+30h] [rbp-D8h]
  _OWORD v14[5]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+98h] [rbp-70h]
  __int128 v16; // [rsp+A8h] [rbp-60h]
  _OWORD v17[7]; // [rsp+B8h] [rbp-50h] BYREF

  result = FindThreadPointerData(a1, a2);
  v7 = (__int64)result;
  if ( result )
  {
    v8 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 3256);
    v9 = HMValidateHandleNoSecure(*(_QWORD *)(v7 + 40), 1);
    memset_0(v14, 0, 0x70uLL);
    if ( v9 )
    {
      LODWORD(v14[0]) = 4;
      *(_QWORD *)&v15 = v9;
      HIDWORD(v15) = 2;
    }
    v10 = *(unsigned int *)(v7 + 20);
    v11 = *(_DWORD *)(v7 + 32);
    v17[0] = v14[0];
    v13 = v11;
    v12 = *(_QWORD *)(v7 + 24);
    v17[2] = v14[2];
    v17[1] = v14[1];
    v17[4] = v14[4];
    v17[3] = v14[3];
    v17[6] = v16;
    v17[5] = v15;
    return (struct tagTHREADPOINTERDATA *)CTouchProcessor::AddThreadPointerHookData(v8, a1, a2, v10, v12, v13, v17);
  }
  return result;
}
