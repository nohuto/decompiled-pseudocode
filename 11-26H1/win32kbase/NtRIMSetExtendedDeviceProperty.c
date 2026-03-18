/*
 * XREFs of NtRIMSetExtendedDeviceProperty @ 0x1401FF620
 * Callers:
 *     <none>
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     RIMSetExtendedPointerDeviceProperty @ 0x14020AE78 (RIMSetExtendedPointerDeviceProperty.c)
 */

__int64 __fastcall NtRIMSetExtendedDeviceProperty(char *a1, void *a2, int a3)
{
  int v4; // ebx
  char *v5; // rbx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  v8 = 0;
  Object = 0LL;
  if ( !a2 || a3 != 20 )
    goto LABEL_11;
  v4 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 < 0 )
    goto LABEL_12;
  v5 = Object ? (char *)Object + 72 : 0LL;
  if ( (*((_DWORD *)v5 + 46) & 0x80u) != 0
    && (*((_DWORD *)v5 + 42) & 0x2000) != 0
    && !*(_DWORD *)(*((_QWORD *)v5 + 46) + 16LL) )
  {
    RtlCopyFromUser(&v7, a2, 0x14uLL);
    v4 = RIMSetExtendedPointerDeviceProperty(*((_QWORD *)v5 + 57), &v7);
  }
  else
  {
LABEL_11:
    v4 = -1073741811;
  }
LABEL_12:
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v4;
}
