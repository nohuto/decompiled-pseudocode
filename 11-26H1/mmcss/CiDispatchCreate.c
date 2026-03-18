/*
 * XREFs of CiDispatchCreate @ 0x14000F670
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Z @ 0x1400046B8 (WPP_SF_Z.c)
 *     _guard_dispatch_icall @ 0x1400058C0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CiDispatchCreate(__int64 a1, IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v5; // rdi
  PFILE_OBJECT FileObject; // rbx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  while ( (unsigned int)v5 < 3 )
  {
    if ( !RtlCompareUnicodeString(
            &FileObject->FileName,
            (PCUNICODE_STRING)((char *)&CiObjectCreationTable + 24 * v5),
            0) )
      return (*((__int64 (__fastcall **)(IRP *, struct _IO_STACK_LOCATION *))&CiObjectCreationTable + 3 * v5 + 2))(
               a2,
               CurrentStackLocation);
    v5 = (unsigned int)(v5 + 1);
  }
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    WPP_SF_Z((__int64)WPP_GLOBAL_Control->AttachedDevice, (__int64)a2, a3, &FileObject->FileName.Length);
  a2->IoStatus.Status = -1073741275;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 3221226021LL;
}
