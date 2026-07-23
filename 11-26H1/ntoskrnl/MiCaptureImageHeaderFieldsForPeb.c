/*
 * XREFs of MiCaptureImageHeaderFieldsForPeb @ 0x140ACCBC8
 * Callers:
 *     MmCreatePeb @ 0x140ACC600 (MmCreatePeb.c)
 * Callees:
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     RtlImageDirectoryEntryToData @ 0x14042B1C0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     KeQueryGroupAffinity @ 0x140494AA0 (KeQueryGroupAffinity.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     MiImageLoadConfigSize @ 0x140ACCE3C (MiImageLoadConfigSize.c)
 */

__int64 __fastcall MiCaptureImageHeaderFieldsForPeb(__int64 a1)
{
  __int64 v3; // r14
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int16 v6; // r12
  void *v7; // r15
  PIMAGE_NT_HEADERS v8; // rax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // rbx
  void *v11; // rcx
  unsigned __int16 *v13; // rcx
  __int16 UShortFromUser; // ax
  int v15; // ecx
  __int64 v16; // rdi
  __int64 v17; // r15
  __int64 v18; // rbx
  USHORT v19; // cx
  char v20; // bl
  KAFFINITY GroupAffinity; // rax
  __int64 v22; // rdx
  int v23; // [rsp+30h] [rbp-58h]
  _DWORD v24[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+48h] [rbp-40h]
  ULONG Size; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+20h] BYREF

  v26 = a1;
  v3 = 0LL;
  Size = 0;
  v4 = *(_QWORD *)MiSectionControlArea(*(_QWORD *)(a1 + 160));
  v25 = v4;
  v5 = *(_QWORD *)(v4 + 56);
  v23 = *(_DWORD *)(v5 + 68);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(v5 + 32);
  *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(v5 + 38);
  *(_DWORD *)(a1 + 12) = *(unsigned __int16 *)(v5 + 36);
  *(_WORD *)a1 = ((*(__int16 *)(v4 + 12) >> 15) & 0xFF00) + 523;
  v6 = *(_WORD *)(v5 + 44);
  v7 = *(void **)(a1 + 152);
  v8 = RtlImageNtHeader(v7);
  if ( !v8 )
    return 3221225776LL;
  *(_DWORD *)(a1 + 44) = RtlReadULongFromUser(&v8->OptionalHeader.Win32VersionValue);
  v9 = (unsigned __int16 *)RtlImageDirectoryEntryToData(v7, 1u, 0xAu, &Size);
  v10 = v9;
  if ( v9 )
  {
    v28 = 0;
    v24[0] = (_DWORD)v9 - (_DWORD)v7;
    v24[1] = Size;
    if ( (int)MiImageLoadConfigSize((unsigned int)&v28, (_DWORD)v7, v23, (unsigned int)v24, *(_WORD *)a1) < 0 )
      return 3221225776LL;
    if ( v28 >= ((*(__int16 *)(v25 + 12) >> 31) & 0x18u) + 54 )
    {
      v11 = (void *)(a1 + 16);
      if ( *(__int16 *)(v25 + 12) < 0 )
      {
        RtlCopyFromUser(v11, v10 + 24, 4uLL);
        if ( !*(_DWORD *)(a1 + 44) )
          goto LABEL_7;
        v13 = v10 + 26;
      }
      else
      {
        RtlCopyFromUser(v11, v10 + 32, 8uLL);
        if ( !*(_DWORD *)(a1 + 44) )
        {
LABEL_7:
          *(_BYTE *)(a1 + 24) = 1;
          goto LABEL_15;
        }
        v13 = v10 + 38;
      }
      UShortFromUser = RtlReadUShortFromUser(v13);
      if ( UShortFromUser )
        *(_WORD *)(a1 + 42) = UShortFromUser;
      goto LABEL_7;
    }
  }
LABEL_15:
  v15 = *(_DWORD *)(a1 + 44);
  if ( v15 )
  {
    *(_DWORD *)(a1 + 28) = (unsigned __int8)v15;
    *(_DWORD *)(a1 + 32) = BYTE1(v15);
    *(_WORD *)(a1 + 40) = HIWORD(v15);
    *(_DWORD *)(a1 + 36) = (v15 ^ 0xBFFFFFFF) >> 30;
  }
  if ( *(_BYTE *)(a1 + 24) )
  {
    v16 = *(_QWORD *)(a1 + 16);
    v17 = a1 + 168;
    v18 = *(_QWORD *)(a1 + 168);
    if ( (v16 & KeQueryGroupAffinity(*(_WORD *)(v18 + 8))) == v16 )
      v3 = v16;
    *(_QWORD *)v18 = v3;
  }
  else
  {
    v17 = a1 + 168;
  }
  if ( (v6 & 0x4000) != 0 )
  {
    v19 = *(_WORD *)(*(_QWORD *)v17 + 8LL);
    v20 = _InterlockedIncrement((volatile signed __int32 *)&stru_140E2D2D0.Padding[4]);
    GroupAffinity = KeQueryGroupAffinity(v19);
    do
    {
      v22 = 1LL << (v20 & 0x3F);
      v20 = (v20 & 0x3F) + 1;
    }
    while ( (GroupAffinity & v22) == 0 );
    **(_QWORD **)(a1 + 168) = v22;
  }
  return 0LL;
}
