/*
 * XREFs of NVMeGetLogPageHealthInfoCompletion @ 0x14001DFC0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     NVMeFreeDmaBufferEx @ 0x140010C58 (NVMeFreeDmaBufferEx.c)
 *     TemperatureFromKelvinToCelsius @ 0x14002304C (TemperatureFromKelvinToCelsius.c)
 */

__int64 __fastcall NVMeGetLogPageHealthInfoCompletion(__int64 a1, __int64 a2)
{
  __int64 SrbExtension; // rbx
  __int64 v3; // r8
  __int64 v4; // r11
  __int64 *v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // r8
  char v11; // al
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  SrbExtension = GetSrbExtension(a2);
  v5 = (__int64 *)(SrbExtension + 4160);
  if ( *(_BYTE *)(v3 + 3) == 1 )
  {
    GetSrbDataBuffer(v3, &v14);
    v8 = *(unsigned __int8 *)(v6 + 2);
    v7 = *(_QWORD *)(SrbExtension + 4200);
    LOWORD(v8) = *(_WORD *)(v6 + 1);
    if ( v7 == 13 )
    {
      v9 = TemperatureFromKelvinToCelsius(v8);
      *(_BYTE *)(v10 + 9) = v9;
    }
    else if ( v7 == 47 )
    {
      v11 = TemperatureFromKelvinToCelsius(v8);
      *(_BYTE *)(v12 + 10) = v11;
    }
  }
  result = NVMeFreeDmaBufferEx(v4, 0, 1, *(unsigned int *)(SrbExtension + 4208), v5, *(_QWORD *)(SrbExtension + 4168));
  *(_BYTE *)(SrbExtension + 4225) |= 8u;
  *(_DWORD *)(SrbExtension + 4208) = 0;
  *(_QWORD *)(SrbExtension + 4200) = 0LL;
  return result;
}
