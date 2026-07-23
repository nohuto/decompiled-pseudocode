/*
 * XREFs of MiPageFileVolumeFreeSpace @ 0x1404E0A3C
 * Callers:
 *     MiPageFileChangeCandidate @ 0x1404E09AC (MiPageFileChangeCandidate.c)
 *     MiContractPagingFiles @ 0x1404E1D30 (MiContractPagingFiles.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     IoQueryVolumeInformation @ 0x140988DC0 (IoQueryVolumeInformation.c)
 */

unsigned __int64 __fastcall MiPageFileVolumeFreeSpace(__int64 a1)
{
  struct _FILE_OBJECT *v1; // rcx
  ULONG v3; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+38h] [rbp-30h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]

  v1 = *(struct _FILE_OBJECT **)(a1 + 24);
  v4 = 0LL;
  v5 = 0LL;
  if ( IoQueryVolumeInformation(v1, FileFsSizeInformation, 0x18u, &v4, &v3) >= 0 )
    return (*((_QWORD *)&v4 + 1) * (unsigned __int64)(unsigned int)(v5 * HIDWORD(v5))) >> 12;
  else
    return 0LL;
}
