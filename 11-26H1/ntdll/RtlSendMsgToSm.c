/*
 * XREFs of RtlSendMsgToSm @ 0x180108ED0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x1801600F0 (ZwAlpcSendWaitReceivePort.c)
 */

__int64 __fastcall RtlSendMsgToSm(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // edx
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  if ( *(_DWORD *)(a2 + 40) > 8u )
    return 3221225474LL;
  v3 = 2LL * *(int *)(a2 + 40);
  v8 = 328LL;
  v4 = *((_DWORD *)&RtlpSmMessageInfo + 2 * v3 + 2);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  LOWORD(v3) = *((_WORD *)&RtlpSmMessageInfo + 4 * v3) + 8;
  *(_WORD *)a2 = v3;
  v5 = v4 & 1;
  *(_WORD *)(a2 + 2) = v3 + 40;
  v6 = a2;
  if ( v5 )
    v6 = 0LL;
  result = ZwAlpcSendWaitReceivePort(a1, (v5 ^ 1u) << 17, a2, 0LL, v6, &v8, 0LL, 0LL);
  if ( (int)result >= 0 )
    return *(unsigned int *)(a2 + 44);
  return result;
}
