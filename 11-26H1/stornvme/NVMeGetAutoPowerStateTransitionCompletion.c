/*
 * XREFs of NVMeGetAutoPowerStateTransitionCompletion @ 0x1400257C0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeGetAutoPowerStateTransitionCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10
  char v6; // dl

  result = GetSrbExtension(a2);
  if ( v3 )
  {
    v6 = *(_BYTE *)(v4 + 3);
    if ( v6 != 14 )
    {
      if ( v6 == 1 )
        *(_DWORD *)(v5 + 1600) ^= ((unsigned __int8)*(_DWORD *)(v5 + 1600) ^ (unsigned __int8)((unsigned __int8)*v3 << 6)) & 0x40;
      *(_BYTE *)(result + 4225) |= 8u;
    }
  }
  return result;
}
