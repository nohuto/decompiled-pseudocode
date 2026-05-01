/*
 * XREFs of ?HampActSetExternalResourcePriority@@YAJPEAU_HAM_ACTIVITY@@PEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007CF18
 * Callers:
 *     ?HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY@@@Z @ 0x18007B130 (-HamSrvSetExternalResourcePriority@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_RM_RESOURCE_REQUEST_EXTER.c)
 * Callees:
 *     ?HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BF60 (-HampHostCheckQueueInterruptiveUIChangeWorker@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180017D00 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180018CB0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@ExecutionModel@@@Z @ 0x180083094 (-RmSrvResourceSetExternalResourcePriorities@@YAJPEAU_RM_SERVICE_GLOBALS@@_KKPEAU_ResourceInfo@Ex.c)
 */

__int64 __fastcall HampActSetExternalResourcePriority(
        struct _HAM_ACTIVITY *a1,
        struct _RM_RESOURCE_REQUEST_EXTERNAL_PRIORITY *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  int *v5; // rsi
  int v6; // eax
  signed int v7; // ebx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  __int64 v9; // rdx
  int v10; // eax
  unsigned __int64 v11; // rdx
  struct _RM_SERVICE_GLOBALS *v12; // rcx
  unsigned int v13; // r8d
  int v14; // eax
  int v15; // ebp
  ULONG v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // ebx
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  __int64 v22; // [rsp+40h] [rbp-28h]

  v4 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
  BitMapHeader = 0LL;
  HampHostAcquireLockExclusiveEx(v4, 0);
  v5 = (int *)((char *)a1 + 552);
  v6 = *((_DWORD *)a1 + 138);
  if ( (v6 & 1) != 0 )
  {
    v7 = -1073740682;
  }
  else if ( *((_BYTE *)a1 + 562) == 4 )
  {
    v7 = -1073741275;
  }
  else if ( (v6 & 8) != 0 )
  {
    v7 = -1058275327;
  }
  else
  {
    v8 = (struct _RM_HAM_ACTIVITY_HOST *)*((_QWORD *)a1 + 10);
    *v5 = v6 | 1;
    HampHostReleaseLockExclusive(v8);
    v9 = *((_QWORD *)a1 + 11);
    v22 = 0LL;
    v10 = *(unsigned __int8 *)a2;
    v11 = *(_QWORD *)(v9 + 16);
    v21 = 0LL;
    LODWORD(v21) = v10;
    LODWORD(v22) = *((unsigned __int8 *)a2 + 1);
    v14 = RmSrvResourceSetExternalResourcePriorities(v12, v11, v13, (struct ExecutionModel::_ResourceInfo *)&v21);
    v7 = v14 | 0xC0000000;
    if ( v14 >= 0 )
      v7 = 0;
    HampHostAcquireLockExclusiveEx(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10), 0);
    *v5 &= ~1u;
    if ( v7 >= 0 )
    {
      RtlInitializeBitMap(&BitMapHeader, (PULONG)a1 + 124, 0x2Fu);
      v15 = *(unsigned __int8 *)a2;
      v16 = v15 - 3;
      v17 = (unsigned int)(v15 - 3);
      if ( *((_BYTE *)a2 + 1) >= 0x65u )
      {
        v18 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v17);
        RtlClearBit(&BitMapHeader, v16);
      }
      else
      {
        v18 = _bittest64((const signed __int64 *)BitMapHeader.Buffer, v17) == 0;
        RtlSetBit(&BitMapHeader, v16);
      }
      if ( v18 && v15 == 27 )
        HampHostCheckQueueInterruptiveUIChangeWorker(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
      v7 = 0;
    }
  }
  HampHostReleaseLockExclusive(*((struct _RM_HAM_ACTIVITY_HOST **)a1 + 10));
  RtlWakeAddressAll((char *)a1 + 552);
  return (unsigned int)v7;
}
