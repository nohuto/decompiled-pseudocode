/*
 * XREFs of NvmeControllerReenumerationRoutine @ 0x1400C6370
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerGetChangedNamespaceListLog @ 0x1400C5C50 (NvmeControllerGetChangedNamespaceListLog.c)
 *     NvmeControllerIdentifyChangedNamespaces @ 0x1400C5E88 (NvmeControllerIdentifyChangedNamespaces.c)
 */

void __fastcall NvmeControllerReenumerationRoutine(PDEVICE_OBJECT DeviceObject, __int64 Context, __int64 a3)
{
  bool v3; // zf
  __int64 v5; // rax
  _DWORD *v6; // rax
  signed __int8 v7; // cf
  _DWORD *v8; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  if ( Context )
  {
    v3 = *(_DWORD *)Context == 1314276178;
    v10 = 0;
    if ( v3 )
    {
      v5 = *(_QWORD *)(Context + 1656);
      if ( !v5 || !*(_QWORD *)(v5 + 48) )
        goto LABEL_14;
      if ( (*(_QWORD *)(Context + 968) & 1) == 0
        || (*(_QWORD *)(Context + 968) & 2) != 0
        || (*(_QWORD *)(Context + 968) & 4) != 0
        || (*(_QWORD *)(Context + 968) & 8) != 0
        || (*(_QWORD *)(Context + 968) & 0x10) != 0
        || (v6 = *(_DWORD **)(Context + 1288)) != 0LL && *v6 )
      {
        ++*(_DWORD *)(*(_QWORD *)(Context + 1656) + 4LL);
      }
      else
      {
        v7 = _interlockedbittestandset((volatile signed __int32 *)(*(_QWORD *)(Context + 1656) + 28LL), 1u);
        v8 = *(_DWORD **)(Context + 1656);
        if ( v7 )
        {
          v8[7] |= 8u;
LABEL_14:
          v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(Context + 552);
LABEL_15:
          ExReleaseRundownProtectionCacheAware(v9);
          return;
        }
        ++*v8;
        *(_QWORD *)(*(_QWORD *)(Context + 1656) + 32LL) = MEMORY[0xFFFFF78000000014];
        if ( (int)NvmeControllerIdentifyChangedNamespaces(
                    Context,
                    *(_QWORD *)(*(_QWORD *)(Context + 1656) + 48LL),
                    &v10) >= 0 )
        {
          if ( v10 )
          {
            ++*(_DWORD *)(*(_QWORD *)(Context + 1656) + 12LL);
            IoInvalidateDeviceRelations(*(PDEVICE_OBJECT *)(*(_QWORD *)(Context + 128) + 32LL), BusRelations);
          }
        }
        else
        {
          *(_DWORD *)(*(_QWORD *)(Context + 1656) + 28LL) |= 0x20u;
        }
        _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(Context + 1656) + 28LL), 1u);
      }
      _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)(Context + 1656) + 28LL), 0);
      _interlockedbittestandreset((volatile signed __int32 *)(Context + 1072), 2u);
      *(_DWORD *)(*(_QWORD *)(Context + 1656) + 28LL) &= ~0x100u;
      if ( _interlockedbittestandreset((volatile signed __int32 *)(Context + 1072), 1u)
        && !_interlockedbittestandset((volatile signed __int32 *)(Context + 1072), 2u)
        && (int)NvmeControllerGetChangedNamespaceListLog((union _SLIST_HEADER *)Context, Context, a3) < 0 )
      {
        ++*(_DWORD *)(*(_QWORD *)(Context + 1656) + 8LL);
        _interlockedbittestandreset((volatile signed __int32 *)(Context + 1072), 2u);
      }
      v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(Context + 552);
      goto LABEL_15;
    }
  }
}
