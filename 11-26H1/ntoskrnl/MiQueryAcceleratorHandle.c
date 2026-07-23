/*
 * XREFs of MiQueryAcceleratorHandle @ 0x140885EB0
 * Callers:
 *     MiAcceptNewAccelerators @ 0x140885D8C (MiAcceptNewAccelerators.c)
 * Callees:
 *     AccelQueryDescriptorSize @ 0x1406E33A0 (AccelQueryDescriptorSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiQueryAcceleratorHandle(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  int v6; // ecx
  _DWORD v8[2]; // [rsp+20h] [rbp-39h] BYREF
  __int64 v9; // [rsp+28h] [rbp-31h]
  int v10; // [rsp+30h] [rbp-29h] BYREF
  _BYTE v11[12]; // [rsp+34h] [rbp-25h] BYREF
  int v12; // [rsp+40h] [rbp-19h]
  unsigned int v13; // [rsp+C0h] [rbp+67h] BYREF

  v9 = a1;
  v13 = 0;
  v8[0] = 1048577;
  v8[1] = 1;
  memset_0(v11, 0, 0x64uLL);
  v10 = 6815745;
  v6 = AccelQueryResourceInformation(v8, &v10);
  if ( v6 >= 0 )
  {
    *a2 = v12;
    v6 = AccelQueryDescriptorSize(a1, &v13);
    if ( v6 >= 0 )
      *a3 = v13;
  }
  return (unsigned int)v6;
}
