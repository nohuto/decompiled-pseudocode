/*
 * XREFs of NVMeGetErrorInfoLogPageCompletion @ 0x14001DEF0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall NVMeGetErrorInfoLogPageCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 result; // rax

  SrbExtension = GetSrbExtension(a2);
  v5 = 64LL;
  if ( *(_BYTE *)(v4 + 2) != 40 )
    v5 = 24LL;
  v6 = *(_QWORD *)(v5 + v4);
  v7 = *(_DWORD *)(v6 + 28);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    if ( v7 >= *(_DWORD *)(SrbExtension + 4208) )
      v7 = *(_DWORD *)(SrbExtension + 4208);
    memmove((void *)(v6 + *(unsigned int *)(v6 + 44)), *(const void **)(SrbExtension + 4160), v7);
  }
  else
  {
    *(_BYTE *)(v4 + 3) = 1;
  }
  result = NVMeFreeDmaBufferEx(
             a1,
             0,
             1,
             *(unsigned int *)(SrbExtension + 4208),
             (__int64 *)(SrbExtension + 4160),
             *(_QWORD *)(SrbExtension + 4168));
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  return result;
}
