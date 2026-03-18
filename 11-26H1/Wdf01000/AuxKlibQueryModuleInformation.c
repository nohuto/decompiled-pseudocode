/*
 * XREFs of AuxKlibQueryModuleInformation @ 0x1400DC440
 * Callers:
 *     FxpGetImageBase @ 0x14006CEE0 (FxpGetImageBase.c)
 * Callees:
 *     __security_check_cookie @ 0x1400ACED0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

unsigned int __fastcall AuxKlibQueryModuleInformation(unsigned int *BufferSize, unsigned int QueryInfo, char *a3)
{
  unsigned int v5; // edi
  unsigned int result; // eax
  _AUX_PROCESS_MODULES *p_StaticInfo; // rbx
  ULONG i; // r8d
  NTSTATUS v9; // eax
  int v10; // esi
  __int64 NumberOfModules; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rax
  unsigned __int8 *FullPathName; // rcx
  __int64 v17; // rdx
  unsigned int NeededSize; // [rsp+20h] [rbp-168h] BYREF
  _AUX_PROCESS_MODULES *ModuleInfo; // [rsp+28h] [rbp-160h]
  _AUX_PROCESS_MODULES StaticInfo; // [rsp+30h] [rbp-158h] BYREF

  v5 = 0;
  NeededSize = 0;
  memset(&StaticInfo, 0, 0x12CuLL);
  if ( AuxpInitState != 1 )
    return -1073741823;
  if ( AuxpKlibFns.QueryModuleInformationPtr )
    return AuxpKlibFns.QueryModuleInformationPtr(BufferSize, 0x110u, a3);
  result = ((unsigned __int8)a3 & 7) != 0LL ? 0xC00000F1 : 0;
  if ( ((unsigned __int8)a3 & 7) == 0 )
  {
    p_StaticInfo = &StaticInfo;
    for ( i = 304; ; i = NeededSize )
    {
      v9 = ZwQuerySystemInformation(SystemModuleInformation, p_StaticInfo, i, &NeededSize);
      v10 = v9;
      if ( v9 >= 0 )
        break;
      if ( v9 != -1073741820 )
        goto $exit_failure;
      if ( p_StaticInfo != &StaticInfo )
        ExFreePoolWithTag(p_StaticInfo, 0);
      p_StaticInfo = (_AUX_PROCESS_MODULES *)ExAllocatePoolWithQuotaTag((POOL_TYPE)1033, NeededSize, 0x4B787541u);
      ModuleInfo = p_StaticInfo;
      if ( !p_StaticInfo )
        return -1073741670;
    }
    NumberOfModules = p_StaticInfo->NumberOfModules;
    if ( (unsigned __int64)(272 * NumberOfModules) <= 0xFFFFFFFF )
    {
      v12 = 272 * NumberOfModules;
      if ( a3 )
      {
        if ( *BufferSize >= v12 )
        {
          if ( (_DWORD)NumberOfModules )
          {
            do
            {
              v13 = v5;
              v14 = 272LL * v5;
              *(_QWORD *)&a3[v14] = p_StaticInfo->Modules[v13].ImageBase;
              *(_DWORD *)&a3[v14 + 8] = p_StaticInfo->Modules[v13].ImageSize;
              *(_WORD *)&a3[v14 + 12] = p_StaticInfo->Modules[v13].OffsetToFileName;
              v15 = &a3[v14 + 14];
              FullPathName = p_StaticInfo->Modules[v13].FullPathName;
              v17 = 2LL;
              do
              {
                *(_OWORD *)v15 = *(_OWORD *)FullPathName;
                *((_OWORD *)v15 + 1) = *((_OWORD *)FullPathName + 1);
                *((_OWORD *)v15 + 2) = *((_OWORD *)FullPathName + 2);
                *((_OWORD *)v15 + 3) = *((_OWORD *)FullPathName + 3);
                *((_OWORD *)v15 + 4) = *((_OWORD *)FullPathName + 4);
                *((_OWORD *)v15 + 5) = *((_OWORD *)FullPathName + 5);
                *((_OWORD *)v15 + 6) = *((_OWORD *)FullPathName + 6);
                v15 += 128;
                *((_OWORD *)v15 - 1) = *((_OWORD *)FullPathName + 7);
                FullPathName += 128;
                --v17;
              }
              while ( v17 );
              ++v5;
            }
            while ( v5 < p_StaticInfo->NumberOfModules );
          }
        }
        else
        {
          v10 = -1073741789;
        }
      }
      *BufferSize = v12;
    }
    else
    {
      v10 = -1073741675;
    }
$exit_failure:
    if ( p_StaticInfo != &StaticInfo )
      ExFreePoolWithTag(p_StaticInfo, 0);
    return v10;
  }
  return result;
}
