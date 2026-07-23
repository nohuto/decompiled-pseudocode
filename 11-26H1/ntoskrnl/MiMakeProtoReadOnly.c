/*
 * XREFs of MiMakeProtoReadOnly @ 0x14031E310
 * Callers:
 *     MiHardFaultPageRelease @ 0x14031E950 (MiHardFaultPageRelease.c)
 * Callees:
 *     MiUpdateProtectionMask @ 0x1402E58D0 (MiUpdateProtectionMask.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

unsigned __int64 __fastcall MiMakeProtoReadOnly(__int64 *a1, __int64 a2)
{
  __int64 v2; // r10
  unsigned int updated; // eax
  __int64 v4; // r8
  unsigned __int64 result; // rax
  unsigned __int64 *v6; // r9

  v2 = a2;
  if ( (unsigned __int64)a1 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)a1 <= 0xFFFFF6FB7DBED7F8uLL )
    MiReadPteShadow((unsigned __int64)a1, *a1);
  updated = MiUpdateProtectionMask(1u, (*(_DWORD *)(v2 + 32) >> 22) & 3);
  result = (32LL * updated) ^ (v4 ^ (32LL * updated)) & 0xFFFFFFFFFFFFFC1FuLL;
  *v6 = result;
  return result;
}
