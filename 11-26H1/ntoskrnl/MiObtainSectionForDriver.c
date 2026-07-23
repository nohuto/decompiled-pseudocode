/*
 * XREFs of MiObtainSectionForDriver @ 0x140AEE86C
 * Callers:
 *     MmLoadSystemImageEx @ 0x140A39A74 (MmLoadSystemImageEx.c)
 * Callees:
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiSectionControlArea @ 0x14038C760 (MiSectionControlArea.c)
 *     MiUpdateDriverLoadInProgress @ 0x1404294E0 (MiUpdateDriverLoadInProgress.c)
 *     MmReleaseLoadLock @ 0x14049E200 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1404A5040 (MmAcquireLoadLock.c)
 *     MiGetBaseLoaderPortion @ 0x1404EE710 (MiGetBaseLoaderPortion.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     MiCreateSectionForDriver @ 0x140AEEB60 (MiCreateSectionForDriver.c)
 *     MiAllocateTempLoaderEntry @ 0x140AEEE74 (MiAllocateTempLoaderEntry.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiObtainSectionForDriver(
        const UNICODE_STRING *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5)
{
  __int64 v6; // rbx
  int SectionForDriver; // r15d
  __int64 TempLoaderEntry; // rdi
  unsigned __int64 v9; // rsi
  unsigned int i; // ebp
  __int64 BaseLoaderPortion; // rbx
  __int64 v12; // rcx
  PVOID *v13; // r8
  PVOID *v14; // r9
  __int64 v15; // rcx
  PVOID v16; // rbp
  __int64 v17; // rax
  UNICODE_STRING v18; // xmm0
  struct _LIST_ENTRY *Blink; // r14
  struct _LIST_ENTRY **p_Blink; // r12
  __int64 Flink; // rcx
  PVOID Object[9]; // [rsp+20h] [rbp-48h] BYREF
  PCUNICODE_STRING String1; // [rsp+70h] [rbp+8h]

  String1 = a1;
  Object[0] = 0LL;
  v6 = 0LL;
  SectionForDriver = 0;
  TempLoaderEntry = 0LL;
  v9 = 0LL;
  *a5 = 0LL;
  while ( 2 )
  {
    for ( i = 0; i < 2; ++i )
    {
      Blink = stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
      v6 = 0LL;
      p_Blink = (struct _LIST_ENTRY **)&PsLoadedModuleList;
      if ( i )
        p_Blink = &stru_140E2D2D0.SuspendEvent.Header.WaitListHead.Blink;
      else
        Blink = (struct _LIST_ENTRY *)PsLoadedModuleList;
      if ( Blink != (struct _LIST_ENTRY *)p_Blink )
      {
        while ( 1 )
        {
          v6 = (__int64)Blink;
          if ( RtlEqualUnicodeString(a1, (PCUNICODE_STRING)&Blink[4].Blink, 1u) )
            break;
          if ( (a4 & 0x40000000) == 0
            || !v9
            || (Flink = (__int64)Blink[7].Flink) == 0
            || v9 != MiSectionControlArea(Flink) )
          {
            Blink = Blink->Flink;
            a1 = String1;
            if ( Blink != (struct _LIST_ENTRY *)p_Blink )
              continue;
          }
          if ( Blink == (struct _LIST_ENTRY *)p_Blink )
          {
            a1 = String1;
            goto LABEL_27;
          }
          break;
        }
        if ( (*(_DWORD *)(MiGetBaseLoaderPortion(v6) + 184) & 0x80u) != 0 && (a4 & 0x40000000) == 0 )
        {
          SectionForDriver = -1073740608;
          v6 = 0LL;
        }
        else if ( (a4 & 8) != 0 && *(_QWORD *)(v6 + 136) != 1LL )
        {
          ++*(_WORD *)(v6 + 108);
        }
LABEL_38:
        if ( TempLoaderEntry )
        {
          ObDereferenceObjectDeferDeleteWithTag(*(PVOID *)(TempLoaderEntry + 112), 0x63536D4Du);
          ExFreePoolWithTag((PVOID)TempLoaderEntry, 0);
        }
LABEL_36:
        *a5 = v6;
        return (unsigned int)SectionForDriver;
      }
LABEL_27:
      ;
    }
    if ( i != 2 )
      goto LABEL_38;
    if ( TempLoaderEntry )
    {
      BaseLoaderPortion = MiGetBaseLoaderPortion(TempLoaderEntry);
      MiUpdateDriverLoadInProgress(v12, 0LL, 0, 0);
      if ( *(_QWORD *)((*(_QWORD *)(v9 + 96) & 0xFFFFFFFFFFFFFFF8uLL) + 32)
        && (*(_DWORD *)(v9 + 56) & 0x8000) != 0
        && (*(_DWORD *)(v9 + 56) & 0x20) != 0
        && *(_QWORD *)(*(_QWORD *)v9 + 32LL) )
      {
        v13 = (PVOID *)PsLoadedModuleList;
        v14 = &PsLoadedModuleList;
        while ( v13 != v14 )
        {
          v15 = (__int64)v13[14];
          if ( v15 && v9 == MiSectionControlArea(v15) )
          {
            if ( v13 )
              *(_DWORD *)(BaseLoaderPortion + 184) |= 4u;
            break;
          }
          v13 = (PVOID *)*v13;
        }
      }
      v6 = TempLoaderEntry;
      goto LABEL_36;
    }
    MmReleaseLoadLock(0LL);
    SectionForDriver = MiCreateSectionForDriver(a2, a3, a4, Object);
    if ( SectionForDriver < 0 )
    {
LABEL_42:
      MmAcquireLoadLock();
      return (unsigned int)SectionForDriver;
    }
    v16 = Object[0];
    v9 = MiSectionControlArea((__int64)Object[0]);
    v17 = *(_QWORD *)(*(_QWORD *)v9 + 56LL);
    if ( *(__int16 *)(v17 + 46) < 0 && *(_DWORD *)(v17 + 32) == 1 )
    {
      ObDereferenceObjectDeferDeleteWithTag(v16, 0x63536D4Du);
      SectionForDriver = -1073741800;
      goto LABEL_42;
    }
    TempLoaderEntry = MiAllocateTempLoaderEntry();
    if ( TempLoaderEntry )
    {
      v18 = *String1;
      *(_QWORD *)(TempLoaderEntry + 112) = v16;
      *(UNICODE_STRING *)(TempLoaderEntry + 72) = v18;
      MmAcquireLoadLock();
      a1 = String1;
      continue;
    }
    break;
  }
  ObDereferenceObjectDeferDeleteWithTag(v16, 0x63536D4Du);
  MmAcquireLoadLock();
  return 3221225626LL;
}
