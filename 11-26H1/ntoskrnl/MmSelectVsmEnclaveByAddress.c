/*
 * XREFs of MmSelectVsmEnclaveByAddress @ 0x140B2CB38
 * Callers:
 *     PsCallEnclave @ 0x140803C20 (PsCallEnclave.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14027EB70 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402B1F20 (MiObtainReferencedVadEx.c)
 *     MiReadVadFlags @ 0x14045E590 (MiReadVadFlags.c)
 */

__int64 __fastcall MmSelectVsmEnclaveByAddress(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  ULONG_PTR v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v9 = HIDWORD(a1);
  *a3 = 0LL;
  v8 = 0;
  v4 = MiObtainReferencedVadEx(a2, 0LL, (int *)&v8);
  if ( !v4 )
    return v8;
  v6 = -1073741800;
  if ( (MiReadVadFlags(v4) & 0x880000) == 0x880000 && (*(_DWORD *)(v5 + 72) & 1) == 0 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v5 + 80) + 16LL)) <= 1 )
      __fastfail(0xEu);
    v6 = 0;
    *a3 = *(_QWORD *)(v5 + 80);
  }
  MiUnlockAndDereferenceVad((volatile signed __int32 *)v5);
  return v6;
}
