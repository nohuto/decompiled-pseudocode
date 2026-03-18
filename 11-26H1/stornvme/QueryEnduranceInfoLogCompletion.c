/*
 * XREFs of QueryEnduranceInfoLogCompletion @ 0x140020B40
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 */

__int64 __fastcall QueryEnduranceInfoLogCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  result = GetSrbDataBuffer(v3, &v14);
  v8 = result;
  if ( *(_BYTE *)(v7 + 3) == 1 )
  {
    v9 = *(_QWORD *)(SrbExtension + 4160);
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v5 + 8 * v6 + 1672) + 94LL);
    *(_DWORD *)(result + 36) = 1;
    *(_DWORD *)(result + 40) = v10;
    v11 = *(unsigned __int8 *)(v9 + 5);
    *(_DWORD *)(result + 36) = 5;
    *(_DWORD *)(result + 48) = v11;
    v12 = *(_OWORD *)(v9 + 48);
    *(_DWORD *)(result + 36) = 13;
    *(_OWORD *)(result + 52) = v12;
    v13 = *(_OWORD *)(v9 + 64);
    *(_DWORD *)(result + 36) = 29;
    *(_OWORD *)(result + 68) = v13;
  }
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  if ( *(_QWORD *)(SrbExtension + 4160) )
    result = NVMeFreeDmaBufferEx(
               v5,
               0,
               1,
               *(unsigned int *)(SrbExtension + 4208),
               (__int64 *)(SrbExtension + 4160),
               *(_QWORD *)(SrbExtension + 4168));
  *(_QWORD *)(SrbExtension + 4160) = 0LL;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_DWORD *)(v8 + 24) = 56;
  return result;
}
