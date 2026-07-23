/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x1407F539C
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1407F4BD0 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     HalPutDmaAdapter @ 0x140269180 (HalPutDmaAdapter.c)
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     PsAttachSiloToCurrentThread @ 0x140466600 (PsAttachSiloToCurrentThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x14046FB80 (PsDetachSiloFromCurrentThread.c)
 *     PsRemoveSiloContext @ 0x1407F42C0 (PsRemoveSiloContext.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x1407F513C (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x1407F51D8 (PspSiloGetSuiteMaskStringFromRegistry.c)
 *     ExGetSuiteMask @ 0x14083CBEC (ExGetSuiteMask.c)
 *     MmMapViewInSessionSpace @ 0x140988210 (MmMapViewInSessionSpace.c)
 *     MmCreateSection @ 0x140989F80 (MmCreateSection.c)
 *     RtlFreeAnsiString @ 0x140A169F0 (RtlFreeAnsiString.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x140B34528 (RtlpGetNtProductTypeFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(struct _LIST_ENTRY *a1)
{
  __int64 result; // rax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  struct _LIST_ENTRY *v6; // rax
  _DWORD *v7; // rcx
  struct _LIST_ENTRY *v8; // r15
  int NtProductTypeFromRegistry; // ebx
  UNICODE_STRING *Flink; // rax
  const UNICODE_STRING *v11; // rdx
  UNICODE_STRING *v12; // rcx
  wchar_t *Buffer; // rax
  __int64 v14; // rsi
  __int64 v15; // r14
  int MultiUserTsFromRegistry; // eax
  __int64 v17; // rdx
  wchar_t *v18; // rsi
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-10h] BYREF
  PVOID Section; // [rsp+88h] [rbp+38h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp+40h] BYREF
  ULONG_PTR ViewSize; // [rsp+98h] [rbp+48h] BYREF

  MappedBase = 0LL;
  Section = 0LL;
  ViewSize = 624LL;
  result = MmCreateSection((unsigned int)&Section, 983071, 0, (unsigned int)&ViewSize, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSessionSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals((__int64)a1);
      ServerSiloGlobals[161] = MappedBase;
      ServerSiloGlobals[162] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      v7 = (_DWORD *)ServerSiloGlobals[161];
      v8 = v6;
      Section = 0LL;
      *v7 = -1;
      NtProductTypeFromRegistry = PsRemoveSiloContext((__int64)a1, (unsigned int)PsSystemRootSiloContextSlot, &Section);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        Flink = (UNICODE_STRING *)a1[94].Flink;
        v11 = (const UNICODE_STRING *)Section;
        v12 = Flink + 77;
        Buffer = Flink[80].Buffer;
        *v12 = 0LL;
        v12->MaximumLength = 520;
        v12->Buffer = Buffer + 15;
        RtlCopyUnicodeString(v12, v11);
        HalPutDmaAdapter((PADAPTER_OBJECT)Section);
        v14 = ServerSiloGlobals[161];
        LODWORD(Section) = 0;
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&Section);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v14 + 16) = (_DWORD)Section;
          v15 = ServerSiloGlobals[161];
          UnicodeString = 0LL;
          LOBYTE(Section) = 0;
          NtProductTypeFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            MultiUserTsFromRegistry = PspSiloGetMultiUserTsFromRegistry(&Section);
            v18 = UnicodeString.Buffer;
            NtProductTypeFromRegistry = MultiUserTsFromRegistry;
            if ( MultiUserTsFromRegistry >= 0 )
            {
              LOBYTE(v17) = (_BYTE)Section;
              *(_DWORD *)(v15 + 20) = ExGetSuiteMask(UnicodeString.Buffer, v17);
            }
            if ( v18 )
              RtlFreeAnsiString(&UnicodeString);
            if ( NtProductTypeFromRegistry >= 0 )
            {
              NtProductTypeFromRegistry = 0;
              *(_DWORD *)(ServerSiloGlobals[161] + 24LL) = -1;
            }
          }
        }
      }
      PsDetachSiloFromCurrentThread(v8);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      ObfDereferenceObject(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
