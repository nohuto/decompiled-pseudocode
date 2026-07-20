/*
 * XREFs of NtPnpInitializeInputPropertyData @ 0x14001EA00
 * Callers:
 *     NtPnpGetObjectProperty @ 0x14001E86C (NtPnpGetObjectProperty.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x14001DA94 (RtlStringCchLengthW.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 */

__int64 __fastcall NtPnpInitializeInputPropertyData(
        __int64 a1,
        int a2,
        const wchar_t *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        void *a10)
{
  char *v10; // rdi
  NTSTATUS v11; // esi
  __int64 v15; // rax
  size_t pcchLength; // [rsp+50h] [rbp+18h] BYREF

  v10 = (char *)a10;
  v11 = 0;
  pcchLength = 0LL;
  memset_0(a10, 0, 0x48uLL);
  v15 = a5;
  *(_DWORD *)v10 = 72;
  *((_DWORD *)v10 + 2) = a2;
  *((_DWORD *)v10 + 17) = 20;
  *(_OWORD *)(v10 + 28) = *(_OWORD *)v15;
  *((_DWORD *)v10 + 11) = *(_DWORD *)(v15 + 16);
  *((_QWORD *)v10 + 2) = a3;
  if ( a3 )
  {
    v11 = RtlStringCchLengthW(a3, (unsigned __int64)a4 >> 1, &pcchLength);
    if ( v11 >= 0 )
      *((_DWORD *)v10 + 6) = 2 * pcchLength + 2;
  }
  return (unsigned int)v11;
}
