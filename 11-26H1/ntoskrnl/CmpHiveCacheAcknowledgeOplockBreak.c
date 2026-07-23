/*
 * XREFs of CmpHiveCacheAcknowledgeOplockBreak @ 0x140867E80
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 */

__int64 __fastcall CmpHiveCacheAcknowledgeOplockBreak(_QWORD *a1, int a2)
{
  int v2; // edx
  void *v3; // rcx
  unsigned int v4; // ebx
  NTSTATUS v5; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp+17h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp+27h] BYREF
  int v9; // [rsp+68h] [rbp+2Fh]
  __int128 OutputBuffer; // [rsp+70h] [rbp+37h] BYREF
  __int64 v11; // [rsp+80h] [rbp+47h]

  v11 = 0LL;
  InputBuffer = 0LL;
  v9 = 0;
  OutputBuffer = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 )
  {
    v2 = a2 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
      {
LABEL_8:
        v4 = -1073741811;
        SetFailureLocation(0LL, 0, 47, -1073741811, 16);
        return v4;
      }
      v3 = (void *)a1[24];
    }
    else
    {
      v3 = (void *)a1[23];
    }
  }
  else
  {
    v3 = (void *)a1[22];
  }
  if ( !v3 )
    goto LABEL_8;
  InputBuffer = 786433LL;
  v9 = 2;
  LODWORD(OutputBuffer) = 1572865;
  v5 = ZwFsControlFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, 0x90240u, &InputBuffer, 0xCu, &OutputBuffer, 0x18u);
  v4 = v5;
  if ( v5 )
    SetFailureLocation(0LL, 0, 47, v5, 32);
  return v4;
}
