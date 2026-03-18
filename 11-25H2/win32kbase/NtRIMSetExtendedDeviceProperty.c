/*
 * XREFs of NtRIMSetExtendedDeviceProperty @ 0x1401D8570
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x1401EC504 (RIMSetExtendedPointerDeviceProperty.c)
 *     RtlCopyVolatileMemory @ 0x140242F00 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtRIMSetExtendedDeviceProperty(char *a1, const void *a2, int a3)
{
  const void *v3; // rdi
  int v4; // ebx
  char *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v3 = a2;
  v7 = 0LL;
  v8 = 0;
  Object = 0LL;
  if ( !a2 || a3 != 20 )
    goto LABEL_13;
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
    goto LABEL_14;
  v5 = Object ? (char *)Object + 72 : 0LL;
  if ( (*((_DWORD *)v5 + 46) & 0x80u) != 0
    && (*((_DWORD *)v5 + 42) & 0x2000) != 0
    && !*(_DWORD *)(*((_QWORD *)v5 + 46) + 16LL) )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(&v7, v3, 0x14uLL);
    v4 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)v5 + 57), &v7);
  }
  else
  {
LABEL_13:
    v4 = -1073741811;
  }
LABEL_14:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v4;
}
