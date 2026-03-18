/*
 * XREFs of NtDCompositionGetBatchId @ 0x1400EBA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlWriteULongToUser @ 0x1402D2364 (RtlWriteULongToUser.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // esi
  __int64 v5; // r12
  __int64 v6; // r15
  int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // rdi
  _DWORD Buffer[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+60h] [rbp+8h]

  v17 = a1;
  v4 = 0;
  v5 = 0LL;
  if ( a3 )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
      v9 = CurrentProcessWin32Process[32];
    if ( v9 )
    {
      v11 = *(struct _ERESOURCE **)(v9 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      v8 = 0LL;
      Buffer[0] = v17;
      Buffer[1] = 0;
      v16 = 0LL;
      v12 = RtlLookupElementGenericTable(*(PRTL_GENERIC_TABLE *)v9, Buffer);
      if ( v12 )
        v8 = v12[1];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      else
        v7 = -1073741790;
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v8 )
    {
      v13 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v6 = v8;
    }
    if ( v7 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
      {
        v5 = v6;
      }
      else
      {
        v7 = -1073741811;
        (**(void (__fastcall ***)(__int64))v6)(v6);
      }
      if ( v7 >= 0 )
      {
        if ( a2 == 2 )
        {
          v4 = *(_DWORD *)(v5 + 420);
        }
        else if ( a2 )
        {
          if ( a2 == 1 )
            v4 = *(_DWORD *)(v5 + 416);
        }
        else
        {
          v4 = *(_DWORD *)(v5 + 412);
        }
        (**(void (__fastcall ***)(__int64))v5)(v5);
        RtlWriteULongToUser(a3, v4);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
