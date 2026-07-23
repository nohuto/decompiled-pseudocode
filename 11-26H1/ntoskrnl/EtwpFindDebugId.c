/*
 * XREFs of EtwpFindDebugId @ 0x140A358B8
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 *     EtwpLocateDbgIdForRegEntry @ 0x140A35768 (EtwpLocateDbgIdForRegEntry.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     EtwpIsValidImageAddress @ 0x140A35B30 (EtwpIsValidImageAddress.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpFindDebugId(char *BaseOfImage, unsigned __int64 a2, char a3, __int64 *a4, unsigned int *a5)
{
  char *v7; // rsi
  _IMAGE_NT_HEADERS64 *v8; // r14
  char *v9; // rbx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned int i; // r14d
  unsigned int *v13; // rsi
  unsigned int ULongFromUser; // eax
  unsigned int v15; // ebx
  unsigned int *v16; // r14
  void **v17; // rcx
  void *v18; // rcx
  __int64 Pool2; // rax
  ULONG Size[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v22; // [rsp+38h] [rbp-90h]
  PVOID BaseOfImagea; // [rsp+40h] [rbp-88h]
  PIMAGE_NT_HEADERS NtHeaders; // [rsp+48h] [rbp-80h]
  unsigned int *v25; // [rsp+50h] [rbp-78h]
  char *v26; // [rsp+58h] [rbp-70h]
  __int128 v27; // [rsp+60h] [rbp-68h] BYREF
  size_t v28; // [rsp+70h] [rbp-58h]
  int v29; // [rsp+78h] [rbp-50h]

  v22 = a4;
  v7 = BaseOfImage;
  BaseOfImagea = BaseOfImage;
  v25 = a5;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v8 = RtlImageNtHeader(BaseOfImage);
  NtHeaders = v8;
  if ( !v8 )
    return 3221225595LL;
  Size[0] = 0;
  v9 = (char *)RtlImageDirectoryEntryToData(v7, 1u, 6u, Size);
  v26 = v9;
  if ( !v9 || Size[0] < 0x1C )
    return 3221225485LL;
  v10 = Size[0];
  if ( !(unsigned __int8)EtwpIsValidImageAddress(v8, v7, Size[0]) )
    return 3221225595LL;
  v11 = v10 / 0x1C;
  for ( i = 0; ; ++i )
  {
    Size[1] = i;
    if ( i >= (unsigned int)v11 )
      return 3221226021LL;
    if ( a3 )
      RtlCopyFromUser(&v27, v9, 0x1CuLL);
    else
      RtlCopyVolatileMemory(&v27, v9, 0x1CuLL);
    if ( HIDWORD(v28) > a2 || (unsigned int)v28 > a2 || HIDWORD(v28) > a2 - (unsigned int)v28 )
      return 3221225485LL;
    if ( HIDWORD(v27) == 2 )
      break;
LABEL_32:
    v9 += 28;
    v26 = v9;
  }
  v13 = (unsigned int *)&v7[HIDWORD(v28)];
  if ( !(unsigned __int8)EtwpIsValidImageAddress(NtHeaders, BaseOfImagea, (unsigned int)v28) )
    return 3221225595LL;
  if ( a3 )
    ULongFromUser = RtlReadULongFromUser(v13);
  else
    ULongFromUser = *v13;
  if ( ULongFromUser != 1396986706 )
  {
    v7 = (char *)BaseOfImagea;
    goto LABEL_32;
  }
  v15 = v28;
  if ( (unsigned int)v28 < 0x1C )
    return 3221225595LL;
  v16 = v25;
  if ( *v25 < (unsigned int)v28 )
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v17 = (void **)v22;
    *v22 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
  }
  else
  {
    v17 = (void **)v22;
  }
  *v16 = v15;
  v18 = *v17;
  if ( a3 )
    RtlCopyFromUser(v18, v13, v15);
  else
    RtlCopyVolatileMemory(v18, v13, v15);
  return 0LL;
}
