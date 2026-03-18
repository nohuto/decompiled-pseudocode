/*
 * XREFs of ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1402115B0
 * Callers:
 *     <none>
 * Callees:
 *     W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___ @ 0x1402113F8 (W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008___.c)
 */

__int64 __fastcall RIMOnTTMDeviceSetInputMode(__int64 a1, int a2)
{
  unsigned int *v2; // rax
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]

  v2 = *(unsigned int **)(a1 + 320);
  v4[1] = a1;
  v5 = a2;
  v4[0] = v2;
  return W32AttachToSessionAndExecute__lambda_015c32a42809731270cc377abf7a5008_(*v2, (__int64)v4);
}
