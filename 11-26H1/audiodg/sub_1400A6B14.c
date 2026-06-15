/*
 * XREFs of sub_1400A6B14 @ 0x1400A6B14
 * Callers:
 *     sub_1400A8C00 @ 0x1400A8C00 (sub_1400A8C00.c)
 *     sub_1400A8D50 @ 0x1400A8D50 (sub_1400A8D50.c)
 *     sub_1400A8DE0 @ 0x1400A8DE0 (sub_1400A8DE0.c)
 *     sub_1400A8F30 @ 0x1400A8F30 (sub_1400A8F30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1400A6B14(_QWORD *a1)
{
  __int64 *v1; // r8
  __int64 v2; // rax
  volatile signed __int32 *v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  int v7; // [rsp+8h] [rbp+8h]
  __int16 v8; // [rsp+Ch] [rbp+Ch]

  v1 = a1 + 1;
  if ( *a1 )
  {
    v2 = *v1;
    *a1 = 0LL;
    v7 = 33751041;
    v8 = 1029;
    v3 = *(volatile signed __int32 **)(v2 + 24);
    v4 = *v3;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(v3, *((unsigned __int8 *)&v7 + (v4 & 0xFFFFFFF7)) | 8, v4);
    }
    while ( v5 != v4 );
  }
  return sub_1400A90C4(v1);
}
