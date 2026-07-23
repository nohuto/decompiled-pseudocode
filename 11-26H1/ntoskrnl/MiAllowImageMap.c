/*
 * XREFs of MiAllowImageMap @ 0x140B2222C
 * Callers:
 *     MiInitializeImageMapParameters @ 0x14099E4F4 (MiInitializeImageMapParameters.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140263F30 (MiDereferenceControlAreaFile.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     SeGetTrustLabelAce @ 0x1403AE560 (SeGetTrustLabelAce.c)
 *     MiReferenceControlAreaFile @ 0x1404419A0 (MiReferenceControlAreaFile.c)
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     PsBlockNonCetBinaries @ 0x1407F5DE8 (PsBlockNonCetBinaries.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x140831238 (EtwTimLogProhibitLowILImageMap.c)
 *     ObpGetObjectSecurity @ 0x1408F5810 (ObpGetObjectSecurity.c)
 *     ObReleaseObjectSecurityEx @ 0x1409184C0 (ObReleaseObjectSecurityEx.c)
 *     MiReferenceFileObjectForMap @ 0x140A73EF0 (MiReferenceFileObjectForMap.c)
 *     SeQueryMandatoryLabel @ 0x140AB936C (SeQueryMandatoryLabel.c)
 *     EtwpTimLogMitigationForProcess @ 0x140B1E7FC (EtwpTimLogMitigationForProcess.c)
 */

__int64 __fastcall MiAllowImageMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  bool v8; // al
  int v9; // esi
  _DWORD *ControlAreaLoadConfig; // rax
  int ObjectSecurity; // ebx
  int v12; // ebp
  bool v13; // al
  unsigned __int8 v15; // si
  void *v16; // rax
  void *v17; // rbx
  const EVENT_DESCRIPTOR *v18; // r8
  ULONG_PTR v19; // rbx
  int v20; // esi
  ULONG_PTR v21; // rsi
  __int64 v22; // r14
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  char v24; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_DWORD *)(a1 + 1872);
  v23 = 0LL;
  v8 = (v4 & 0x100000) != 0;
  v9 = v4 & 0x80000;
  if ( (v4 & 0x80000) != 0 )
    v8 = 1;
  if ( v8 && (*(_BYTE *)(a2 + 40) & 3) != 0 )
  {
    v16 = MiReferenceFileObjectForMap(a2);
    v17 = v16;
    if ( (*(_DWORD *)(*((_QWORD *)v16 + 1) + 52LL) & 0x80000) == 0 )
    {
      v18 = (const EVENT_DESCRIPTOR *)"\a";
      if ( v9 )
        v18 = (const EVENT_DESCRIPTOR *)MITIGATION_ENFORCE_PROHIBIT_REMOTE_IMAGE_MAP;
      EtwpTimLogMitigationForProcess(1, (v9 != 0) + 1, v18, a1, 1);
      if ( v9 )
      {
        ObfDereferenceObjectWithTag(v17, 0x63536D4Du);
        return 3221225506LL;
      }
    }
    ObfDereferenceObjectWithTag(v17, 0x63536D4Du);
  }
  if ( !*(_BYTE *)(a4 + 50) )
    goto LABEL_7;
  ControlAreaLoadConfig = (_DWORD *)MiGetControlAreaLoadConfig(a3);
  if ( (v4 & 4) != 0 && (!ControlAreaLoadConfig || (*ControlAreaLoadConfig & 1) == 0) )
    return 3221227014LL;
  if ( (*(_DWORD *)(a1 + 1876) & 0x200000) == 0 )
    goto LABEL_7;
  v15 = 0;
  if ( ControlAreaLoadConfig )
    v15 = (*(_BYTE *)ControlAreaLoadConfig & 0x40) != 0;
  v19 = MiReferenceControlAreaFile(a3);
  v20 = PsBlockNonCetBinaries(a1, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)a3 + 56LL) + 76LL) & 1, v15, v19 + 88);
  MiDereferenceControlAreaFile(a3, v19);
  if ( v20 >= 0 )
  {
LABEL_7:
    ObjectSecurity = 0;
    v12 = v4 & 0x200000;
    v13 = (v4 & 0x400000) != 0;
    if ( (v4 & 0x200000) != 0 )
      v13 = 1;
    if ( !v13 )
      return (unsigned int)ObjectSecurity;
    v24 = 0;
    v21 = MiReferenceControlAreaFile(a3);
    ObjectSecurity = ObpGetObjectSecurity(v21, (PVOID *)&v23, &v24);
    if ( ObjectSecurity < 0 )
    {
      ObjectSecurity = -1073741790;
    }
    else
    {
      v22 = v23;
      if ( (unsigned int)SeQueryMandatoryLabel(v23) <= 0x1000 && !SeGetTrustLabelAce(v22) )
        ObjectSecurity = -1073741790;
      ObReleaseObjectSecurityEx(v22, v24, v21);
      if ( ObjectSecurity != -1073741790 )
        goto LABEL_36;
    }
    EtwTimLogProhibitLowILImageMap((v12 != 0) + 1, a1, (unsigned __int16 *)(v21 + 88));
    if ( !v12 )
      ObjectSecurity = 0;
LABEL_36:
    MiDereferenceControlAreaFile(a3, v21);
    return (unsigned int)ObjectSecurity;
  }
  return (unsigned int)v20;
}
