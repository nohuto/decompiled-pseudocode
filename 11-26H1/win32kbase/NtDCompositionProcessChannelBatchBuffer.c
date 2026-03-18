/*
 * XREFs of NtDCompositionProcessChannelBatchBuffer @ 0x1400AA4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1400AA7E0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtDCompositionProcessChannelBatchBuffer(__int64 a1, unsigned int a2, void *a3, void *a4)
{
  int v4; // edi
  bool v5; // si
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbx
  _QWORD *v13; // rax
  signed int v14; // edi
  struct _ERESOURCE *v15; // rbx
  unsigned int v16; // eax
  int v17; // ebx
  bool v19[4]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-54h] BYREF
  unsigned int Src; // [rsp+38h] [rbp-50h] BYREF
  _DWORD Buffer[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-40h]

  v4 = a1;
  v5 = 0;
  v6 = 0LL;
  Src = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
  {
    v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v11 )
      v9 = *(_QWORD *)(v11 + 256);
  }
  if ( v9 )
  {
    v12 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v12, 1u);
    Buffer[0] = v4;
    Buffer[1] = 0;
    v23 = 0LL;
    v13 = RtlLookupElementGenericTable(*(PRTL_GENERIC_TABLE *)v9, Buffer);
    if ( v13 )
      v8 = v13[1];
    v14 = v8 == 0 ? 0xC0000022 : 0;
    if ( v8 )
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
  }
  else
  {
    v14 = -1073741823;
  }
  if ( v8 )
  {
    v15 = *(struct _ERESOURCE **)(v8 + 32);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v15, 1u);
    v7 = v8;
  }
  if ( v14 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7) == 1 )
    {
      v6 = v7;
    }
    else
    {
      v14 = -1073741811;
      (**(void (__fastcall ***)(__int64))v7)(v7);
    }
  }
  v20 = v14;
  if ( v14 >= 0 )
  {
    v16 = 0;
    v20 = 0;
    if ( a2 > *(_DWORD *)(v6 + 2752) )
    {
      v14 = -1073741811;
    }
    else
    {
      v14 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
              (DirectComposition::CApplicationChannel *)v6,
              *(void **)(v6 + 2760),
              a2,
              1,
              &v20);
      v16 = v20;
    }
    Src = v16;
    v17 = *(_DWORD *)(v6 + 572);
    v20 = v14;
    (**(void (__fastcall ***)(__int64))v6)(v6);
    v5 = v17 != 0;
  }
  RtlCopyToUser(a3, &Src, 4uLL);
  v19[0] = v5;
  RtlCopyToUser(a4, v19, 1uLL);
  return (unsigned int)v14;
}
