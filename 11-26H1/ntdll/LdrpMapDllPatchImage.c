/*
 * XREFs of LdrpMapDllPatchImage @ 0x180111640
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 * Callees:
 *     LdrpMapDllWithSectionHandle @ 0x18007B7D0 (LdrpMapDllWithSectionHandle.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwManageHotPatch @ 0x180161170 (ZwManageHotPatch.c)
 */

__int64 __fastcall LdrpMapDllPatchImage(__int64 a1)
{
  unsigned __int64 v2; // rdx
  NTSTATUS v3; // edi
  __int64 v5; // [rsp+20h] [rbp-30h] BYREF
  int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+2Ch] [rbp-24h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  unsigned __int64 v9; // [rsp+38h] [rbp-18h]
  HANDLE Handle; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+60h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 48LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v11 = 0LL;
  v9 = v2;
  v5 = 1LL;
  v8 = 0x1000000LL;
  Handle = 0LL;
  v6 = 13;
  v7 = 16;
  v3 = ((__int64 (__fastcall *)(__int64, __int64 *, __int64, __int64 *))ZwManageHotPatch)(10LL, &v5, 40LL, &v11);
  if ( v3 >= 0 )
  {
    *(_DWORD *)(a1 + 32) |= 0x4000000u;
    v3 = LdrpMapDllWithSectionHandle(a1, (__int64)Handle);
  }
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v3;
}
