/*
 * XREFs of RootHub_GetHighestUsbVersionSupported @ 0x14004A3AC
 * Callers:
 *     Controller_SetDeviceDescription @ 0x140077958 (Controller_SetDeviceDescription.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RootHub_GetHighestUsbVersionSupported(__int64 a1)
{
  unsigned int v1; // r10d
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r9
  unsigned int v4; // edx
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned __int8 v7; // cl
  unsigned __int8 v8; // al
  unsigned __int16 v10; // [rsp+8h] [rbp+8h]

  v1 = *(_DWORD *)(a1 + 16);
  v2 = 0;
  v10 = 0;
  v3 = 0;
  v4 = 1;
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    do
    {
      v6 = 120LL * (v4 - 1);
      if ( *(_BYTE *)(v6 + v5 + 13) > v2 )
      {
        v2 = *(_BYTE *)(v6 + v5 + 13);
        LOBYTE(v10) = v2;
        v7 = *(_BYTE *)(v6 + v5 + 12);
        v8 = v3;
        if ( v7 > v3 )
          v8 = v7;
        v3 = v8;
      }
      ++v4;
    }
    while ( v4 <= v1 );
    HIBYTE(v10) = v3;
  }
  return v10;
}
