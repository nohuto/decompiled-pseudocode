/*
 * XREFs of EtwpFindDebugId @ 0x1409427A8
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140942658 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14040E290 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x1404696C0 (RtlImageNtHeader.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     EtwpIsValidImageAddress @ 0x140942A20 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 *a4, unsigned int *a5)
{
  unsigned __int64 v7; // rsi
  _DWORD *v8; // rax
  int v9; // r14d
  __int64 v10; // rax
  char *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned int i; // r14d
  unsigned int *v15; // rsi
  unsigned int ULongFromUser; // eax
  unsigned int v17; // ebx
  unsigned int *v18; // r14
  void **v19; // rcx
  void *v20; // rcx
  __int64 Pool2; // rax
  _DWORD v23[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-90h]
  unsigned __int64 v25; // [rsp+40h] [rbp-88h]
  _DWORD *v26; // [rsp+48h] [rbp-80h]
  unsigned int *v27; // [rsp+50h] [rbp-78h]
  char *v28; // [rsp+58h] [rbp-70h]
  __int128 v29; // [rsp+60h] [rbp-68h] BYREF
  size_t Size; // [rsp+70h] [rbp-58h]
  int v31; // [rsp+78h] [rbp-50h]

  v24 = a4;
  v7 = a1;
  v25 = a1;
  v27 = a5;
  v29 = 0LL;
  Size = 0LL;
  v31 = 0;
  v8 = RtlImageNtHeader(a1);
  v9 = (int)v8;
  v26 = v8;
  if ( !v8 )
    return 3221225595LL;
  v23[0] = 0;
  v10 = RtlImageDirectoryEntryToData(v7, 1, 6u, v23);
  v11 = (char *)v10;
  v28 = (char *)v10;
  if ( !v10 || v23[0] < 0x1Cu )
    return 3221225485LL;
  v12 = v23[0];
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v9, v7, a2, v10, v23[0]) )
    return 3221225595LL;
  v13 = v12 / 0x1C;
  for ( i = 0; ; ++i )
  {
    v23[1] = i;
    if ( i >= (unsigned int)v13 )
      return 3221226021LL;
    if ( a3 )
      RtlCopyFromUser(&v29, v11, 0x1CuLL);
    else
      RtlCopyVolatileMemory(&v29, v11, 0x1CuLL);
    if ( HIDWORD(Size) > a2 || (unsigned int)Size > a2 || HIDWORD(Size) > a2 - (unsigned int)Size )
      return 3221225485LL;
    if ( HIDWORD(v29) == 2 )
      break;
LABEL_32:
    v11 += 28;
    v28 = v11;
  }
  v15 = (unsigned int *)(HIDWORD(Size) + v7);
  if ( !(unsigned __int8)EtwpIsValidImageAddress((_DWORD)v26, v25, a2, (_DWORD)v15, (unsigned int)Size) )
    return 3221225595LL;
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser(v15);
  else
    ULongFromUser = *v15;
  if ( ULongFromUser != 1396986706 )
  {
    v7 = v25;
    goto LABEL_32;
  }
  v17 = Size;
  if ( (unsigned int)Size < 0x1C )
    return 3221225595LL;
  v18 = v27;
  if ( *v27 < (unsigned int)Size )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v19 = (void **)v24;
    *v24 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
  }
  else
  {
    v19 = (void **)v24;
  }
  *v18 = v17;
  v20 = *v19;
  if ( a3 )
    RtlCopyFromUser(v20, v15, v17);
  else
    RtlCopyVolatileMemory(v20, v15, v17);
  return 0LL;
}
