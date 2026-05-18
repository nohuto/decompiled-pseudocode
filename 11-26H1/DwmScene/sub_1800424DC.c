/*
 * XREFs of sub_1800424DC @ 0x1800424DC
 * Callers:
 *     sub_1800437B0 @ 0x1800437B0 (sub_1800437B0.c)
 * Callees:
 *     sub_180010F00 @ 0x180010F00 (sub_180010F00.c)
 *     sub_1800162D0 @ 0x1800162D0 (sub_1800162D0.c)
 */

_QWORD *__fastcall sub_1800424DC(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  __int64 v3; // r11
  __int16 v4; // r9
  __int64 v5; // r10
  volatile signed __int32 *v6; // rcx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  result = sub_1800162D0(v7, a2);
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_QWORD *)v3 = &Spectre::Engine::MaterialInternal::TextureAsyncCompletionHandler::`vftable';
  *(_QWORD *)(v3 + 8) = *result;
  *(_QWORD *)(v3 + 16) = result[1];
  result[1] = 0LL;
  *result = 0LL;
  *(_WORD *)(v3 + 24) = v4;
  *(_QWORD *)(v3 + 32) = v5;
  v6 = (volatile signed __int32 *)result[1];
  if ( v6 )
    return (_QWORD *)sub_180010F00(v6);
  return result;
}
