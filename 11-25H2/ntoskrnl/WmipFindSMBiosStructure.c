/*
 * XREFs of WmipFindSMBiosStructure @ 0x140794DA4
 * Callers:
 *     WmipReadSMBiosSysInfo @ 0x140640348 (WmipReadSMBiosSysInfo.c)
 *     WmipGetSMBiosEventlog @ 0x140794FB8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140795210 (WmipGetSysIds.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     MmUnmapIoSpace @ 0x1402AA7A0 (MmUnmapIoSpace.c)
 *     MmMapIoSpaceEx @ 0x140413F40 (MmMapIoSpaceEx.c)
 *     WmipAcquireSmbiosLockShared @ 0x140A3D324 (WmipAcquireSmbiosLockShared.c)
 */

__int64 __fastcall WmipFindSMBiosStructure(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  int v8; // edi
  __int64 v9; // rax
  _BYTE *v10; // rcx
  _BYTE *v11; // rdx
  _WORD *i; // rcx

  WmipAcquireSmbiosLockShared();
  v8 = 0;
  if ( WmipSMBiosTablePhysicalAddress )
  {
    v9 = MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
    *a3 = (PVOID)v9;
    if ( v9 )
    {
      *a4 = WmipSMBiosTableLength;
      v10 = *a3;
      goto LABEL_7;
    }
    v8 = -1073741670;
  }
  else
  {
    v8 = -1073741823;
  }
  v10 = 0LL;
LABEL_7:
  if ( v8 < 0 )
  {
LABEL_20:
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegion();
    return (unsigned int)v8;
  }
  *a2 = 0LL;
  v11 = &v10[(unsigned int)WmipSMBiosTableLength];
  v8 = -1073741823;
  while ( v10 < v11 )
  {
    if ( *v10 == a1 )
    {
      *a2 = v10;
      v8 = 0;
      break;
    }
    for ( i = &v10[(unsigned __int8)v10[1]]; *i && i < (_WORD *)v11; i = (_WORD *)((char *)i + 1) )
      ;
    v10 = i + 1;
  }
  if ( v8 < 0 )
  {
    if ( *a3 )
      MmUnmapIoSpace(*a3, (unsigned int)*a4);
    goto LABEL_20;
  }
  return (unsigned int)v8;
}
