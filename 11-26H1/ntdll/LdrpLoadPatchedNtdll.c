/*
 * XREFs of LdrpLoadPatchedNtdll @ 0x1800CB24C
 * Callers:
 *     LdrpInitializeInternal @ 0x1800CC1E8 (LdrpInitializeInternal.c)
 * Callees:
 *     LdrpQueryCurrentPatch @ 0x1800CB3C0 (LdrpQueryCurrentPatch.c)
 *     LdrpLoadCustomNtdllWithSectionHandle @ 0x18015C08C (LdrpLoadCustomNtdllWithSectionHandle.c)
 *     NpClose @ 0x18015E9C0 (NpClose.c)
 *     NpUnmapViewOfSection @ 0x18015EA20 (NpUnmapViewOfSection.c)
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpLoadPatchedNtdll(__int64 a1, __int64 *a2)
{
  int v4; // esi
  char v6; // cl
  struct _TEB *v7; // rdi
  void *ArbitraryUserPointer; // rbx
  int CustomNtdllWithSectionHandle; // eax
  __int64 v10; // rax
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int128 v12; // [rsp+30h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-10h]
  char v16; // [rsp+A8h] [rbp+38h] BYREF
  int v17; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+48h] BYREF

  v17 = 0;
  *a2 = 0LL;
  v16 = 0;
  v18 = 0LL;
  v15 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = LdrpQueryCurrentPatch(a1, &v16);
  if ( v4 >= 0 )
  {
    v6 = v16;
    *((_BYTE *)a2 + 12) = v16;
    if ( v6 )
    {
      LODWORD(v13) = 1;
      *((_QWORD *)&v13 + 1) = 0x100000000DLL;
      *((_QWORD *)&v14 + 1) = a1 & 0xFFFFFFFFFFFFFFFCuLL;
      LODWORD(v14) = 0x1000000;
      v4 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD))ZwManageHotPatch)(
             10LL,
             &v13,
             40LL,
             &v18,
             v11,
             *((_QWORD *)&v11 + 1),
             v12,
             *((_QWORD *)&v12 + 1));
      if ( v4 >= 0 )
      {
        v7 = NtCurrentTeb();
        ArbitraryUserPointer = v7->NtTib.ArbitraryUserPointer;
        v7->NtTib.ArbitraryUserPointer = 0LL;
        CustomNtdllWithSectionHandle = LdrpLoadCustomNtdllWithSectionHandle(v15, a2);
        v7->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
        v4 = CustomNtdllWithSectionHandle;
        if ( CustomNtdllWithSectionHandle >= 0 )
        {
          v10 = *a2;
          DWORD1(v11) |= 3u;
          LODWORD(v11) = 2;
          *((_QWORD *)&v11 + 1) = -1LL;
          *(_QWORD *)&v12 = a1;
          *((_QWORD *)&v12 + 1) = v10;
          v4 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, int *))ZwManageHotPatch)(7LL, &v11, 32LL, &v17);
        }
      }
    }
  }
  if ( v15 )
    NpClose();
  if ( v4 < 0 && *a2 )
  {
    NpUnmapViewOfSection(-1LL);
    *a2 = 0LL;
  }
  return (unsigned int)v4;
}
