/*
 * XREFs of sub_14008DF74 @ 0x14008DF74
 * Callers:
 *     sub_140061988 @ 0x140061988 (sub_140061988.c)
 *     sub_1400D5D7C @ 0x1400D5D7C (sub_1400D5D7C.c)
 *     sub_1400D629C @ 0x1400D629C (sub_1400D629C.c)
 * Callees:
 *     sub_14003E60C @ 0x14003E60C (sub_14003E60C.c)
 */

__int64 __fastcall sub_14008DF74(__int64 a1)
{
  __int64 v1; // rax

  if ( *(_DWORD *)a1 == 1094997074 )
  {
    v1 = a1 + 5920;
    return sub_14003E60C(*(PDEVICE_OBJECT *)(a1 + 24), (ULONG_PTR)&unk_14014C4A8, 0x48u, 1u, v1);
  }
  if ( *(_DWORD *)a1 == 1314275652 )
  {
    v1 = *(_QWORD *)(a1 + 576) + 72LL;
    return sub_14003E60C(*(PDEVICE_OBJECT *)(a1 + 24), (ULONG_PTR)&unk_14014C4A8, 0x48u, 1u, v1);
  }
  return 3221225485LL;
}
