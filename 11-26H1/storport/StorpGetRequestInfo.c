/*
 * XREFs of StorpGetRequestInfo @ 0x140032990
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorpGetRequestInfo(__int64 a1, __int64 a2, __int16 *a3)
{
  char v3; // si
  _UNICODE_STRING *p_FileName; // rbp
  __int64 v6; // rax
  IRP *MasterIrp; // rdi
  IO_PRIORITY_HINT IoPriorityHint; // eax
  int v9; // ecx
  _FILE_OBJECT *OriginalFileObject; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Options; // edx
  unsigned int Length; // eax
  KIRQL CurrentIrql; // al
  __int16 v15; // ax
  __int64 v17; // rdi

  v3 = 0;
  p_FileName = 0LL;
  if ( !a2 || !a3 )
    return 3238002694LL;
  if ( (unsigned __int16)(*a3 - 1) > 1u )
    return 3238002699LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
  {
    v6 = *(_QWORD *)(a2 + 48);
    if ( !v6 || *(_DWORD *)v6 != 523124044 )
      goto LABEL_45;
    MasterIrp = *(IRP **)(v6 + 768);
    if ( !MasterIrp )
    {
      MasterIrp = *(IRP **)(v6 + 176);
      goto LABEL_9;
    }
LABEL_10:
    if ( (MasterIrp->Flags & 8) != 0 )
    {
      MasterIrp = MasterIrp->AssociatedIrp.MasterIrp;
      if ( !MasterIrp )
        goto LABEL_45;
    }
    IoPriorityHint = IoGetIoPriorityHint(MasterIrp);
    *((_DWORD *)a3 + 2) = 0;
    v9 = 0;
    *((_DWORD *)a3 + 1) = IoPriorityHint;
    if ( (MasterIrp->Flags & 1) != 0 )
    {
      v9 = 1;
      *((_DWORD *)a3 + 2) = 1;
    }
    if ( (MasterIrp->Flags & 0x42) != 0 )
    {
      v9 |= 2u;
      *((_DWORD *)a3 + 2) = v9;
    }
    OriginalFileObject = MasterIrp->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (OriginalFileObject->Flags & 0x20) != 0 )
      {
        v9 |= 4u;
        *((_DWORD *)a3 + 2) = v9;
      }
      if ( (OriginalFileObject->Flags & 0x18000) != 0 )
      {
        v9 |= 8u;
        *((_DWORD *)a3 + 2) = v9;
      }
      if ( (OriginalFileObject->Flags & 0x10) != 0 )
        *((_DWORD *)a3 + 2) = v9 | 0x10;
      p_FileName = &OriginalFileObject->FileName;
    }
    else
    {
      *((_DWORD *)a3 + 2) = v9 | 0x40;
    }
    CurrentStackLocation = MasterIrp->Tail.Overlay.CurrentStackLocation;
    if ( !CurrentStackLocation )
    {
      *(_QWORD *)(a3 + 6) = 0LL;
      *((_BYTE *)a3 + 20) = 0;
LABEL_33:
      if ( *a3 == 2 )
      {
        CurrentIrql = KeGetCurrentIrql();
        *((_QWORD *)a3 + 3) = p_FileName;
        if ( CurrentIrql > 2u )
          *((_DWORD *)a3 + 8) = -1;
        else
          *((_DWORD *)a3 + 8) = IoGetRequestorProcessId(MasterIrp);
      }
      goto LABEL_36;
    }
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
      *((_DWORD *)a3 + 3) = Options;
      Length = CurrentStackLocation->Parameters.Read.Length;
    }
    else
    {
      if ( CurrentStackLocation->MajorFunction == 4 )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
        *((_DWORD *)a3 + 3) = Options;
        Length = CurrentStackLocation->Parameters.Read.Length;
        *((_BYTE *)a3 + 20) = 1;
        goto LABEL_29;
      }
      *((_DWORD *)a3 + 3) = 0;
      Length = 0;
      Options = 0;
    }
    *((_BYTE *)a3 + 20) = 0;
LABEL_29:
    *((_DWORD *)a3 + 4) = Length;
    if ( (Options & 0xFFFF0000) == 0x56530000 )
    {
      *((_DWORD *)a3 + 2) |= 0x80u;
    }
    else if ( CurrentStackLocation->MajorFunction == 4 && Options )
    {
      *((_DWORD *)a3 + 2) |= 0x100u;
    }
    goto LABEL_33;
  }
  v17 = *(_QWORD *)(a2 + 96);
  if ( v17 )
  {
    if ( *(_DWORD *)v17 == 523124044 )
    {
      MasterIrp = *(IRP **)(v17 + 768);
      if ( MasterIrp )
        goto LABEL_10;
    }
  }
  MasterIrp = *(IRP **)(a2 + 80);
LABEL_9:
  if ( MasterIrp )
    goto LABEL_10;
LABEL_45:
  v3 = 1;
LABEL_36:
  v15 = *a3;
  if ( *a3 == 2 || v15 == 1 )
    a3[1] = 40;
  if ( v3 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    *((_BYTE *)a3 + 20) = 0;
    *((_DWORD *)a3 + 4) = 0;
    *((_DWORD *)a3 + 1) = 2;
    if ( v15 == 2 )
    {
      *((_QWORD *)a3 + 3) = 0LL;
      *((_DWORD *)a3 + 8) = 0;
    }
  }
  return 0LL;
}
