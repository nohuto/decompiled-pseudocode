/*
 * XREFs of HalBugCheckSystem @ 0x14057CC60
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpNMIHalt @ 0x140581284 (HalpNMIHalt.c)
 */

void __stdcall __noreturn HalBugCheckSystem(PWHEA_ERROR_SOURCE_DESCRIPTOR ErrorSource, PWHEA_ERROR_RECORD ErrorRecord)
{
  ULONG_PTR v2; // r9
  ULONG_PTR BugCheckParameter4; // rdi
  ULONG_PTR Type; // rbx
  _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR *SectionDescriptor; // r10
  _GUID *p_SectionType; // r8
  unsigned int i; // esi
  __int64 v9; // rax
  __int64 SectionOffset; // rcx
  __int64 v11; // rax
  unsigned __int64 v12; // r9

  v2 = 0LL;
  BugCheckParameter4 = 0LL;
  Type = 255LL;
  if ( ErrorRecord )
  {
    SectionDescriptor = ErrorRecord->SectionDescriptor;
    p_SectionType = &ErrorRecord->SectionDescriptor[0].SectionType;
    for ( i = 0; i < ErrorRecord->Header.SectionCount; ++i )
    {
      v9 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&NMI_SECTION_GUID.Data1;
      if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&NMI_SECTION_GUID.Data1 )
        v9 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)NMI_SECTION_GUID.Data4;
      if ( v9 )
      {
        v11 = *(_QWORD *)&p_SectionType->Data1 - *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1;
        if ( *(_QWORD *)&p_SectionType->Data1 == *(_QWORD *)&XPF_MCA_SECTION_GUID.Data1 )
          v11 = *(_QWORD *)p_SectionType->Data4 - *(_QWORD *)XPF_MCA_SECTION_GUID.Data4;
        if ( !v11 )
        {
          v12 = *(_QWORD *)&ErrorRecord->Header.PlatformId.Data4[SectionDescriptor->SectionOffset];
          BugCheckParameter4 = (unsigned int)v12;
          v2 = HIDWORD(v12);
          break;
        }
      }
      else
      {
        SectionOffset = SectionDescriptor->SectionOffset;
        if ( (*((_BYTE *)&ErrorRecord->Header.SignatureEnd + SectionOffset + 2) & 1) == 0 )
        {
          LOBYTE(SectionOffset) = *((_BYTE *)&ErrorRecord->Header.Signature + SectionOffset);
          HalpNMIHalt(SectionOffset);
        }
      }
      ++SectionDescriptor;
      p_SectionType = (_GUID *)((char *)p_SectionType + 72);
    }
  }
  if ( ErrorSource )
    Type = ErrorSource->Type;
  KeBugCheckEx(0x124u, Type, (ULONG_PTR)ErrorRecord, v2, BugCheckParameter4);
}
