/*
 * XREFs of SetProtocolInfoCompletion @ 0x140022B40
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     memmove @ 0x140032740 (memmove.c)
 */

__int64 __fastcall SetProtocolInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r10
  const void *v8; // rdx

  SrbExtension = GetSrbExtension(a2);
  result = 24LL;
  v6 = 64LL;
  if ( *(_BYTE *)(v4 + 2) != 40 )
    v6 = 24LL;
  v7 = *(_QWORD *)(v6 + v4);
  if ( *(_BYTE *)(v4 + 3) == 1 )
  {
    *(_DWORD *)(v7 + 56) = *(_DWORD *)(SrbExtension + 4208);
    result = *(unsigned int *)(SrbExtension + 4208);
    if ( (_DWORD)result )
    {
      v8 = *(const void **)(SrbExtension + 4160);
      if ( v8 )
        result = (__int64)memmove((void *)(v7 + 36 + *(unsigned int *)(v7 + 52)), v8, (unsigned int)result);
    }
  }
  else
  {
    *(_DWORD *)(v7 + 56) = 0;
  }
  if ( *(_QWORD *)(SrbExtension + 4160) )
    result = NVMeFreeDmaBufferEx(
               a1,
               1,
               0,
               *(unsigned int *)(SrbExtension + 4208),
               (__int64 *)(SrbExtension + 4160),
               *(_QWORD *)(SrbExtension + 4168));
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_QWORD *)(SrbExtension + 4160) = 0LL;
  return result;
}
