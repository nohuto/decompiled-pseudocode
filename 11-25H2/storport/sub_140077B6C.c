/*
 * XREFs of sub_140077B6C @ 0x140077B6C
 * Callers:
 *     sub_14005D618 @ 0x14005D618 (sub_14005D618.c)
 * Callees:
 *     sub_140020090 @ 0x140020090 (sub_140020090.c)
 */

__int64 __fastcall sub_140077B6C(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 184);
  if ( !sub_140020090(a1 + 376, 14) )
    return 3221225659LL;
  if ( *(_WORD *)(v2 + 16) < 0x38u || !*(_WORD *)(v2 + 18) )
    return 3221225485LL;
  v5 = *(_QWORD *)(v2 + 24);
  *(_QWORD *)(v5 + 40) = 0LL;
  *(_QWORD *)(v5 + 16) = StorPortFreeDeviceBase;
  *(_QWORD *)(v5 + 24) = StorPortFreeDeviceBase;
  *(_QWORD *)(v5 + 48) = sub_140077AD0;
  *(_DWORD *)v5 = 65592;
  *(_QWORD *)(v5 + 8) = a1;
  return 0LL;
}
