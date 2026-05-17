/*
 * XREFs of LdrHotPatchNotify @ 0x18015B900
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetProcedureAddress @ 0x180046820 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x180054BC0 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180054E10 (LdrpDereferenceModule.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006FB5C (LdrpLogEtwHotPatchStatus.c)
 *     LdrpIsCurrentPatchLatest @ 0x18015BCEC (LdrpIsCurrentPatchLatest.c)
 *     LdrpLoadPatchImage @ 0x18015BE70 (LdrpLoadPatchImage.c)
 *     NtWaitForSingleObject @ 0x18015EFC0 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18015F3E0 (ZwQueryInformationThread.c)
 *     NtCreateThreadEx @ 0x180160850 (NtCreateThreadEx.c)
 */

__int64 __fastcall LdrHotPatchNotify(void *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int LoadedDllByHandle; // ebx
  int WowTebOffset; // esi
  bool v8; // al
  _OWORD v9[2]; // [rsp+60h] [rbp+17h] BYREF
  __int64 v10; // [rsp+80h] [rbp+37h]
  int v11; // [rsp+88h] [rbp+3Fh]
  unsigned __int64 v12; // [rsp+B0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v14; // [rsp+C0h] [rbp+77h] BYREF

  Handle = LdrHotPatchNotify;
  LOBYTE(v12) = 0;
  if ( !LdrpIsHotPatchingEnabled )
    return 3221225659LL;
  v10 = 0LL;
  v11 = 0;
  memset(v9, 0, sizeof(v9));
  Handle = 0LL;
  v14 = 0LL;
  LoadedDllByHandle = LdrpFindLoadedDllByHandle((unsigned __int64)a1, &v14, 0LL, a4);
  WowTebOffset = NtCurrentTeb()->WowTebOffset;
  v8 = a1 == NtCurrentPeb()->ImageBaseAddress && WowTebOffset > 0;
  if ( LoadedDllByHandle < 0 || v8 )
  {
    if ( WowTebOffset > 0 && (unsigned __int64)a1 <= 0xFFFFFFFF )
    {
      v12 = 0LL;
      LdrpGetProcedureAddress(qword_1801E34A8, "LdrHotPatchNotify", 0, &v12);
      LoadedDllByHandle = NtCreateThreadEx(&Handle, 0x1FFFFFLL, 0LL, -1LL, v12, a1, 0, 0LL, 0LL, 0LL, 0LL);
      if ( LoadedDllByHandle >= 0 )
      {
        NtWaitForSingleObject(Handle, 0, 0LL);
        LoadedDllByHandle = ZwQueryInformationThread(Handle, 0LL, v9, 48LL, 0LL);
        if ( LoadedDllByHandle >= 0 )
          LoadedDllByHandle = v9[0];
      }
    }
  }
  else
  {
    LoadedDllByHandle = LdrpIsCurrentPatchLatest(a1, &v12);
    if ( LoadedDllByHandle >= 0 && (_BYTE)v12 != 1 )
      LoadedDllByHandle = LdrpLoadPatchImage((__int64)a1);
  }
  if ( v14 )
    LdrpDereferenceModule(v14);
  if ( Handle )
    NtClose(Handle);
  if ( WowTebOffset <= 0 && LoadedDllByHandle < 0 )
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), 0LL, 0LL, LoadedDllByHandle, 8);
  return (unsigned int)LoadedDllByHandle;
}
