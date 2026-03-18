/*
 * XREFs of NVMeSetHostBehaviorSupportCompletion @ 0x14002A850
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetHostBehaviorSupportCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r10
  __int64 v4; // r8
  unsigned int v5; // r9d

  result = GetSrbExtension(a2);
  v5 = *(_DWORD *)(v3 + 4064) | 0x400;
  if ( *(_BYTE *)(v4 + 3) != 1 )
    v5 = *(_DWORD *)(v3 + 4064) & 0xFFFFFBFF;
  *(_DWORD *)(v3 + 4064) = v5;
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
