/*
 * XREFs of AlpcpQueryHandleInformationMessage @ 0x1409BB0A8
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1407C3C50 (NtAlpcQueryInformationMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ObCompleteObjectDuplication @ 0x1409BB650 (ObCompleteObjectDuplication.c)
 */

__int64 __fastcall AlpcpQueryHandleInformationMessage(__int64 a1, __int64 a2, unsigned int *a3, int a4, _DWORD *a5)
{
  char PreviousMode; // di
  unsigned int ULongFromUser; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ebx
  _QWORD v16[3]; // [rsp+40h] [rbp-68h] BYREF
  __int128 Src; // [rsp+58h] [rbp-50h] BYREF
  int v18; // [rsp+68h] [rbp-40h] BYREF

  v16[0] = 0LL;
  Src = 0LL;
  v18 = 0;
  if ( a4 != 20 )
    return 3221225476LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
    ULongFromUser = RtlReadULongFromUser(a3);
  else
    ULongFromUser = *a3;
  LODWORD(Src) = ULongFromUser;
  v10 = *(_QWORD *)(a2 + 152);
  if ( !v10 || ULongFromUser >= *(_DWORD *)(v10 + 4) )
    return 3221225480LL;
  v11 = 48LL * ULongFromUser;
  if ( (*(_DWORD *)(v11 + v10) & *(_DWORD *)(a1 + 320)) == 0 )
    return 3221225508LL;
  v12 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v12 = *(_QWORD *)(a1 + 24);
  if ( !v12 )
    return 3221225506LL;
  HIDWORD(Src) = *(_DWORD *)(v11 + v10);
  v13 = v11 + v10 + 8;
  LOBYTE(v11) = PreviousMode;
  v14 = ObCompleteObjectDuplication(v13, v12, v11, v16, &v18);
  DWORD2(Src) = v16[0];
  if ( v14 >= 0 )
  {
    if ( PreviousMode )
      RtlCopyToUser(a3, &Src, 0x14uLL);
    else
      RtlCopyVolatileMemory(a3, &Src, 0x14uLL);
    if ( a5 )
    {
      if ( PreviousMode )
        RtlWriteULongToUser(a5, 20);
      else
        *a5 = 20;
    }
  }
  return (unsigned int)v14;
}
